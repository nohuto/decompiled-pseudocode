/*
 * XREFs of _anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases @ 0x180492AC8
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1804930C8 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1802E77C4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18037C8CC (--1-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-$int.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases(HSTRING *this, UINT uID)
{
  HMODULE Library; // rbx
  const char *v5; // r9
  const char *v6; // r9
  unsigned __int64 v7; // rax
  HRESULT v8; // eax
  HMODULE v10[3]; // [rsp+28h] [rbp-250h] BYREF
  wchar_t Buffer[264]; // [rsp+40h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v10[1] = (HMODULE)this;
  Library = LoadLibraryExW(L"taskbarcpl.dll", 0LL, 0x820u);
  v10[0] = Library;
  if ( !Library )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      v5);
  memset_0(Buffer, 0, 0x208uLL);
  if ( LoadStringW(Library, uID, Buffer, 260) <= 0 )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x52,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      v6);
  *this = 0LL;
  v7 = -1LL;
  do
    ++v7;
  while ( Buffer[v7] );
  if ( v7 > 0xFFFFFFFF )
    v8 = -2147024362;
  else
    v8 = Microsoft::WRL::Wrappers::HString::Set(this, Buffer, v7);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x55,
      (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v8,
      1);
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>(v10);
  return this;
}
