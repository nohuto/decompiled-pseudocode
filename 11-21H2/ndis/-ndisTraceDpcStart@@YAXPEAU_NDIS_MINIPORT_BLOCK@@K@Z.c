/*
 * XREFs of ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AC668
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
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C00396A6 (McTemplateK0qq_EtwWriteTransfer.c)
 */

void __fastcall ndisTraceDpcStart(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-58h]
  _QWORD WnodeEventItem[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  v4 = (a1->NetLuid.Value >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a2, v4);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 21;
  LODWORD(WnodeEventItem[7]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C00EE5E0;
  LOWORD(WnodeEventItem[0]) = 64;
  IoWMIWriteEvent(WnodeEventItem);
  if ( (byte_1C00EE585 & 2) != 0 )
  {
    LODWORD(v6) = a2;
    McTemplateK0qq_EtwWriteTransfer(v5, &DpcStart, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, v6);
  }
}
