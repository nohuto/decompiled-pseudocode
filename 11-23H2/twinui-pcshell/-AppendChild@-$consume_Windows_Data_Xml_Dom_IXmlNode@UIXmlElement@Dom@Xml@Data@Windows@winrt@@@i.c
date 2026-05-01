/*
 * XREFs of ?AppendChild@?$consume_Windows_Data_Xml_Dom_IXmlNode@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUIXmlNode@Dom@Xml@Data@Windows@3@@Z @ 0x1806AB96C
 * Callers:
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1806ABB84 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  signed int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h] BYREF

  v10 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v11 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>,
      &v11);
    v5 = v11;
    v6 = v11;
  }
  else
  {
    v6 = 0LL;
  }
  v9 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 176LL))(v5, *a3, &v10);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  *a2 = v10;
  return a2;
}
