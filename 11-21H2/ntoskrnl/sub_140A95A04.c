/*
 * XREFs of sub_140A95A04 @ 0x140A95A04
 * Callers:
 *     sub_140601514 @ 0x140601514 (sub_140601514.c)
 *     sub_140A95A80 @ 0x140A95A80 (sub_140A95A80.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 */

__int64 sub_140A95A04()
{
  if ( !qword_140D57770 )
    qword_140D57770 = (ULONG_PTR)KeGetCurrentThread();
  KeInitializeDpc(&stru_140D58DC0, sub_140A95A80, 0LL);
  KeInitializeTimerEx(&stru_140D58E00, NotificationTimer);
  return sub_1402E2D20((unsigned __int64)&stru_140D58E00, -6000000000LL, 0, 0, (__int64)&stru_140D58DC0);
}
