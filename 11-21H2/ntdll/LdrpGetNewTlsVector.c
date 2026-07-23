/*
 * XREFs of LdrpGetNewTlsVector @ 0x180030D50
 * Callers:
 *     LdrpHandleTlsData @ 0x180033A94 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180042A74 (LdrpAllocateTls.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     memset @ 0x1800AAE00 (memset.c)
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
    memset(result + 4, 0, 8 * v1);
    return v3 + 4;
  }
  return result;
}
