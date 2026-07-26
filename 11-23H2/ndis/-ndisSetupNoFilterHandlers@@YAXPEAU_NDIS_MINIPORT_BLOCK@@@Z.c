/*
 * XREFs of ?ndisSetupNoFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018D08
 * Callers:
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019AA0 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisSetupNoFilterHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  bool v2; // zf
  unsigned __int8 MajorNdisVersion; // dl
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rcx
  void (__stdcall *v5)(PVOID); // r8
  _NDIS_SEND_PATH_TYPE v6; // eax
  void (__fastcall *IndicateNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r9
  void *IndicateNetBufferListsContext; // rcx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x37u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      a1);
  v2 = (a1->Flags & 0x20000000) == 0;
  MajorNdisVersion = a1->MajorNdisVersion;
  SendNetBufferListsHandler = a1->NoFilter.SendNetBufferListsHandler;
  a1->NextSendPacketsHandler = a1->FinalSendPacketsHandler;
  a1->Next.CancelSendHandler = a1->NoFilter.CancelSendHandler;
  a1->Next.CancelSendContext = a1->NoFilter.CancelSendContext;
  a1->Next.SendNetBufferListsTracker = a1->NoFilter.SendNetBufferListsTracker;
  if ( v2 )
  {
    v5 = NdisQueryOffloadState;
    v6 = (MajorNdisVersion < 6u) + 1;
  }
  else
  {
    a1->NextSendNetBufferListsHandler = SendNetBufferListsHandler;
    v5 = (void (__stdcall *)(PVOID))NdisCancelSendPackets;
    v6 = (MajorNdisVersion < 6u) + 1;
    a1->SendPathType = v6;
  }
  a1->SavedSendPathType = v6;
  a1->SavedNextSendNetBufferListsHandler = SendNetBufferListsHandler;
  a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))v5;
  IndicateNetBufferListsHandler = a1->NoFilter.IndicateNetBufferListsHandler;
  IndicateNetBufferListsContext = a1->NoFilter.IndicateNetBufferListsContext;
  a1->Next.ReturnNetBufferListsHandler = a1->NoFilter.ReturnNetBufferListsHandler;
  a1->Next.ReturnNetBufferListsContext = a1->NoFilter.ReturnNetBufferListsContext;
  a1->Next.ReturnNetBufferListsTracker = a1->NoFilter.ReturnNetBufferListsTracker;
  a1->Next.ReturnNetBufferListsObject = a1->NoFilter.ReturnNetBufferListsObject;
  a1->Next.SendNetBufferListsCompleteHandler = a1->NoFilter.SendNetBufferListsCompleteHandler;
  a1->Next.SendNetBufferListsCompleteContext = a1->NoFilter.SendNetBufferListsCompleteContext;
  a1->Next.SendNetBufferListsCompleteTracker = a1->NoFilter.SendNetBufferListsCompleteTracker;
  a1->Next.SendNetBufferListsCompleteObject = a1->NoFilter.SendNetBufferListsCompleteObject;
  a1->Next.IndicateNetBufferListsTracker = a1->NoFilter.IndicateNetBufferListsTracker;
  a1->Next.IndicateNetBufferListsObject = a1->NoFilter.IndicateNetBufferListsObject;
  a1->Next.RequestHandle = a1;
  a1->Next.DirectRequestHandle = a1;
  a1->Next.IndicateNetBufferListsHandler = IndicateNetBufferListsHandler;
  a1->Next.IndicateNetBufferListsContext = IndicateNetBufferListsContext;
  a1->Next.SaveIndicateNetBufferListsHandler = IndicateNetBufferListsHandler;
  a1->Next.SaveIndicateNetBufferListsContext = IndicateNetBufferListsContext;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x38u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      a1);
}
