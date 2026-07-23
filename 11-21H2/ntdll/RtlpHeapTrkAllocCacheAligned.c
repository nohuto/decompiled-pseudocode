/*
 * XREFs of RtlpHeapTrkAllocCacheAligned @ 0x18010AB3C
 * Callers:
 *     RtlHeapTrkInitialize @ 0x18010A7A0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     NtQuerySystemInformation @ 0x1800A4730 (NtQuerySystemInformation.c)
 */

char __fastcall RtlpHeapTrkAllocCacheAligned(void **a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  PVOID Heap; // rax
  void *v10; // r8
  unsigned int v11; // ebp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  char *v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned int v18[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0;
  if ( NtQuerySystemInformation(SystemRecommendedSharedDataAlignment, v18, 4u, 0LL) < 0 )
    return 0;
  if ( !v18[0] )
    return 0;
  Heap = RtlAllocateHeap(HeapHandle, 0, 8 * a4);
  *a1 = Heap;
  v10 = Heap;
  if ( !Heap )
    return 0;
  v11 = v18[0] * ((a3 + v18[0] - 1) / v18[0]);
  v12 = v11 * a4;
  if ( !is_mul_ok(v11, a4) || v12 + v18[0] < v12 )
  {
LABEL_8:
    RtlFreeHeap(HeapHandle, 0, v10);
    *a1 = 0LL;
    return 0;
  }
  v13 = (unsigned __int64)RtlAllocateHeap(HeapHandle, 8u, v12 + v18[0]);
  *a2 = v13;
  if ( !v13 )
  {
    v10 = *a1;
    goto LABEL_8;
  }
  v15 = (char *)(v13 + v18[0] - v13 % v18[0]);
  if ( a4 )
  {
    v16 = 0LL;
    do
    {
      v17 = v11 * v8++;
      *((_QWORD *)*a1 + v16) = &v15[v17];
      v16 = v8;
    }
    while ( v8 < a4 );
  }
  return 1;
}
