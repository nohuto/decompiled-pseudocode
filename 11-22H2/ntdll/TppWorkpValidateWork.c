/*
 * XREFs of TppWorkpValidateWork @ 0x18004E780
 * Callers:
 *     TpWaitForWork @ 0x18004C990 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x18004E710 (TpReleaseWork.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x180034DD4 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppWorkpValidateWork(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  int v4; // eax
  __int64 v5; // r9

  v3 = a3;
  if ( Ldr )
  {
    LOBYTE(v4) = TppValidateCleanupGroupMember((__int64)Ldr, a2);
    if ( v4 )
    {
      if ( *(__int64 (__fastcall ***)(PVOID))(v5 + 8) == &TppWorkpCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, a2, a3);
  return 0LL;
}
