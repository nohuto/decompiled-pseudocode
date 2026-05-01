/*
 * XREFs of ?EnsureValueFactory@PropertySetAssembler@@AEAAXXZ @ 0x180548124
 * Callers:
 *     ??$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z @ 0x180547C4C (--$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z.c)
 * Callees:
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800DDEC4 (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z @ 0x1802DF00E (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PropertySetAssembler::EnsureValueFactory(PropertySetAssembler *this)
{
  __int64 *v1; // rbx
  int v2; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 8);
  if ( !*((_QWORD *)this + 1) )
  {
    v4 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.PropertyValue",
      0x21u,
      0x20u);
    v2 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
           v4,
           v1);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEE,
        (int)"shellcommon\\internal\\shell\\inc\\propertysetassembler.h",
        (const char *)(unsigned int)v2,
        (int)hstringHeader.Reserved.Reserved1);
  }
}
