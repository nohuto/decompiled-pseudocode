/*
 * XREFs of RtlpHpReAllocateHeap @ 0x18002DBE0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpSegSizeInternal @ 0x18002D0AC (RtlpHpSegSizeInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x18002DF6C (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x18002E028 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpHpSegReAlloc @ 0x18002E070 (RtlpHpSegReAlloc.c)
 *     RtlpHpSizeHeapInternal @ 0x18002E8C4 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpExtrasGet @ 0x18003048C (RtlpHpExtrasGet.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059108 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x18008A334 (RtlpHpLargeAllocSize.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpCallInterceptRoutine @ 0x1800FEA3C (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapReallocateEvent @ 0x180117014 (RtlpLogHeapReallocateEvent.c)
 *     RtlpHpLargeReAlloc @ 0x18011FE14 (RtlpHpLargeReAlloc.c)
 */

__int64 __fastcall RtlpHpReAllocateHeap(__int64 a1, int a2, char *a3, unsigned __int64 a4, _QWORD *a5, _WORD *a6)
{
  unsigned int v7; // r12d
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r13
  int v21; // eax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // r9d
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  char *v31; // rax
  char *v32; // rcx
  __int16 v33; // ax
  unsigned int v34; // ebx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  _DWORD *SharedData; // rcx
  __int64 v40; // rcx
  bool v42; // zf
  int v43; // r10d
  char *v44; // rbx
  __int64 v45; // rax
  unsigned __int64 v46; // [rsp+30h] [rbp-40h]
  _QWORD v47[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v48; // [rsp+50h] [rbp-20h] BYREF
  __int64 v49; // [rsp+58h] [rbp-18h]
  unsigned __int64 v50; // [rsp+60h] [rbp-10h]
  int v51; // [rsp+B0h] [rbp+40h]
  int v52; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int64 v53; // [rsp+C8h] [rbp+58h]

  v53 = a4;
  v7 = (a2 | *(_DWORD *)(a1 + 20)) & 0x93000F0B;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL || !(unsigned int)RtlpHpCheckAllocationSizeLimit(a4, a1, a1 + 32) )
    return 0LL;
  v10 = a4;
  v11 = 0;
  v50 = 0LL;
  v12 = -1LL;
  v46 = v10;
  v49 = v10;
  v48 = 0LL;
  if ( (_WORD)a3 )
  {
    v13 = 0;
  }
  else
  {
    v14 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((unsigned __int64)&a3[-qword_18017B718] >> 20));
    if ( !v14 || (v13 = v14 - 1, v13 == 2) )
    {
      v18 = RtlpHpLargeAllocSize(a1, a3, v7, &v48);
      goto LABEL_9;
    }
  }
  v15 = 192LL * v13;
  v16 = RtlpHpSegDescriptorValidate(v15 + a1 + 320, a3);
  if ( !v16 )
  {
    v19 = v46;
    v20 = -1LL;
    goto LABEL_10;
  }
  v18 = RtlpHpSegSizeInternal(v15 + a1 + 320, v16, (unsigned __int64)a3, v17, (int *)&v48);
LABEL_9:
  v19 = v49;
  v20 = v18;
  v11 = v48;
  v46 = v49;
LABEL_10:
  v47[0] = v20;
  if ( v20 == -1LL )
    return v12;
  v51 = v7 & 0x10000000;
  v21 = v7 & 0x10000000 | 8;
  if ( !v11 )
    v21 = v7 & 0x10000000;
  v22 = v20 + 16;
  if ( (v21 & 0x10000000) == 0 )
    v22 = v20;
  if ( (v21 & 0x20000F08) != 0 )
    v22 = ((v22 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v23 = 1LL;
  if ( v22 )
    v23 = v22;
  if ( v11 )
  {
    v24 = (__int64)&a3[v20 + 16];
    if ( (v21 & 0x10000000) == 0 )
      v24 = (__int64)&a3[v20];
    v25 = 16 * *(unsigned __int8 *)(((v24 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
    v23 += v25;
  }
  else
  {
    v25 = 0;
  }
  v47[1] = v23;
  v26 = v19 + 16;
  if ( (v7 & 0x10000000) == 0 )
    v26 = v19;
  if ( (v11 != 0 ? 8 : 0) != 0 )
    v26 = ((v26 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v27 = 1LL;
  if ( v26 )
    v27 = v26;
  v50 = v25 + v27;
  v28 = v53;
  if ( v50 < v53 )
    return v12;
  v29 = 0LL;
  if ( a6 )
  {
    v30 = RtlpHpSizeHeapInternal(a1, a3, v7, &v52);
    if ( v30 == -1 )
    {
      v29 = -1LL;
    }
    else
    {
      if ( a5 )
        *a5 = v30;
      if ( v52 )
      {
        v31 = &a3[v30];
        v32 = v31 + 16;
        if ( !v51 )
          v32 = v31;
        v29 = (unsigned __int64)(v32 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v29 )
        {
          v33 = *(_WORD *)v29;
LABEL_39:
          *a6 = v33;
          goto LABEL_40;
        }
      }
      else
      {
        v29 = 0LL;
      }
    }
    v33 = 0;
    goto LABEL_39;
  }
  if ( a5 )
    *a5 = v20;
LABEL_40:
  if ( v20 == v28 )
  {
    v12 = (__int64)a3;
LABEL_53:
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v40 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v40 = 2147353472LL;
    if ( *(_BYTE *)v40 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v12 )
      RtlpLogHeapReallocateEvent(a1, v12, (_DWORD)a3, v47[0], v49, 3);
    return v12;
  }
  v52 = 0;
  if ( (v7 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      if ( (v29 || (v29 = RtlpHpExtrasGet(a1, a3, v7)) != 0) && v29 != -1LL )
      {
        v42 = (*(_BYTE *)(v29 + 2) & 0xF) == 0;
        v43 = *(_BYTE *)(v29 + 2) & 0xF;
        v52 = v43;
        if ( !v42 && (int)RtlpCallInterceptRoutine(v43, a1, (_DWORD)a3, 5, v29 + 16) < 0 )
          return v12;
      }
    }
  }
  v34 = v7 & 0x12000001 | 0x1000000;
  if ( (_WORD)a3 )
  {
    v35 = 0;
LABEL_47:
    v37 = RtlpHpSegReAlloc((int)a1 + 192 * v35 + 320, v34, a3);
    goto LABEL_48;
  }
  v36 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((unsigned __int64)&a3[-qword_18017B718] >> 20));
  if ( v36 )
  {
    v35 = v36 - 1;
    if ( v35 != 2 )
      goto LABEL_47;
  }
  v37 = RtlpHpLargeReAlloc(a1, v34, a3, v47);
LABEL_48:
  v12 = v37;
  if ( v52 )
  {
    v44 = a3;
    if ( (unsigned __int64)(v37 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v44 = (char *)v37;
    v45 = RtlpHpExtrasGet(a1, v44, v7);
    RtlpCallInterceptRoutine(v52, a1, (_DWORD)v44, 6, v45 + 16);
  }
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v38 = v46;
    if ( (v7 & 2) != 0 && v46 > v20 )
    {
      memset((void *)(v12 + v20), 0, v46 - v20);
      v38 = v46;
    }
    if ( v51 )
      *(__m128i *)(v38 + v12) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
    goto LABEL_53;
  }
  return v12;
}
