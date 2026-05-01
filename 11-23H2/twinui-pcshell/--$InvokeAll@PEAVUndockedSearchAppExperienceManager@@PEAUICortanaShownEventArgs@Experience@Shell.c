/*
 * XREFs of ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18003E208
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18003DA50 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?OnClientWindowReadyForPresentationChanged@UndockedSearchAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18003DF00 (-OnClientWindowReadyForPresentationChanged@UndockedSearchAppExperienceManager@@AEAAJPEAUIClientW.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1800E3CC0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?OnVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180469BF8 (-OnVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$InvokeDelegates@V_lambda_c5bfabb814bec5f5156f201f837dd6b0_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_c5bfabb814bec5f5156f201f837dd6b0_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18003E28C (--$InvokeDelegates@V_lambda_c5bfabb814bec5f5156f201f837dd6b0_@@U-$ITypedEventHandler@PEAVCortana.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E1628 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 v8; // [rsp+58h] [rbp+28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF
  char v10; // [rsp+68h] [rbp+38h] BYREF

  v9 = a3;
  v8 = a2;
  v4 = 0;
  v7 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v10, a1 + 8);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v7, a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v10);
  if ( v7 )
  {
    v6[0] = &v8;
    v6[1] = &v9;
    v4 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_c5bfabb814bec5f5156f201f837dd6b0_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>(
           v6,
           v7,
           a1);
  }
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v7);
  return v4;
}
