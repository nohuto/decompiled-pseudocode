/*
 * XREFs of ?_Calculate_growth@?$vector@KV?$allocator@K@std@@@std@@AEBA_K_K@Z @ 0x18002AE58
 * Callers:
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180024274 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEAK@Z @ 0x1800331B0 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<unsigned long>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x3FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 2;
  v4 = v3 >> 1;
  if ( v3 <= 0x3FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
