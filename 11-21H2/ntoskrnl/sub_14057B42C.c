/*
 * XREFs of sub_14057B42C @ 0x14057B42C
 * Callers:
 *     sub_140A02158 @ 0x140A02158 (sub_140A02158.c)
 * Callees:
 *     sub_140234888 @ 0x140234888 (sub_140234888.c)
 *     sub_140234D1C @ 0x140234D1C (sub_140234D1C.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 */

char __fastcall sub_14057B42C(volatile signed __int32 *SystemArgument1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // di
  int v7; // [rsp+20h] [rbp-18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  sub_1402F3290(SystemArgument1, a2, a3, a4);
  LOBYTE(v7) = 1;
  sub_140234888(SystemArgument1, (_QWORD **)SystemArgument1 + 84, (_DWORD *)SystemArgument1 + 134, 0x20u, v7);
  _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
  sub_140234D1C((unsigned __int64)SystemArgument1);
  return sub_1402B0820((__int64)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
}
