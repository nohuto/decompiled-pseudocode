/*
 * XREFs of ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180009760
 * Callers:
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180009550 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800E3720 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180009E80 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?SetSessionVolume@CAudioStream@@QEAAJMKQEAM_J_N@Z @ 0x180009EB8 (-SetSessionVolume@CAudioStream@@QEAAJMKQEAM_J_N@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x18000B860 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x180017510 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1800E4308 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::SetVolumeAllStreams(__int64 a1, int a2, char a3, float a4, unsigned int a5, float *a6)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  CAudioSession *v9; // rcx
  struct CAudioStream **v10; // rbx
  struct CAudioStream **v11; // r12
  bool v12; // r13
  char v13; // si
  __int64 v14; // rdi
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  int updated; // eax
  __int64 v18; // rdx
  bool v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+38h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  float v24; // [rsp+90h] [rbp+8h] BYREF
  char v25; // [rsp+A0h] [rbp+18h]

  v25 = a3;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 66LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, a1);
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *, LPCRITICAL_SECTION *))(*(_QWORD *)g_PolicyManager + 184LL))(
    g_PolicyManager,
    lpCriticalSection);
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v21 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  lpCriticalSection[1] = (LPCRITICAL_SECTION)(a1 + 64);
  v10 = *(struct CAudioStream ***)(a1 + 112);
  v11 = *(struct CAudioStream ***)(a1 + 120);
  if ( v10 != v11 )
  {
    v12 = a5 == 0;
    v13 = v25;
    while ( 1 )
    {
      CAudioSession::GetPolicyVolumeForStream(v9, *v10, &v24, &v20);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 67LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, a1, *v10);
      }
      if ( a2 == 3 )
      {
        v14 = *((_BYTE *)*v10 + 256) != 0 ? 0x3D0900 : 0;
      }
      else if ( a2 == 4 )
      {
        v14 = *((_BYTE *)*v10 + 256) != 0 ? 0x2710 : 0;
      }
      else
      {
        v14 = v20;
      }
      v15 = CAudioStream::SetPolicyVolume(*v10, v24, v14, v12);
      v16 = retaddr;
      if ( v15 < 0 )
      {
        v18 = 3822LL;
      }
      else
      {
        if ( !a5 )
          goto LABEL_12;
        *((_BYTE *)*v10 + 544) = v13;
        v15 = CAudioStream::SetSessionVolume(*v10, a4, a5, a6, v14, v19);
        v16 = retaddr;
        if ( v15 >= 0 )
          goto LABEL_12;
        v18 = 3830LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v16,
        (void *)v18,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v15);
LABEL_12:
      updated = CAudioStream::UpdateStreamPriority(*v10);
      v9 = retaddr;
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xEFC,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)updated);
      if ( ++v10 == v11 )
      {
        v8 = v21;
        break;
      }
    }
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
}
