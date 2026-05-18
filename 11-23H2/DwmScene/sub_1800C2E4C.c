/*
 * XREFs of sub_1800C2E4C @ 0x1800C2E4C
 * Callers:
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 * Callees:
 *     sub_18001F90C @ 0x18001F90C (sub_18001F90C.c)
 */

_QWORD *__fastcall sub_1800C2E4C(_QWORD *a1, __int64 a2, void **a3)
{
  void **v4; // rax

  v4 = sub_18001F90C(a3, a2, (__int64)a3, 3uLL);
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v4;
  *((_OWORD *)a1 + 1) = *((_OWORD *)v4 + 1);
  v4[2] = 0LL;
  v4[3] = (void *)7;
  *(_WORD *)v4 = 0;
  return a1;
}
