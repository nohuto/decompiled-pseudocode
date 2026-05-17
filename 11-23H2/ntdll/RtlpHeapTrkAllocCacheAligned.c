/*
 * XREFs of RtlpHeapTrkAllocCacheAligned @ 0x18010C1B4
 * Callers:
 *     RtlHeapTrkInitialize @ 0x18010BE00 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     NtQuerySystemInformation @ 0x1800A1570 (NtQuerySystemInformation.c)
 */

char __fastcall RtlpHeapTrkAllocCacheAligned(__int64 *a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  __int64 Heap; // rax
  __int64 v10; // r8
  unsigned int v11; // ebp
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  _DWORD v19[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0;
  if ( NtQuerySystemInformation(SystemRecommendedSharedDataAlignment, v19, 4u, 0LL) < 0 )
    return 0;
  if ( !v19[0] )
    return 0;
  Heap = RtlAllocateHeap(qword_180188A40, 0, 8 * a4);
  *a1 = Heap;
  v10 = Heap;
  if ( !Heap )
    return 0;
  v11 = v19[0] * ((unsigned int)(a3 + v19[0] - 1) / v19[0]);
  v12 = v11 * a4;
  v13 = qword_180188A40;
  if ( !is_mul_ok(v11, a4) || v12 + v19[0] < v12 )
  {
LABEL_8:
    RtlFreeHeap(v13, 0, v10);
    *a1 = 0LL;
    return 0;
  }
  v14 = RtlAllocateHeap(qword_180188A40, 8u, v12 + v19[0]);
  *a2 = v14;
  if ( !v14 )
  {
    v10 = *a1;
    v13 = qword_180188A40;
    goto LABEL_8;
  }
  v16 = v14 + v19[0] - v14 % v19[0];
  if ( a4 )
  {
    v17 = 0LL;
    do
    {
      v18 = v11 * v8++;
      *(_QWORD *)(*a1 + 8 * v17) = v16 + v18;
      v17 = v8;
    }
    while ( v8 < a4 );
  }
  return 1;
}
