/*
 * XREFs of ?GetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAM@Z @ 0x14005B4D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052984 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DF4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::GetVolumeCoefficients(
        CSystemAudioDeviceOffloadGraph *this,
        unsigned int a2,
        float *a3)
{
  int v6; // ebx
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF

  v8 = *(_OWORD *)((char *)this - 120);
  EtwEventActivityIdControl(4LL, &v8);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 10) + 40LL))(
         *((_QWORD *)this + 10),
         a2,
         a3);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_73715f9ee22d38db1d35d5de395f8c05_Traceguids, v6);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::GetVolumeCoefficients", 0x9Fu, v6);
  }
  EtwEventActivityIdControl(4LL, &v8);
  return (unsigned int)v6;
}
