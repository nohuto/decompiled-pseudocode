/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x180112B1C
 * Callers:
 *     RtlpMuiRegFreeRegistryInfo @ 0x18000A320 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegResizeStringPool @ 0x180114204 (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegFreeStringPool(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
