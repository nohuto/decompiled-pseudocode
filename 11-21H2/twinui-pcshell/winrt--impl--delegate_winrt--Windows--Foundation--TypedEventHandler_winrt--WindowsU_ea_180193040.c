/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_0ebb5ce6db39d52aeb4a09466381d186___::Invoke @ 0x180193040
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 *     ??$As@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180177960 (--$As@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@.c)
 *     ?ShowRequested@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801939B8 (-ShowRequested@CActionCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@UShowShellViewReque.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_0ebb5ce6db39d52aeb4a09466381d186___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *v5; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  struct IInspectable *v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = a3;
  v10 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
              (Microsoft::WRL::WeakRef *)(a1 + 16),
              &v10) >= 0
    && v10 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
           (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)v7,
           (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)&v9);
    CActionCenterExperienceManager::ShowRequested(v4, &v8, v5);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  return 0LL;
}
