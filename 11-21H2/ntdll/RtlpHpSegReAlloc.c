/*
 * XREFs of RtlpHpSegReAlloc @ 0x18002E070
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18002DBE0 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x180017F70 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCommit @ 0x180023E30 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSizeHeap @ 0x180027310 (RtlpHpSizeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegDescriptorValidate @ 0x18002DF6C (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegFree @ 0x18002E414 (RtlpHpSegFree.c)
 *     RtlpHpAllocateHeapInternal @ 0x18002E5E4 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x18002EA00 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpVsContextGrowInPlace @ 0x18002F118 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpExtrasGet @ 0x18003048C (RtlpHpExtrasGet.c)
 *     RtlpHpLargeFree @ 0x180058AC4 (RtlpHpLargeFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059108 (RtlCSparseBitmapBitmaskRead.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlpCallInterceptRoutine @ 0x1800FEA3C (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFreeEvent @ 0x180116F14 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpSegReAlloc(__int64 a1, unsigned int a2, char *Src, __int64 a4)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // al
  unsigned int v12; // ebp
  _DWORD *v13; // rbp
  void *HeapInternal; // rax
  void *v15; // r14
  size_t v16; // r8
  char *v17; // rdx
  unsigned __int8 *v18; // rdx
  __int64 v19; // rcx
  int v20; // edx
  int v21; // r8d
  unsigned int v22; // edi
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbx
  char *v27; // r11
  char *v28; // rcx
  unsigned int v29; // r8d
  char *v30; // rdx
  unsigned __int8 *v31; // rdx
  char *v32; // rcx
  __int64 v33; // rax
  char v34; // cl
  BOOL v35; // ebx
  __int64 v36; // rcx
  _BYTE v37[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = RtlpHpSegDescriptorValidate(a1, (unsigned __int64)Src);
  if ( !v8 )
    return -1LL;
  v9 = *(_QWORD *)(a4 + 32);
  v10 = (v9 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v10 << 12) < v9 )
    return 0LL;
  v11 = *(_BYTE *)(v8 + 24) & 0xC;
  v12 = (unsigned int)(v10 + (1 << *(_BYTE *)(a1 + 9)) - 1) >> *(_BYTE *)(a1 + 9);
  if ( v11 >= 8u )
  {
    if ( v11 == 12 && *(_QWORD *)(a4 + 24) > *(_QWORD *)a4 && v9 <= 0x20000 )
    {
      v25 = RtlpHpVsContextGrowInPlace(*(PRTL_SRWLOCK *)(a1 + 32), a2);
      if ( v25 )
      {
        if ( *(_DWORD *)(a4 + 16) )
        {
          v27 = &Src[*(_QWORD *)a4 + 16];
          if ( (a2 & 0x10000000) == 0 )
            v27 = &Src[*(_QWORD *)a4];
          v28 = &Src[*(_QWORD *)(a4 + 24) + 16];
          if ( (a2 & 0x10000000) == 0 )
            v28 = &Src[*(_QWORD *)(a4 + 24)];
          memmove(
            (void *)((unsigned __int64)(v28 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
            (const void *)((unsigned __int64)(v27 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
            16 * (*(unsigned __int8 *)(((unsigned __int64)(v27 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3) + 1LL));
          RtlpHpExtrasSetPresent(*(_QWORD *)(a1 + 56), v25, a2);
        }
        return v25;
      }
    }
LABEL_5:
    if ( (a2 & 0x2000000) == 0 )
    {
      v13 = *(_DWORD **)(a1 + 56);
      HeapInternal = (void *)RtlpHpAllocateHeapInternal(v13, (__int64)v37);
      v15 = HeapInternal;
      if ( !HeapInternal )
        return (__int64)v15;
      v16 = *(_QWORD *)a4;
      if ( *(_QWORD *)a4 >= *(_QWORD *)(a4 + 24) )
        v16 = *(_QWORD *)(a4 + 24);
      memmove(HeapInternal, Src, v16);
      if ( *(_DWORD *)(a4 + 16) )
      {
        v17 = &Src[*(_QWORD *)a4 + 16];
        if ( (a2 & 0x10000000) == 0 )
          v17 = &Src[*(_QWORD *)a4];
        v18 = (unsigned __int8 *)((unsigned __int64)(v17 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
        v19 = (__int64)v15 + *(_QWORD *)(a4 + 24) + 16;
        if ( (a2 & 0x10000000) == 0 )
          v19 = (__int64)v15 + *(_QWORD *)(a4 + 24);
        memmove((void *)((v19 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v18, 16 * (v18[3] + 1LL));
        RtlpHpExtrasSetPresent(v13, v15, a2);
      }
      v20 = 0;
      v21 = v13[55];
      if ( v21 )
        LOBYTE(v20) = v21 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
      v22 = (a2 | v13[5]) & 0x11000000 | 1;
      if ( !v20 )
        v22 = (a2 | v13[5]) & 0x11000001;
      if ( (v22 & 0x1000000) == 0 )
      {
        if ( v13[6] )
        {
          v33 = RtlpHpExtrasGet(v13, Src, v22);
          if ( (unsigned __int64)(v33 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v34 = *(_BYTE *)(v33 + 2);
            if ( (v34 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v34 & 0xF, (_DWORD)v13, (_DWORD)Src, 3, v33 + 16) < 0 )
              return (__int64)v15;
          }
        }
      }
      if ( (v13[5] & 0x10000000) != 0 && RtlpHpSizeHeap((__int64)v13, (unsigned __int64)Src, v22) == -1 )
      {
        RtlpLogHeapFailure(9, (_DWORD)v13, (_DWORD)Src, 0, 0LL, 0LL);
      }
      else
      {
        if ( (_WORD)Src )
        {
          v23 = 0;
        }
        else
        {
          v24 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((unsigned __int64)&Src[-qword_18017B718] >> 20));
          if ( !v24 || (v23 = v24 - 1, v23 == 2) )
          {
            v35 = RtlpHpLargeFree(v13, Src, v22) != 0;
            if ( RtlGetCurrentServiceSessionId() )
              v36 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v36 = 2147353472LL;
            if ( *(_BYTE *)v36 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v35 )
              RtlpLogHeapFreeEvent(v13, Src, 3LL);
            return (__int64)v15;
          }
        }
        RtlpHpSegFree(&v13[48 * v23 + 80], Src, v22);
      }
      return (__int64)v15;
    }
    return 0LL;
  }
  if ( v12 > *(unsigned __int8 *)(v8 + 31) )
    goto LABEL_5;
  v29 = (unsigned __int16)~*(_WORD *)(v8 + 28);
  if ( (unsigned int)v10 > v29 && (int)RtlpHpSegPageRangeCommit(a1, v8, v29, (unsigned int)v10 - v29, 0, 0LL) < 0 )
    return 0LL;
  if ( *(_DWORD *)(a4 + 16) )
  {
    v30 = &Src[*(_QWORD *)a4 + 16];
    if ( (a2 & 0x10000000) == 0 )
      v30 = &Src[*(_QWORD *)a4];
    v31 = (unsigned __int8 *)((unsigned __int64)(v30 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v32 = &Src[*(_QWORD *)(a4 + 24) + 16];
    if ( (a2 & 0x10000000) == 0 )
      v32 = &Src[*(_QWORD *)(a4 + 24)];
    memmove((void *)((unsigned __int64)(v32 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v31, 16 * (v31[3] + 1LL));
  }
  if ( v12 < *(unsigned __int8 *)(v8 + 31) )
    RtlpHpSegPageRangeShrink(a1, v8, v12, a2);
  *(_DWORD *)(v8 + 4) = (v12 << *(_BYTE *)(a1 + 8)) - *(_DWORD *)(a4 + 24);
  return (__int64)Src;
}
