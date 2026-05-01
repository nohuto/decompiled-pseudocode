/*
 * XREFs of ??$ActivateInstance@UXmlDocument@Dom@Xml@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUXmlDocument@Dom@Xml@Data@23@XZ @ 0x1806AAAAC
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_e39067982572d3667926157dc9eb0f0a_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1806AA710 (-_lambda_invoker_cdecl_@_lambda_e39067982572d3667926157dc9eb0f0a_@@CA@AEBUIActivationFactory@Fou.c)
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1806ABB84 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Xml::Dom::XmlDocument>(
        _QWORD *a1,
        _QWORD *a2)
{
  signed int v3; // eax
  void (__fastcall ***v4)(_QWORD, void *, _QWORD *); // rax
  _QWORD *v6; // [rsp+28h] [rbp-20h] BYREF
  void (__fastcall ***v7)(_QWORD, void *, _QWORD *); // [rsp+30h] [rbp-18h] BYREF

  v6 = a2;
  v7 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall ****)(_QWORD, void *, _QWORD *)))(*(_QWORD *)*a1 + 48LL))(
         *a1,
         &v7);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  v4 = v7;
  if ( v7 )
  {
    v6 = 0LL;
    (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlDocument>, &v6);
    *a2 = v6;
    v4 = v7;
  }
  else
  {
    *a2 = 0LL;
  }
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  return a2;
}
