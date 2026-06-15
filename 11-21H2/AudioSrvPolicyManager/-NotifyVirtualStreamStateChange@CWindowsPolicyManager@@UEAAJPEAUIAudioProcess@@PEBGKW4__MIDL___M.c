/*
 * XREFs of ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x18000A990
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180001008 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000A580 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180013EB0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180026EB0 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowsPolicyManager::NotifyVirtualStreamStateChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v7; // r13
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r15d
  _DWORD *v15; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rdi
  unsigned int v18; // esi
  _DWORD *v19; // rcx
  __int64 v20; // r9
  int v21; // eax
  struct _RTL_CRITICAL_SECTION *v22; // rcx
  _DWORD *v24; // rax
  _DWORD *v25; // r14
  int v26; // eax
  unsigned int v27; // [rsp+40h] [rbp-30h] BYREF
  BOOL v28; // [rsp+44h] [rbp-2Ch]
  int v29[2]; // [rsp+48h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-20h] BYREF
  __int64 v31; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v7 = a4;
  v11 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  v14 = a7;
  if ( *v11 > 4u )
  {
    v27 = a6;
    v31 = (__int64)off_180049050[v7];
    v32 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v11,
      (int)&dword_180050B28,
      v12,
      v13,
      (void **)&v32,
      (void **)&v31,
      (__int64)&v27,
      (__int64)&a7);
  }
  CWindowsPolicyManager::Lock(a1 - 16, &lpCriticalSection);
  v28 = v14 == 1;
  v15 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v15;
  if ( !v15 )
  {
    v18 = -2147024882;
    goto LABEL_13;
  }
  v15[3] = 1;
  *(_QWORD *)v15 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioSessionInfo>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v17 = &VirtualAudioSessionInfo::`vftable';
  v19 = v17 + 6;
  *((_QWORD *)v17 + 3) = 0LL;
  *((_QWORD *)v17 + 2) = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v19 = v17 + 6;
  }
  v17[8] = a5 == 1;
  v17[9] = v7 == 3;
  v17[10] = v28;
  v20 = -1LL;
  do
    ++v20;
  while ( *(_WORD *)(a3 + 2 * v20) );
  v21 = _AllocStringWorker<CTCoAllocPolicy>(v19, v16, a3);
  v18 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\virtualaudioinfo.cpp",
      (const char *)(unsigned int)v21);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30D,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)v18);
    v22 = lpCriticalSection;
    if ( !lpCriticalSection )
      return v18;
LABEL_14:
    LeaveCriticalSection(v22);
    return v18;
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 16LL))(v17);
  *(_QWORD *)v29 = 0LL;
  v24 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v25 = v24;
  if ( !v24 )
  {
    v18 = -2147024882;
    goto LABEL_21;
  }
  v24[3] = 1;
  *(_QWORD *)v24 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioStreamInfo>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v25 = &VirtualAudioStreamInfo::`vftable';
  *((_QWORD *)v25 + 2) = v17;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
  v25[6] = a4;
  v25[7] = a5 != 0;
  v18 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, int *))v25)(v25, &GUID_ccc4b3e5_9aeb_4f1c_bcc8_622c2fd6c077, v29);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v25 + 16LL))(v25);
  if ( (v18 & 0x80000000) != 0 )
  {
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x311,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)v18);
    if ( *(_QWORD *)v29 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v29 + 16LL))(*(_QWORD *)v29);
    if ( v17 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 16LL))(v17);
    v22 = lpCriticalSection;
    if ( !lpCriticalSection )
      return v18;
    goto LABEL_14;
  }
  v26 = CPlaybackManager::OnStreamStateChanged(*(_QWORD *)(a1 + 16), v17, a6, v14, *(_QWORD *)v29);
  v18 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x313,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v26);
    if ( *(_QWORD *)v29 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v29 + 16LL))(*(_QWORD *)v29);
    if ( v17 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 16LL))(v17);
    v22 = lpCriticalSection;
    if ( !lpCriticalSection )
      return v18;
    goto LABEL_14;
  }
  if ( *(_QWORD *)v29 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v29 + 16LL))(*(_QWORD *)v29);
  if ( v17 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
