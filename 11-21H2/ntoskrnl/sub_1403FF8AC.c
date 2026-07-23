/*
 * XREFs of sub_1403FF8AC @ 0x1403FF8AC
 * Callers:
 *     sub_1403FF10C @ 0x1403FF10C (sub_1403FF10C.c)
 * Callees:
 *     sub_140400AB4 @ 0x140400AB4 (sub_140400AB4.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_140401380 @ 0x140401380 (sub_140401380.c)
 */

__int64 __fastcall sub_1403FF8AC(unsigned int *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rdx
  int v6; // edi
  int v7; // ebx

  v2 = sub_140400AB4(a1[1]);
  v4 = a1[3] * sub_140401350(v2, v3);
  v5 = (unsigned int)sub_140401380(v2) + v4;
  v6 = a1[2] * (v5 + (((a1[1] >> 9) + (((a1[1] & 0x1FF) + 511) >> 9)) << 6));
  v7 = v6 + a1[3] * sub_140401350(v2, v5);
  return v7 + (unsigned int)sub_140401380(v2) + 192;
}
