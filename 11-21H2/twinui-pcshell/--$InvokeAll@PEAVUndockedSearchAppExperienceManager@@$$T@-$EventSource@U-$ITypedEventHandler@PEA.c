/*
 * XREFs of ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@$$T@Z @ 0x18009F6E0
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18001FB30 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180045F00 (-Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180046464 (-BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800465EC (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18009E7E0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18016A0F0 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::operator() @ 0x18019CDF8 (_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--operator().c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18019EF60 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_330b0a4384d58af087d3989eeb9040e2___::Invoke @ 0x18019F480 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInsp.c)
 * Callees:
 *     ??$InvokeDelegates@V_lambda_54179b263591c018021c5ac3d1707098_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_54179b263591c018021c5ac3d1707098_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18009F770 (--$InvokeDelegates@V_lambda_54179b263591c018021c5ac3d1707098_@@U-$ITypedEventHandler@PEAVCortana.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009FEA8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,std::nullptr_t>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-10h] BYREF
  char v7; // [rsp+60h] [rbp+20h] BYREF
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+30h] BYREF

  v8 = a2;
  v3 = 0;
  v5 = 0LL;
  v6[0] = &v8;
  v6[1] = &v5;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v7, a1 + 8);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v7);
  if ( v9 )
    v3 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_54179b263591c018021c5ac3d1707098_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>(
           v6,
           v9,
           a1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v9);
  return v3;
}
