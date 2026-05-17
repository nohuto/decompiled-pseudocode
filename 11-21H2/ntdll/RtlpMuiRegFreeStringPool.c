/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x1801111EC
 * Callers:
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006E840 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegResizeStringPool @ 0x1801128F8 (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegFreeStringPool(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
