/*
 * XREFs of sub_140AAED7C @ 0x140AAED7C
 * Callers:
 *     sub_140AAED40 @ 0x140AAED40 (sub_140AAED40.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14064D4AC @ 0x14064D4AC (sub_14064D4AC.c)
 *     sub_140AAB7B4 @ 0x140AAB7B4 (sub_140AAB7B4.c)
 *     sub_140AB17C4 @ 0x140AB17C4 (sub_140AB17C4.c)
 */

__int64 __fastcall sub_140AAED7C(char a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // kr00_8
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // edi
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( (dword_140C0DF90 & 0x4000000) == 0 )
    return 0LL;
  if ( !a1 )
  {
    sub_140AAB7B4();
    return 0LL;
  }
  if ( byte_140D01570 )
    return 3221225473LL;
  v3 = sub_14042A5E0(&v7, a2);
  if ( !is_mul_ok(v3, 0x3E8uLL) )
    return 3221225621LL;
  v4 = v3 * (unsigned __int128)0x3E8uLL / v7;
  v5 = v4 + qword_140C0E030;
  v6 = v4;
  if ( v4 + qword_140C0E030 < v4 )
    return 3221225621LL;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v4);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v5);
  if ( (unsigned __int64)qword_140C0E030 >= 0x64 )
  {
    qword_140C0E030 = v5;
    KeInitializeTimerEx(&stru_140D03C40, NotificationTimer);
    KeInitializeDpc(&stru_140D03C80, sub_140AB1400, 0LL);
    if ( KeSetCoalescableTimer(&stru_140D03C40, 0LL, 0x64u, 0, &stru_140D03C80) )
    {
      KeCancelTimer(&stru_140D03C40);
      byte_140D01570 = 0;
      return sub_14064D4AC(HIDWORD(qword_140C0E110));
    }
    byte_140D01570 = 1;
    return 0LL;
  }
  sub_14064D4AC(HIDWORD(qword_140C0E110));
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v6);
  result = sub_140AB17C4(qword_140C0DFD8, &qword_140C0DFEC);
  if ( (int)result < 0 )
    return sub_14064D4AC(HIDWORD(qword_140C0E110));
  return result;
}
