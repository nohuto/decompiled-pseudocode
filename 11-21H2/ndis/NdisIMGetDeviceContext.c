/*
 * XREFs of NdisIMGetDeviceContext @ 0x1C01491D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 */

NDIS_HANDLE __stdcall NdisIMGetDeviceContext(NDIS_HANDLE MiniportAdapterHandle)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x38u,
      &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
      MiniportAdapterHandle);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x39u,
        &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
        (char)MiniportAdapterHandle,
        *((_QWORD *)MiniportAdapterHandle + 247));
  }
  return (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 247);
}
