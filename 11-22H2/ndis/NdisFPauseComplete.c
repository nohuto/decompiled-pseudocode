/*
 * XREFs of NdisFPauseComplete @ 0x1C0067CE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisFPauseComplete(NDIS_HANDLE NdisFilterHandle)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Bu,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      NdisFilterHandle);
  KeSetEvent((PRKEVENT)(*((_QWORD *)NdisFilterHandle + 16) + 16LL), 0, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Cu,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      NdisFilterHandle);
}
