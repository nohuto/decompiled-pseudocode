/*
 * XREFs of ?WStringToString@Utils@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z @ 0x18001F360
 * Callers:
 *     ??$LexicalCast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Utils@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@3@@Z @ 0x18002E028 (--$LexicalCast@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$basic_string@_WU.c)
 * Callees:
 *     ?WStringToString@Utils@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEB_W_K@Z @ 0x18001F38C (-WStringToString@Utils@Spectre@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc_ea_18001F38C.c)
 */

__int64 __fastcall Spectre::Utils::WStringToString(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8

  v3 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  Spectre::Utils::WStringToString(a1, a2, v3);
  return a1;
}
