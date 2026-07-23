/*
 * XREFs of sub_140394A84 @ 0x140394A84
 * Callers:
 *     sub_14045F42A @ 0x14045F42A (sub_14045F42A.c)
 *     sub_1405F9824 @ 0x1405F9824 (sub_1405F9824.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140394A84(_DWORD *a1, int a2)
{
  int v2; // r8d

  v2 = a1[1648] + a1[1524];
  if ( a2 )
    return (unsigned int)(a1[1525] + v2);
  else
    return (unsigned int)((a1[1525] >> 8) + v2);
}
