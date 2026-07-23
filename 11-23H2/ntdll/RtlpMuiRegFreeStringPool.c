/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x180112AEC
 * Callers:
 *     RtlpMuiRegFreeRegistryInfo @ 0x18000A320 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegResizeStringPool @ 0x1801141D4 (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

LOGICAL __fastcall RtlpMuiRegFreeStringPool(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return result;
}
