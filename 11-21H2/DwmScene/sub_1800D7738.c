/*
 * XREFs of sub_1800D7738 @ 0x1800D7738
 * Callers:
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 * Callees:
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 */

__int64 __fastcall sub_1800D7738(__int64 a1, __int64 a2, void **a3)
{
  void **v4; // rax

  v4 = sub_180020CC0(a3, a2, (__int64)a3, 3uLL);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v4;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)v4 + 1);
  v4[2] = 0LL;
  v4[3] = (void *)7;
  *(_WORD *)v4 = 0;
  return a1;
}
