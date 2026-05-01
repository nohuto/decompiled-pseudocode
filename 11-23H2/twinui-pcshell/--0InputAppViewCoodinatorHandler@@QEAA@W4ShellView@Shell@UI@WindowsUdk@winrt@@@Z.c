/*
 * XREFs of ??0InputAppViewCoodinatorHandler@@QEAA@W4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180093E4C
 * Callers:
 *     ??$make_shared@VInputAppViewCoodinatorHandler@@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@YA?AV?$shared_ptr@VInputAppViewCoodinatorHandler@@@0@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180094D3C (--$make_shared@VInputAppViewCoodinatorHandler@@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@YA-A.c)
 * Callees:
 *     ??R_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@QEBA@AEBUIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180094360 (--R_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@QEBA@AEBUIShellViewCoordinatorFactory@Shell@UI@Win.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@?$factory_cache_entry@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIShellViewCoordinatorFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@Z @ 0x18019E350 (--$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@-$factory_cache_entry@UShellViewCoordina.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall InputAppViewCoodinatorHandler::InputAppViewCoodinatorHandler(__int64 a1, int a2)
{
  int v4; // [rsp+68h] [rbp+30h] BYREF
  int *v5; // [rsp+70h] [rbp+38h] BYREF
  __int64 v6; // [rsp+78h] [rbp+40h] BYREF

  v4 = a2;
  *(_QWORD *)a1 = &InputAppViewCoodinatorHandler::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_BYTE *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = &v4;
  _InterlockedIncrement64(&qword_18098E088);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory> )
  {
    _lambda_c784a7e41fe1a5698e55a9117bd5b7f8_::operator()(
      &v5,
      &v6,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>);
    _InterlockedDecrement64(&qword_18098E088);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E088);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
      a1,
      &v6,
      &v5);
  }
  winrt::Windows::Foundation::IUnknown::operator=(a1 + 8, &v6);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return a1;
}
