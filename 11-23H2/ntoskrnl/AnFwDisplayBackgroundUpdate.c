/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x140AEC0B8
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x140AEC07C (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     RtlULongLongMult @ 0x14022CF3C (RtlULongLongMult.c)
 *     KeSetCoalescableTimer @ 0x140252620 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x140252B60 (KeCancelTimer.c)
 *     KeInitializeTimerEx @ 0x1402BE8F0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1402BFC30 (KeInitializeDpc.c)
 *     DbgPrintEx @ 0x14032A9D0 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x140672040 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AEF6DC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140AF2730 (BgpGxDrawBitmapImage.c)
 */

NTSTATUS __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  NTSTATUS result; // eax
  ULONGLONG v2; // rax
  ULONGLONG v3; // rdi
  __int64 v4; // rsi
  ULONGLONG pullResult; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  pullResult = 0LL;
  v6 = 0LL;
  if ( (dword_140C0E4B0 & 0x4000000) == 0 )
    return 0;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0;
  }
  if ( byte_140D18048 )
    return -1073741823;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C01C00)(&v6);
  result = RtlULongLongMult(v2, 0x3E8uLL, &pullResult);
  if ( result < 0 )
    return result;
  v3 = pullResult / v6;
  if ( qword_140C0E550 + v3 < v3 )
    return -1073741675;
  v4 = v3 + qword_140C0E550;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
  if ( (unsigned __int64)qword_140C0E550 >= 0x64 )
  {
    qword_140C0E550 = v4;
    KeInitializeTimerEx(&stru_140D1B0E0, NotificationTimer);
    KeInitializeDpc(&stru_140D1B120, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_140D1B0E0, 0LL, 0x64u, 0, &stru_140D1B120) )
    {
      KeCancelTimer(&stru_140D1B0E0);
      byte_140D18048 = 0;
      return BgpClearScreen(HIDWORD(qword_140C0E630));
    }
    byte_140D18048 = 1;
    return 0;
  }
  BgpClearScreen(HIDWORD(qword_140C0E630));
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v3);
  result = BgpGxDrawBitmapImage(qword_140C0E4F8, &qword_140C0E50C);
  if ( result < 0 )
    return BgpClearScreen(HIDWORD(qword_140C0E630));
  return result;
}
