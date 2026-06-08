/*
 * XREFs of PepNotifyQueryPerfCapabilities @ 0x1C0039EB0
 * Callers:
 *     InitPepPerfStates @ 0x1C00395E4 (InitPepPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepNotifyQueryPerfCapabilities(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v7; // rcx
  int v11; // ebx
  int v13; // [rsp+28h] [rbp-60h]
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 1120);
  v15 = 0LL;
  v14 = 0LL;
  v11 = PoFxProcessorNotification(v7, 11LL, &v14);
  if ( v11 >= 0 )
  {
    *a2 = v14;
    *a3 = DWORD1(v14);
    *a4 = DWORD2(v14);
    *a5 = HIDWORD(v14);
    *a6 = v15;
    *a7 = HIDWORD(v15);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = v11;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x20u,
      (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids,
      v13);
  }
  return (unsigned int)v11;
}
