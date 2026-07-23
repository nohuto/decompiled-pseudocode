/*
 * XREFs of sub_1406EACB0 @ 0x1406EACB0
 * Callers:
 *     sub_14078F198 @ 0x14078F198 (sub_14078F198.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406EACB0(volatile __int64 *a1, __int64 *a2, char a3)
{
  __int64 v3; // rcx

  if ( a3 )
    return _InterlockedExchange64(a1, 0LL);
  v3 = _InterlockedExchange64(a1, *a2);
  *a2 = 0LL;
  return v3;
}
