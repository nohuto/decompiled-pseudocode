/*
 * XREFs of ?GetMeterChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z @ 0x140058120
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::GetMeterChannelCount(
        CSystemAudioDeviceOffloadGraph *this,
        unsigned int *a2)
{
  int v4; // ebx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  v6 = *(_OWORD *)((char *)this - 136);
  EtwEventActivityIdControl(4LL, &v6);
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), a2);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        (__int64)&WPP_6a6aaf124706356e0ec6025c89b7f8a8_Traceguids,
        v4);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::GetMeterChannelCount", 0x1B6u, v4);
  }
  EtwEventActivityIdControl(4LL, &v6);
  return (unsigned int)v4;
}
