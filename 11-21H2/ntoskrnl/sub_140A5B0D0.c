/*
 * XREFs of sub_140A5B0D0 @ 0x140A5B0D0
 * Callers:
 *     sub_140A5AC18 @ 0x140A5AC18 (sub_140A5AC18.c)
 * Callees:
 *     KeInitializeMutex @ 0x140261AA0 (KeInitializeMutex.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 */

__int64 sub_140A5B0D0()
{
  __int64 v0; // rbx

  qword_140C4BB48 = 0LL;
  dword_140C4BC34 = 0;
  dword_140C4BC30 = 0;
  dword_140C4BB40 = 500;
  KeInitializeMutex(&stru_140C4BBF8, 0);
  v0 = -10000LL * (unsigned int)dword_140C4BB40;
  KeInitializeDpc(&stru_140C4BB50, (PKDEFERRED_ROUTINE)sub_14024B730, &dword_140C4BB40);
  qword_140C4BB90 = 0LL;
  qword_140C4BBA0 = (__int64)sub_1402128E0;
  qword_140C4BBA8 = (__int64)&dword_140C4BB40;
  KeInitializeTimerEx(&stru_140C4BBB0, NotificationTimer);
  return sub_1402E2D20((unsigned __int64)&stru_140C4BBB0, v0, dword_140C4BB40, 0, (__int64)&stru_140C4BB50);
}
