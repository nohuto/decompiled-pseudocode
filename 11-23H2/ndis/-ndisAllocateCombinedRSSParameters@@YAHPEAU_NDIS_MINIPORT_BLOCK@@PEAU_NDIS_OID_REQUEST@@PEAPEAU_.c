/*
 * XREFs of ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C0086190
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0087D20 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C008816C (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0088594 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z @ 0x1C00863CC (-ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z.c)
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0086828 (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00888D8 (-ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisAllocateCombinedRSSParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _NDIS_VPORT_BLOCK **a3,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a4,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a5,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a6)
{
  unsigned int v10; // edi
  struct _NDIS_VPORT_BLOCK *VPortBlockForRequest; // rsi
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *Pool2; // rax
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rbx
  unsigned __int64 v14; // rcx
  __int64 RssParametersBuffer; // rbx
  __int64 v16; // rax
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx

  v10 = 0;
  VPortBlockForRequest = ndisGetVPortBlockForRequest(a1, a2);
  if ( ndisShouldCacheRSSv2ParametersInMiniport(a2) )
  {
    if ( !a1->RssParametersBuffer )
    {
      Pool2 = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)ExAllocatePool2(72LL, 2216LL, 1936868430);
      a1->RssParametersBuffer = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      memset(Pool2, 0, sizeof(_NDIS_MINIPORT_RSS_PARAMETERS_CACHE));
    }
    CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
    if ( !CombinedNdisRSSParameters )
    {
      CombinedNdisRSSParameters = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a1->RssParametersBuffer;
      ndisCreateRssV1Parameters(CombinedNdisRSSParameters, 1u, 1u);
      CombinedNdisRSSParameters->Flags = 16;
      if ( VPortBlockForRequest )
      {
        _BitScanForward64(&v14, VPortBlockForRequest->VPortParams.ProcessorAffinity.Mask);
        *(_WORD *)&CombinedNdisRSSParameters->DefaultProcessorNumber.Number = (unsigned __int8)v14;
        CombinedNdisRSSParameters->DefaultProcessorNumber.Group = VPortBlockForRequest->VPortParams.ProcessorAffinity.Group;
      }
      else
      {
        CombinedNdisRSSParameters->DefaultProcessorNumber = a1->RssBaseProcessor;
      }
      *(_NDIS_OBJECT_HEADER *)((char *)&CombinedNdisRSSParameters->Header
                             + CombinedNdisRSSParameters->IndirectionTableOffset) = (_NDIS_OBJECT_HEADER)CombinedNdisRSSParameters->DefaultProcessorNumber;
      a1->CombinedNdisRSSParameters = CombinedNdisRSSParameters;
    }
    if ( a4 )
      *a4 = CombinedNdisRSSParameters;
    if ( a5 )
      *a5 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a1->RssParametersBuffer;
    if ( a6 )
      *a6 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a1->RssParametersBuffer->Oid;
  }
  else
  {
    RssParametersBuffer = (__int64)VPortBlockForRequest->RssParametersBuffer;
    if ( !RssParametersBuffer )
    {
      v16 = ExAllocatePool2(72LL, 2216LL, 1936868430);
      VPortBlockForRequest->RssParametersBuffer = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)v16;
      RssParametersBuffer = v16;
      if ( !v16 )
        return (unsigned int)-1073741670;
    }
    v17 = VPortBlockForRequest->CombinedNdisRSSParameters;
    if ( !v17 )
    {
      ndisCreateRssV1Parameters((struct _NDIS_RECEIVE_SCALE_PARAMETERS *)RssParametersBuffer, 1u, 1u);
      *(_WORD *)(RssParametersBuffer + 4) = 16;
      _BitScanForward64(&v18, VPortBlockForRequest->VPortParams.ProcessorAffinity.Mask);
      *(_WORD *)(RssParametersBuffer + 42) = (unsigned __int8)v18;
      v19 = *(unsigned int *)(RssParametersBuffer + 16);
      *(_WORD *)(RssParametersBuffer + 40) = VPortBlockForRequest->VPortParams.ProcessorAffinity.Group;
      *(_DWORD *)(v19 + RssParametersBuffer) = *(_DWORD *)(RssParametersBuffer + 40);
      v17 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)RssParametersBuffer;
      VPortBlockForRequest->CombinedNdisRSSParameters = (_NDIS_RECEIVE_SCALE_PARAMETERS *)RssParametersBuffer;
    }
    if ( a4 )
      *a4 = v17;
    if ( a5 )
      *a5 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)VPortBlockForRequest->RssParametersBuffer;
    if ( a6 )
      *a6 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)VPortBlockForRequest->RssParametersBuffer->Oid;
  }
  if ( a3 )
    *a3 = VPortBlockForRequest;
  return v10;
}
