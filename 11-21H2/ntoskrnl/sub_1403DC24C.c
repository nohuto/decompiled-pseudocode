/*
 * XREFs of sub_1403DC24C @ 0x1403DC24C
 * Callers:
 *     sub_140A5B770 @ 0x140A5B770 (sub_140A5B770.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DC24C(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 64) )
    *(_DWORD *)(a1 + 20) = 0;
  result = 0LL;
  *a2 = *(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 16) + 80;
  return result;
}
