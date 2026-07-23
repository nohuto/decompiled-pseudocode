/*
 * XREFs of RtlpFreeHeapInternal @ 0x18003BD50
 * Callers:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003B2B0 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x1800345B8 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x180036C50 (RtlpHpVsContextFree.c)
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x18003AE30 (RtlpHpSizeHeap.c)
 *     RtlpHpStackLoggingEnabled @ 0x18003B250 (RtlpHpStackLoggingEnabled.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18003C5F0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpExtrasGet @ 0x180045B78 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x180045BE4 (RtlpHpSizeHeapInternal.c)
 *     RtlpGetHeapProtection @ 0x180046824 (RtlpGetHeapProtection.c)
 *     RtlpFreeUserBlock @ 0x180047BC8 (RtlpFreeUserBlock.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlpHpVsChunkSize @ 0x1800633DC (RtlpHpVsChunkSize.c)
 *     RtlpIsSubSegmentReuseable @ 0x18006354C (RtlpIsSubSegmentReuseable.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180063F88 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x180064234 (RtlpHpLargeFree.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1800666CC (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpProbeUserBufferSafe @ 0x180076254 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpLargeAllocSize @ 0x18008777C (RtlpHpLargeAllocSize.c)
 *     ZwProtectVirtualMemory @ 0x18009F7F0 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A2BC0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A2C00 (RtlpInterlockedFlushSList.c)
 *     RtlpCallInterceptRoutine @ 0x1800AE78E (RtlpCallInterceptRoutine.c)
 *     RtlpGetReservedBlockSize @ 0x1800AF07E (RtlpGetReservedBlockSize.c)
 *     RtlpValidateLFHBlock @ 0x1800AF1E6 (RtlpValidateLFHBlock.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180116620 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x180117300 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18012220C (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpFreeHeapInternal(__int64 a1, unsigned __int64 a2, int a3, __int64 *a4, _WORD *a5)
{
  int v5; // edi
  unsigned __int64 v8; // rsi
  unsigned __int64 v10; // rbp
  int v11; // ebp
  int v12; // ecx
  unsigned int v13; // ebp
  _WORD *v14; // rbx
  unsigned __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rbx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  char v21; // al
  char v22; // cl
  char v23; // cl
  unsigned __int64 v24; // r9
  unsigned int v25; // r10d
  unsigned int v26; // edx
  int v27; // r11d
  __int64 v28; // rcx
  unsigned int v29; // r8d
  __int64 v30; // rax
  char v31; // cl
  unsigned __int64 v32; // rdx
  int v33; // r8d
  __int64 v34; // r8
  unsigned int v35; // edx
  unsigned __int64 v36; // r8
  __int16 v37; // ax
  int v38; // ecx
  BOOL v39; // r8d
  __int64 v40; // r8
  unsigned __int64 v41; // r14
  __int16 v42; // ax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 DescriptorValidateSafe; // rax
  char v47; // cl
  __int64 v48; // rdx
  char v49; // cl
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rdx
  int v52; // ebp
  _DWORD *SharedData; // rcx
  __int64 v54; // rcx
  unsigned int v55; // ebx
  __int64 v57; // r8
  __int64 v58; // r9
  signed __int64 v59; // rax
  signed __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // r8
  __int64 v66; // rcx
  bool v67; // zf
  char *v68; // rbx
  unsigned __int8 v69; // al
  char v70; // cl
  struct _TEB *v71; // rbx
  int v72; // edx
  __int64 v73; // rax
  unsigned __int16 v74; // dx
  int v75; // eax
  int v76; // eax
  unsigned __int16 v77; // ax
  __int64 v78; // rcx
  struct _TEB *v79; // rbx
  ULONG *v80; // rcx
  int v81; // ecx
  signed __int32 *v82; // rbx
  unsigned int v83; // edx
  __int64 v84; // rax
  __int64 v85; // r14
  __int64 v86; // rdx
  __int64 v87; // rcx
  unsigned int v88; // r9d
  int v89; // r8d
  signed __int32 v90; // ebx
  signed __int32 *v91; // rdx
  _WORD *v92; // r8
  _QWORD *v93; // rax
  int v94; // r8d
  unsigned int v95; // edx
  signed __int64 *v96; // rcx
  int v97; // eax
  signed __int32 *v98; // rbx
  int v99; // eax
  unsigned __int64 v100; // r8
  unsigned __int64 v101; // r9
  signed __int64 v102; // rdx
  _DWORD *v103; // rbp
  __int64 v104; // rcx
  _DWORD *v105; // rdx
  __int64 v106; // rbp
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v108; // rcx
  ULONG HeapProtection; // eax
  int v110; // r9d
  signed __int64 v111; // rtt
  __int64 v112; // rcx
  signed __int32 v113; // eax
  __int64 v114; // rax
  _QWORD *v115; // rcx
  signed __int32 v116; // eax
  unsigned __int16 *v117; // r9
  int v118; // r8d
  __int64 v119; // rax
  volatile signed __int32 *v120; // rdx
  unsigned __int16 *v121; // rcx
  __int64 v122; // rcx
  signed __int32 v123[8]; // [rsp+0h] [rbp-B8h] BYREF
  PULONG OldProtect; // [rsp+20h] [rbp-98h]
  unsigned __int64 v125; // [rsp+30h] [rbp-88h]
  unsigned int v126; // [rsp+38h] [rbp-80h]
  signed __int32 *v127; // [rsp+48h] [rbp-70h]
  __int64 v128; // [rsp+50h] [rbp-68h]
  int v129; // [rsp+58h] [rbp-60h]
  unsigned int v130; // [rsp+60h] [rbp-58h] BYREF
  ULONG v131; // [rsp+64h] [rbp-54h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-48h] BYREF
  __int128 v134; // [rsp+80h] [rbp-38h] BYREF
  unsigned __int64 v135; // [rsp+C0h] [rbp+8h] BYREF

  v5 = 0;
  v8 = a2;
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && a2 )
    {
      v127 = *(signed __int32 **)(a2 - 16);
      v8 = a2 - (_QWORD)v127;
    }
    else
    {
      v127 = 0LL;
    }
    if ( a3 )
    {
      if ( a3 == 8 )
      {
        LODWORD(v10) = 2;
      }
      else
      {
        LODWORD(v10) = a3 & 1;
        if ( (a3 & 8) != 0 )
          LODWORD(v10) = v10 | 2;
        if ( (a3 & 4) != 0 )
          LODWORD(v10) = v10 | 0x80000000;
        if ( (a3 & 0x100) != 0 )
          LODWORD(v10) = v10 | 0x100;
        if ( (a3 & 0xE00) != 0 )
          LODWORD(v10) = a3 & 0xE00 | v10;
        if ( (a3 & 0x10) != 0 )
          LODWORD(v10) = v10 | 0x2000000;
        if ( (a3 & 2) != 0 )
          LODWORD(v10) = v10 | 0x1000000;
      }
    }
    v11 = *(_DWORD *)(a1 + 20) | v10;
    v12 = *(_DWORD *)(a1 + 220);
    v13 = v11 & 0x11000001;
    if ( v12 && v12 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v13 |= 1u;
    v14 = a5;
    v15 = 0LL;
    if ( !a5 )
    {
      if ( a4 )
        *a4 = RtlpHpSizeHeapInternal(a1, v8, v13, 0LL);
LABEL_42:
      if ( (v13 & 0x1000000) == 0 )
      {
        if ( *(_DWORD *)(a1 + 24) )
        {
          if ( (v15 || (v15 = RtlpHpExtrasGet(a1, v8, v13)) != 0) && v15 != -1LL )
          {
            v70 = *(_BYTE *)(v15 + 2);
            if ( (v70 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v70 & 0xF, a1, v8, 3, v15 + 16) < 0 )
              goto LABEL_159;
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, v8, v13) == -1 )
      {
        RtlpLogHeapFailure(9, a1, v8, 0, 0LL, 0LL);
LABEL_159:
        LODWORD(v135) = 0;
        goto LABEL_160;
      }
      if ( (_WORD)v8 )
      {
        v43 = 0;
      }
      else
      {
        v62 = RtlCSparseBitmapBitmaskRead(&::BaseAddress, 2 * ((v8 - qword_1801859B8) >> 20));
        if ( !v62 || (v43 = v62 - 1, v43 == 2) )
        {
          v52 = RtlpHpLargeFree(a1, v8, v13) != 0;
          LODWORD(v135) = v52;
          if ( RtlGetCurrentServiceSessionId() )
            v63 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v63 = 2147353472LL;
          if ( *(_BYTE *)v63 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v52 )
          {
            RtlpLogHeapFreeEvent(a1, v8, 3LL);
            goto LABEL_63;
          }
LABEL_62:
          LODWORD(v135) = v52;
          if ( !v52 )
          {
LABEL_160:
            NtCurrentTeb()->LastStatusValue = -1073741811;
            v71 = NtCurrentTeb();
            v71->LastErrorValue = RtlNtStatusToDosError(-1073741811);
            return (unsigned int)v135;
          }
LABEL_63:
          if ( a4 )
            *a4 -= (__int64)v127;
          if ( (dword_180185108 & 1) != 0 && (dword_180185108 & 2) != 0 )
          {
            if ( NtCurrentPeb()->ProcessHeap )
            {
              v134 = RtlpHpEnvHandle;
              if ( a1 != *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v134, v51) )
                RtlpHpStackTraceRemoveStack(a1, v8);
            }
          }
          return (unsigned int)v135;
        }
      }
      v44 = 192LL * v43;
      v45 = v44 + a1 + 320;
      if ( (RtlpHpAppCompatFlags & 1) != 0 )
      {
        DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v44 + a1 + 320, v8);
      }
      else if ( (RtlpHpHeapGlobals ^ v45 ^ *(_QWORD *)((*(_QWORD *)v45 & v8) + 0x10) ^ *(_QWORD *)v45 & v8) == 0xA2E64EADA2E64EADuLL )
      {
        DescriptorValidateSafe = (*(_QWORD *)v45 & v8)
                               + 32
                               * ((unsigned __int64)((unsigned int)v8 - (*(_DWORD *)v45 & (unsigned int)v8)) >> *(_BYTE *)(v45 + 8));
      }
      else
      {
        DescriptorValidateSafe = 0LL;
      }
      if ( DescriptorValidateSafe )
      {
        v47 = *(_BYTE *)(DescriptorValidateSafe + 24);
        if ( (v47 & 1) != 0 )
        {
          if ( (v47 & 2) != 0 )
          {
            if ( (v47 & 0xCu) >= 8 || (((1 << *(_BYTE *)(v45 + 8)) - 1) & v8) == 0 )
            {
LABEL_56:
              v50 = (DescriptorValidateSafe & *(_QWORD *)v45)
                  + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v45)) >> 5 << *(_BYTE *)(v45 + 8));
              if ( v8 <= v50 )
              {
                RtlpHpSegPageRangeShrink(v45, DescriptorValidateSafe, 0, v13);
                v52 = 1;
                if ( RtlGetCurrentServiceSessionId() )
                  v66 = (__int64)NtCurrentPeb()->SharedData + 550;
                else
                  v66 = 2147353472LL;
                if ( *(_BYTE *)v66 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                  RtlpLogHeapFreeEvent(*(_QWORD *)(v45 + 56), v8, 3LL);
              }
              else
              {
                if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) == 8 )
                {
                  v52 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v45 + 24), v50, v8, v13);
                }
                else
                {
                  v52 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(v45 + 32), v50, v8, v13, &v130);
                  v5 = 1;
                  if ( v52 )
                  {
                    v57 = *(_QWORD *)(v45 + 24);
                    if ( v130 <= (unsigned int)*(unsigned __int16 *)(v57 + 60) - 16 )
                    {
                      v58 = 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)(v130 + 15) >> 4] + 128;
                      if ( (*(_QWORD *)(v57 + v58) & 1) != 0 )
                      {
                        do
                        {
                          v125 = *(_QWORD *)(v58 + v57);
                          v59 = v125;
                          v51 = v125 >> 16;
                          v60 = v125;
                          if ( (v125 & 1) == 0 )
                            break;
                          if ( WORD1(v125) > 1u )
                          {
                            LOWORD(v51) = --WORD1(v125);
                            v60 = v125;
                          }
                        }
                        while ( v59 != _InterlockedCompareExchange64((volatile signed __int64 *)(v57 + v58), v60, v59) );
                      }
                    }
                  }
                }
                SharedData = NtCurrentPeb()->SharedData;
                if ( SharedData && *SharedData )
                  v54 = (__int64)NtCurrentPeb()->SharedData + 550;
                else
                  v54 = 2147353472LL;
                if ( *(_BYTE *)v54 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v52 )
                  RtlpLogHeapFreeEvent(*(_QWORD *)(v45 + 56), v8, (unsigned int)(v5 + 2));
              }
              goto LABEL_62;
            }
          }
          else
          {
            v48 = -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31) + DescriptorValidateSafe;
            v49 = *(_BYTE *)(v48 + 24);
            if ( (v49 & 3) == 3 && (v49 & 0xCu) >= 8 )
            {
              DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
              if ( v48 )
                goto LABEL_56;
            }
          }
        }
      }
      RtlpLogHeapFailure(9, *(_QWORD *)(v45 + 56), v8, 0, 0LL, 0LL);
      v52 = 0;
      goto LABEL_62;
    }
    v15 = -1LL;
    if ( (_WORD)v8 )
    {
      v16 = 0;
    }
    else
    {
      v61 = RtlCSparseBitmapBitmaskRead(&::BaseAddress, 2 * ((v8 - qword_1801859B8) >> 20));
      if ( !v61 || (v16 = v61 - 1, v16 == 2) )
      {
        v40 = RtlpHpLargeAllocSize(a1, v8, v13, &v135);
        goto LABEL_33;
      }
    }
    v17 = a1 + 192LL * v16;
    v18 = v17 + 320;
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      v20 = RtlpHpSegGetDescriptorValidateSafe(v17 + 320, v8);
    }
    else
    {
      v19 = *(_QWORD *)v18 & v8;
      if ( (RtlpHpHeapGlobals ^ v18 ^ *(_QWORD *)(v19 + 0x10) ^ v19) == 0xA2E64EADA2E64EADuLL )
        v20 = v19 + 32 * ((unsigned __int64)(unsigned int)(v8 - v19) >> *(_BYTE *)(v17 + 328));
      else
        v20 = 0LL;
    }
    if ( !v20 )
      goto LABEL_148;
    v21 = *(_BYTE *)(v20 + 24);
    if ( (v21 & 1) == 0 )
      goto LABEL_148;
    if ( (v21 & 2) != 0 )
    {
      if ( (v21 & 0xCu) < 8 && (((1 << *(_BYTE *)(v17 + 328)) - 1) & v8) != 0 )
        goto LABEL_148;
    }
    else
    {
      v20 += -32LL * *(unsigned __int8 *)(v20 + 31);
      v22 = *(_BYTE *)(v20 + 24);
      if ( (v22 & 3) != 3 || (v22 & 0xCu) < 8 || !v20 )
        goto LABEL_148;
    }
    v23 = *(_BYTE *)(v17 + 328);
    v24 = (v20 & *(_QWORD *)v18) + ((v20 - (v20 & *(_QWORD *)v18)) >> 5 << v23);
    if ( v8 <= v24 )
    {
      if ( (*(_WORD *)(v20 + 8) & 1) != 0 )
      {
        _InterlockedOr(v123, 0);
        v23 = *(_BYTE *)(v17 + 328);
        v64 = 1;
      }
      else
      {
        v64 = 0;
      }
      v65 = *(unsigned __int8 *)(v20 + 31);
      LODWORD(v135) = v64;
      v40 = (v65 << v23) - *(unsigned int *)(v20 + 4);
    }
    else if ( (*(_BYTE *)(v20 + 24) & 0xC) == 8 )
    {
      v25 = (unsigned int)v24 >> 12;
      v26 = *(_DWORD *)(v24 + 40) ^ qword_180184E48 ^ ((unsigned int)v24 >> 12);
      v27 = (unsigned __int16)v26;
      v28 = *(_QWORD *)(*(_QWORD *)(v17 + 344)
                      + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v26 + 15) >> 4]
                      + 128);
      v29 = v8 - HIWORD(v26) - v24;
      v30 = *(unsigned int *)(v28 + 72);
      v31 = *(_BYTE *)(v28 + 76);
      if ( (_DWORD)v30 )
      {
        v32 = (v30 * (unsigned __int64)v29) >> v31;
        v33 = v29 - v32 * v27;
      }
      else
      {
        LODWORD(v32) = v29 >> v31;
        v33 = ((1 << v31) - 1) & v29;
      }
      if ( v33 )
      {
        v40 = -1LL;
      }
      else
      {
        v34 = *(_QWORD *)(v24 + 8 * ((unsigned __int64)(unsigned int)(2 * v32) >> 6) + 48) >> ((2 * v32) & 0x3F);
        if ( (v34 & 1) != 0 )
        {
          v35 = (unsigned __int16)qword_180184E48 ^ (unsigned __int16)(*(_WORD *)(v24 + 40) ^ v25);
          if ( (v34 & 2) != 0 )
          {
            v36 = (unsigned __int16)qword_180184E48 ^ (unsigned __int64)(unsigned __int16)(*(_WORD *)(v24 + 40) ^ v25);
            v37 = *(_WORD *)(v36 + v8 - 2);
            v38 = v37 & 0x4000;
            if ( (v37 & 0x4000) != 0 )
            {
              _InterlockedOr(v123, 0);
              v37 = *(_WORD *)(v36 + v8 - 2);
            }
            v39 = v38 != 0;
            if ( v37 < 0 )
              --v35;
            else
              v35 -= v37 & 0x3FFF;
          }
          else
          {
            v39 = 0;
          }
          LODWORD(v135) = v39;
          v40 = v35;
        }
        else
        {
          v40 = -1LL;
        }
      }
    }
    else
    {
      v40 = RtlpHpVsChunkSize(*(_QWORD *)(v17 + 352), v8, v19, &v135);
    }
    v14 = a5;
LABEL_33:
    if ( v40 != -1 )
    {
      if ( a4 )
        *a4 = v40;
      if ( (_DWORD)v135 )
      {
        v41 = v40 + v8;
        if ( (v13 & 0x10000000) != 0 )
          v41 += 16LL;
        v15 = (v41 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v15 )
        {
          v42 = *(_WORD *)v15;
LABEL_41:
          *v14 = v42;
          goto LABEL_42;
        }
      }
      else
      {
        v15 = 0LL;
      }
LABEL_87:
      v42 = 0;
      goto LABEL_41;
    }
LABEL_148:
    v14 = a5;
    goto LABEL_87;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
LABEL_127:
    v69 = RtlpFreeHeap(a1, a3 | 2u, (_BYTE *)v10, v8);
    v55 = v69;
    if ( v69 )
      goto LABEL_128;
    return v55;
  }
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v10 = RtlpProbeUserBufferSafe(a1, a2);
    v135 = v10;
  }
  else
  {
    if ( (a2 & 0xF) != 0 )
    {
      RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
LABEL_123:
      v135 = 0LL;
      goto LABEL_124;
    }
    v10 = a2 - 16;
    v135 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
    {
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
      v135 = v10;
    }
    if ( (*(_BYTE *)(v10 + 15) & 0x3F) == 0 )
    {
      RtlpLogHeapFailure(8, a1, v10, 0, 0LL, 0LL);
      v10 = 0LL;
      goto LABEL_123;
    }
  }
LABEL_124:
  if ( !v10 )
    goto LABEL_203;
  v67 = *(_BYTE *)(v8 - 1) == 5;
  v68 = (char *)(v10 + 15);
  v125 = v10 + 15;
  if ( v67 )
  {
    if ( *v68 >= 0 )
    {
      if ( !*(_DWORD *)(a1 + 124) )
        goto LABEL_183;
      v72 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v10 + 8);
      if ( HIBYTE(v72) == ((unsigned __int8)v72 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v10 + 8)) >> 8) ^ BYTE2(v72))) )
        goto LABEL_183;
    }
    else if ( (unsigned __int8)RtlpValidateLFHBlock(a1, v10) )
    {
LABEL_183:
      if ( *v68 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v75 = *(_DWORD *)(v10 + 8);
          v129 = v75;
          if ( (v75 & *(_DWORD *)(a1 + 124)) != 0 )
            v129 = *(_DWORD *)(a1 + 136) ^ v75;
          v74 = v129;
        }
        else
        {
          v74 = *(_WORD *)(v10 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v10 + 8) ^ a1 ^ (v10 >> 4)) )
          v73 = 0LL;
        else
          v73 = *(_QWORD *)(v10
                          - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v10 >> 4)) >> 12));
        v74 = *(_WORD *)(v73 + 36);
      }
      if ( *v68 == 4 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v76 = *(_DWORD *)(v10 + 8);
          v129 = v76;
          if ( (v76 & *(_DWORD *)(a1 + 124)) != 0 )
            v129 = *(_DWORD *)(a1 + 136) ^ v76;
          v77 = v129;
        }
        else
        {
          v77 = *(_WORD *)(v10 + 8);
        }
        v78 = v74 + *(_QWORD *)(v10 - 16) - v77;
      }
      else
      {
        v78 = 16LL * v74;
      }
      if ( v78 + v10 < v8 )
        goto LABEL_202;
      if ( (a3 & 0x3C000102) != 0 )
        goto LABEL_126;
      v80 = *(_BYTE *)(v8 - 1) == 5 ? (ULONG *)(v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14)) : 0LL;
      OldProtect = v80;
      v81 = *(_DWORD *)(v8 - 8);
      v125 = v10 + 15;
      if ( (int)RtlpCallInterceptRoutine(v81, a1, v8, 3, (__int64)OldProtect) >= 0 )
        goto LABEL_126;
LABEL_203:
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v79 = NtCurrentTeb();
      v79->LastErrorValue = RtlNtStatusToDosError(-1073741811);
      return 0;
    }
LABEL_202:
    RtlpLogHeapFailure(3, a1, v10, v8, 0LL, 0LL);
    goto LABEL_203;
  }
LABEL_126:
  if ( *v68 >= 0 )
    goto LABEL_127;
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4))
    || (v82 = *(signed __int32 **)(v10
                                 - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12)),
        (v127 = v82) == 0LL) )
  {
    LODWORD(v86) = a1;
    goto LABEL_278;
  }
  _m_prefetchw(v82);
  v83 = (unsigned __int16)(*(_DWORD *)(v10 + 12) >> 8);
  v84 = *(_QWORD *)v82;
  v128 = *((_QWORD *)v82 + 1);
  v126 = v83;
  v85 = *(_QWORD *)(*(_QWORD *)v84 + 24LL);
  LODWORD(v84) = v128 ^ RtlpLFHKey ^ *(_DWORD *)(v128 + 24) ^ v85;
  if ( v128 + v83 * WORD1(v84) + (unsigned __int16)v84 != v10 )
  {
    v86 = *(_QWORD *)(v85 + 24);
LABEL_278:
    RtlpLogHeapFailure(3, v86, v10, 0, 0LL, 0LL);
    goto LABEL_279;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v87 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v87 = 2147353472LL;
  if ( *(_BYTE *)v87 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    RtlpLogHeapFreeEvent(*(_QWORD *)(v85 + 24), v10 + 16, 2LL);
    v10 = v135;
  }
  v88 = 0;
  v89 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
    v88 = 100;
  while ( 1 )
  {
    v90 = v82[8];
    v91 = v127;
    if ( v90 >= 0 && v90 == _InterlockedCompareExchange(v127 + 8, v90 | 0x80000000, v90) )
      break;
    if ( ++v89 > v88 )
    {
      v90 = -1;
      break;
    }
    v82 = v127;
  }
  v92 = v127 + 4;
  *(_BYTE *)v125 = 0x80;
  if ( v90 == -1 )
  {
    RtlpInterlockedPushEntrySList(v92, v10 + 16);
    goto LABEL_279;
  }
  _bittestandreset64(*(signed __int64 **)(v128 + 40), v126);
  if ( *v92 )
  {
    v93 = (_QWORD *)RtlpInterlockedFlushSList(v91 + 4, v91, v92);
    v94 = 0;
    while ( v93 )
    {
      v95 = *((_DWORD *)v93 - 1);
      ++v94;
      v93 = (_QWORD *)*v93;
      v96 = *(signed __int64 **)(v128 + 40);
      v95 >>= 8;
      v126 = (unsigned __int16)v95;
      _bittestandreset64(v96, (unsigned __int16)v95);
    }
  }
  else
  {
    v94 = 0;
  }
  v97 = (unsigned __int16)v90;
  v98 = v127;
  v99 = (v126 << 16) | (v94 + 1 + v97);
  v100 = *(_QWORD *)v127;
  if ( (_WORD)v99 != *((_WORD *)v127 + 20)
    || (v101 = *(unsigned int *)(v100 + 168),
        v102 = *(unsigned int *)(*(_QWORD *)v100 + 32LL),
        *(_DWORD *)(v100 + 164) == 1)
    && (unsigned int)v102 >= (unsigned int)v101
    && (v102 = (unsigned int)(v102 - v101), (unsigned int)v102 < *(_DWORD *)(*(_QWORD *)v100 + 36LL)) )
  {
    v127[8] = v99;
    if ( (v98[11] & 2) != 0 || !(unsigned __int8)RtlpIsSubSegmentReuseable(v100, v98) )
      goto LABEL_279;
    do
    {
      v116 = v98[11];
      if ( !v116 || (v116 & 2) != 0 )
        goto LABEL_279;
    }
    while ( v116 != _InterlockedCompareExchange(v98 + 11, v116 | 2, v116) );
    v117 = *(unsigned __int16 **)v98;
    v118 = 0;
    while ( 1 )
    {
      v119 = ((_BYTE)v118 + (unsigned __int8)v117[87]) & 0xF;
      v120 = *(volatile signed __int32 **)&v117[4 * v119 + 8];
      v121 = &v117[4 * v119];
      if ( v120 )
      {
        if ( (v120[11] & 1) == 0
          && v120 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                  (volatile signed __int64 *)v121 + 2,
                                                  (signed __int64)v98,
                                                  (signed __int64)v120) )
        {
          _m_prefetchw((const void *)(v120 + 11));
          if ( _InterlockedAnd(v120 + 11, 0xFFFFFFFD) == 2 )
          {
            v122 = **(_QWORD **)v120;
            *(_QWORD *)v120 = 0LL;
            RtlpInterlockedPushEntrySList(v122, v120 + 12);
          }
          goto LABEL_279;
        }
      }
      else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v121 + 2, (signed __int64)v98, 0LL) )
      {
        goto LABEL_279;
      }
      if ( (unsigned int)++v118 >= 0x10 )
      {
        RtlpInterlockedPushEntrySList(
          *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v98 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v98 + 172LL) + 1192)
        + 144LL,
          v98 + 12);
        goto LABEL_279;
      }
    }
  }
  v125 = *(_QWORD *)v127;
  v103 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(v125 + 8), 0LL);
  if ( !v103 )
    goto LABEL_244;
  _m_prefetchw(v103 + 11);
  if ( _InterlockedAnd(v103 + 11, 0xFFFFFFF9) == 6 )
  {
    v104 = **(_QWORD **)v103;
    *(_QWORD *)v103 = 0LL;
LABEL_242:
    v105 = v103 + 12;
LABEL_243:
    RtlpInterlockedPushEntrySList(v104, v105);
    goto LABEL_244;
  }
  if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v125, v103) )
    goto LABEL_244;
  do
  {
    v113 = v103[11];
    if ( !v113 || (v113 & 2) != 0 )
      goto LABEL_244;
  }
  while ( v113 != _InterlockedCompareExchange(v103 + 11, v113 | 2, v113) );
  v101 = *(_QWORD *)v103;
  v100 = 0LL;
  while ( 1 )
  {
    v114 = ((_BYTE)v100 + (unsigned __int8)*(_WORD *)(v101 + 174)) & 0xF;
    v102 = *(_QWORD *)(v101 + 8 * v114 + 16);
    v115 = (_QWORD *)(v101 + 8 * v114);
    if ( !v102 )
    {
      if ( !_InterlockedCompareExchange64(v115 + 2, (signed __int64)v103, 0LL) )
        goto LABEL_244;
      goto LABEL_257;
    }
    if ( (*(_DWORD *)(v102 + 44) & 1) == 0
      && v102 == _InterlockedCompareExchange64(v115 + 2, (signed __int64)v103, v102) )
    {
      break;
    }
LABEL_257:
    v100 = (unsigned int)(v100 + 1);
    if ( (unsigned int)v100 >= 0x10 )
    {
      v104 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v103 + 24LL)
                       + 8LL * *(unsigned __int16 *)(*(_QWORD *)v103 + 172LL)
                       + 1192)
           + 144LL;
      goto LABEL_242;
    }
  }
  _m_prefetchw((const void *)(v102 + 44));
  if ( _InterlockedAnd((volatile signed __int32 *)(v102 + 44), 0xFFFFFFFD) == 2 )
  {
    v104 = **(_QWORD **)v102;
    *(_QWORD *)v102 = 0LL;
    v105 = (_DWORD *)(v102 + 48);
    goto LABEL_243;
  }
LABEL_244:
  v67 = (*((_BYTE *)v98 + 38) & 3) == 0;
  v106 = *(_QWORD *)(*(_QWORD *)v125 + 24LL);
  v128 = *(_QWORD *)v98;
  if ( !v67 )
  {
    BaseAddress = (PVOID)((*((_QWORD *)v98 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
    ReservedBlockSize = RtlpGetReservedBlockSize(v98, v102, v100, v101);
    v108 = *(_QWORD *)(v106 + 24);
    RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v98 + 20);
    HeapProtection = RtlpGetHeapProtection(v108, 1LL);
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, HeapProtection, &v131);
  }
  *(_DWORD *)(*((_QWORD *)v98 + 1) + 20LL) = 0;
  RtlpFreeUserBlock(v106, *((_QWORD *)v98 + 1), v100, v101);
  v110 = -*((unsigned __int16 *)v98 + 20);
  do
    v111 = *(_QWORD *)(v128 + 160);
  while ( v111 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v128 + 160),
                    ((unsigned __int64)(unsigned int)(HIDWORD(v111) - 1) << 32) | (unsigned int)(v111 + v110),
                    v111) );
  *((_QWORD *)v98 + 1) = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v106 + 60));
  v98[8] = 0;
  _m_prefetchw(v98 + 11);
  if ( _InterlockedAnd(v98 + 11, 0xFFFFFFFE) == 1 )
  {
    v112 = **(_QWORD **)v98;
    *(_QWORD *)v98 = 0LL;
    RtlpInterlockedPushEntrySList(v112, v98 + 12);
  }
LABEL_279:
  v55 = 1;
LABEL_128:
  if ( a5 )
    *a5 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( RtlpHpStackLoggingEnabled(a1) && (a3 & 0x10000000) == 0 )
    RtlpHpStackTraceRemoveStack(a1, v8);
  return v55;
}
