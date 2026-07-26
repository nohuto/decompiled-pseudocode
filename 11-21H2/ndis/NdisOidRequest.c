/*
 * XREFs of NdisOidRequest @ 0x1C0026730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dDq @ 0x1C00267D4 (WPP_RECORDER_SF_dDq.c)
 *     WPP_RECORDER_SF_Dqq @ 0x1C002687C (WPP_RECORDER_SF_Dqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisOidRequest(NDIS_HANDLE NdisBindingHandle, PNDIS_OID_REQUEST OidRequest)
{
  int v4; // edx
  NDIS_STATUS v5; // edi
  int v6; // r8d
  int v7; // r9d

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dqq(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)OidRequest);
  v5 = (*((__int64 (__fastcall **)(NDIS_HANDLE, PNDIS_OID_REQUEST))NdisBindingHandle + 24))(
         NdisBindingHandle,
         OidRequest);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dDq(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v6, v7);
  return v5;
}
