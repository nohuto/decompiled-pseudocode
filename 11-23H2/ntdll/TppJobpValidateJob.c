/*
 * XREFs of TppJobpValidateJob @ 0x180050D24
 * Callers:
 *     TpReleaseJobNotification @ 0x180050D80 (TpReleaseJobNotification.c)
 *     TpWaitForJobNotification @ 0x180050EF0 (TpWaitForJobNotification.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x180034C74 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x180127278 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppJobpValidateJob(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // eax
  _PEB_LDR_DATA *Ldr; // rcx

  v3 = a1;
  if ( a1 )
  {
    LOBYTE(v4) = TppValidateCleanupGroupMember(a1 + 72, a2);
    if ( v4 )
    {
      if ( *(__int64 (__fastcall ***)())(v3 + 80) == TppJobpCleanupGroupMemberVFuncs
        && !NtCurrentPeb()->Ldr->ShutdownInProgress )
      {
        return 1LL;
      }
    }
  }
  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter(Ldr, a2, a3, v3);
  return 0LL;
}
