/*
 * XREFs of KiGetPastDueIRTimerInfo @ 0x14057DA44
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x14027E280 (KiGetNextTimerExpirationDueTime.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C72F0 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetPastDueIRTimerInfo(unsigned __int64 a1, _BYTE *a2, _BYTE *a3)
{
  unsigned __int64 v3; // rax
  char v4; // cl
  __int64 result; // rax

  if ( a1 < qword_140C422F0 )
    return 0LL;
  if ( (qword_140C422E8 & 1) != 0 )
  {
    if ( qword_140C422E8 == 1 )
      v3 = 0LL;
    else
      v3 = qword_140C422E8 ^ ((unsigned __int64)&unk_140C422E0 + 1);
  }
  else
  {
    v3 = qword_140C422E8;
  }
  *a2 = *(_BYTE *)(v3 - 46);
  v4 = *(_BYTE *)(v3 - 45);
  result = 1LL;
  *a3 = v4;
  return result;
}
