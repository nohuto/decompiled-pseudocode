/*
 * XREFs of TppTimerpValidateTimer @ 0x180034B18
 * Callers:
 *     TpWaitForTimer @ 0x18002FB70 (TpWaitForTimer.c)
 *     TpIsTimerSet @ 0x180031C50 (TpIsTimerSet.c)
 *     TpSetTimerEx @ 0x180032DB0 (TpSetTimerEx.c)
 *     TpTimerOutstandingCallbackCount @ 0x18004D4C0 (TpTimerOutstandingCallbackCount.c)
 *     TpReleaseTimer @ 0x18004E4C0 (TpReleaseTimer.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x180034DD4 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppTimerpValidateTimer(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r11d
  int v4; // r10d
  __int64 v5; // r9

  LOBYTE(v3) = 0;
  v4 = a3;
  if ( Ldr )
  {
    if ( !BYTE1(Ldr[4].Length) )
    {
      if ( (unsigned int)TppValidateCleanupGroupMember(Ldr, a2, a3, Ldr) )
      {
        if ( *(__int64 (__fastcall ***)())(v5 + 8) == TppTimerpCleanupGroupMemberVFuncs )
        {
          Ldr = NtCurrentPeb()->Ldr;
          if ( Ldr->ShutdownInProgress == (_BYTE)v3 )
            return (unsigned int)(v3 + 1);
        }
      }
    }
  }
  if ( v4 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)v3) )
    TppRaiseInvalidParameter(Ldr, a2, a3);
  return 0LL;
}
