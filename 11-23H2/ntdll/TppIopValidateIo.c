/*
 * XREFs of TppIopValidateIo @ 0x18004BB64
 * Callers:
 *     TpCancelAsyncIoOperation @ 0x18004BB00 (TpCancelAsyncIoOperation.c)
 *     TpReleaseIoCompletion @ 0x18004BBC0 (TpReleaseIoCompletion.c)
 *     TpWaitForIoCompletion @ 0x180088250 (TpWaitForIoCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x180034C74 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x180127248 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppIopValidateIo(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
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
      if ( *(__int64 (__fastcall ***)(PVOID))(v5 + 8) == &TppIopCleanupGroupMemberVFuncs )
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
