/*
 * XREFs of sub_18001E768 @ 0x18001E768
 * Callers:
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_18001FAFC @ 0x18001FAFC (sub_18001FAFC.c)
 *     sub_18003212C @ 0x18003212C (sub_18003212C.c)
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 *     sub_180052770 @ 0x180052770 (sub_180052770.c)
 *     sub_1800C3908 @ 0x1800C3908 (sub_1800C3908.c)
 *     sub_1800C4174 @ 0x1800C4174 (sub_1800C4174.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001E228 @ 0x18001E228 (sub_18001E228.c)
 */

char *__fastcall sub_18001E768(char *a1, const void *a2, unsigned __int64 a3)
{
  char *v4; // rsi
  __int64 v5; // rbx

  if ( a3 > *((_QWORD *)a1 + 3) )
    return (char *)sub_18001E228((__int64)a1, a3, a3, a2);
  v4 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v4 = *(char **)a1;
  *((_QWORD *)a1 + 2) = a3;
  v5 = 2 * a3;
  memmove(v4, a2, 2 * a3);
  *(_WORD *)&v4[v5] = 0;
  return a1;
}
