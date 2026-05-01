/*
 * XREFs of ?Gamepad@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x180209638
 * Callers:
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x180510890 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 * Callees:
 *     ??$call@P6A?AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics4@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics4@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUhstring@2@AEBUIKnownOnScreenInputUriSchemesStatics4@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@Z @ 0x180205D98 (--$call@P6A-AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics4@OnScreenInput@Application.c)
 *     ??R_lambda_468b5bc9635d9721f835f5e532ecc020_@@QEBA@AEBUIKnownOnScreenInputUriSchemesStatics4@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x18020751C (--R_lambda_468b5bc9635d9721f835f5e532ecc020_@@QEBA@AEBUIKnownOnScreenInputUriSchemesStatics4@OnS.c)
 */

_QWORD *__fastcall winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes::Gamepad(
        _QWORD *a1)
{
  const struct winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4 *(__fastcall *v3)(const struct winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4 *, __int64); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18098E978);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4> )
  {
    _lambda_468b5bc9635d9721f835f5e532ecc020_::operator()(
      (__int64)a1,
      a1,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4>);
    _InterlockedDecrement64(&qword_18098E978);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E978);
    v3 = _lambda_468b5bc9635d9721f835f5e532ecc020_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4>::call<winrt::hstring (*)(winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4 const &)>(
      (__int64)a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
