/*
 * XREFs of RtlpComputeMergedAcl @ 0x18008BE44
 * Callers:
 *     RtlpSetSecurityObject @ 0x180079E78 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpComputeMergedAcl2 @ 0x18008BF40 (RtlpComputeMergedAcl2.c)
 */

__int64 __fastcall RtlpComputeMergedAcl(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        PVOID *a9,
        __int64 a10)
{
  int v14; // ebp
  void *ProcessHeap; // rsi
  unsigned int v16; // eax
  PVOID Heap; // rax
  unsigned int v18; // edi
  int v20[4]; // [rsp+60h] [rbp-38h] BYREF

  v14 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v16 = 1024;
  for ( v20[0] = 1024; ; v16 = v20[0] )
  {
    Heap = RtlAllocateHeap(ProcessHeap, 0, v16);
    *a9 = Heap;
    if ( !Heap )
      break;
    v18 = RtlpComputeMergedAcl2(a1, a2, a3, a4, a5, a6, a7, a8, v20, Heap, a10);
    if ( (v18 & 0x80000000) == 0 )
    {
      if ( !v20[0] )
      {
        RtlFreeHeap(ProcessHeap, 0, *a9);
        *a9 = 0LL;
      }
      return v18;
    }
    RtlFreeHeap(ProcessHeap, 0, *a9);
    *a9 = 0LL;
    if ( v18 != -1073741789 )
      return v18;
    if ( (unsigned int)++v14 >= 2 )
      return v18;
  }
  return 3221225495LL;
}
