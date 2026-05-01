/*
 * XREFs of ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@UIXmlNodeList@Dom@Xml@Data@Windows@winrt@@UIXmlNode@23456@@impl@winrt@@QEBA?AUIXmlNode@Dom@Xml@Data@Windows@3@I@Z @ 0x180586250
 * Callers:
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180586ECC (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Data::Xml::Dom::IXmlNodeList,winrt::Windows::Data::Xml::Dom::IXmlNode>::GetAt(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        winrt::Windows::Foundation::IUnknown *a2,
        unsigned int a3)
{
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, winrt::Windows::Foundation::IUnknown *); // rsi
  signed int v8; // eax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  winrt::Windows::Foundation::IUnknown *v11; // [rsp+58h] [rbp+10h]
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = a2;
  *(_QWORD *)a2 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v10 = 0LL;
    (**v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Data::Xml::Dom::IXmlNode>>,
      &v10);
    v6 = v10;
  }
  else
  {
    v6 = 0LL;
  }
  v12 = v6;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, winrt::Windows::Foundation::IUnknown *))(*(_QWORD *)v6 + 48LL);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  v8 = v7(v6, a3, a2);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return a2;
}
