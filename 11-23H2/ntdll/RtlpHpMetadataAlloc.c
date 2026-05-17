/*
 * XREFs of RtlpHpMetadataAlloc @ 0x180065DE8
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1800642B8 (RtlpHpLargeAlloc.c)
 *     RtlpHpTagContextAllocateTag @ 0x180065AB4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagRunOnceInit @ 0x180065C60 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpHeapAllocate @ 0x1800663EC (RtlpHpHeapAllocate.c)
 *     RtlpHpPerHeapStackTraceInitialize @ 0x180116C10 (RtlpHpPerHeapStackTraceInitialize.c)
 *     RtlpHpStackDbAllocRoutine @ 0x180116D20 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x180116E80 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180116F94 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180117620 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x180122CE8 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x180034D48 (RtlpHpSegAlloc.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1800666B0 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpMetadataHeapStart @ 0x180066CA4 (RtlpHpMetadataHeapStart.c)
 *     RtlpHpAllocateHeap @ 0x180066CD8 (RtlpHpAllocateHeap.c)
 */

__int64 __fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int64 v4; // xmm0_8
  __int64 v8; // rax
  char v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // r14
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = *a4;
  v4 = v14;
  v8 = RtlpHpMetadataHeapCtxGet(&v14, a2);
  *(_QWORD *)&v14 = v4;
  v9 = BYTE1(v4);
  v10 = 0LL;
  v11 = (_QWORD *)v8;
  BYTE3(v14) = 0;
  *((_QWORD *)&v14 + 1) = 0LL;
  if ( BYTE1(v4) >= 3u )
    v9 = 3;
  BYTE1(v14) = v9;
  if ( (int)RtlpHpMetadataHeapStart(v8, &v14) >= 0 )
  {
    if ( a3 )
      return RtlpHpSegAlloc(
               *v11 + 320LL + (*(unsigned int *)(*v11 + 336LL) < a1 ? 0xC0 : 0),
               a1,
               a1,
               a2,
               a2 < a1 ? 83886080 : 0x1000000);
    else
      return RtlpHpAllocateHeap(*v11, a1, 0x1000000LL, 0LL);
  }
  return v10;
}
