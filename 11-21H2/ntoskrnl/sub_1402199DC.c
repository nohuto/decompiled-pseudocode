/*
 * XREFs of sub_1402199DC @ 0x1402199DC
 * Callers:
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402199DC(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = (unsigned int)*a2;
  result = 0LL;
  if ( (unsigned int)v3 >= 0x100 )
    return 3221226505LL;
  *(_DWORD *)(a1 + 4 * v3) = a3;
  *a2 = v3 + 1;
  return result;
}
