/*
 * XREFs of LdrpGetNewTlsVector @ 0x1800050B4
 * Callers:
 *     LdrpHandleTlsData @ 0x180004568 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x1800295AC (LdrpAllocateTls.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

_DWORD *__fastcall LdrpGetNewTlsVector(unsigned int a1)
{
  __int64 v1; // rdi
  _DWORD *result; // rax
  _DWORD *v3; // rbx

  v1 = a1;
  result = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, 8LL * a1 + 16);
  v3 = result;
  if ( result )
  {
    *result = v1;
    memset_thunk_772440563353939046(result + 4, 0, 8 * v1);
    return v3 + 4;
  }
  return result;
}
