/*
 * XREFs of TppTimerpValidateTimer @ 0x18001B710
 * Callers:
 *     TpSetTimerEx @ 0x18001C6D0 (TpSetTimerEx.c)
 *     TpIsTimerSet @ 0x18001CA70 (TpIsTimerSet.c)
 *     TpWaitForTimer @ 0x18001F020 (TpWaitForTimer.c)
 *     TpReleaseTimer @ 0x180070A70 (TpReleaseTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x180070B20 (TpTimerOutstandingCallbackCount.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18001B6E4 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppTimerpValidateTimer(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r11d
  int v4; // r10d
  _PEB_LDR_DATA *v5; // r9
  int v6; // eax

  LOBYTE(v3) = 0;
  v4 = a3;
  v5 = Ldr;
  if ( Ldr )
  {
    if ( !BYTE1(Ldr[4].Length) )
    {
      LOBYTE(v6) = TppValidateCleanupGroupMember((__int64)Ldr, a2);
      if ( v6 )
      {
        if ( v5->SsHandle == TppTimerpCleanupGroupMemberVFuncs )
        {
          Ldr = NtCurrentPeb()->Ldr;
          if ( Ldr->ShutdownInProgress == (_BYTE)v3 )
            return (unsigned int)(v3 + 1);
        }
      }
    }
  }
  if ( v4 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)v3) )
    TppRaiseInvalidParameter(Ldr, a2, a3, v5);
  return 0LL;
}
