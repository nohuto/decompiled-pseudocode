/*
 * XREFs of ?ModifyUnpackagedMsiApp@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x1805769B0
 * Callers:
 *     ?ModifyUnpackagedApp@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x180576314 (-ModifyUnpackagedApp@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_N1@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180174FA4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180575AD0 (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 *     ?Launch@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG1_N2@Z @ 0x180575FE8 (-Launch@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG1_N2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ModifyUnpackagedMsiApp(_QWORD *a1, char a2, char a3)
{
  wchar_t *v6; // rdx
  unsigned __int64 v7; // r8
  const WCHAR *v8; // rbx
  WCHAR *v9; // rax
  _BYTE v11[32]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD Src[4]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v13[32]; // [rsp+78h] [rbp-30h] BYREF

  v6 = L"/qb /x ";
  if ( !a2 )
    v6 = L"/i ";
  std::wstring::wstring(Src, v6);
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  v7 = -1LL;
  do
    ++v7;
  while ( *((_WORD *)a1 + v7) );
  std::wstring::append(Src, a1, v7);
  wil::ExpandEnvironmentStringsW<std::wstring,256>((__int64)v13, (__int64)L"%windir%\\system32\\msiexec.exe");
  v8 = (const WCHAR *)Src;
  if ( Src[3] >= 8uLL )
    v8 = (const WCHAR *)Src[0];
  v9 = (WCHAR *)std::wstring::wstring((__int64)v11, (__int64)v13);
  Launch(v9, v8, &LocaleName, a2, a3);
  std::wstring::_Tidy_deallocate((__int64)v13);
  return std::wstring::_Tidy_deallocate((__int64)Src);
}
