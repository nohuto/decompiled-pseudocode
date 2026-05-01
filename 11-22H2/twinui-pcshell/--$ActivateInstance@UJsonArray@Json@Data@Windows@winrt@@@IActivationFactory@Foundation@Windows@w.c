/*
 * XREFs of ??$ActivateInstance@UJsonArray@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUJsonArray@Json@Data@23@XZ @ 0x1803E1BC4
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_26ceda9fe0b282db3cefe2785cdd4c46_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1803E18E0 (-_lambda_invoker_cdecl_@_lambda_26ceda9fe0b282db3cefe2785cdd4c46_@@CA@AEBUIActivationFactory@Fou.c)
 *     ??0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ @ 0x1803E2C70 (--0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x1803E3F84 (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Json::JsonArray>(
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
    (**v6)(v6, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonArray>, &v7);
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
