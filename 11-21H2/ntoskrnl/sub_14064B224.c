/*
 * XREFs of sub_14064B224 @ 0x14064B224
 * Callers:
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14064B224(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v5; // ecx

  result = 0LL;
  if ( !*a2 )
    return 3221225890LL;
  v5 = *a2 - 1;
  *a2 = v5;
  *a3 = *(_DWORD *)(a1 + 4LL * v5);
  return result;
}
