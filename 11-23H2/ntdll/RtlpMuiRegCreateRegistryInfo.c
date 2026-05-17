/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x1801129D0
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000A534 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 168LL);
  if ( result )
    *result |= 0x400u;
  return result;
}
