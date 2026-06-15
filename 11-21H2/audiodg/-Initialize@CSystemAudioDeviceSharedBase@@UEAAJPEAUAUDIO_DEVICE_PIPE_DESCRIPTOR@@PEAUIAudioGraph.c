/*
 * XREFs of ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140003B20
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140058650 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140003CE8 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140003D54 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000C240 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400105A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x1400273DC (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14005187C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x140096008 (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::Initialize(
        CSystemAudioDeviceSharedBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        unsigned int a4)
{
  __int128 v4; // xmm0
  void *v9; // rdx
  unsigned int v10; // ecx
  unsigned __int8 v11; // r8
  HRESULT Instance; // ebx
  __int64 v13; // rcx
  int v14; // eax
  void *v15; // rdx
  unsigned int v16; // ecx
  unsigned __int8 v17; // r8
  LPVOID *ppv; // [rsp+20h] [rbp-68h]
  LPVOID *ppva; // [rsp+20h] [rbp-68h]
  unsigned __int64 v21; // [rsp+28h] [rbp-60h]
  unsigned __int64 v22; // [rsp+28h] [rbp-60h]
  char *v23; // [rsp+30h] [rbp-58h] BYREF
  __int128 v24; // [rsp+38h] [rbp-50h]
  __int128 v25; // [rsp+48h] [rbp-40h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 152);
  *(_OWORD *)((char *)this + 248) = v4;
  v24 = v4;
  v25 = v4;
  EtwEventActivityIdControl(4LL, &v25);
  AEWMILOG_PERFORMANCE(v10, v9, v11, 9u, (unsigned __int64)ppv, v21);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v23 = (char *)this + 184;
  if ( !a3 )
  {
    Instance = -2147024809;
    goto LABEL_14;
  }
  Instance = CoCreateInstance(
               &GUID_add18bf7_ab60_4283_a580_d7544dd255d2,
               0LL,
               0x17u,
               &GUID_17cd0b2e_76a9_40ef_bcd9_cd8638d08071,
               (LPVOID *)this + 41);
  if ( Instance < 0 )
    goto LABEL_14;
  *((_DWORD *)this + 56) = a4;
  if ( *((struct IUnknown **)this + 40) != a3 )
  {
    ATL::AtlComPtrAssign((struct IUnknown **)this + 40, a3);
    a4 = *((_DWORD *)this + 56);
  }
  v13 = *((_QWORD *)this + 41);
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
  Instance = (*(__int64 (__fastcall **)(__int64, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, char *, _QWORD))(*(_QWORD *)v13 + 24LL))(
               v13,
               a2,
               (char *)this + 8,
               a4);
  if ( Instance < 0 )
    goto LABEL_14;
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 88) = *((_DWORD *)a2 + 25);
  v14 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
  *((_DWORD *)this + 85) = v14;
  if ( !v14 )
  {
    Instance = -2147024882;
    goto LABEL_14;
  }
  Instance = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 1);
  if ( Instance < 0 )
  {
LABEL_14:
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 200LL))(this);
    goto LABEL_10;
  }
  if ( *((_DWORD *)this + 88) == 1 )
    CSystemAudioDeviceSharedBase::SetGraphState(this, 3LL);
LABEL_10:
  AEWMILOG_PERFORMANCE(v16, v15, v17, 0xAu, (unsigned __int64)ppva, v22);
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_7f2b06cbe2743c9445e1f0d7b0a3a743_Traceguids,
        (unsigned int)Instance);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::Initialize", 0xBDu, Instance);
  }
  PublishDeviceGraphWnfState();
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v23);
  EtwEventActivityIdControl(4LL, &v25);
  return (unsigned int)Instance;
}
