/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x140AED710
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x140384F70 (BgpFwQueryPerformanceCounter.c)
 *     BgpTxtDisplayCharacter @ 0x140384F88 (BgpTxtDisplayCharacter.c)
 *     BgpFwReleaseLock @ 0x140385660 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403856B0 (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x140AED85C (LogFwStat.c)
 */

void __fastcall AnFwpProgressIndicatorTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int16 v5; // r9
  LARGE_INTEGER v6; // rbx
  __int16 v7; // r10
  __int16 v8; // ax
  __int16 v9; // ax
  LARGE_INTEGER v10[3]; // [rsp+40h] [rbp-18h] BYREF

  v10[0].QuadPart = 0LL;
  BgpFwAcquireLock();
  if ( byte_140CF7AF0 )
  {
    PerformanceCounter = BgpFwQueryPerformanceCounter(v10);
    v5 = word_140C0B4EC;
    v6 = PerformanceCounter;
    v7 = word_140C0B4E8;
    if ( word_140C0B4EC != word_140C0B4E8
      && (qword_140CF7AF8 + 10 * (v10[0].QuadPart / 33) / 100 - PerformanceCounter.QuadPart) / (v10[0].QuadPart / 33) >= 2 )
    {
      v5 = ++word_140C0B4EC;
    }
    v8 = word_140C0B4E4;
    if ( v5 >= (unsigned __int16)word_140C0B4E4 )
    {
      if ( v5 > (unsigned __int16)word_140C0B4E8 )
        goto LABEL_9;
      LogFwStat(1LL, 0LL, v10);
      BgpTxtDisplayCharacter(qword_140C0E570, (unsigned __int16)word_140C0B4EC, 0, 0LL, 0LL);
      LogFwStat(0LL, 0LL, v10);
      v5 = word_140C0B4EC;
      v7 = word_140C0B4E8;
      v8 = word_140C0B4E4;
    }
    if ( v5 == v7 )
    {
      v9 = v8 - word_140C0B4F0;
      goto LABEL_10;
    }
LABEL_9:
    v9 = v5 + 1;
LABEL_10:
    word_140C0B4EC = v9;
    qword_140CF7AF8 = v6.QuadPart;
  }
  BgpFwReleaseLock();
}
