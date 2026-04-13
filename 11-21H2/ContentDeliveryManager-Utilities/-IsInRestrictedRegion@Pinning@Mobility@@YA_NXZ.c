/*
 * XREFs of ?IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ @ 0x18003A8D8
 * Callers:
 *     ??R_lambda_ce3eaa413337f6bd175b4ae2c9280e26_@@QEBAXXZ @ 0x18002DFC8 (--R_lambda_ce3eaa413337f6bd175b4ae2c9280e26_@@QEBAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall Mobility::Pinning::IsInRestrictedRegion(Mobility::Pinning *this)
{
  int v1; // edi
  HRESULT v2; // eax
  int v3; // edx
  unsigned int v4; // r8d
  __int64 v5; // rbx
  wil::details::in1diag3 *v6; // rcx
  __int64 (__fastcall *v7)(__int64, HSTRING *); // rdi
  int v8; // eax
  const WCHAR *StringRawBuffer; // rax
  bool v10; // bl
  BOOL bIgnoreCase; // [rsp+20h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  HSTRING v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v13 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Globalization.GeographicRegion", 0x26u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2, v3, v4);
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x41,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
      (const char *)(unsigned int)v1,
      bIgnoreCase);
  }
  v13 = 0LL;
  v1 = RoActivateInstance(string, &v15);
  if ( v1 >= 0 )
  {
    if ( *(_QWORD *)&GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v5 = v15;
      v13 = v15;
      goto LABEL_8;
    }
    v1 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v15)(
           v15,
           &GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903,
           &v13);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v5 = v13;
LABEL_8:
  v6 = retaddr;
  if ( v1 < 0 )
    goto LABEL_15;
  v14 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v5 + 56LL);
  WindowsDeleteString(0LL);
  v14 = 0LL;
  v8 = v7(v5, &v14);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x43,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
      (const char *)(unsigned int)v8,
      bIgnoreCase);
  StringRawBuffer = WindowsGetStringRawBuffer(v14, 0LL);
  v10 = CompareStringOrdinal(StringRawBuffer, -1, L"CN", -1, 1) == 2;
  WindowsDeleteString(v14);
  v14 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v10;
}
