/*
 * XREFs of ??0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ @ 0x1803E2C70
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     GetEnterprisePinDataFromRegistry @ 0x180287B1C (GetEnterprisePinDataFromRegistry.c)
 * Callees:
 *     ??$ActivateInstance@UJsonArray@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUJsonArray@Json@Data@23@XZ @ 0x1803E1BC4 (--$ActivateInstance@UJsonArray@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@w.c)
 *     ??$call@P6A?AUJsonArray@Json@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UJsonArray@Json@Data@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUJsonArray@Json@Data@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x1803E27E4 (--$call@P6A-AUJsonArray@Json@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@-$facto.c)
 */

winrt::Windows::Data::Json::JsonArray *__fastcall winrt::Windows::Data::Json::JsonArray::JsonArray(
        winrt::Windows::Data::Json::JsonArray *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_180990BF8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Json::JsonArray>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_180990BF8);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990BF8);
    v3 = _lambda_26ceda9fe0b282db3cefe2785cdd4c46_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Data::Json::JsonArray (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
