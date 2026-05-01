/*
 * XREFs of _anonymous_namespace_::IsCurrentProcessExplorer @ 0x1801ED7F8
 * Callers:
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@wistd@@@Z @ 0x1801716F8 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV-$Com.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18017B6A0 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetCurrentProcessName @ 0x1801ED398 (_anonymous_namespace_--GetCurrentProcessName.c)
 *     ??$transform@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@std@@YA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0V10@P6AGG@Z@Z @ 0x180465D7C (--$transform@V-$_String_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@.c)
 */

// Hidden C++ exception states: #wind=1
char anonymous_namespace_::IsCurrentProcessExplorer()
{
  char *v0; // r9
  char *v1; // rcx
  char *v2; // rdx
  char v3; // bl
  char v5; // [rsp+30h] [rbp-38h] BYREF
  char v6[16]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h]
  unsigned __int64 v8; // [rsp+50h] [rbp-18h]

  anonymous_namespace_::GetCurrentProcessName(v6);
  v0 = v6;
  if ( v8 >= 8 )
    LODWORD(v0) = *(_DWORD *)v6;
  v1 = v6;
  if ( v8 >= 8 )
    LODWORD(v1) = *(_DWORD *)v6;
  v2 = v6;
  if ( v8 >= 8 )
    LODWORD(v2) = *(_DWORD *)v6;
  std::transform<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short (*)(unsigned short)>(
    (unsigned int)&v5,
    (_DWORD)v2,
    (_DWORD)v1 + 2 * v7,
    (_DWORD)v0,
    _o_towlower);
  v3 = std::wstring::_Equal(v6, (char *)L"explorer.exe");
  std::wstring::_Tidy_deallocate((__int64)v6);
  return v3;
}
