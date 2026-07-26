/*
 * XREFs of ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C006CFEC
 * Callers:
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x1C005CDB0 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1C006D390 (-ndisMReset@@YAHPEAX@Z.c)
 *     ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C8410 (-ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     NdisMSendComplete @ 0x1C00C8820 (NdisMSendComplete.c)
 *     NdisMSendResourcesAvailable @ 0x1C00C89B0 (NdisMSendResourcesAvailable.c)
 *     ?ndisMWanSend@@YAHPEAX00@Z @ 0x1C00C90B0 (-ndisMWanSend@@YAHPEAX00@Z.c)
 *     ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00CA4F0 (-ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00CA804 (-ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C00CD800 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisMQueueWorkItem(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _NDIS_WORK_ITEM_TYPE a2,
        _SINGLE_LIST_ENTRY *a3)
{
  __int64 v4; // rdi
  _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned int v7; // edi

  v4 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x2Bu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  Next = a1->SingleWorkItems[v4].Next;
  if ( Next )
  {
    a1->SingleWorkItems[v4] = (_SINGLE_LIST_ENTRY)Next->Next;
    LODWORD(Next[1].Next) = v4;
    Next[2].Next = a3;
    Next->Next = (_SINGLE_LIST_ENTRY *)a1->WorkQueue[v4];
    a1->WorkQueue[v4].Next = Next;
    v7 = 0;
  }
  else
  {
    v7 = 65539;
  }
  if ( (a1->Flags & 0x48000) == 0x8000 && !v7 )
    KeInsertQueueDpc(&a1->DeferredDpc, 0LL, 0LL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x2Cu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      v7);
  return v7;
}
