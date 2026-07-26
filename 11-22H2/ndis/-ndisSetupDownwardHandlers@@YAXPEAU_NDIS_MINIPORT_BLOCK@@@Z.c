/*
 * XREFs of ?ndisSetupDownwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019C98
 * Callers:
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019910 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisSetupDownwardHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_FILTER_BLOCK *LowestFilter; // rdi
  _NDIS_FILTER_BLOCK *HigherFilter; // rdx
  _NDIS_FILTER_BLOCK *LowerFilter; // rcx
  void (__fastcall *CancelSendNetBufferListsHandler)(void *, void *); // rax
  void *FilterModuleContext; // rax
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  _NDIS_OBJECT_HEADER *p_Header; // rax
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  _NDIS_OBJECT_HEADER *NextReturnNetBufferListsObject; // rax
  _QWORD *p_Type; // rax
  _NDIS_FILTER_BLOCK *HighestFilter; // rcx
  void (__fastcall *v13)(void *, void *); // rax
  void *NextCancelSendNetBufferListsContext; // rax
  void (__fastcall *v15)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  _NDIS_OBJECT_HEADER *NextSendNetBufferListsObject; // rax
  void (__fastcall *v17)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  _NDIS_OBJECT_HEADER *v18; // rax
  void *NextRequestHandle; // rax
  void (__stdcall *v20)(PVOID); // rax

  LowestFilter = a1->LowestFilter;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x39u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      a1);
  if ( a1->MajorNdisVersion < 6u )
  {
    a1->SynchronousReturnPacketContext = a1;
    a1->NextSendPacketsHandler = ndisMSendPacketsToNetBufferLists;
    a1->SynchronousReturnPacketHandler = ndisSynchReturnPacketsForTranslation;
  }
  HigherFilter = LowestFilter->HigherFilter;
  LowestFilter->NextCancelSendNetBufferListsHandler = a1->NoFilter.CancelSendHandler;
  LowestFilter->NextCancelSendNetBufferListsContext = a1->NoFilter.CancelSendContext;
  LowestFilter->NextSendNetBufferListsHandler = a1->NoFilter.SendNetBufferListsHandler;
  LowestFilter->NextSendNetBufferListsContext = a1->NoFilter.SendNetBufferListsContext;
  LowestFilter->NextSendNetBufferListsTracker = a1->NblTracker;
  LowestFilter->NextSendNetBufferListsObject = &a1->Header;
  LowestFilter->NextReturnNetBufferListsHandler = a1->NoFilter.ReturnNetBufferListsHandler;
  LowestFilter->NextReturnNetBufferListsContext = a1->NoFilter.ReturnNetBufferListsContext;
  LowestFilter->NextReturnNetBufferListsTracker = a1->NoFilter.ReturnNetBufferListsTracker;
  LowestFilter->NextReturnNetBufferListsObject = a1->NoFilter.ReturnNetBufferListsObject;
  LowestFilter->NextRequestHandle = a1->NoFilter.RequestHandle;
  LowestFilter->NextDirectRequestHandle = a1->NoFilter.DirectRequestHandle;
  while ( HigherFilter )
  {
    LowerFilter = HigherFilter->LowerFilter;
    CancelSendNetBufferListsHandler = LowerFilter->Characteristics.CancelSendNetBufferListsHandler;
    if ( CancelSendNetBufferListsHandler )
    {
      HigherFilter->NextCancelSendNetBufferListsHandler = CancelSendNetBufferListsHandler;
      FilterModuleContext = LowerFilter->FilterModuleContext;
    }
    else
    {
      HigherFilter->NextCancelSendNetBufferListsHandler = LowerFilter->NextCancelSendNetBufferListsHandler;
      FilterModuleContext = LowerFilter->NextCancelSendNetBufferListsContext;
    }
    HigherFilter->NextCancelSendNetBufferListsContext = FilterModuleContext;
    SendNetBufferListsHandler = LowerFilter->Characteristics.SendNetBufferListsHandler;
    if ( SendNetBufferListsHandler )
    {
      HigherFilter->NextSendNetBufferListsHandler = SendNetBufferListsHandler;
      HigherFilter->NextSendNetBufferListsContext = LowerFilter->FilterModuleContext;
      HigherFilter->NextSendNetBufferListsTracker = LowerFilter->NblTracker;
      p_Header = &LowerFilter->Header;
    }
    else
    {
      HigherFilter->NextSendNetBufferListsHandler = LowerFilter->NextSendNetBufferListsHandler;
      HigherFilter->NextSendNetBufferListsContext = LowerFilter->NextSendNetBufferListsContext;
      HigherFilter->NextSendNetBufferListsTracker = LowerFilter->NextSendNetBufferListsTracker;
      p_Header = LowerFilter->NextSendNetBufferListsObject;
    }
    HigherFilter->NextSendNetBufferListsObject = p_Header;
    ReturnNetBufferListsHandler = LowerFilter->Characteristics.ReturnNetBufferListsHandler;
    if ( ReturnNetBufferListsHandler )
    {
      HigherFilter->NextReturnNetBufferListsHandler = ReturnNetBufferListsHandler;
      HigherFilter->NextReturnNetBufferListsContext = LowerFilter->FilterModuleContext;
      HigherFilter->NextReturnNetBufferListsTracker = LowerFilter->NblTracker;
      NextReturnNetBufferListsObject = &LowerFilter->Header;
    }
    else
    {
      HigherFilter->NextReturnNetBufferListsHandler = LowerFilter->NextReturnNetBufferListsHandler;
      HigherFilter->NextReturnNetBufferListsContext = LowerFilter->NextReturnNetBufferListsContext;
      HigherFilter->NextReturnNetBufferListsTracker = LowerFilter->NextReturnNetBufferListsTracker;
      NextReturnNetBufferListsObject = LowerFilter->NextReturnNetBufferListsObject;
    }
    HigherFilter->NextReturnNetBufferListsObject = NextReturnNetBufferListsObject;
    p_Type = &LowerFilter->Header.Type;
    if ( !LowerFilter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler )
      p_Type = LowerFilter->NextRequestHandle;
    HigherFilter->NextRequestHandle = p_Type;
    if ( !LowerFilter->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
      LowerFilter = (_NDIS_FILTER_BLOCK *)LowerFilter->NextDirectRequestHandle;
    HigherFilter->NextDirectRequestHandle = LowerFilter;
    HigherFilter = HigherFilter->HigherFilter;
  }
  HighestFilter = a1->HighestFilter;
  v13 = HighestFilter->Characteristics.CancelSendNetBufferListsHandler;
  if ( v13 )
  {
    a1->Next.CancelSendHandler = v13;
    NextCancelSendNetBufferListsContext = HighestFilter->FilterModuleContext;
  }
  else
  {
    a1->Next.CancelSendHandler = HighestFilter->NextCancelSendNetBufferListsHandler;
    NextCancelSendNetBufferListsContext = HighestFilter->NextCancelSendNetBufferListsContext;
  }
  a1->Next.CancelSendContext = NextCancelSendNetBufferListsContext;
  v15 = HighestFilter->Characteristics.SendNetBufferListsHandler;
  if ( v15 )
  {
    a1->Next.SendNetBufferListsHandler = v15;
    a1->Next.SendNetBufferListsContext = HighestFilter->FilterModuleContext;
    a1->Next.SendNetBufferListsTracker = HighestFilter->NblTracker;
    NextSendNetBufferListsObject = &HighestFilter->Header;
  }
  else
  {
    a1->Next.SendNetBufferListsHandler = HighestFilter->NextSendNetBufferListsHandler;
    a1->Next.SendNetBufferListsContext = HighestFilter->NextSendNetBufferListsContext;
    a1->Next.SendNetBufferListsTracker = HighestFilter->NextSendNetBufferListsTracker;
    NextSendNetBufferListsObject = HighestFilter->NextSendNetBufferListsObject;
  }
  a1->Next.SendNetBufferListsObject = NextSendNetBufferListsObject;
  v17 = HighestFilter->Characteristics.ReturnNetBufferListsHandler;
  if ( v17 )
  {
    a1->Next.ReturnNetBufferListsHandler = v17;
    a1->Next.ReturnNetBufferListsContext = HighestFilter->FilterModuleContext;
    a1->Next.ReturnNetBufferListsTracker = HighestFilter->NblTracker;
    v18 = &HighestFilter->Header;
  }
  else
  {
    a1->Next.ReturnNetBufferListsHandler = HighestFilter->NextReturnNetBufferListsHandler;
    a1->Next.ReturnNetBufferListsContext = HighestFilter->NextReturnNetBufferListsContext;
    a1->Next.ReturnNetBufferListsTracker = HighestFilter->NextReturnNetBufferListsTracker;
    v18 = HighestFilter->NextReturnNetBufferListsObject;
  }
  a1->Next.ReturnNetBufferListsObject = v18;
  NextRequestHandle = HighestFilter;
  if ( !HighestFilter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler )
    NextRequestHandle = HighestFilter->NextRequestHandle;
  a1->Next.RequestHandle = NextRequestHandle;
  if ( !HighestFilter->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
    HighestFilter = (_NDIS_FILTER_BLOCK *)HighestFilter->NextDirectRequestHandle;
  a1->Next.DirectRequestHandle = HighestFilter;
  if ( a1->XState )
  {
    v20 = NdisQueryOffloadState;
  }
  else
  {
    a1->SendPathType = NdisFilterSendPath;
    v20 = (void (__stdcall *)(PVOID))NdisCancelSendPackets;
    a1->NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisSendNBLToFilter;
  }
  a1->SavedSendPathType = NdisFilterSendPath;
  a1->SavedNextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisSendNBLToFilter;
  a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))v20;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x3Au,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      a1);
}
