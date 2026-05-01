/*
 * XREFs of ??$ActivateInstance@ULogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULogoLoadOptions@StartScreen@UI@WindowsUdk@3@XZ @ 0x1805E019C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_3706218fc4c34629ce9901fa3375766b_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1805DFED0 (-_lambda_invoker_cdecl_@_lambda_3706218fc4c34629ce9901fa3375766b_@@CA@AEBUIActivationFactory@Fou.c)
 *     ??0LogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1805E13C8 (--0LogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::StartScreen::LogoLoadOptions>(
        _QWORD *a1,
        _QWORD *a2)
{
  signed int v3; // eax
  void (__fastcall ***v4)(_QWORD, void *, _QWORD *); // rax
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)*a1 + 48LL))(
         *a1,
         &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  v4 = v6;
  if ( v6 )
  {
    v7 = 0LL;
    (**v6)(v6, &winrt::impl::guid_v<winrt::WindowsUdk::UI::StartScreen::ILogoLoadOptions>, &v7);
    *a2 = v7;
    v4 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return a2;
}
