/*
 * XREFs of TpReleaseCleanupGroup @ 0x180085F50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

void __cdecl TpReleaseCleanupGroup(PTP_CLEANUP_GROUP CleanupGroup)
{
  _PEB_LDR_DATA *Ldr; // rdx

  if ( !CleanupGroup )
    goto LABEL_7;
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return;
  if ( _InterlockedExchange((volatile __int32 *)CleanupGroup + 1, 1) )
  {
LABEL_7:
    TppRaiseInvalidParameter(CleanupGroup, Ldr, CleanupGroup);
    return;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)CleanupGroup, 0xFFFFFFFF) == 1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, CleanupGroup);
}
