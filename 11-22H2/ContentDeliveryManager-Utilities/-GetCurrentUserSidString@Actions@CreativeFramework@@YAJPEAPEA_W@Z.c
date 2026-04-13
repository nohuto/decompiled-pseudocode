/*
 * XREFs of ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x1800BB384
 * Callers:
 *     ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x1800BAD24 (--0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C1E8 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18005D76C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1800A7C58 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEB_WPEAPEA_W@Z @ 0x1800BABBC (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEB_WPEAPEA_W@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Actions::GetCurrentUserSidString(char **this, wchar_t **a2)
{
  unsigned int ValueW; // eax
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  DWORD pcbData; // [rsp+40h] [rbp-1B8h] BYREF
  HKEY hkey; // [rsp+48h] [rbp-1B0h] BYREF
  WCHAR SubKey[8]; // [rsp+50h] [rbp-1A8h] BYREF
  wchar_t pvData[192]; // [rsp+60h] [rbp-198h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  *this = 0LL;
  hkey = 0LL;
  ValueW = RegOpenKeyExW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\SessionData",
             0,
             9u,
             &hkey);
  if ( !ValueW )
  {
    v5 = StringCchPrintfW(SubKey, 8LL, L"%d", NtCurrentPeb()->SessionId);
    v6 = v5;
    if ( v5 >= 0 )
    {
      pcbData = 185;
      ValueW = RegGetValueW(hkey, SubKey, L"LoggedOnUserSID", 2u, 0LL, pvData, &pcbData);
      if ( ValueW )
      {
        v4 = 46LL;
        goto LABEL_7;
      }
      v5 = _AllocString<CTCoAllocPolicy>(v9, v8, pvData, this);
      v6 = v5;
      if ( v5 >= 0 )
        goto LABEL_11;
      v7 = 47LL;
    }
    else
    {
      v7 = 42LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_11;
  }
  v4 = 40LL;
LABEL_7:
  v6 = wil::details::in1diag3::Return_Win32(
         retaddr,
         v4,
         (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
         (const char *)ValueW);
LABEL_11:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
  return v6;
}
