/*
 * XREFs of ?SetAttribute@?$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBAXAEBUhstring@param@3@0@Z @ 0x180586E90
 * Callers:
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180586ECC (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 64LL))(*a1, *a2, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
