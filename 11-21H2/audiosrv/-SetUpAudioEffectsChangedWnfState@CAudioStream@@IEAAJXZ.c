/*
 * XREFs of ?SetUpAudioEffectsChangedWnfState@CAudioStream@@IEAAJXZ @ 0x1800E5954
 * Callers:
 *     ?GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z @ 0x1800EE664 (-GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18000F3B4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800128C0 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800157C0 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BED90 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BFD00 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800D2B98 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800D31F8 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 *     ?QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@3@@Z @ 0x1800D38EC (-QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800D4278 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800E37B0 (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x1800E3AE0 (--1-$function@$$A6AXXZ@wistd@@QEAA@XZ.c)
 *     ?PublishAudioEffects@CAudioStream@@IEAAXXZ @ 0x1800E4D1C (-PublishAudioEffects@CAudioStream@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioStream::SetUpAudioEffectsChangedWnfState(CAudioStream *this)
{
  const char *v2; // r9
  unsigned int LastError; // eax
  int WnfStateName; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details *v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  HANDLE Event; // r14
  wil::details *v11; // rdi
  DWORD v12; // ebx
  void *v13; // rdx
  __int64 v14; // rax
  int LastErrorFailHr; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // edi
  unsigned int v19; // ebx
  __int64 *v20; // rax
  __int64 v21; // rax
  wil::details **v22; // rax
  struct wil::details::wnf_subscription_state_base *v23; // rdx
  wil::details **v24; // rbx
  void *v25; // rdx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-69h] BYREF
  wil::details *v28; // [rsp+48h] [rbp-61h] BYREF
  char v29[16]; // [rsp+50h] [rbp-59h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+60h] [rbp-49h] BYREF
  _QWORD v31[15]; // [rsp+68h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:P(A;;GA;;;WD)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-115981"
           "6984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x5FD,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                  v2);
LABEL_5:
    v5 = LastError;
    goto LABEL_22;
  }
  WnfStateName = NtCreateWnfStateName((char *)this + 332, 3LL, 0LL);
  if ( WnfStateName < 0 )
  {
    LastError = wil::details::in1diag3::Return_NtStatus(
                  retaddr,
                  (void *)0x606,
                  (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                  (const char *)(unsigned int)WnfStateName);
    goto LABEL_5;
  }
  *((_BYTE *)this + 340) = 1;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v11 = (wil::details *)*((_QWORD *)this + 43);
    if ( v11 )
    {
      v12 = GetLastError();
      wil::details::CloseHandle(v11, v13);
      SetLastError(v12);
    }
    *((_QWORD *)this + 43) = Event;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v7, v6, v8, v9);
    v5 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      v16 = 1547LL;
      goto LABEL_18;
    }
  }
  v14 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
  v30 = off_180177280;
  v31[0] = this;
  v31[6] = &v30;
  LastErrorFailHr = CSerialWorkQueue::QueueRecurringWaitItem(
                      v14,
                      *((_QWORD *)this + 43),
                      (__int64)&v30,
                      (__int64)this + 352);
  v5 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v16 = 1550LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)LastErrorFailHr);
    goto LABEL_22;
  }
  v17 = *((_QWORD *)this + 45);
  *((_QWORD *)this + 45) = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = *((unsigned __int8 *)this + 43);
  v19 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
  v20 = (__int64 *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
  LastErrorFailHr = AudioEffectsWatcherFactory::GetWatcher(v20, v19, v18, 1, (struct IUnknown **)this + 45);
  v5 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v16 = 1553LL;
    goto LABEL_18;
  }
  v31[0] = off_18016BBC0;
  v31[1] = this;
  v31[13] = v31;
  v21 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 45) + 40LL))(*((_QWORD *)this + 45), v29);
  v22 = (wil::details **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(&v28, v21, (__int64)&v30);
  v24 = v22;
  if ( (wil::details **)((char *)this + 368) != v22 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 46,
      *v22);
    *v24 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(
    &v28,
    v23);
  wistd::function<void (void)>::~function<void (void)>((__int64)&v30);
  CAudioStream::PublishAudioEffects(this, v25);
  v5 = 0;
LABEL_22:
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&SecurityDescriptor);
  return v5;
}
