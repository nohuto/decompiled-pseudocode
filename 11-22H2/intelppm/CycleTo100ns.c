/*
 * XREFs of CycleTo100ns @ 0x1C00011F0
 * Callers:
 *     QueryPkgIdleStateMSRValues @ 0x1C0001150 (QueryPkgIdleStateMSRValues.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CycleTo100ns(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  int v6; // ecx
  unsigned __int64 result; // rax

  if ( !a1 )
    return 0LL;
  v3 = a2 / a1;
  v4 = 10000000 * (a2 % a1) / a1;
  v5 = 10000000 * v3;
  if ( is_mul_ok(v3, 0x989680uLL) )
  {
    v6 = 0;
  }
  else
  {
    v5 = -1LL;
    v6 = -1073741675;
  }
  result = v4 + v5;
  if ( v6 < 0 )
    return 0LL;
  return result;
}
