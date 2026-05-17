/*
 * XREFs of TppAlpcpValidateAlpc @ 0x1800507F8
 * Callers:
 *     TpReleaseAlpcCompletion @ 0x180050780 (TpReleaseAlpcCompletion.c)
 *     TpWaitForAlpcCompletion @ 0x180051C50 (TpWaitForAlpcCompletion.c)
 *     TpAlpcUnregisterCompletionList @ 0x180052520 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x180052560 (TpAlpcRegisterCompletionList.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x180034C74 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x180127278 (TppRaiseInvalidParameter.c)
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
