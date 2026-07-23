/*
 * XREFs of RtlGetCriticalSectionRecursionCount @ 0x1800F4B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlGetCriticalSectionRecursionCount(PRTL_CRITICAL_SECTION CriticalSection)
{
  if ( CriticalSection->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
    return CriticalSection->RecursionCount;
  else
    return 0;
}
