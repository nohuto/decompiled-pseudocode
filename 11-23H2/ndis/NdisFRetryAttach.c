/*
 * XREFs of NdisFRetryAttach @ 0x1C012D4F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C011200C (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C011E8A0 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 */

void __fastcall NdisFRetryAttach(__int64 a1, ULONG_PTR BugCheckParameter3)
{
  char v2; // bl

  v2 = BugCheckParameter3;
  if ( (BugCheckParameter3 & 0xFFFFFFFE) != 0 )
    ndisBugCheckEx(0x2DuLL, 1uLL, (unsigned int)BugCheckParameter3, 0LL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x72u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      a1);
  _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
  NDIS_BIND_DRIVER_BASE::ForEachLink(
    *(NDIS_BIND_DRIVER_BASE **)(a1 + 336),
    (void (__fastcall *)(_LIST_ENTRY *))lambda_41733bf2d8819ac48e8a92fbe4ca966a_::_lambda_invoker_cdecl_);
  if ( (v2 & 1) == 0 )
    NDIS_BIND_DRIVER_BASE::ForEachLink(
      *(NDIS_BIND_DRIVER_BASE **)(a1 + 336),
      (void (__fastcall *)(_LIST_ENTRY *))lambda_f57a5082c6497a0052959e1defd60ec1_::_lambda_invoker_cdecl_);
  Ndis::BindEngine::EndBindOperation();
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x74u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      a1);
}
