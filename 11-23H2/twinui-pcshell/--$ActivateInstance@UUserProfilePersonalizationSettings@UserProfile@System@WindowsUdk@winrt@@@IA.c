/*
 * XREFs of ??$ActivateInstance@UUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@3@XZ @ 0x180214A04
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_7fe111c4dc7982516f208967a081df07_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x180214960 (-_lambda_invoker_cdecl_@_lambda_7fe111c4dc7982516f208967a081df07_@@CA@AEBUIActivationFactory@Fou.c)
 *     ??0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ @ 0x1802151FC (--0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180093070 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct IUnknown *__fastcall winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings>(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, void **); // rbx
  void **v5; // rax
  int v6; // eax
  void (__fastcall ***v8)(_QWORD, void *, struct IUnknownVtbl **); // [rsp+40h] [rbp+8h] BYREF
  struct IUnknownVtbl *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = *a1;
  v4 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)*a1 + 48LL);
  v5 = winrt::put_abi((winrt *)&v8, a2);
  v6 = v4(v3, v5);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  if ( v8 )
  {
    v9 = 0LL;
    (**v8)(v8, &winrt::impl::guid_v<winrt::WindowsUdk::System::UserProfile::IUserProfilePersonalizationSettings>, &v9);
    a2->lpVtbl = v9;
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
