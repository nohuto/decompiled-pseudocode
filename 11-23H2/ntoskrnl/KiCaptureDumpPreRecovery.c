/*
 * XREFs of KiCaptureDumpPreRecovery @ 0x14057B1DC
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x14057A91C (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     IoCapturePristineTriageDump @ 0x14054FE28 (IoCapturePristineTriageDump.c)
 *     IoDemoteToTriageDump @ 0x14055020C (IoDemoteToTriageDump.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x14056AD94 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 */

__int64 __fastcall KiCaptureDumpPreRecovery(__int64 a1, _BYTE *a2)
{
  bool v2; // zf

  v2 = KiPristineTriageDump == 0;
  *a2 = 0;
  if ( v2 || (KiBugcheckRecoveryDumpPolicy & 0xF) == 1 )
  {
    if ( !IoDemoteToTriageDump() )
      return 3221225473LL;
    *a2 = 1;
  }
  if ( !byte_140C427E1 )
    KiInvokeBugCheckAddTriageDumpDataCallbacks(0);
  return IoCapturePristineTriageDump(
           KiBugCheckData,
           qword_140C42788,
           xmmword_140C42790,
           *((__int64 *)&xmmword_140C42790 + 1),
           qword_140C427A0,
           KiCrashDumpContext,
           qword_140C427C8,
           qword_140C427D0 == 0);
}
