/*
 * XREFs of RtlpFreeHeapInternal @ 0x180027BF0
 * Callers:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x1800277B0 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlpHpSegPageRangeShrink @ 0x180017F70 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x180018CE0 (RtlpHpVsContextFree.c)
 *     RtlpGetHeapProtection @ 0x1800202FC (RtlpGetHeapProtection.c)
 *     RtlpHpVsChunkSize @ 0x180024460 (RtlpHpVsChunkSize.c)
 *     RtlpIsSubSegmentReuseable @ 0x180025A98 (RtlpIsSubSegmentReuseable.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x180027310 (RtlpHpSizeHeap.c)
 *     RtlpHpStackLoggingEnabled @ 0x180027750 (RtlpHpStackLoggingEnabled.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180028470 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSizeHeapInternal @ 0x18002E8C4 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpExtrasGet @ 0x18003048C (RtlpHpExtrasGet.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180055544 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpLargeFree @ 0x180058AC4 (RtlpHpLargeFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059108 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpFreeUserBlock @ 0x18006CFB8 (RtlpFreeUserBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x180078ADC (RtlpProbeUserBufferSafe.c)
 *     RtlpHpLargeAllocSize @ 0x18008A334 (RtlpHpLargeAllocSize.c)
 *     ZwProtectVirtualMemory @ 0x1800A4A70 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A7D80 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A7DC0 (RtlpInterlockedFlushSList.c)
 *     RtlpGetReservedBlockSize @ 0x1800B13A8 (RtlpGetReservedBlockSize.c)
 *     RtlpCallInterceptRoutine @ 0x1800FEA3C (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180116230 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x180116F14 (RtlpLogHeapFreeEvent.c)
 *     RtlpValidateLFHBlock @ 0x180118A5C (RtlpValidateLFHBlock.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x180120184 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpFreeHeapInternal(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 *a4, _WORD *a5)
{
  int v5; // edi
  int v7; // r12d
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // rbx
  int v11; // r8d
  int v12; // ebx
  int v13; // ecx
  unsigned int v14; // ebx
  _WORD *v15; // r12
  unsigned __int64 v16; // r14
  unsigned int v17; // r13d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r12
  unsigned __int64 v21; // rdx
  __int64 DescriptorValidateSafe; // r8
  char v23; // r9
  char v24; // r9
  unsigned __int8 v25; // r9
  char v26; // cl
  unsigned __int64 v27; // r10
  __int64 v28; // r8
  int v29; // r12d
  unsigned int v30; // r9d
  unsigned int v31; // edx
  int v32; // r11d
  __int64 v33; // rcx
  unsigned int v34; // r8d
  __int64 v35; // rax
  char v36; // cl
  unsigned __int64 v37; // rdx
  int v38; // r8d
  __int64 v39; // r8
  __int64 v40; // rdx
  unsigned __int64 v41; // r8
  __int16 v42; // ax
  int v43; // ecx
  BOOL v44; // r8d
  unsigned __int64 v45; // r14
  __int16 v46; // ax
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r14
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  char v52; // r9
  char v53; // r9
  unsigned __int8 v54; // r9
  unsigned __int64 v55; // rdx
  int v56; // ebx
  _DWORD *SharedData; // rcx
  __int64 v58; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  signed __int64 v62; // rax
  signed __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned __int8 v70; // al
  char v71; // cl
  struct _TEB *v72; // rbx
  struct _TEB *v73; // rbx
  int v74; // edx
  __int64 v75; // rax
  unsigned __int16 v76; // dx
  int v77; // eax
  int v78; // eax
  unsigned __int16 v79; // ax
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 *v82; // rcx
  int v83; // edx
  __int64 v84; // rax
  signed __int64 v85; // r10
  __int64 v86; // rdx
  __int64 v87; // rcx
  unsigned int v88; // r9d
  int v89; // r8d
  signed __int32 v90; // ebx
  _WORD *v91; // r8
  unsigned __int64 v92; // rdx
  _QWORD *v93; // rax
  int v94; // r9d
  unsigned int v95; // edx
  signed __int64 *v96; // rcx
  int v97; // eax
  __int64 **v98; // rbx
  int v99; // eax
  volatile __int64 *v100; // r8
  __int64 v101; // r9
  unsigned int v102; // edx
  __int64 **v103; // rdx
  __int64 v104; // rcx
  _QWORD **v105; // rdx
  signed __int32 v106; // eax
  unsigned __int16 *v107; // r10
  __int64 v108; // rax
  __int64 **v109; // rdx
  unsigned __int16 *v110; // rcx
  bool v111; // zf
  __int64 *v112; // r8
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v114; // r8
  _DWORD *v115; // rcx
  ULONG HeapProtection; // eax
  int v117; // r9d
  signed __int64 v118; // rtt
  volatile signed __int32 *v119; // rax
  __int64 v120; // rcx
  signed __int32 v121; // eax
  unsigned __int16 *v122; // r9
  int v123; // r8d
  __int64 v124; // rax
  volatile signed __int32 *v125; // rdx
  unsigned __int16 *v126; // rcx
  __int64 v127; // rcx
  signed __int32 v128[8]; // [rsp+0h] [rbp-B8h] BYREF
  volatile __int64 *v129; // [rsp+30h] [rbp-88h]
  __int64 *v130; // [rsp+40h] [rbp-78h]
  _QWORD **v131; // [rsp+48h] [rbp-70h]
  int v132; // [rsp+50h] [rbp-68h]
  __int64 v133; // [rsp+58h] [rbp-60h] BYREF
  ULONG OldProtect[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v135; // [rsp+68h] [rbp-50h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-40h] BYREF
  __int128 v138; // [rsp+80h] [rbp-38h] BYREF
  unsigned __int64 v139; // [rsp+C0h] [rbp+8h] BYREF

  v5 = 0;
  v7 = a3;
  v8 = a2;
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      goto LABEL_128;
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v10 = RtlpProbeUserBufferSafe(a1, a2);
      v139 = v10;
    }
    else
    {
      if ( (a2 & 0xF) != 0 )
      {
        RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
LABEL_124:
        v139 = 0LL;
        goto LABEL_125;
      }
      v10 = a2 - 16;
      v139 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      {
        v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
        v139 = v10;
      }
      if ( (*(_BYTE *)(v10 + 15) & 0x3F) == 0 )
      {
        RtlpLogHeapFailure(8, a1, v10, 0, 0LL, 0LL);
        v10 = 0LL;
        goto LABEL_124;
      }
    }
LABEL_125:
    if ( v10 )
    {
      if ( *(_BYTE *)(v8 - 1) != 5 )
        goto LABEL_127;
      if ( *(char *)(v10 + 15) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v74 = *(_DWORD *)(v10 + 8) ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v74) != ((unsigned __int8)v74 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v10 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v74))) )
            goto LABEL_181;
        }
      }
      else if ( !(unsigned __int8)RtlpValidateLFHBlock(a1, v10, a3) )
      {
LABEL_181:
        RtlpLogHeapFailure(3, a1, v10, v8, 0LL, 0LL);
        goto LABEL_182;
      }
      if ( *(char *)(v10 + 15) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v77 = *(_DWORD *)(v10 + 8);
          v132 = v77;
          if ( (v77 & *(_DWORD *)(a1 + 124)) != 0 )
            v132 = *(_DWORD *)(a1 + 136) ^ v77;
          v76 = v132;
        }
        else
        {
          v76 = *(_WORD *)(v10 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v10 + 8) ^ a1 ^ (v10 >> 4)) )
          v75 = 0LL;
        else
          v75 = *(_QWORD *)(v10
                          - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v10 >> 4)) >> 12));
        v76 = *(_WORD *)(v75 + 36);
      }
      if ( *(_BYTE *)(v10 + 15) == 4 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v78 = *(_DWORD *)(v10 + 8);
          v132 = v78;
          if ( (v78 & *(_DWORD *)(a1 + 124)) != 0 )
            v132 = *(_DWORD *)(a1 + 136) ^ v78;
          v79 = v132;
        }
        else
        {
          v79 = *(_WORD *)(v10 + 8);
        }
        v80 = v76 + *(_QWORD *)(v10 - 16) - v79;
      }
      else
      {
        v80 = 16LL * v76;
      }
      if ( v80 + v10 < v8 )
        goto LABEL_181;
      if ( (v7 & 0x3C000102) != 0
        || (*(_BYTE *)(v8 - 1) != 5 ? (v81 = 0LL) : (v81 = v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14)),
            (int)RtlpCallInterceptRoutine(*(_DWORD *)(v8 - 8), a1, v8, 3, v81) >= 0) )
      {
LABEL_127:
        if ( *(char *)(v10 + 15) < 0 )
        {
          v17 = 1;
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4))
            || (v82 = *(__int64 **)(v10
                                  - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12)),
                (v130 = v82) == 0LL) )
          {
            LODWORD(v86) = a1;
          }
          else
          {
            _m_prefetchw(v82);
            v83 = (unsigned __int16)(*(_DWORD *)(v10 + 12) >> 8);
            v84 = *v82;
            v135 = v82[1];
            LODWORD(v129) = v83;
            v85 = *(_QWORD *)(*(_QWORD *)v84 + 24LL);
            LODWORD(v84) = v85 ^ *(_DWORD *)(v135 + 24);
            v131 = (_QWORD **)v85;
            if ( v135
               + v83 * (((unsigned int)v135 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v84) >> 16)
               + (unsigned __int16)(v135 ^ RtlpLFHKey ^ v84) == v10 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v87 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v87 = 2147353472LL;
              if ( *(_BYTE *)v87 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(v131[3], v10 + 16, 2LL);
              v88 = 0;
              if ( MEMORY[0x7FFE036A] > 1u )
                v88 = 100;
              v89 = 0;
              while ( 1 )
              {
                v90 = *((_DWORD *)v130 + 8);
                if ( v90 >= 0
                  && v90 == _InterlockedCompareExchange((volatile signed __int32 *)v130 + 8, v90 | 0x80000000, v90) )
                {
                  break;
                }
                if ( ++v89 > v88 )
                {
                  v90 = -1;
                  break;
                }
              }
              v91 = v130 + 2;
              v92 = v139;
              *(_BYTE *)(v139 + 15) = 0x80;
              if ( v90 == -1 )
              {
                RtlpInterlockedPushEntrySList(v91, v92 + 16);
                goto LABEL_129;
              }
              _bittestandreset64(*(signed __int64 **)(v135 + 40), (unsigned int)v129);
              if ( *v91 )
              {
                v93 = (_QWORD *)RtlpInterlockedFlushSList(v91);
                v94 = 0;
                if ( v93 )
                {
                  do
                  {
                    v95 = *((_DWORD *)v93 - 1);
                    ++v94;
                    v93 = (_QWORD *)*v93;
                    v96 = *(signed __int64 **)(v135 + 40);
                    v95 >>= 8;
                    LODWORD(v129) = (unsigned __int16)v95;
                    _bittestandreset64(v96, (unsigned __int16)v95);
                  }
                  while ( v93 );
                  v17 = 1;
                }
              }
              else
              {
                v94 = 0;
              }
              v97 = (unsigned __int16)v90;
              v98 = (__int64 **)v130;
              v99 = ((_DWORD)v129 << 16) | (v94 + v97 + 1);
              v100 = (volatile __int64 *)*v130;
              if ( (_WORD)v99 != *((_WORD *)v130 + 20)
                || (v101 = *((unsigned int *)v100 + 42), v102 = *(_DWORD *)(*v100 + 32), *((_DWORD *)v100 + 41) == 1)
                && v102 >= (unsigned int)v101
                && v102 - (unsigned int)v101 < *(_DWORD *)(*v100 + 36) )
              {
                *((_DWORD *)v130 + 8) = v99;
                if ( (*((_DWORD *)v98 + 11) & 2) != 0 || !RtlpIsSubSegmentReuseable((__int64)v100, (__int64)v98) )
                  goto LABEL_129;
                do
                {
                  v121 = *((_DWORD *)v98 + 11);
                  if ( !v121 || (v121 & 2) != 0 )
                    goto LABEL_129;
                }
                while ( v121 != _InterlockedCompareExchange((volatile signed __int32 *)v98 + 11, v121 | 2, v121) );
                v122 = (unsigned __int16 *)*v98;
                v123 = 0;
                while ( 1 )
                {
                  v124 = ((_BYTE)v123 + (unsigned __int8)v122[87]) & 0xF;
                  v125 = *(volatile signed __int32 **)&v122[4 * v124 + 8];
                  v126 = &v122[4 * v124];
                  if ( v125 )
                  {
                    if ( (v125[11] & 1) == 0
                      && v125 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                              (volatile signed __int64 *)v126 + 2,
                                                              (signed __int64)v98,
                                                              (signed __int64)v125) )
                    {
                      _m_prefetchw((const void *)(v125 + 11));
                      if ( _InterlockedAnd(v125 + 11, 0xFFFFFFFD) == 2 )
                      {
                        v127 = **(_QWORD **)v125;
                        *(_QWORD *)v125 = 0LL;
                        RtlpInterlockedPushEntrySList(v127, v125 + 12);
                      }
                      goto LABEL_129;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(
                               (volatile signed __int64 *)v126 + 2,
                               (signed __int64)v98,
                               0LL) )
                  {
                    goto LABEL_129;
                  }
                  if ( (unsigned int)++v123 >= 0x10 )
                  {
                    RtlpInterlockedPushEntrySList(
                      *(_QWORD *)(*(_QWORD *)(**v98 + 24) + 8LL * *((unsigned __int16 *)*v98 + 86) + 1192) + 144LL,
                      v98 + 6);
                    goto LABEL_129;
                  }
                }
              }
              v129 = (volatile __int64 *)*v130;
              v103 = (__int64 **)_InterlockedExchange64(v129 + 1, 0LL);
              v131 = v103;
              if ( v103 )
              {
                _m_prefetchw((char *)v103 + 44);
                if ( _InterlockedAnd((volatile signed __int32 *)v103 + 11, 0xFFFFFFF9) == 6 )
                {
                  v104 = **v103;
                  *v103 = 0LL;
                  v105 = v103 + 6;
                  goto LABEL_254;
                }
                if ( RtlpIsSubSegmentReuseable((__int64)v129, (__int64)v103) )
                {
                  do
                  {
                    v106 = *((_DWORD *)v131 + 11);
                    if ( !v106 || (v106 & 2) != 0 )
                      goto LABEL_255;
                  }
                  while ( v106 != _InterlockedCompareExchange((volatile signed __int32 *)v131 + 11, v106 | 2, v106) );
                  v107 = (unsigned __int16 *)*v131;
                  v101 = 0LL;
                  while ( 1 )
                  {
                    v108 = ((_BYTE)v101 + (unsigned __int8)v107[87]) & 0xF;
                    v109 = *(__int64 ***)&v107[4 * v108 + 8];
                    v110 = &v107[4 * v108];
                    if ( v109 )
                    {
                      if ( (*((_DWORD *)v109 + 11) & 1) == 0
                        && v109 == (__int64 **)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)v110 + 2,
                                                 (signed __int64)v131,
                                                 (signed __int64)v109) )
                      {
                        _m_prefetchw((char *)v109 + 44);
                        if ( _InterlockedAnd((volatile signed __int32 *)v109 + 11, 0xFFFFFFFD) == 2 )
                        {
                          v104 = **v109;
                          *v109 = 0LL;
                          v105 = v109 + 6;
LABEL_254:
                          RtlpInterlockedPushEntrySList(v104, v105);
                        }
                        break;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(
                                 (volatile signed __int64 *)v110 + 2,
                                 (signed __int64)v131,
                                 0LL) )
                    {
                      break;
                    }
                    v101 = (unsigned int)(v101 + 1);
                    if ( (unsigned int)v101 >= 0x10 )
                    {
                      v105 = v131 + 6;
                      v104 = *(_QWORD *)(*(_QWORD *)(**v131 + 24LL) + 8LL * *((unsigned __int16 *)*v131 + 86) + 1192)
                           + 144LL;
                      goto LABEL_254;
                    }
                  }
                }
              }
LABEL_255:
              v111 = (*((_BYTE *)v98 + 38) & 3) == 0;
              v112 = *(__int64 **)(*v129 + 24);
              v131 = (_QWORD **)*v98;
              v130 = v112;
              if ( !v111 )
              {
                BaseAddress = (PVOID)(((unsigned __int64)v98[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
                ReservedBlockSize = RtlpGetReservedBlockSize(v98, v129, v112, v101);
                v115 = *(_DWORD **)(v114 + 24);
                RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v98 + 20);
                HeapProtection = RtlpGetHeapProtection(v115, 1);
                ZwProtectVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &BaseAddress,
                  &RegionSize,
                  HeapProtection,
                  OldProtect);
                v112 = v130;
              }
              *((_DWORD *)v98[1] + 5) = 0;
              RtlpFreeUserBlock(v112, v98[1]);
              v117 = -*((unsigned __int16 *)v98 + 20);
              do
                v118 = (signed __int64)v131[20];
              while ( v118 != _InterlockedCompareExchange64(
                                (volatile signed __int64 *)v131 + 20,
                                ((unsigned __int64)(unsigned int)(HIDWORD(v118) - 1) << 32) | (unsigned int)(v118 + v117),
                                v118) );
              v119 = (volatile signed __int32 *)v130;
              v98[1] = 0LL;
              _InterlockedIncrement(v119 + 15);
              *((_DWORD *)v98 + 8) = 0;
              _m_prefetchw((char *)v98 + 44);
              if ( _InterlockedAnd((volatile signed __int32 *)v98 + 11, 0xFFFFFFFE) == 1 )
              {
                v120 = **v98;
                *v98 = 0LL;
                RtlpInterlockedPushEntrySList(v120, v98 + 6);
              }
LABEL_129:
              if ( a5 )
                *a5 = 0;
              if ( a4 )
                *a4 = 0LL;
              if ( RtlpHpStackLoggingEnabled() && (v7 & 0x10000000) == 0 )
                goto LABEL_278;
              return v17;
            }
            v86 = *(_QWORD *)(v85 + 24);
          }
          RtlpLogHeapFailure(3, v86, v10, 0, 0LL, 0LL);
          goto LABEL_129;
        }
LABEL_128:
        v70 = RtlpFreeHeap(a1, v7 | 2u, v10, v8);
        v17 = v70;
        if ( v70 )
          goto LABEL_129;
        return v17;
      }
    }
LABEL_182:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v73 = NtCurrentTeb();
    v73->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( (RtlpHpAppCompatFlags & 2) != 0 && a2 )
  {
    *(_QWORD *)OldProtect = *(_QWORD *)(a2 - 16);
    v8 = a2 - *(_QWORD *)OldProtect;
  }
  else
  {
    *(_QWORD *)OldProtect = 0LL;
  }
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 == 8 )
    {
      v11 = 2;
    }
    else
    {
      v11 = a3 & 1;
      if ( (v7 & 8) != 0 )
        v11 |= 2u;
      if ( (v7 & 4) != 0 )
        v11 |= 0x80000000;
      if ( (v7 & 0x100) != 0 )
        v11 |= 0x100u;
      if ( (v7 & 0xE00) != 0 )
        v11 |= v7 & 0xE00;
      if ( (v7 & 0x10) != 0 )
        v11 |= 0x2000000u;
      if ( (v7 & 2) != 0 )
        v11 |= 0x1000000u;
    }
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_DWORD *)(a1 + 20);
  v13 = *(_DWORD *)(a1 + 220);
  v14 = (v11 | v12) & 0x11000001;
  if ( v13 && v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v14 |= 1u;
  v15 = a5;
  v16 = 0LL;
  v17 = 1;
  if ( a5 )
  {
    v16 = -1LL;
    if ( (_WORD)v8 )
    {
      v18 = 0;
    }
    else
    {
      v64 = RtlCSparseBitmapBitmaskRead(&::BaseAddress, 2 * ((v8 - qword_18017B718) >> 20));
      if ( !v64 || (v18 = v64 - 1, v18 == 2) )
      {
        v40 = RtlpHpLargeAllocSize(a1, v8, v14, &v139);
        goto LABEL_33;
      }
    }
    v19 = 192LL * v18;
    v20 = v19 + a1 + 320;
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v19 + a1 + 320, v8);
    }
    else
    {
      v21 = v8 & *(_QWORD *)v20;
      if ( (RtlpHpHeapGlobals ^ v20 ^ v21 ^ *(_QWORD *)(v21 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        DescriptorValidateSafe = v21 + 32 * ((unsigned __int64)(unsigned int)(v8 - v21) >> *(_BYTE *)(v20 + 8));
      else
        DescriptorValidateSafe = 0LL;
    }
    if ( !DescriptorValidateSafe )
      goto LABEL_149;
    v23 = *(_BYTE *)(DescriptorValidateSafe + 24);
    if ( (v23 & 1) == 0 )
      goto LABEL_149;
    if ( (v23 & 2) != 0 )
    {
      v25 = v23 & 0xC;
      if ( v25 < 8u && (((1 << *(_BYTE *)(v20 + 8)) - 1) & v8) != 0 )
        goto LABEL_149;
    }
    else
    {
      DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
      v24 = *(_BYTE *)(DescriptorValidateSafe + 24);
      if ( (v24 & 3) != 3 )
        goto LABEL_149;
      v25 = v24 & 0xC;
      if ( v25 < 8u )
        goto LABEL_149;
    }
    v26 = *(_BYTE *)(v20 + 8);
    v27 = (DescriptorValidateSafe & *(_QWORD *)v20)
        + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v20)) >> 5 << v26);
    if ( v8 <= v27 )
    {
      if ( (*(_WORD *)(DescriptorValidateSafe + 8) & 1) != 0 )
      {
        _InterlockedOr(v128, 0);
        v26 = *(_BYTE *)(v20 + 8);
        v67 = 1;
      }
      else
      {
        v67 = 0;
      }
      v68 = *(unsigned __int8 *)(DescriptorValidateSafe + 31);
      LODWORD(v139) = v67;
      v40 = (v68 << v26) - *(unsigned int *)(DescriptorValidateSafe + 4);
    }
    else if ( v25 == 8 )
    {
      v28 = *(_QWORD *)(v20 + 24);
      v29 = *(_DWORD *)(v27 + 40);
      v30 = (unsigned int)v27 >> 12;
      v31 = qword_18017AC08 ^ ((unsigned int)v27 >> 12) ^ v29;
      v32 = (unsigned __int16)v31;
      v33 = *(_QWORD *)(v28
                      + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v31 + 15) >> 4]
                      + 128);
      v34 = v8 - HIWORD(v31) - v27;
      v35 = *(unsigned int *)(v33 + 72);
      v36 = *(_BYTE *)(v33 + 76);
      if ( (_DWORD)v35 )
      {
        v37 = (v35 * (unsigned __int64)v34) >> v36;
        v38 = v34 - v37 * v32;
      }
      else
      {
        LODWORD(v37) = v34 >> v36;
        v38 = ((1 << v36) - 1) & v34;
      }
      if ( v38 )
      {
        v40 = -1LL;
      }
      else
      {
        v39 = *(_QWORD *)(v27 + 8 * ((unsigned __int64)(unsigned int)(2 * v37) >> 6) + 48) >> ((2 * v37) & 0x3F);
        if ( (v39 & 1) != 0 )
        {
          v40 = (unsigned __int16)qword_18017AC08 ^ (unsigned int)(unsigned __int16)(v29 ^ v30);
          if ( (v39 & 2) != 0 )
          {
            v41 = (unsigned __int16)qword_18017AC08 ^ (unsigned __int64)(unsigned __int16)(v29 ^ v30);
            v42 = *(_WORD *)(v41 + v8 - 2);
            v43 = v42 & 0x4000;
            if ( (v42 & 0x4000) != 0 )
            {
              _InterlockedOr(v128, 0);
              v42 = *(_WORD *)(v41 + v8 - 2);
            }
            v44 = v43 != 0;
            if ( v42 < 0 )
              v40 = (unsigned int)(v40 - 1);
            else
              v40 = (unsigned int)v40 - (v42 & 0x3FFF);
          }
          else
          {
            v44 = 0;
          }
          LODWORD(v139) = v44;
        }
        else
        {
          v40 = -1LL;
        }
      }
    }
    else
    {
      v40 = RtlpHpVsChunkSize(*(_QWORD *)(v20 + 32), v8, DescriptorValidateSafe, (int *)&v139);
    }
    v15 = a5;
LABEL_33:
    if ( v40 != -1 )
    {
      if ( a4 )
        *a4 = v40;
      if ( (_DWORD)v139 )
      {
        v45 = v40 + v8;
        if ( (v14 & 0x10000000) != 0 )
          v45 += 16LL;
        v16 = (v45 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v16 )
        {
          v46 = *(_WORD *)v16;
LABEL_41:
          *v15 = v46;
          goto LABEL_42;
        }
      }
      else
      {
        v16 = 0LL;
      }
LABEL_86:
      v46 = 0;
      goto LABEL_41;
    }
LABEL_149:
    v15 = a5;
    goto LABEL_86;
  }
  if ( a4 )
    *a4 = RtlpHpSizeHeapInternal(a1, v8, v14, 0LL);
LABEL_42:
  if ( (v14 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      if ( (v16 || (v16 = RtlpHpExtrasGet(a1, v8, v14)) != 0) && v16 != -1LL )
      {
        v71 = *(_BYTE *)(v16 + 2);
        if ( (v71 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v71 & 0xF, a1, v8, 3, v16 + 16) < 0 )
          goto LABEL_160;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, v8, v14) == -1 )
  {
    RtlpLogHeapFailure(9, a1, v8, 0, 0LL, 0LL);
LABEL_160:
    v17 = 0;
    goto LABEL_161;
  }
  if ( (_WORD)v8 )
  {
    v47 = 0;
LABEL_47:
    v48 = 192LL * v47;
    v49 = v48 + a1 + 320;
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      v51 = RtlpHpSegGetDescriptorValidateSafe(v48 + a1 + 320, v8);
    }
    else
    {
      v50 = v8 & *(_QWORD *)v49;
      if ( (RtlpHpHeapGlobals ^ v49 ^ v50 ^ *(_QWORD *)(v50 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        v51 = v50 + 32 * ((unsigned __int64)(unsigned int)(v8 - v50) >> *(_BYTE *)(v49 + 8));
      else
        v51 = 0LL;
    }
    if ( v51 )
    {
      v52 = *(_BYTE *)(v51 + 24);
      if ( (v52 & 1) != 0 )
      {
        if ( (v52 & 2) != 0 )
        {
          v54 = v52 & 0xC;
          if ( v54 >= 8u || (((1 << *(_BYTE *)(v49 + 8)) - 1) & v8) == 0 )
          {
LABEL_55:
            v55 = (v51 & *(_QWORD *)v49) + ((v51 - (v51 & *(_QWORD *)v49)) >> 5 << *(_BYTE *)(v49 + 8));
            if ( v8 <= v55 )
            {
              RtlpHpSegPageRangeShrink(v49, v51, 0, v14);
              v56 = 1;
              if ( RtlGetCurrentServiceSessionId() )
                v69 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v69 = 2147353472LL;
              if ( *(_BYTE *)v69 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v49 + 56), v8, 3LL);
            }
            else
            {
              if ( v54 == 8 )
              {
                v56 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v49 + 24), v55, v8, v14);
              }
              else
              {
                v56 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(v49 + 32), v55, v8, v14, (unsigned int *)&v133);
                v5 = 1;
                if ( v56 )
                {
                  v60 = *(_QWORD *)(v49 + 24);
                  if ( (unsigned int)v133 <= (unsigned int)*(unsigned __int16 *)(v60 + 60) - 16 )
                  {
                    v61 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v133 + 15) >> 4];
                    if ( (*(_QWORD *)(v60 + 8 * v61 + 128) & 1) != 0 )
                    {
                      do
                      {
                        v129 = *(volatile __int64 **)(v60 + 8 * v61 + 128);
                        v62 = (signed __int64)v129;
                        v63 = (signed __int64)v129;
                        if ( ((unsigned __int8)v129 & 1) == 0 )
                          break;
                        if ( WORD1(v129) > 1u )
                        {
                          --WORD1(v129);
                          v63 = (signed __int64)v129;
                        }
                      }
                      while ( v62 != _InterlockedCompareExchange64(
                                       (volatile signed __int64 *)(v60 + 8 * v61 + 128),
                                       v63,
                                       v62) );
                    }
                  }
                }
              }
              SharedData = NtCurrentPeb()->SharedData;
              if ( SharedData && *SharedData )
                v58 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v58 = 2147353472LL;
              if ( *(_BYTE *)v58 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v56 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v49 + 56), v8, (unsigned int)(v5 + 2));
            }
            goto LABEL_61;
          }
        }
        else
        {
          v51 += -32LL * *(unsigned __int8 *)(v51 + 31);
          v53 = *(_BYTE *)(v51 + 24);
          if ( (v53 & 3) == 3 )
          {
            v54 = v53 & 0xC;
            if ( v54 >= 8u )
              goto LABEL_55;
          }
        }
      }
    }
    RtlpLogHeapFailure(9, *(_QWORD *)(v49 + 56), v8, 0, 0LL, 0LL);
    v56 = 0;
LABEL_61:
    v17 = v56;
    goto LABEL_62;
  }
  v65 = RtlCSparseBitmapBitmaskRead(&::BaseAddress, 2 * ((v8 - qword_18017B718) >> 20));
  if ( v65 )
  {
    v47 = v65 - 1;
    if ( v47 != 2 )
      goto LABEL_47;
  }
  if ( !RtlpHpLargeFree(a1, v8, v14) )
    v17 = 0;
  if ( RtlGetCurrentServiceSessionId() )
    v66 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v66 = 2147353472LL;
  if ( *(_BYTE *)v66 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_161;
    RtlpLogHeapFreeEvent(a1, v8, 3LL);
  }
LABEL_62:
  if ( !v17 )
  {
LABEL_161:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v72 = NtCurrentTeb();
    v72->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v17;
  }
  if ( a4 )
    *a4 -= *(_QWORD *)OldProtect;
  if ( (dword_18017AE98 & 1) != 0 && (dword_18017AE98 & 2) != 0 )
  {
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v138 = RtlpHpEnvHandle;
      if ( a1 != *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v138) )
LABEL_278:
        RtlpHpStackTraceRemoveStack(a1, v8);
    }
  }
  return v17;
}
