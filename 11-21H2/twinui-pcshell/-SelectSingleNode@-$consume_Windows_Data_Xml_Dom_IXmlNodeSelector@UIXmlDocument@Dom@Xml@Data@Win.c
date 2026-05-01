/*
 * XREFs of ?SelectSingleNode@?$consume_Windows_Data_Xml_Dom_IXmlNodeSelector@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA?AUIXmlNode@Dom@Xml@Data@Windows@3@AEBUhstring@param@3@@Z @ 0x180586DE0
 * Callers:
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180586ECC (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNodeSelector<winrt::Windows::Data::Xml::Dom::IXmlDocument>::SelectSingleNode(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  signed int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v8 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNodeSelector>,
      &v8);
    v5 = v8;
  }
  v9 = v5;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, *a3, &v10);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  *a2 = v10;
  return a2;
}
