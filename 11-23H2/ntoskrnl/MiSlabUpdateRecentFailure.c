/*
 * XREFs of MiSlabUpdateRecentFailure @ 0x14021F214
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x14021ED0C (MiFreeUnusedSlabPages.c)
 *     MiFreeSlabEntries @ 0x14021F040 (MiFreeSlabEntries.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 */

void __fastcall MiSlabUpdateRecentFailure(_QWORD *a1)
{
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v2; // r11

  if ( *a1 )
  {
    LOBYTE(a1) = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(a1);
    if ( !UnbiasedInterruptTime )
      UnbiasedInterruptTime = 1LL;
    if ( (unsigned __int64)(UnbiasedInterruptTime - *v2) >= 0x23C34600 )
      *v2 = 0LL;
  }
}
