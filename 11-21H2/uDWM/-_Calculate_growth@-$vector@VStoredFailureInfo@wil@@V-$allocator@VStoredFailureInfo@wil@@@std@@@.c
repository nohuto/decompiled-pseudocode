/*
 * XREFs of ?_Calculate_growth@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEBA_K_K@Z @ 0x1800F5CD8
 * Callers:
 *     ??$_Emplace_reallocate@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAAPEAVStoredFailureInfo@wil@@QEAV23@AEBUFailureInfo@3@@Z @ 0x1800F1E50 (--$_Emplace_reallocate@AEBUFailureInfo@wil@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStor.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<wil::StoredFailureInfo>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x186186186186186LL;
  v3 = (0xCF3CF3CF3CF3CF3DuLL * ((__int64)(a1[2] - *a1) >> 3)) >> 1;
  if ( 0xCF3CF3CF3CF3CF3DuLL * ((__int64)(a1[2] - *a1) >> 3) <= 0x186186186186186LL - v3 )
  {
    result = v3 - 0x30C30C30C30C30C3LL * ((__int64)(a1[2] - *a1) >> 3);
    if ( result < a2 )
      return a2;
  }
  return result;
}
