/*
 * XREFs of TppAlpcpValidateAlpc @ 0x180050958
 * Callers:
 *     TpReleaseAlpcCompletion @ 0x1800508E0 (TpReleaseAlpcCompletion.c)
 *     TpWaitForAlpcCompletion @ 0x180051DB0 (TpWaitForAlpcCompletion.c)
 *     TpAlpcUnregisterCompletionList @ 0x180052680 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x1800526C0 (TpAlpcRegisterCompletionList.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x180034DD4 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
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
