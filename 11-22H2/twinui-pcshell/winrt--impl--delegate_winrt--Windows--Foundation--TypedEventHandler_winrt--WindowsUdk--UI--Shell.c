/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs___lambda_352628a2d1ddb7fdbe9aad4ec4f36b56___::Invoke @ 0x1800479C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnViewVisibilityChanged@UndockedSearchAppExperienceManager@@AEAAXAEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUViewVisibilityChangedEventArgs@3456@@Z @ 0x180047A1C (-OnViewVisibilityChanged@UndockedSearchAppExperienceManager@@AEAAXAEBUViewCoordinator@Shell@UI@W.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs___lambda_352628a2d1ddb7fdbe9aad4ec4f36b56___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  int v4; // eax
  const struct winrt::WindowsUdk::UI::Shell::ViewCoordinator *v5; // rdx
  __int64 result; // rax
  struct IInspectable *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v3 = a1 + 8;
  v7 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 8), &v7);
  try
  {
    if ( v4 >= 0 && v7 )
      UndockedSearchAppExperienceManager::OnViewVisibilityChanged(
        *(struct IUnknown **)(v3 + 8),
        v5,
        (const struct winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs *)&v8);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
