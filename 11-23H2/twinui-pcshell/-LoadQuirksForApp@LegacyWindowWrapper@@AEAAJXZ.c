/*
 * XREFs of ?LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ @ 0x1804DBB70
 * Callers:
 *     ??0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x1804DB044 (--0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@A.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x1800ECEC4 (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall LegacyWindowWrapper::LoadQuirksForApp(HSTRING *this)
{
  wchar_t *StringRawBuffer; // rax
  __int64 v3; // r8
  int v4; // eax
  unsigned int PackagesByPackageFamily; // eax
  PCWSTR v6; // rax
  int bufferLength; // [rsp+20h] [rbp-1E8h]
  unsigned int bufferLengtha; // [rsp+20h] [rbp-1E8h]
  int v10; // [rsp+40h] [rbp-1C8h] BYREF
  UINT32 count; // [rsp+44h] [rbp-1C4h] BYREF
  UINT32 v12; // [rsp+48h] [rbp-1C0h] BYREF
  PWSTR packageFullNames; // [rsp+50h] [rbp-1B8h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+60h] [rbp-1A8h] BYREF
  WCHAR buffer[128]; // [rsp+F0h] [rbp-118h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  packageFullNames = 0LL;
  v12 = 128;
  count = 1;
  StringRawBuffer = (wchar_t *)WindowsGetStringRawBuffer(this[39], 0LL);
  v4 = ParseAppUserModelId(StringRawBuffer, packageFamilyName, v3, 0LL, 0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE3,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacywindowwrapper.cpp",
      (const char *)(unsigned int)v4,
      bufferLength);
  PackagesByPackageFamily = FindPackagesByPackageFamily(
                              packageFamilyName,
                              0x10u,
                              &count,
                              &packageFullNames,
                              &v12,
                              buffer,
                              0LL);
  if ( PackagesByPackageFamily )
    wil::details::in1diag3::Throw_Win32(
      retaddr,
      236LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacywindowwrapper.cpp",
      (const char *)PackagesByPackageFamily,
      bufferLengtha);
  if ( count != 1 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xED,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacywindowwrapper.cpp",
      (const char *)0x80040153LL,
      bufferLengtha);
  v6 = WindowsGetStringRawBuffer(this[39], 0LL);
  if ( (int)QuirkIsEnabledForPackage(packageFullNames, v6, 851969LL, &v10) >= 0 && v10 )
    *((_BYTE *)this + 616) = 1;
  return 0LL;
}
