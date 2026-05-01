/*
 * XREFs of ?open_unique_key@reg@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@PEAUHKEY__@@PEBGW4key_access@12@@Z @ 0x1801F1030
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1801EA284 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_access_flags@reg_view_details@reg@wil@@YAKW4key_access@23@@Z @ 0x1801F0F00 (-get_access_flags@reg_view_details@reg@wil@@YAKW4key_access@23@@Z.c)
 */

// Hidden C++ exception states: #wind=1
HKEY *__fastcall wil::reg::open_unique_key(HKEY *a1, __int64 a2, const WCHAR *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  REGSAM access_flags; // eax
  int v9; // eax
  bool v10; // sf
  int phkResult; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    a1,
    0LL);
  access_flags = wil::reg::reg_view_details::get_access_flags(1, v5, v6, v7);
  v9 = RegOpenKeyExW(HKEY_CURRENT_USER, a3, 0, access_flags, a1);
  v10 = v9 < 0;
  if ( v9 > 0 )
  {
    v9 = (unsigned __int16)v9 | 0x80070000;
    v10 = v9 < 0;
  }
  if ( v10 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v9,
      phkResult);
  return a1;
}
