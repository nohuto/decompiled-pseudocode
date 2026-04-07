/*
 * XREFs of ?_Calculate_growth@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBA_K_K@Z @ 0x1800F5C54
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$basic_string_view@DU?$char_traits@D@std@@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@QEAV21@AEAV?$basic_string_view@DU?$char_traits@D@std@@@1@@Z @ 0x1800F1D44 (--$_Emplace_reallocate@AEAV-$basic_string_view@DU-$char_traits@D@std@@@std@@@-$vector@V-$basic_s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<std::string>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x7FFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 5;
  v4 = v3 >> 1;
  if ( v3 <= 0x7FFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
