/*
 * XREFs of sub_1408334E4 @ 0x1408334E4
 * Callers:
 *     sub_140832270 @ 0x140832270 (sub_140832270.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 *     sub_1408339FC @ 0x1408339FC (sub_1408339FC.c)
 */

NTSTATUS sub_1408334E4()
{
  _QWORD *v0; // r14
  __int64 v1; // rsi
  __int64 v2; // rdx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v0 = &unk_140C01A38;
  Handle = 0LL;
  dword_140C01A50 = dword_140C0C620;
  v1 = 0LL;
  dword_140C01B10 = dword_140C0C6B0;
  dword_140C01BD0 = dword_140C0C6AC;
  do
  {
    KeInitializeTimerEx(&stru_140C019A0 + 3 * v1, NotificationTimer);
    KeInitializeEvent((PRKEVENT)(&stru_140C019A0 + 3 * v1 + 2), SynchronizationEvent, 0);
    KeInitializeDpc((PRKDPC)&stru_140C019A0 + 3 * v1 + 1, (PKDEFERRED_ROUTINE)sub_140253FC0, &stru_140C019A0 + 3 * v1);
    *v0 = 0LL;
    if ( (int)sub_1408339FC(&Handle, v2, sub_1403CBDF0, &stru_140C019A0 + 3 * v1) < 0 )
      KeBugCheckEx(0x51u, 0x18uLL, (unsigned int)v1, 0LL, 0LL);
    NtClose(Handle);
    v1 = (unsigned int)(v1 + 1);
    v0 += 24;
  }
  while ( (unsigned int)v1 < 3 );
  byte_140C49040 = 1;
  return PoRegisterPowerSettingCallback(0LL, &SettingGuid, (PPOWER_SETTING_CALLBACK)sub_14025E530, 0LL, 0LL);
}
