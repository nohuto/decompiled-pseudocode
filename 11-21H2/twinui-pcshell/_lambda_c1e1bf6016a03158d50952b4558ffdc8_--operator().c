/*
 * XREFs of _lambda_c1e1bf6016a03158d50952b4558ffdc8_::operator() @ 0x1800BB9DC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c1e1bf6016a03158d50952b4558ffdc8___::Run @ 0x1800BB9D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c1e1bf6016a03158d50952b4558ffdc8___--Run.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18008EA88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AHPEAX@Z$1?CloseState@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800BBAD8 (--1-$unique_storage@U-$resource_policy@PEAXP6AHPEAX@Z$1-CloseState@@YAH0@ZU-$integral_constant@_.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1800BBB00 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1800E7B40 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x1800E7D44 (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_c1e1bf6016a03158d50952b4558ffdc8_::operator()(HKEY a1, __int64 a2, void **a3)
{
  int StateHandle; // eax
  unsigned int v4; // ebx
  int StateRegKey; // eax
  unsigned int v6; // eax
  int v7; // eax
  HKEY *v9; // [rsp+20h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  HKEY phkResult; // [rsp+60h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+18h] BYREF
  CallerIdentity *v13; // [rsp+70h] [rbp+20h] BYREF

  phkResult = a1;
  v13 = 0LL;
  StateHandle = CallerIdentity::GetStateHandle(
                  (CallerIdentity *)L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe",
                  (const unsigned __int16 *)&v13,
                  a3);
  v4 = StateHandle;
  if ( StateHandle < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x730,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)StateHandle);
  }
  else
  {
    hKey = 0LL;
    StateRegKey = CallerIdentity::GetStateRegKey(v13, 0LL, (const unsigned __int16 *)0x2001F, (unsigned int)&hKey, v9);
    v4 = StateRegKey;
    if ( StateRegKey < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x733,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)StateRegKey);
    }
    else
    {
      phkResult = 0LL;
      v6 = RegCreateKeyExW(hKey, L"PersistedTitleBarData", 0, 0LL, 0, 0xF003Fu, 0LL, &phkResult, 0LL);
      if ( v6 )
      {
        v4 = wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x73E,
               (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
               (const char *)v6);
      }
      else
      {
        v7 = SHRegSetBOOL(phkResult, L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App", L"ExtendViewIntoTitleBar", 1);
        v4 = v7;
        if ( v7 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x740,
            (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)(unsigned int)v7);
        else
          v4 = 0;
      }
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v13);
  return v4;
}
