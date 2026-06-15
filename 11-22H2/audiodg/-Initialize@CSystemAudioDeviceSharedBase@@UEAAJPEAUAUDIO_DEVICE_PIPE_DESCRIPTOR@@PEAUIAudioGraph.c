/*
 * XREFs of ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400214C0
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14005B5C0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140008FF4 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140021688 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400216E8 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x1400528CC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DF4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x1400A1008 (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::Initialize(
        CSystemAudioDeviceSharedBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        int a4)
{
  __int128 v4; // xmm0
  void *v9; // rdx
  unsigned int v10; // ecx
  unsigned __int8 v11; // r8
  HRESULT Instance; // edi
  __int64 v13; // rcx
  int v14; // eax
  void *v15; // rdx
  unsigned int v16; // ecx
  unsigned __int8 v17; // r8
  int v18; // edx
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // r9d
  LPVOID *ppv; // [rsp+20h] [rbp-78h]
  LPVOID *ppva; // [rsp+20h] [rbp-78h]
  unsigned __int64 v25; // [rsp+28h] [rbp-70h]
  unsigned __int64 v26; // [rsp+28h] [rbp-70h]
  __int128 v27; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 148);
  *(_OWORD *)((char *)this + 248) = v4;
  v27 = v4;
  EtwEventActivityIdControl(4LL, &v27);
  AEWMILOG_PERFORMANCE(v10, v9, v11, 9u, (unsigned __int64)ppv, v25);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  if ( !a3 )
  {
    Instance = -2147024809;
    goto LABEL_16;
  }
  Instance = CoCreateInstance(
               &GUID_add18bf7_ab60_4283_a580_d7544dd255d2,
               0LL,
               0x17u,
               &GUID_17cd0b2e_76a9_40ef_bcd9_cd8638d08071,
               (LPVOID *)this + 41);
  if ( Instance < 0 )
    goto LABEL_16;
  *((_DWORD *)this + 56) = a4;
  if ( *((struct IUnknown **)this + 40) != a3 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 40, a3);
  v13 = *((_QWORD *)this + 41);
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
  Instance = (*(__int64 (__fastcall **)(__int64, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, char *, _QWORD))(*(_QWORD *)v13 + 24LL))(
               v13,
               a2,
               (char *)this + 8,
               *((unsigned int *)this + 56));
  if ( Instance < 0 )
    goto LABEL_16;
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 88) = *((_DWORD *)a2 + 25);
  v14 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
  *((_DWORD *)this + 85) = v14;
  if ( !v14 )
  {
    Instance = -2147024882;
    goto LABEL_16;
  }
  Instance = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 1);
  if ( Instance < 0 )
  {
LABEL_16:
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 200LL))(this);
    goto LABEL_10;
  }
  if ( *((_DWORD *)this + 88) == 1 )
    CSystemAudioDeviceSharedBase::SetGraphState((unsigned __int64)this, 3);
LABEL_10:
  AEWMILOG_PERFORMANCE(v16, v15, v17, 0xAu, (unsigned __int64)ppva, v26);
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_f9f744bd440f3e38c4fd26e2f9fecd86_Traceguids);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::Initialize", 0xBFu, Instance);
  }
  PublishDeviceGraphWnfState(v19, v18, v20, v21);
  if ( this != (CSystemAudioDeviceSharedBase *)-184LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  EtwEventActivityIdControl(4LL, &v27);
  return (unsigned int)Instance;
}
