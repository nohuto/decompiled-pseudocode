/*
 * XREFs of ?SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ @ 0x1800EDEC0
 * Callers:
 *     ?GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z @ 0x18011D5A8 (-GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18000C61C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@3@@Z @ 0x18000D444 (-QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008213C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800CCC1C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4F0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800D4E24 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?PublishAudioEffects@CAudioStream@@AEAAXXZ @ 0x1800ECB30 (-PublishAudioEffects@CAudioStream@@AEAAXXZ.c)
 *     ?SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ @ 0x1800EE0A0 (-SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::SetUpAudioEffectsChangedWnfState(CAudioStream *this)
{
  const char *v2; // r9
  unsigned int LastError; // eax
  int WnfStateName; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details *v7; // rcx
  wil::details *Event; // rdi
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // rax
  int LastErrorFailHr; // edi
  __int64 v13; // rdx
  _QWORD v15[8]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+A8h] [rbp+28h] BYREF

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
                  (void *)0x68E,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                  v2);
LABEL_5:
    v5 = LastError;
LABEL_15:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&SecurityDescriptor);
    return v5;
  }
  WnfStateName = NtCreateWnfStateName((char *)this + 348, 3LL, 0LL);
  if ( WnfStateName < 0 )
  {
    LastError = wil::details::in1diag3::Return_NtStatus(
                  retaddr,
                  (void *)0x697,
                  (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                  (const char *)(unsigned int)WnfStateName);
    goto LABEL_5;
  }
  *((_BYTE *)this + 356) = 1;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)this + 45,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v7, v6, v9, v10);
    if ( LastErrorFailHr < 0 )
    {
      v13 = 1692LL;
      goto LABEL_14;
    }
  }
  v11 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
  v15[0] = off_18017B758;
  v15[1] = this;
  v15[7] = v15;
  LastErrorFailHr = CSerialWorkQueue::QueueRecurringWaitItem(
                      v11,
                      *((_QWORD *)this + 45),
                      (__int64)v15,
                      (__int64)this + 368);
  if ( LastErrorFailHr < 0 )
  {
    v13 = 1698LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)LastErrorFailHr);
    v5 = LastErrorFailHr;
    goto LABEL_15;
  }
  LastErrorFailHr = CAudioStream::SetUpAudioEffectsWatcher(this);
  if ( LastErrorFailHr < 0 )
  {
    v13 = 1701LL;
    goto LABEL_14;
  }
  CAudioStream::PublishAudioEffects(this);
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return 0LL;
}
