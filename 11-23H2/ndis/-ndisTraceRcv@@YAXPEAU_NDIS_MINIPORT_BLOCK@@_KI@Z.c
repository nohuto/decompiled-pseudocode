/*
 * XREFs of ?ndisTraceRcv@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KI@Z @ 0x1C009ED2C
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0012730 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 */

void __fastcall ndisTraceRcv(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // eax
  _QWORD WnodeEventItem[10]; // [rsp+20h] [rbp-58h] BYREF

  memset(WnodeEventItem, 0, 0x48uLL);
  v6 = (a1->NetLuid.Value >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a3, v6);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 16;
  WnodeEventItem[7] = a2;
  LODWORD(WnodeEventItem[8]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C00F76A8;
  LOWORD(WnodeEventItem[0]) = 72;
  IoWMIWriteEvent(WnodeEventItem);
}
