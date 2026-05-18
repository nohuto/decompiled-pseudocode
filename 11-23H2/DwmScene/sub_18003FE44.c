/*
 * XREFs of sub_18003FE44 @ 0x18003FE44
 * Callers:
 *     sub_1800E663E @ 0x1800E663E (sub_1800E663E.c)
 *     sub_1800EADC5 @ 0x1800EADC5 (sub_1800EADC5.c)
 *     sub_1800F20FD @ 0x1800F20FD (sub_1800F20FD.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_18003FE44(__int64 a1)
{
  __int64 result; // rax

  sub_1800100E8(*(void **)a1, (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
