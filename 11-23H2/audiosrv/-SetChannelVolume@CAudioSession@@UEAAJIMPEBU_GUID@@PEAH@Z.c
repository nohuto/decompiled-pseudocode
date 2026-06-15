/*
 * XREFs of ?SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800E28C0
 * Callers:
 *     ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800E2A30 (-SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_Sdg @ 0x1800E3BF8 (WPP_SF_Sdg.c)
 */

__int64 __fastcall CAudioSession::SetChannelVolume(
        CAudioSession *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rax
  float v10; // xmm7_4
  int v11; // [rsp+20h] [rbp-48h]
  double v12; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v12 = a3;
    WPP_SF_Sdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      23,
      (unsigned int)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
      *((_QWORD *)this + 82),
      a2,
      SLOBYTE(v12));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  if ( (unsigned int)v6 < *((_DWORD *)this + 222) )
  {
    v9 = *((_QWORD *)this + 112);
    v10 = *(float *)(v9 + 4 * v6);
    *(float *)(v9 + 4 * v6) = a3;
    if ( this != (CAudioSession *)-736LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    LOBYTE(v11) = 0;
    (*(void (__fastcall **)(char *, __int64, const struct _GUID *, _QWORD, int, _QWORD))(*((_QWORD *)this + 1) + 152LL))(
      (char *)this + 8,
      1LL,
      a4,
      (unsigned int)v6,
      v11,
      0LL);
    if ( a5 )
      *a5 = v10 == a3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    if ( this != (CAudioSession *)-736LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    return 2147942487LL;
  }
}
