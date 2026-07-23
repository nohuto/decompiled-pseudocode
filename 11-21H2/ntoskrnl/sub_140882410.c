/*
 * XREFs of sub_140882410 @ 0x140882410
 * Callers:
 *     <none>
 * Callees:
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 */

__int64 __fastcall sub_140882410(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a2 + 126);
  if ( v2 >= 0 && (v2 & 0x7F) == 8 )
    sub_140574FA4(a2, 8LL, 1LL, 1LL);
  return 0LL;
}
