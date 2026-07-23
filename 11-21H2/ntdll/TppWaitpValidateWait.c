/*
 * XREFs of TppWaitpValidateWait @ 0x18001E368
 * Callers:
 *     TpSetWaitEx @ 0x18001EB80 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x180070960 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x180070A24 (TpWaitOutstandingCallbackCount.c)
 *     TpWaitForWait @ 0x180070C30 (TpWaitForWait.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18001B6E4 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppWaitpValidateWait(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v3; // rdx
  _PEB_LDR_DATA *Ldr; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r10d

  LOBYTE(v2) = TppValidateCleanupGroupMember(a1, a2);
  if ( v2 )
  {
    if ( *(__int64 (__fastcall ***)())(v6 + 8) == TppWaitpCleanupGroupMemberVFuncs )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return 1LL;
    }
  }
  if ( v7 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, v3, v5);
  return 0LL;
}
