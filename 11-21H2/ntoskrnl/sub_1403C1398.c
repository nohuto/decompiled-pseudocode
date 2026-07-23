/*
 * XREFs of sub_1403C1398 @ 0x1403C1398
 * Callers:
 *     sub_140A590DC @ 0x140A590DC (sub_140A590DC.c)
 *     sub_140A59154 @ 0x140A59154 (sub_140A59154.c)
 * Callees:
 *     sub_140266BBC @ 0x140266BBC (sub_140266BBC.c)
 */

char __fastcall sub_1403C1398(_BYTE *a1, struct _KPRCB *a2, __int64 a3)
{
  bool v5; // al
  char v6; // dl
  char result; // al

  v5 = sub_140266BBC(a3, a2);
  v6 = 1;
  if ( !v5 )
    v6 = *(_BYTE *)(a3 + 195);
  *a1 ^= (v6 ^ *a1) & 0x7F;
  result = *a1 & 0x7F;
  *a1 = result | (*(_BYTE *)(a3 + 119) << 7);
  return result;
}
