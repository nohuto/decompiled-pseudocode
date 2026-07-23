/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x140AF21F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlULongLongMult @ 0x14022CF3C (RtlULongLongMult.c)
 *     DbgPrintEx @ 0x14032A9D0 (DbgPrintEx.c)
 *     BgpFwReleaseLock @ 0x140385840 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140385890 (BgpFwAcquireLock.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x140672040 (BgpClearScreen.c)
 *     AnFwpDisableProgressTimer @ 0x140AEF610 (AnFwpDisableProgressTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AEF6DC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140AF2730 (BgpGxDrawBitmapImage.c)
 */

void __fastcall AnFwpBackgroundUpdateTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONGLONG v4; // rax
  ULONGLONG v5; // rbx
  ULONGLONG pullResult; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-10h] BYREF

  pullResult = 0LL;
  v7 = 0LL;
  v4 = ((__int64 (__fastcall *)(unsigned __int64 *, PVOID, PVOID, PVOID))off_140C01C00)(
         &v7,
         DeferredContext,
         SystemArgument1,
         SystemArgument2);
  if ( RtlULongLongMult(v4, 0x3E8uLL, &pullResult) >= 0 )
  {
    v5 = pullResult / v7;
    BgpFwAcquireLock();
    if ( v5 >= qword_140C0E550 )
    {
      if ( byte_140D18048 )
      {
        AnFwpDisableProgressTimer();
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
        if ( qword_140C0E4F8 )
        {
          BgpClearScreen(HIDWORD(qword_140C0E630));
          if ( (int)BgpGxDrawBitmapImage(qword_140C0E4F8, &qword_140C0E50C) < 0 )
            BgpClearScreen(HIDWORD(qword_140C0E630));
        }
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
