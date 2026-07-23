/*
 * XREFs of RtlpHpFreeHeap @ 0x180027850
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x180055A4C (RtlpHpAllocateHeap.c)
 *     RtlpHpMetadataFree @ 0x180056AB0 (RtlpHpMetadataFree.c)
 *     RtlpHpReallocMove @ 0x18011FA24 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x180017F70 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x180018CE0 (RtlpHpVsContextFree.c)
 *     RtlpHpSizeHeap @ 0x180027310 (RtlpHpSizeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180028470 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSizeHeapInternal @ 0x18002E8C4 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpExtrasGet @ 0x18003048C (RtlpHpExtrasGet.c)
 *     RtlpHpLargeFree @ 0x180058AC4 (RtlpHpLargeFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059108 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpCallInterceptRoutine @ 0x1800FEA3C (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFreeEvent @ 0x180116F14 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x180120184 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpFreeHeap(_DWORD *a1, unsigned __int64 a2, int a3, _QWORD *a4, __int64 a5)
{
  int v6; // ebx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  _WORD *v11; // r15
  unsigned int v12; // esi
  __int64 v13; // r12
  int v14; // eax
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 DescriptorValidateSafe; // rax
  char v18; // r9
  char v19; // r9
  unsigned __int8 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned int v22; // esi
  _DWORD *SharedData; // rcx
  __int64 v24; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  signed __int64 v28; // rax
  signed __int64 v29; // rcx
  __int64 v30; // rax
  BOOL v31; // r14d
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int16 v34; // ax
  char v35; // al
  __int64 v36; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  v8 = a3 | a1[5] & 0x11000001;
  v9 = 0;
  v10 = a1[55];
  if ( v10 )
    LOBYTE(v9) = v10 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v11 = (_WORD *)a5;
  v12 = v8 | 1;
  v13 = 0LL;
  if ( !v9 )
    v12 = v8;
  if ( a5 )
  {
    v13 = RtlpHpExtrasGet(a1, a2, v12);
    if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      v34 = 0;
    else
      v34 = *(_WORD *)v13;
    *v11 = v34;
  }
  else if ( a4 )
  {
    *a4 = RtlpHpSizeHeapInternal(a1, a2, v12, 0LL);
  }
  if ( (v12 & 0x1000000) == 0 )
  {
    if ( a1[6] )
    {
      if ( (v13 || (v13 = RtlpHpExtrasGet(a1, a2, v12)) != 0) && v13 != -1 )
      {
        v35 = *(_BYTE *)(v13 + 2);
        if ( (v35 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v35 & 0xF, (_DWORD)a1, a2, 3, v13 + 16) < 0 )
          return 0LL;
      }
    }
  }
  if ( (a1[5] & 0x10000000) != 0 && RtlpHpSizeHeap((__int64)a1, a2, v12) == -1 )
  {
    RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
    return 0LL;
  }
  if ( (_WORD)a2 )
  {
    v14 = 0;
LABEL_13:
    v15 = (__int64)&a1[48 * v14 + 80];
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v15, a2);
    }
    else
    {
      v16 = a2 & *(_QWORD *)v15;
      if ( (v15 ^ RtlpHpHeapGlobals ^ v16 ^ *(_QWORD *)(v16 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        DescriptorValidateSafe = v16 + 32 * ((unsigned __int64)(unsigned int)(a2 - v16) >> *(_BYTE *)(v15 + 8));
      else
        DescriptorValidateSafe = 0LL;
    }
    if ( DescriptorValidateSafe )
    {
      v18 = *(_BYTE *)(DescriptorValidateSafe + 24);
      if ( (v18 & 1) != 0 )
      {
        if ( (v18 & 2) != 0 )
        {
          v20 = v18 & 0xC;
          if ( v20 >= 8u || (((1 << *(_BYTE *)(v15 + 8)) - 1) & a2) == 0 )
          {
LABEL_21:
            v21 = (DescriptorValidateSafe & *(_QWORD *)v15)
                + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v15)) >> 5 << *(_BYTE *)(v15 + 8));
            if ( a2 <= v21 )
            {
              RtlpHpSegPageRangeShrink(v15, DescriptorValidateSafe, 0, v12);
              v22 = 1;
              if ( RtlGetCurrentServiceSessionId() )
                v33 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v33 = 2147353472LL;
              if ( *(_BYTE *)v33 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v15 + 56), a2, 3LL);
            }
            else
            {
              if ( v20 == 8 )
              {
                v22 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v15 + 24), v21, a2, v12);
              }
              else
              {
                v22 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(v15 + 32), v21, a2, v12, (unsigned int *)&v36);
                v6 = 1;
                if ( v22 )
                {
                  v26 = *(_QWORD *)(v15 + 24);
                  if ( (unsigned int)v36 <= (unsigned int)*(unsigned __int16 *)(v26 + 60) - 16 )
                  {
                    v27 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v36 + 15) >> 4];
                    if ( (*(_QWORD *)(v26 + 8 * v27 + 128) & 1) != 0 )
                    {
                      do
                      {
                        a5 = *(_QWORD *)(v26 + 8 * v27 + 128);
                        v28 = a5;
                        v29 = a5;
                        if ( (a5 & 1) == 0 )
                          break;
                        if ( WORD1(a5) > 1u )
                        {
                          --WORD1(a5);
                          v29 = a5;
                        }
                      }
                      while ( v28 != _InterlockedCompareExchange64(
                                       (volatile signed __int64 *)(v26 + 8 * v27 + 128),
                                       v29,
                                       v28) );
                    }
                  }
                }
              }
              SharedData = NtCurrentPeb()->SharedData;
              if ( SharedData && *SharedData )
                v24 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v24 = 2147353472LL;
              if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                if ( v22 )
                  RtlpLogHeapFreeEvent(*(_QWORD *)(v15 + 56), a2, (unsigned int)(v6 + 2));
              }
            }
            return v22;
          }
        }
        else
        {
          DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
          v19 = *(_BYTE *)(DescriptorValidateSafe + 24);
          if ( (v19 & 3) == 3 )
          {
            v20 = v19 & 0xC;
            if ( v20 >= 8u )
              goto LABEL_21;
          }
        }
      }
    }
    RtlpLogHeapFailure(9, *(_QWORD *)(v15 + 56), a2, 0, 0LL, 0LL);
    return 0;
  }
  v30 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_18017B718) >> 20));
  if ( v30 )
  {
    v14 = v30 - 1;
    if ( v14 != 2 )
      goto LABEL_13;
  }
  v31 = RtlpHpLargeFree(a1, a2, v12) != 0;
  if ( RtlGetCurrentServiceSessionId() )
    v32 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v32 = 2147353472LL;
  if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v31 )
    RtlpLogHeapFreeEvent(a1, a2, 3LL);
  return v31;
}
