/*
 * XREFs of RtlpHpReAllocateHeap @ 0x180041ECC
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpSegSizeInternal @ 0x180041294 (RtlpHpSegSizeInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x180042264 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x180043928 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpHpSegReAlloc @ 0x180043970 (RtlpHpSegReAlloc.c)
 *     RtlpHpExtrasGet @ 0x180045B78 (RtlpHpExtrasGet.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180063F88 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x18008777C (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeReAlloc @ 0x18008E00C (RtlpHpLargeReAlloc.c)
 *     RtlpCallInterceptRoutine @ 0x1800AE78E (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapReallocateEvent @ 0x180117400 (RtlpLogHeapReallocateEvent.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpReAllocateHeap(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        _WORD *a6)
{
  __int64 v6; // rbx
  unsigned int v7; // r15d
  int v10; // r13d
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // edx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // r13d
  unsigned int v27; // ebx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  _DWORD *SharedData; // rcx
  __int64 v32; // rcx
  __int64 v34; // rcx
  __int16 v35; // ax
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  _QWORD v38[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v39; // [rsp+48h] [rbp-18h] BYREF
  __int64 v40; // [rsp+50h] [rbp-10h]
  unsigned __int64 v41; // [rsp+58h] [rbp-8h]
  unsigned __int64 v42; // [rsp+A0h] [rbp+40h]

  v6 = a4;
  v7 = (*(_DWORD *)(a1 + 20) | a2) & 0x93000F0B;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL || !(unsigned int)RtlpHpCheckAllocationSizeLimit(a4, a1, a1 + 32) )
    return 0LL;
  v10 = 0;
  v41 = 0LL;
  v11 = -1LL;
  v39 = 0LL;
  v42 = v6;
  v40 = v6;
  if ( (_WORD)a3 )
  {
    v12 = 0;
  }
  else
  {
    v13 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a3 - qword_1801859B8) >> 20));
    if ( !v13 || (v12 = v13 - 1, v12 == 2) )
    {
      v17 = RtlpHpLargeAllocSize(a1, a3, v7, &v39);
      goto LABEL_9;
    }
  }
  v14 = 192LL * v12;
  v15 = RtlpHpSegDescriptorValidate(v14 + a1 + 320, a3);
  if ( !v15 )
  {
    v18 = -1LL;
    goto LABEL_10;
  }
  v17 = RtlpHpSegSizeInternal(v14 + a1 + 320, v15, a3, v16, (int *)&v39);
LABEL_9:
  v6 = v40;
  v18 = v17;
  v10 = v39;
  v42 = v40;
LABEL_10:
  v38[0] = v18;
  if ( v18 == -1LL )
    return v11;
  v19 = v7 & 0x10000000 | 8;
  if ( !v10 )
    v19 = v7 & 0x10000000;
  v20 = v18 + 16;
  if ( (v19 & 0x10000000) == 0 )
    v20 = v18;
  if ( (v19 & 0x20000F08) != 0 )
    v20 = ((v20 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v21 = 1LL;
  if ( v20 )
    v21 = v20;
  if ( v10 )
  {
    v34 = v18 + a3 + 16;
    if ( (v19 & 0x10000000) == 0 )
      v34 = v18 + a3;
    v22 = 16 * *(unsigned __int8 *)(((v34 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
    v21 += v22;
  }
  else
  {
    v22 = 0;
  }
  v38[1] = v21;
  v23 = v6 + 16;
  if ( (v7 & 0x10000000) == 0 )
    v23 = v6;
  if ( (v10 != 0 ? 8 : 0) != 0 )
    v23 = ((v23 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v24 = 1LL;
  if ( v23 )
    v24 = v23;
  v41 = v22 + v24;
  if ( v41 < a4 )
    return v11;
  v25 = 0LL;
  if ( a6 )
  {
    v25 = RtlpHpExtrasGet(a1, a3, v7);
    if ( (unsigned __int64)(v25 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      v35 = 0;
    else
      v35 = *(_WORD *)v25;
    *a6 = v35;
  }
  else if ( a5 )
  {
    *a5 = v18;
  }
  if ( v18 == a4 )
  {
    v11 = a3;
LABEL_44:
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v32 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v32 = 2147353472LL;
    if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v11 )
      RtlpLogHeapReallocateEvent(a1, v11, a3, v38[0], v40, 3);
    return v11;
  }
  v26 = 0;
  if ( (v7 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      if ( (v25 || (v25 = RtlpHpExtrasGet(a1, a3, v7)) != 0) && v25 != -1 )
      {
        v26 = *(_BYTE *)(v25 + 2) & 0xF;
        if ( (*(_BYTE *)(v25 + 2) & 0xF) != 0
          && (int)RtlpCallInterceptRoutine(*(_BYTE *)(v25 + 2) & 0xF, a1, a3, 5, v25 + 16) < 0 )
        {
          return v11;
        }
      }
    }
  }
  v27 = v7 & 0x12000001 | 0x1000000;
  if ( (_WORD)a3 )
  {
    v28 = 0;
LABEL_38:
    v30 = RtlpHpSegReAlloc(a1 + 192LL * v28 + 320, v27, a3, v38);
    goto LABEL_39;
  }
  v29 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a3 - qword_1801859B8) >> 20));
  if ( v29 )
  {
    v28 = v29 - 1;
    if ( v28 != 2 )
      goto LABEL_38;
  }
  v30 = RtlpHpLargeReAlloc(a1, v27, a3, v38);
LABEL_39:
  v11 = v30;
  if ( v26 )
  {
    v36 = a3;
    if ( (unsigned __int64)(v30 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v36 = v30;
    v37 = RtlpHpExtrasGet(a1, v36, v7);
    RtlpCallInterceptRoutine(v26, a1, v36, 6, v37 + 16);
  }
  if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (v7 & 2) != 0 && v42 > v18 )
      memset_thunk_772440563353939046((void *)(v18 + v11), 0, v42 - v18);
    if ( (v7 & 0x10000000) != 0 )
      *(__m128i *)(v42 + v11) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
    goto LABEL_44;
  }
  return v11;
}
