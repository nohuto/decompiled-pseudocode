/*
 * XREFs of sub_1402376A4 @ 0x1402376A4
 * Callers:
 *     sub_140237230 @ 0x140237230 (sub_140237230.c)
 *     sub_140237628 @ 0x140237628 (sub_140237628.c)
 *     sub_140390724 @ 0x140390724 (sub_140390724.c)
 * Callees:
 *     sub_140379848 @ 0x140379848 (sub_140379848.c)
 */

__int64 __fastcall sub_1402376A4(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 56);
  result = 0LL;
  if ( v2 )
  {
    if ( a2 || (v2 & 1) != 0 )
      return sub_140379848(a1, 0LL, 0LL, 0LL);
    else
      return 3221225646LL;
  }
  return result;
}
