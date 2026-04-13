/*
 * XREFs of ?IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ @ 0x1800381FC
 * Callers:
 *     ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002CEE0 (--R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$ActivateInstance@UIGeographicRegion@Globalization@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIGeographicRegion@Globalization@1@@Z @ 0x18002452C (--$ActivateInstance@UIGeographicRegion@Globalization@Windows@@@Foundation@Windows@@YAJPEAUHSTRIN.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall Mobility::Pinning::IsInRestrictedRegion(Mobility::Pinning *this)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, HSTRING *); // rdi
  int v4; // eax
  const WCHAR *StringRawBuffer; // rax
  bool v6; // bl
  BOOL bIgnoreCase; // [rsp+20h] [rbp-50h]
  HSTRING string; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v10 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Globalization.GeographicRegion",
    0x27u,
    0x26u);
  v1 = Windows::Foundation::ActivateInstance<Windows::Globalization::IGeographicRegion>(v12, &v10);
  if ( v1 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
      (const char *)(unsigned int)v1,
      bIgnoreCase);
  string = 0LL;
  v2 = v10;
  v3 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v4 = v3(v2, &string);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x42,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
      (const char *)(unsigned int)v4,
      bIgnoreCase);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v6 = CompareStringOrdinal(StringRawBuffer, -1, L"CN", -1, 1) == 2;
  WindowsDeleteString(string);
  string = 0LL;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v10);
  return v6;
}
