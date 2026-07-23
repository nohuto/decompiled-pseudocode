/*
 * XREFs of sub_1402E0880 @ 0x1402E0880
 * Callers:
 *     sub_14078BD64 @ 0x14078BD64 (sub_14078BD64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E0880(__int64 a1)
{
  unsigned __int64 v1; // rcx
  __int64 result; // rax

  v1 = 4160LL * *(unsigned int *)(a1 + 128);
  result = 0xFFFFFFFFLL;
  if ( v1 <= 0xFFFFFFFF )
    return (unsigned int)v1;
  return result;
}
