/*
 * XREFs of ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800E2660
 * Callers:
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800E2820 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x180050D04 (-ValidateAudioLevel@@YA_NM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_dS @ 0x1800E3DA4 (WPP_SF_dS.c)
 */

__int64 __fastcall CAudioSession::SetAllVolumes(
        CAudioSession *this,
        unsigned int a2,
        float *a3,
        const struct _GUID *a4,
        int *a5)
{
  __int64 v6; // rdi
  int v9; // ebx
  float *v10; // rdx
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r14d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  float v18; // xmm1_4
  int v19; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, (_DWORD)a3, a2, *((_QWORD *)this + 82));
  }
  v9 = 0;
  if ( (_DWORD)v6 )
  {
    v10 = a3;
    while ( ValidateAudioLevel(*v10) )
    {
      v10 = (float *)(v11 + 4);
      if ( v12 + 1 >= (unsigned int)v6 )
        goto LABEL_9;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4AA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
LABEL_9:
  v13 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  if ( (_DWORD)v6 != *((_DWORD *)this + 222) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    if ( this != (CAudioSession *)-736LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    return 2147942487LL;
  }
  if ( (_DWORD)v6 )
  {
    v15 = 0LL;
    v16 = v6;
    do
    {
      v17 = *((_QWORD *)this + 112);
      v18 = a3[v15];
      if ( *(float *)(v15 * 4 + v17) != v18 )
      {
        *(float *)(v15 * 4 + v17) = v18;
        ++v13;
      }
      ++v15;
      --v16;
    }
    while ( v16 );
  }
  if ( this != (CAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  LOBYTE(v19) = 0;
  (*(void (__fastcall **)(char *, __int64, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 1) + 152LL))(
    (char *)this + 8,
    1LL,
    a4,
    0xFFFFFFFFLL,
    v19,
    0LL);
  if ( a5 )
  {
    LOBYTE(v9) = v13 == 0;
    *a5 = v9;
  }
  return 0LL;
}
