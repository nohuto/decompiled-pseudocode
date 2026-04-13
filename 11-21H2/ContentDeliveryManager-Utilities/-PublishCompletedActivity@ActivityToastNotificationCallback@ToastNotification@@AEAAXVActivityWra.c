/*
 * XREFs of ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180079C24
 * Callers:
 *     ??R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ @ 0x180076920 (--R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180030AC0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007A5C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINoti.c)
 *     ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x18007A73C (-SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007B120 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity(
        __int64 a1,
        MobilityExperience::ActivityWrapper *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // eax
  void *v9; // rdx
  unsigned int v10; // r8d
  const char *v11; // r9
  HANDLE Event; // r14
  wil::details *v13; // rdi
  DWORD LastError; // ebx
  void *v15; // rdx
  signed __int64 v16; // rcx
  bool v17; // zf
  signed __int64 v18; // rax
  signed __int32 v19; // eax
  signed __int64 v20; // rcx
  signed __int64 v21; // rax
  signed __int32 v22; // eax
  int v23; // r14d
  __int64 v24; // rdi
  _DWORD *v25; // rax
  _DWORD *v26; // rbx
  __int64 v27; // r15
  __int64 v28; // r14
  DWORD CurrentThreadId; // eax
  int v30; // r12d
  __int64 result; // rax
  __int64 v32; // rcx
  int v33; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  MobilityExperience::ActivityWrapper::SetActivityComplete(a2);
  v7 = *((_QWORD *)a2 + 1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  LOBYTE(v6) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 104LL))(v7, v6);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      273LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v8,
      v33);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(retaddr, v9, v10, v11);
  GetLastError();
  v13 = *(wil::details **)(a1 + 80);
  if ( v13 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v13, v15);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 80) = Event;
  v16 = *(_QWORD *)(a1 + 72);
  while ( v16 >= 0 )
  {
    if ( (_DWORD)v16 != 0x7FFFFFFF )
    {
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v16 + 1, v16);
      v17 = v16 == v18;
      v16 = v18;
      if ( !v17 )
        continue;
    }
    goto LABEL_14;
  }
  do
    v19 = *(_DWORD *)(2 * v16 + 0x10);
  while ( v19 != 0x7FFFFFFF
       && v19 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v16 + 16), v19 + 1, v19) );
LABEL_14:
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v20 = *(_QWORD *)(a1 + 72);
  while ( v20 >= 0 )
  {
    if ( (_DWORD)v20 != 0x7FFFFFFF )
    {
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v20 + 1, v20);
      v17 = v20 == v21;
      v20 = v21;
      if ( !v17 )
        continue;
    }
    goto LABEL_23;
  }
  do
    v22 = *(_DWORD *)(2 * v20 + 0x10);
  while ( v22 != 0x7FFFFFFF
       && v22 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v20 + 16), v22 + 1, v22) );
LABEL_23:
  v23 = *(_DWORD *)a2;
  v24 = *((_QWORD *)a2 + 1);
  if ( v24 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 8LL))(*((_QWORD *)a2 + 1));
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v25 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v26 = v25;
  if ( v25 )
  {
    v25[3] = 1;
    *(_QWORD *)v25 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v27 = 0LL;
    *((_QWORD *)v26 + 2) = a1;
    *((_QWORD *)v26 + 3) = a1;
    v26[8] = v23;
    *((_QWORD *)v26 + 5) = v24;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    v28 = 0LL;
    *((_QWORD *)v26 + 6) = a3;
    *(_QWORD *)v26 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_55b1f7175feb20028fed27b00f720bea_>::`vftable';
  }
  else
  {
    v26 = 0LL;
    v27 = a1;
    v28 = a3;
  }
  CurrentThreadId = GetCurrentThreadId();
  v30 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v26, 0LL);
  if ( v26 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v27 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(v27);
  if ( v30 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      289LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v30,
      v34);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(a1);
  v32 = *((_QWORD *)a2 + 1);
  if ( v32 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  return result;
}
