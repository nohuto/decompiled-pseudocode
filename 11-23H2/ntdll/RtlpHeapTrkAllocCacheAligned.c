/*
 * XREFs of RtlpHeapTrkAllocCacheAligned @ 0x18010C184
 * Callers:
 *     RtlHeapTrkInitialize @ 0x18010BDD0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     NtQuerySystemInformation @ 0x1800A1570 (NtQuerySystemInformation.c)
 */

char __fastcall RtlpHeapTrkAllocCacheAligned(void **a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  PVOID Heap; // rax
  void *v10; // r8
  unsigned int v11; // ebp
  unsigned __int64 v12; // rax
  PVOID v13; // rcx
  unsigned __int64 v14; // rax
  char *v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0;
  if ( NtQuerySystemInformation(SystemRecommendedSharedDataAlignment, v19, 4u, 0LL) < 0 )
    return 0;
  if ( !v19[0] )
    return 0;
  Heap = RtlAllocateHeap(HeapHandle, 0, 8 * a4);
  *a1 = Heap;
  v10 = Heap;
  if ( !Heap )
    return 0;
  v11 = v19[0] * ((a3 + v19[0] - 1) / v19[0]);
  v12 = v11 * a4;
  v13 = HeapHandle;
  if ( !is_mul_ok(v11, a4) || v12 + v19[0] < v12 )
  {
LABEL_8:
    RtlFreeHeap(v13, 0, v10);
    *a1 = 0LL;
    return 0;
  }
  v14 = (unsigned __int64)RtlAllocateHeap(HeapHandle, 8u, v12 + v19[0]);
  *a2 = v14;
  if ( !v14 )
  {
    v10 = *a1;
    v13 = HeapHandle;
    goto LABEL_8;
  }
  v16 = (char *)(v14 + v19[0] - v14 % v19[0]);
  if ( a4 )
  {
    v17 = 0LL;
    do
    {
      v18 = v11 * v8++;
      *((_QWORD *)*a1 + v17) = &v16[v18];
      v17 = v8;
    }
    while ( v8 < a4 );
  }
  return 1;
}
