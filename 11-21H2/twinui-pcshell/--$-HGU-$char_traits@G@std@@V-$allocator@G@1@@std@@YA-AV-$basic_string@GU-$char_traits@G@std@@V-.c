/*
 * XREFs of ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1800E6510
 * Callers:
 *     ?UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z @ 0x1800E6160 (-UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z.c)
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E6800 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x18008AC74 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 */

__int64 __fastcall std::operator+<unsigned short>(__int64 a1, char *a2, char **a3)
{
  unsigned __int64 v3; // r9
  char **v5; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)&a2[2 * v3] );
  v5 = std::wstring::insert(a3, (unsigned __int64)a2, a2, v3);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v5;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)v5 + 1);
  v5[2] = 0LL;
  v5[3] = (char *)7;
  *(_WORD *)v5 = 0;
  return a1;
}
