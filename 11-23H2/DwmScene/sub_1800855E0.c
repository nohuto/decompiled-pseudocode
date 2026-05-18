/*
 * XREFs of sub_1800855E0 @ 0x1800855E0
 * Callers:
 *     sub_1800855A8 @ 0x1800855A8 (sub_1800855A8.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1800855E0(__int64 a1, __int64 a2, __int64 a3)
{
  return sub_180083F38(a1, a2, *(const void **)a3, (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 6);
}
