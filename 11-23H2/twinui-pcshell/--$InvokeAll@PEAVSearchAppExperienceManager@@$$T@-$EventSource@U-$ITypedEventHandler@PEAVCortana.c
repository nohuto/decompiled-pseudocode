/*
 * XREFs of ??$InvokeAll@PEAVSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVSearchAppExperienceManager@@$$T@Z @ 0x18045CA9C
 * Callers:
 *     ?OnAppRequestedDismiss@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18045DF30 (-OnAppRequestedDismiss@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppRequestedTransition@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18045DF60 (-OnAppRequestedTransition@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppTransitionCompleted@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18045DF90 (-OnAppTransitionCompleted@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnDeviceLocked@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18045DFC0 (-OnDeviceLocked@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnDeviceUnlocked@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18045E000 (-OnDeviceUnlocked@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnHidden@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18045E0E0 (-OnHidden@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSetForegroundFailed@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18045E1B0 (-OnSetForegroundFailed@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnStartAndCortanaDismissRequested@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18045E260 (-OnStartAndCortanaDismissRequested@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSuggestionsHidden@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18045E290 (-OnSuggestionsHidden@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSuggestionsShown@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18045E2C0 (-OnSuggestionsShown@SearchAppExperienceManagerNotification@@UEAAXXZ.c)
 *     ?_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ @ 0x18045FC9C (-_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E1628 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$InvokeDelegates@V_lambda_f3c22933f8a759d1e0d9a9aca5ea554e_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_f3c22933f8a759d1e0d9a9aca5ea554e_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18045D03C (--$InvokeDelegates@V_lambda_f3c22933f8a759d1e0d9a9aca5ea554e_@@U-$ITypedEventHandler@PEAVCortana.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<SearchAppExperienceManager *,std::nullptr_t>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-10h] BYREF
  RTL_SRWLOCK *v7; // [rsp+60h] [rbp+20h] BYREF
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF
  volatile signed __int32 *v9; // [rsp+70h] [rbp+30h] BYREF

  v8 = a2;
  v3 = 0;
  v5 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v7, (RTL_SRWLOCK *)(a1 + 8));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v9, (volatile int *)a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v7);
  if ( v9 )
  {
    v6[0] = &v8;
    v6[1] = &v5;
    v3 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_f3c22933f8a759d1e0d9a9aca5ea554e_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>(
           v6,
           v9,
           a1);
  }
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v9);
  return v3;
}
