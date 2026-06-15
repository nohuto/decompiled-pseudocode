/*
 * XREFs of ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140059FAC
 * Callers:
 *     ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14006258C (-GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::GetPlaybackProtectionApo(CPipeInstance *this, struct IAudioProcessingObject **a2)
{
  int v2; // ebx
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct IAudioProcessingObject **); // rcx

  v2 = -2147467263;
  *a2 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IAudioProcessingObject **))*((_QWORD *)this + 23);
  if ( !v3 || (v2 = (**v3)(v3, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, a2), v2 < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x38u,
        (__int64)&WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids,
        v2);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::GetPlaybackProtectionApo", 0x10BCu, v2);
  }
  return (unsigned int)v2;
}
