/*
 * XREFs of ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00B1F90
 * Callers:
 *     ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x1C00062C0 (-ndisMWakeUpDpcX@@YAXPEAX000@Z.c)
 *     ndisInterruptDpc @ 0x1C0027A10 (ndisInterruptDpc.c)
 *     ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00295D0 (-ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisMiniportDpc @ 0x1C003CEB0 (ndisMiniportDpc.c)
 *     ndisMTimerObjectDpc @ 0x1C0040880 (ndisMTimerObjectDpc.c)
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x1C005CDB0 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009FFB0 (-ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00C46C0 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisMDpc @ 0x1C00C708C (ndisMDpc.c)
 *     ndisMDpcX @ 0x1C00C72A0 (ndisMDpcX.c)
 * Callees:
 *     memset @ 0x1C0038580 (memset.c)
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x1C00B2198 (McTemplateK0qqx_EtwWriteTransfer.c)
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
  WnodeEventItem[1] = qword_1C00F76A8;
  LOWORD(WnodeEventItem[0]) = 72;
  IoWMIWriteEvent(WnodeEventItem);
  if ( (byte_1C00F7645 & 2) != 0 )
    McTemplateK0qqx_EtwWriteTransfer(v8, v7, (_DWORD)a1 + 4008, (a1->NetLuid.Value >> 24) & 0xFFFFFF, a2, a3);
}
