/*
 * XREFs of ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AC580
 * Callers:
 *     ndisMiniportDpc @ 0x1C000122C (ndisMiniportDpc.c)
 *     ndisInterruptDpc @ 0x1C00014D0 (ndisInterruptDpc.c)
 *     ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0001CD0 (-ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x1C0008440 (-ndisMWakeUpDpcX@@YAXPEAX000@Z.c)
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x1C0057B80 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0099FC0 (-ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisMTimerObjectDpc @ 0x1C00BE550 (ndisMTimerObjectDpc.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00BFAE0 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisMDpc @ 0x1C00C245C (ndisMDpc.c)
 *     ndisMDpcX @ 0x1C00C2670 (ndisMDpcX.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x1C00AC788 (McTemplateK0qqx_EtwWriteTransfer.c)
 */

void __fastcall ndisTraceDpcEnd(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // eax
  int v7; // edx
  int v8; // ecx
  _QWORD WnodeEventItem[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(WnodeEventItem, 0, 0x48uLL);
  v6 = (a1->NetLuid.Value >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a2, v6);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 17;
  WnodeEventItem[7] = a3;
  LODWORD(WnodeEventItem[8]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C00EE5E0;
  LOWORD(WnodeEventItem[0]) = 72;
  IoWMIWriteEvent(WnodeEventItem);
  if ( (byte_1C00EE585 & 2) != 0 )
    McTemplateK0qqx_EtwWriteTransfer(v8, v7, (_DWORD)a1 + 4008, (a1->NetLuid.Value >> 24) & 0xFFFFFF, a2, a3);
}
