/*
 * XREFs of NdisFRestartComplete @ 0x1C0067D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 */

void __stdcall NdisFRestartComplete(NDIS_HANDLE NdisFilterHandle, NDIS_STATUS Status)
{
  __int64 v4; // [rsp+30h] [rbp-18h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Du,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)NdisFilterHandle,
      Status);
  *(_DWORD *)(*((_QWORD *)NdisFilterHandle + 16) + 8LL) = Status;
  KeSetEvent((PRKEVENT)(*((_QWORD *)NdisFilterHandle + 16) + 16LL), 0, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v4) = Status;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Eu,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)NdisFilterHandle,
      v4);
  }
}
