/*
 * XREFs of RtlpHpSegReAlloc @ 0x180043970
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180041ECC (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x1800345B8 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegAlloc @ 0x180034EA8 (RtlpHpSegAlloc.c)
 *     RtlpHpSizeHeap @ 0x18003AE30 (RtlpHpSizeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSlotAllocate @ 0x18003E3B0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegDescriptorValidate @ 0x180042264 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegFree @ 0x180043E44 (RtlpHpSegFree.c)
 *     RtlpHpExtrasGet @ 0x180045B78 (RtlpHpExtrasGet.c)
 *     RtlpHpExtrasSetPresent @ 0x180045D20 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSegPageRangeCommit @ 0x180046E10 (RtlpHpSegPageRangeCommit.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180063F88 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x180064234 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1800643E8 (RtlpHpLargeAlloc.c)
 *     RtlpHpVsContextAllocate @ 0x180066EF4 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x180066FD8 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpVsContextGrowInPlace @ 0x1800719D4 (RtlpHpVsContextGrowInPlace.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpCallInterceptRoutine @ 0x1800AE78E (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFreeEvent @ 0x180117300 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpSegReAlloc(__int64 a1, unsigned int a2, const void *a3, __int64 a4)
{
  void *v8; // r12
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int8 v12; // al
  unsigned int v13; // ebp
  __int64 v14; // rbx
  unsigned __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // r10
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  size_t v22; // r8
  int v23; // ecx
  unsigned int v24; // edi
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v29; // rdx
  unsigned __int8 *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r11
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int8 *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  char v40; // cl
  BOOL v41; // edi
  __int64 v42; // rcx
  __int64 v43; // [rsp+30h] [rbp-38h]

  v8 = 0LL;
  v9 = RtlpHpSegDescriptorValidate(a1, (unsigned __int64)a3);
  if ( !v9 )
    return -1LL;
  v10 = *(_QWORD *)(a4 + 32);
  v11 = (v10 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v11 << 12) < v10 )
    return (__int64)v8;
  v12 = *(_BYTE *)(v9 + 24) & 0xC;
  v13 = (unsigned int)(v11 + (1 << *(_BYTE *)(a1 + 9)) - 1) >> *(_BYTE *)(a1 + 9);
  if ( v12 >= 8u )
  {
    if ( v12 == 12 && *(_QWORD *)(a4 + 24) > *(_QWORD *)a4 && v10 <= 0x20000 )
    {
      v27 = RtlpHpVsContextGrowInPlace(*(PRTL_SRWLOCK *)(a1 + 32), a2);
      if ( v27 )
      {
        if ( *(_DWORD *)(a4 + 16) )
        {
          v33 = (__int64)a3 + *(_QWORD *)a4 + 16;
          if ( (a2 & 0x10000000) == 0 )
            v33 = (__int64)a3 + *(_QWORD *)a4;
          v34 = (__int64)a3 + *(_QWORD *)(a4 + 24) + 16;
          if ( (a2 & 0x10000000) == 0 )
            v34 = (__int64)a3 + *(_QWORD *)(a4 + 24);
          memmove(
            (void *)((v34 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
            (const void *)((v33 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
            16 * (*(unsigned __int8 *)(((v33 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3) + 1LL));
          RtlpHpExtrasSetPresent(*(_QWORD *)(a1 + 56), v27, a2);
        }
        return v27;
      }
    }
LABEL_5:
    if ( (a2 & 0x2000000) != 0 )
      return (__int64)v8;
    v14 = *(_QWORD *)(a1 + 56);
    v15 = *(_QWORD *)(a4 + 32);
    v16 = *(_QWORD *)(a4 + 24);
    if ( v15 > (unsigned int)*(unsigned __int16 *)(v14 + 956) - 16 )
      goto LABEL_35;
    v17 = (unsigned int)(v15 + 2);
    if ( (_DWORD)v16 == (_DWORD)v15 )
      v17 = (unsigned int)v15;
    if ( (v18 = v14 + 896,
          v43 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v17 + 15) >> 4],
          (*(_QWORD *)(v14 + 896 + 8 * v43 + 128) & 1) != 0)
      && !(unsigned int)RtlpHpLfhBucketUpdateStats(v14 + 896, v17, 1LL)
      || ((v19 = *(_QWORD *)(v18 + 8 * v43 + 128),
           v20 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6,
           *(_BYTE *)(v19 + 2) != 1)
        ? (v21 = *(_BYTE *)(v20 + BYTE1(NtCurrentTeb()->HeapData) + v19))
        : (v21 = 0),
          v8 = (void *)RtlpHpLfhSlotAllocate(
                         v14 + 896,
                         *(_RTL_SRWLOCK **)(v18 + 8 * v43 + 128),
                         *(_RTL_SRWLOCK **)(*(unsigned __int8 *)(v14 + 952)
                                          - (unsigned __int64)((*(_BYTE *)(v14 + 952) - 1) & 7)
                                          + v20
                                          + 7
                                          + 8LL * v21
                                          + v19),
                         v16,
                         a2),
          v8 == (void *)-1LL) )
    {
LABEL_35:
      if ( v15 > 0x20000 )
      {
        if ( v15 > *(unsigned int *)(v14 + 528) )
        {
          v32 = RtlpHpLargeAlloc((PVOID)v14);
        }
        else
        {
          v35 = v14 + 320;
          if ( v15 > *(unsigned int *)(v14 + 336) )
            v35 = v14 + 512;
          v32 = RtlpHpSegAlloc(v35, v16, v15, v15, a2);
        }
      }
      else
      {
        v32 = RtlpHpVsContextAllocate(v14 + 704, (unsigned int)v16, (unsigned int)v15, a2);
      }
      v8 = (void *)v32;
    }
    if ( !v8 )
      return (__int64)v8;
    v22 = *(_QWORD *)a4;
    if ( *(_QWORD *)a4 >= *(_QWORD *)(a4 + 24) )
      v22 = *(_QWORD *)(a4 + 24);
    memmove(v8, a3, v22);
    if ( *(_DWORD *)(a4 + 16) )
    {
      v29 = (__int64)a3 + *(_QWORD *)a4 + 16;
      if ( (a2 & 0x10000000) == 0 )
        v29 = (__int64)a3 + *(_QWORD *)a4;
      v30 = (unsigned __int8 *)((v29 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v31 = (__int64)v8 + *(_QWORD *)(a4 + 24) + 16;
      if ( (a2 & 0x10000000) == 0 )
        v31 = (__int64)v8 + *(_QWORD *)(a4 + 24);
      memmove((void *)((v31 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v30, 16 * (v30[3] + 1LL));
      RtlpHpExtrasSetPresent(v14, v8, a2);
    }
    v23 = *(_DWORD *)(v14 + 220);
    v24 = (*(_DWORD *)(v14 + 20) | a2) & 0x11000001;
    if ( v23 && v23 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v24 |= 1u;
    if ( (v24 & 0x1000000) == 0 )
    {
      if ( *(_DWORD *)(v14 + 24) )
      {
        v39 = RtlpHpExtrasGet(v14, a3, v24);
        if ( (unsigned __int64)(v39 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          v40 = *(_BYTE *)(v39 + 2);
          if ( (v40 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v40 & 0xF, v14, (_DWORD)a3, 3, v39 + 16) < 0 )
            return (__int64)v8;
        }
      }
    }
    if ( (*(_DWORD *)(v14 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(v14, (unsigned __int64)a3, v24) == -1 )
    {
      RtlpLogHeapFailure(9, v14, (_DWORD)a3, 0, 0LL, 0LL);
    }
    else
    {
      if ( (_WORD)a3 )
      {
        v25 = 0;
      }
      else
      {
        v26 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * (((unsigned __int64)a3 - qword_1801859B8) >> 20));
        if ( !v26 || (v25 = v26 - 1, v25 == 2) )
        {
          v41 = RtlpHpLargeFree(v14, a3, v24) != 0;
          if ( RtlGetCurrentServiceSessionId() )
            v42 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v42 = 2147353472LL;
          if ( *(_BYTE *)v42 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v41 )
            RtlpLogHeapFreeEvent(v14, a3, 3LL);
          return (__int64)v8;
        }
      }
      RtlpHpSegFree(v14 + 192LL * v25 + 320, a3, v24);
    }
    return (__int64)v8;
  }
  if ( v13 > *(unsigned __int8 *)(v9 + 31) )
    goto LABEL_5;
  if ( (unsigned int)v11 > (unsigned __int16)~*(_WORD *)(v9 + 28) && (int)RtlpHpSegPageRangeCommit(a1, 0, 0LL) < 0 )
    return (__int64)v8;
  if ( *(_DWORD *)(a4 + 16) )
  {
    v36 = (__int64)a3 + *(_QWORD *)a4 + 16;
    if ( (a2 & 0x10000000) == 0 )
      v36 = (__int64)a3 + *(_QWORD *)a4;
    v37 = (unsigned __int8 *)((v36 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v38 = (__int64)a3 + *(_QWORD *)(a4 + 24) + 16;
    if ( (a2 & 0x10000000) == 0 )
      v38 = (__int64)a3 + *(_QWORD *)(a4 + 24);
    memmove((void *)((v38 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v37, 16 * (v37[3] + 1LL));
  }
  if ( v13 < *(unsigned __int8 *)(v9 + 31) )
    RtlpHpSegPageRangeShrink(a1, v9, v13, a2);
  *(_DWORD *)(v9 + 4) = (v13 << *(_BYTE *)(a1 + 8)) - *(_DWORD *)(a4 + 24);
  return (__int64)a3;
}
