/*
 * XREFs of ??0CUndockedSearchAppExperienceManagerConfig@@QEAA@K@Z @ 0x180171E90
 * Callers:
 *     ??$make_unique_nothrow@VCUndockedSearchAppExperienceManagerConfig@@AEBK@wil@@YA?AV?$unique_ptr@VCUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VCUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@AEBK@Z @ 0x180171E30 (--$make_unique_nothrow@VCUndockedSearchAppExperienceManagerConfig@@AEBK@wil@@YA-AV-$unique_ptr@V.c)
 * Callees:
 *     ??$call@P6A?AUUISettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UUISettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUISettings@ViewManagement@UI@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x1800B3E84 (--$call@P6A-AUUISettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@.c)
 *     ??$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUUISettings@ViewManagement@UI@23@XZ @ 0x180184D48 (--$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@Foundation@.c)
 */

// Hidden C++ exception states: #wind=2
CUndockedSearchAppExperienceManagerConfig *__fastcall CUndockedSearchAppExperienceManagerConfig::CUndockedSearchAppExperienceManagerConfig(
        CUndockedSearchAppExperienceManagerConfig *this,
        int a2)
{
  char *v3; // rdx
  __int64 (__fastcall *v5)(const struct winrt::Windows::Foundation::IActivationFactory *); // [rsp+40h] [rbp+18h] BYREF
  __int64 *v6; // [rsp+48h] [rbp+20h]

  *(_QWORD *)this = &CUndockedSearchAppExperienceManagerConfig::`vftable';
  *((_DWORD *)this + 2) = a2;
  v3 = (char *)this + 16;
  v6 = &qword_18098E408;
  _InterlockedIncrement64(&qword_18098E408);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::ViewManagement::UISettings>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>,
      v3);
    _InterlockedDecrement64(&qword_18098E408);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E408);
    v5 = _lambda_77e8a3ab06a5cb26a73e1a01080e75dd_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::UI::ViewManagement::UISettings (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)v3,
      (void (__fastcall **)(__int64, __int64 *))&v5);
  }
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
