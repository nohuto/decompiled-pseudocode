/*
 * XREFs of RtlpHpMetadataAlloc @ 0x1800557D4
 * Callers:
 *     RtlpHpHeapAllocate @ 0x180055288 (RtlpHpHeapAllocate.c)
 *     RtlpHpTagRunOnceInit @ 0x1800568F0 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpTagContextAllocateTag @ 0x18005867C (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpLargeAlloc @ 0x180058D3C (RtlpHpLargeAlloc.c)
 *     RtlpHpPerHeapStackTraceInitialize @ 0x180115380 (RtlpHpPerHeapStackTraceInitialize.c)
 *     RtlpHpStackDbAllocRoutine @ 0x180115490 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x1801155F0 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180115704 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180115D90 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x1800184F8 (RtlpHpSegAlloc.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180055544 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpMetadataHeapStart @ 0x1800558D4 (RtlpHpMetadataHeapStart.c)
 *     RtlpHpAllocateHeap @ 0x180055A4C (RtlpHpAllocateHeap.c)
 */

__int64 __fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int64 v4; // xmm0_8
  char *v8; // rax
  char v9; // r8
  __int64 v10; // rbx
  char *v11; // r14
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = *a4;
  v4 = v14;
  v8 = RtlpHpMetadataHeapCtxGet(&v14);
  *(_QWORD *)&v14 = v4;
  v9 = BYTE1(v4);
  v10 = 0LL;
  v11 = v8;
  BYTE3(v14) = 0;
  *((_QWORD *)&v14 + 1) = 0LL;
  if ( BYTE1(v4) >= 3u )
    v9 = 3;
  BYTE1(v14) = v9;
  if ( (int)RtlpHpMetadataHeapStart(v8, &v14) >= 0 )
  {
    if ( a3 )
      return RtlpHpSegAlloc(
               *(_QWORD *)v11 + 320LL + (*(unsigned int *)(*(_QWORD *)v11 + 336LL) < a1 ? 0xC0 : 0),
               a1,
               a1,
               a2,
               a2 < a1 ? 83886080 : 0x1000000);
    else
      return RtlpHpAllocateHeap(*(_QWORD *)v11, a1, 0x1000000LL, 0LL);
  }
  return v10;
}
