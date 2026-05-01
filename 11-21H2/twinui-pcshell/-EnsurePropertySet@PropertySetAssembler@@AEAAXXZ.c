/*
 * XREFs of ?EnsurePropertySet@PropertySetAssembler@@AEAAXXZ @ 0x1804925BC
 * Callers:
 *     ?Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z @ 0x180492F54 (-Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$ActivateInstance@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@01@@Z @ 0x180492064 (--$ActivateInstance@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@F.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PropertySetAssembler::EnsurePropertySet(PropertySetAssembler *this)
{
  __int64 v2; // rdi
  int v3; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !*(_QWORD *)this )
  {
    v5 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.PropertySet",
      0x2Bu,
      0x2Au);
    v2 = v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this);
    v3 = Windows::Foundation::ActivateInstance<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
           v2,
           this);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE4,
        (int)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
        (const char *)(unsigned int)v3,
        (int)hstringHeader.Reserved.Reserved1);
  }
}
