/*
 * XREFs of TppAlpcpValidateAlpc @ 0x180081508
 * Callers:
 *     TpAlpcRegisterCompletionList @ 0x1800812B0 (TpAlpcRegisterCompletionList.c)
 *     TpAlpcUnregisterCompletionList @ 0x1800813A0 (TpAlpcUnregisterCompletionList.c)
 *     TpWaitForAlpcCompletion @ 0x1800813F0 (TpWaitForAlpcCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x180081490 (TpReleaseAlpcCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18001B6E4 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAlpcpValidateAlpc(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  _PEB_LDR_DATA *v4; // r9
  int v5; // eax

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    LOBYTE(v5) = TppValidateCleanupGroupMember((__int64)&Ldr->ShutdownInProgress, a2);
    if ( v5 )
    {
      if ( v4->ShutdownThreadId == TppAlpcpCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, a2, a3, v4);
  return 0LL;
}
