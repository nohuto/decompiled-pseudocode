/*
 * XREFs of ??$InvokeDelegates@V_lambda_b3a123d132742ed9bb736a7f1db72d4f_@@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_b3a123d132742ed9bb736a7f1db72d4f_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18061ACAC
 * Callers:
 *     ?RaiseEvent@AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@UEAAXXZ @ 0x18061F8C0 (-RaiseEvent@AsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAVFamilyAppUsageManag.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800E3010 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1803C36BC (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@W.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_b3a123d132742ed9bb736a7f1db72d4f_,Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>>(
        __int64 a1,
        volatile int *a2,
        RTL_SRWLOCK *a3)
{
  volatile int *v5; // rbx
  struct IUnknown **i; // rsi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // ebp
  struct IUnknown *v11; // [rsp+20h] [rbp-28h] BYREF
  volatile int *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v12, a2);
  v5 = v12;
  for ( i = (struct IUnknown **)*((_QWORD *)v12 + 2); i != *((struct IUnknown ***)v5 + 3); ++i )
  {
    v11 = *i;
    v7 = *(_QWORD *)(a1 + 144);
    if ( !v7 )
      __fastfail(7u);
    v8 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v7 + 32LL))(v7, &v11);
    v9 = v8;
    if ( v8 < 0 )
    {
      RoTransformError((unsigned int)v8, 0LL, 0LL);
      if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 )
        Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
          a3,
          *i);
    }
  }
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v12);
  return 0LL;
}
