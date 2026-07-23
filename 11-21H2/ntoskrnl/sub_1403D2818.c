/*
 * XREFs of sub_1403D2818 @ 0x1403D2818
 * Callers:
 *     sub_1403D256C @ 0x1403D256C (sub_1403D256C.c)
 *     sub_1403D2750 @ 0x1403D2750 (sub_1403D2750.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

_DWORD *__fastcall sub_1403D2818(_DWORD *a1)
{
  _DWORD *result; // rax

  memset(a1, 0, 0x174uLL);
  a1[6] = dword_140C5499C;
  a1[7] = 1;
  a1[14] = 1;
  result = a1 + 20;
  *((_QWORD *)a1 + 6) = a1 + 20;
  *a1 = 1095059543;
  a1[1] = 3;
  a1[2] = 372;
  *((_OWORD *)a1 + 2) = xmmword_140026E38;
  a1[16] = 80;
  a1[17] = 292;
  return result;
}
