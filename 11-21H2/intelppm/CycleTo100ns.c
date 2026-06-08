/*
 * XREFs of CycleTo100ns @ 0x1C0006B00
 * Callers:
 *     QueryPkgIdleStateMSRValues @ 0x1C0006A60 (QueryPkgIdleStateMSRValues.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CycleTo100ns(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  int v7; // ecx

  if ( !a1 )
    return 0LL;
  v4 = a2 / a1;
  v5 = 10000000 * (a2 % a1) / a1;
  v6 = 10000000 * v4;
  if ( is_mul_ok(v4, 0x989680uLL) )
  {
    v7 = 0;
  }
  else
  {
    v6 = -1LL;
    v7 = -1073741675;
  }
  result = v5 + v6;
  if ( v7 < 0 )
    return 0LL;
  return result;
}
