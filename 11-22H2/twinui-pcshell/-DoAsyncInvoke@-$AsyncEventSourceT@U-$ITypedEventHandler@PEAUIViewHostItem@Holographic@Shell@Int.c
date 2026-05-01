/*
 * XREFs of ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@wistd@@@Z @ 0x1804AB140
 * Callers:
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemEventArgs@@@Z @ 0x1804A7708 (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArg.c)
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemPropertyChangedArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemPropertyChangedArgs@@@Z @ 0x1804A7828 (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemProperty.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E1628 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180191734 (-acquire@operation_guard@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVope.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@PEAV12@PEAVEventTargetArray@Details@WRL@Microsoft@@$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@wistd@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@@Z @ 0x1804A9AA8 (--0AsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Sh.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::DoAsyncInvoke(
        PVOID Parameter,
        __int64 a2)
{
  const char *v4; // r9
  unsigned int LastError; // ebx
  volatile signed __int32 *v6; // rbx
  _QWORD *v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  PVOID v9; // rcx
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  PVOID v12; // rcx
  volatile signed __int32 *v13; // [rsp+30h] [rbp-10h] BYREF
  RTL_SRWLOCK *v14; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  _QWORD *v16; // [rsp+70h] [rbp+30h] BYREF
  PVOID Address; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v14, (RTL_SRWLOCK *)Parameter + 1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
    (__int64 *)&v13,
    (volatile int *)Parameter);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
  if ( !v13 )
    goto LABEL_12;
  if ( !InitOnceExecuteOnce(
          (PINIT_ONCE)Parameter + 3,
          (PINIT_ONCE_FN)_lambda_baf814ee9ae89b980ad734f70dac785d_::_lambda_invoker_cdecl_,
          Parameter,
          0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x2D4,
                  (int)"onecore\\internal\\sdk\\inc\\wil\\WrlEvent.h",
                  v4);
    goto LABEL_13;
  }
  wil::operation_guard::acquire((__int64)Parameter + 56, &Address);
  v6 = (volatile signed __int32 *)Address;
  if ( !Address )
  {
LABEL_12:
    LastError = 0;
    goto LABEL_13;
  }
  v7 = operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v16 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncEventWorkItem::AsyncEventWorkItem(
            v7,
            (volatile int *)Parameter,
            (__int64)v13,
            a2,
            &Address);
    if ( v16 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD **))(**((_QWORD **)Parameter + 6) + 48LL))(
        *((_QWORD *)Parameter + 6),
        &v16);
      v8 = (void (__fastcall ***)(_QWORD, __int64))v16;
      v16 = 0LL;
      if ( v8 )
        (**v8)(v8, 1LL);
      if ( Address && _InterlockedExchangeAdd((volatile signed __int32 *)Address + 1, 0xFFFFFFFF) == 1 )
      {
        v9 = Address;
        *(_DWORD *)Address = 1;
        WakeByAddressAll(v9);
      }
      goto LABEL_12;
    }
    v6 = (volatile signed __int32 *)Address;
  }
  else
  {
    v16 = 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E1,
    (int)"onecore\\internal\\sdk\\inc\\wil\\WrlEvent.h",
    (const char *)0x8007000ELL);
  v11 = (void (__fastcall ***)(_QWORD, __int64))v16;
  v16 = 0LL;
  if ( v11 )
    (**v11)(v11, 1LL);
  if ( v6 && _InterlockedExchangeAdd(v6 + 1, 0xFFFFFFFF) == 1 )
  {
    v12 = Address;
    *(_DWORD *)Address = 1;
    WakeByAddressAll(v12);
  }
  LastError = -2147024882;
LABEL_13:
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v13);
  return LastError;
}
