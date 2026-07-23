/*
 * XREFs of sub_140405390 @ 0x140405390
 * Callers:
 *     sub_140A3731C @ 0x140A3731C (sub_140A3731C.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_14040A8C8 @ 0x14040A8C8 (sub_14040A8C8.c)
 */

__int64 __fastcall sub_140405390(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  sub_14040A8C8(off_140006DA0, a1);
  *a2 = *(_OWORD *)(a1 + 96);
  sub_1403FDDE8(a1, 0x70uLL);
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_140014868;
  return result;
}
