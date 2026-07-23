/*
 * XREFs of RtlpAllocateHeapInternal @ 0x18003CD60
 * Callers:
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x18003E370 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpTagAllocateHeap @ 0x180065E60 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegAlloc @ 0x180034EA8 (RtlpHpSegAlloc.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1800374D0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18003B350 (RtlpHpFreeHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhSlotAllocate @ 0x18003E3B0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180063F88 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAlloc @ 0x1800643E8 (RtlpHpLargeAlloc.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1800666CC (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpLfhBucketActivate @ 0x180067248 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180087C0C (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpCallInterceptRoutine @ 0x1800AE78E (RtlpCallInterceptRoutine.c)
 *     RtlpAllocateHeapRaiseException @ 0x180102608 (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x1801028B0 (RtlpSetupExtendedBlock.c)
 *     RtlpHpStackTraceAddStack @ 0x1801159D0 (RtlpHpStackTraceAddStack.c)
 *     RtlpLogHeapAllocateEvent @ 0x180116F38 (RtlpLogHeapAllocateEvent.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18012220C (RtlpHpSegGetDescriptorValidateSafe.c)
 */

unsigned __int64 __fastcall RtlpAllocateHeapInternal(
        unsigned __int16 *HeapHandle,
        unsigned __int64 a2,
        int a3,
        __int16 a4)
{
  int v7; // edx
  unsigned int v8; // r14d
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // r10d
  __int64 v13; // r13
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  unsigned __int64 Heap; // rsi
  int v19; // r9d
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  int v23; // r9d
  int v24; // ecx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r13
  unsigned int v27; // edi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  int v30; // r10d
  unsigned int v31; // r14d
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdi
  int v34; // eax
  unsigned int v35; // esi
  int v36; // edx
  char *v37; // r11
  unsigned __int8 *v38; // rdx
  unsigned __int16 *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r10
  __int64 v42; // rdx
  unsigned __int8 v43; // al
  unsigned int v44; // edx
  __int64 v45; // rdx
  _DWORD *SharedData; // rcx
  __int64 v47; // rcx
  int v48; // eax
  unsigned __int64 v49; // r8
  volatile signed __int64 *v50; // rdx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  char v53; // al
  int v54; // eax
  __int64 v55; // rcx
  unsigned __int64 v56; // r13
  unsigned __int64 DescriptorValidateSafe; // rdx
  char v58; // al
  char v59; // cl
  unsigned __int8 v60; // r8
  __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  int v63; // ecx
  int v64; // edx
  unsigned int v65; // ecx
  int v66; // edx
  __int64 *v67; // rcx
  __int64 *v68; // rax
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rdi
  __int64 v71; // rcx
  struct _TEB *v72; // rdi
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // rax
  volatile signed __int64 *v76; // r9
  signed __int64 v77; // rax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rdx
  unsigned int v81; // ecx
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  struct _TEB *v86; // rdi
  __int64 v87; // r9
  int v88; // eax
  __int64 v89; // r9
  unsigned __int64 v90; // rcx
  __int64 v91; // rax
  unsigned __int64 v92; // rcx
  char v93; // r8
  unsigned __int64 v94; // rcx
  int v95; // [rsp+20h] [rbp-79h]
  __int64 v96; // [rsp+20h] [rbp-79h]
  __int64 v97; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v98; // [rsp+38h] [rbp-61h]
  unsigned int v99; // [rsp+40h] [rbp-59h]
  int v100; // [rsp+44h] [rbp-55h] BYREF
  int v101; // [rsp+48h] [rbp-51h]
  int v102; // [rsp+4Ch] [rbp-4Dh]
  int v103; // [rsp+50h] [rbp-49h]
  unsigned __int64 v104; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v105; // [rsp+60h] [rbp-39h]
  int v106; // [rsp+64h] [rbp-35h]
  unsigned __int64 v107; // [rsp+68h] [rbp-31h] BYREF
  unsigned __int16 *v108; // [rsp+70h] [rbp-29h]
  volatile signed __int64 *v109; // [rsp+78h] [rbp-21h]
  signed __int64 v110; // [rsp+80h] [rbp-19h]
  unsigned __int64 v111; // [rsp+88h] [rbp-11h]
  __int128 v112; // [rsp+90h] [rbp-9h] BYREF
  PRTL_SRWLOCK SRWLock[2]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v114; // [rsp+B0h] [rbp+17h]
  int v115; // [rsp+100h] [rbp+67h]
  int v116; // [rsp+100h] [rbp+67h]

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( !a3 )
    {
      v23 = 0;
      v116 = 0;
      goto LABEL_22;
    }
    if ( a3 == 8 )
    {
      v23 = 2;
    }
    else
    {
      v64 = a3 & 1 | 2;
      if ( (a3 & 8) == 0 )
        v64 = a3 & 1;
      v65 = v64 | 0x80000000;
      if ( (a3 & 4) == 0 )
        v65 = v64;
      v66 = v65 | 0x100;
      if ( (a3 & 0x100) == 0 )
        v66 = v65;
      v23 = a3 & 0xE00 | v66;
      if ( (a3 & 0xE00) == 0 )
        v23 = v66;
      v116 = v23;
      if ( (a3 & 0x10) != 0 )
      {
        v23 |= 0x2000000u;
        v116 = v23;
      }
      if ( (a3 & 2) == 0 )
      {
LABEL_22:
        v24 = *((_DWORD *)HeapHandle + 55);
        if ( v24 && v24 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
        {
          v23 |= 1u;
          v116 = v23;
        }
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          v25 = 64LL;
          if ( a2 <= 0xFEFF8 )
            v25 = 16LL;
        }
        else
        {
          v25 = 0LL;
        }
        v26 = v25 + a2;
        v98 = v25;
        if ( v25 + a2 < a2 )
        {
          Heap = 0LL;
          goto LABEL_154;
        }
        v27 = (*((_DWORD *)HeapHandle + 5) | v23) & 0x93000F0B;
        if ( !dword_18017E828 )
        {
          v28 = *((_QWORD *)HeapHandle + 6);
          if ( (v28 || (v28 = qword_180184E68) != 0) && v26 > v28 )
          {
            v87 = *((_QWORD *)HeapHandle + 7);
            if ( v87 )
            {
              RtlpLogHeapFailure(20, (_DWORD)HeapHandle, 0, v87, v26, *((_QWORD *)HeapHandle + 6));
              v25 = v98;
            }
            Heap = 0LL;
            v33 = 0LL;
            v45 = 0LL;
LABEL_52:
            SharedData = NtCurrentPeb()->SharedData;
            if ( SharedData && *SharedData )
              v47 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v47 = 2147353472LL;
            if ( *(_BYTE *)v47 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            {
              RtlpLogHeapAllocateEvent(HeapHandle, Heap, v33, (unsigned int)v45);
              v25 = v98;
            }
            if ( Heap )
            {
              if ( (RtlpHpAppCompatFlags & 2) != 0 )
              {
                *(_QWORD *)(Heap + v25 - 16) = v25;
                if ( v25 > 0x10 )
                  *(_QWORD *)Heap = v25;
                Heap += v25;
              }
              if ( (dword_180185108 & 1) != 0 && (dword_180185108 & 2) != 0 )
              {
                if ( NtCurrentPeb()->ProcessHeap )
                {
                  v112 = RtlpHpEnvHandle;
                  if ( HeapHandle != *(unsigned __int16 **)RtlpHpMetadataHeapCtxGet(&v112, v45) )
                    goto LABEL_214;
                }
              }
              return Heap;
            }
LABEL_154:
            NtCurrentTeb()->LastStatusValue = -1073741801;
            v86 = NtCurrentTeb();
            v86->LastErrorValue = RtlNtStatusToDosError(-1073741801);
            if ( v116 < 0 || *((int *)HeapHandle + 5) < 0 )
              RtlpAllocateHeapRaiseException(a2);
            return Heap;
          }
        }
        v102 = 0;
        v29 = 0LL;
        v107 = 0LL;
        if ( (v27 & 0x1000000) == 0 )
        {
          v30 = *((_DWORD *)HeapHandle + 6);
          v102 = v30;
          if ( v30 )
          {
            v27 |= 8u;
            v88 = RtlpCallInterceptRoutine(v30, (_DWORD)HeapHandle, 0, 1, (__int64)&v107);
            v25 = v98;
            if ( v88 < 0 )
            {
              Heap = 0LL;
              v33 = 0LL;
              v45 = 0LL;
              goto LABEL_52;
            }
            v29 = v107;
          }
        }
        v31 = v27 | 8;
        if ( !a4 )
          v31 = v27;
        v32 = v26 + v29;
        v106 = v31 & 0x10000000;
        if ( (v31 & 0x10000000) != 0 )
          v32 += 16LL;
        v103 = v31 & 0x20000F08;
        if ( (v31 & 0x20000F08) != 0 )
          v32 = ((v32 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
        v33 = 1LL;
        if ( v32 )
          v33 = v32;
        v111 = v33;
        if ( v33 < v26 || v26 > 0x7FFFFFFFFFFFFFFFLL )
        {
          Heap = 0LL;
          v45 = 0LL;
          goto LABEL_52;
        }
        v34 = HeapHandle[478];
        v35 = v31 & 0x13000003;
        v99 = 3;
        v101 = v31 & 0x13000003;
        if ( v33 > (unsigned int)(v34 - 16) )
          goto LABEL_123;
        v36 = v33 + 2;
        if ( (_DWORD)v26 == (_DWORD)v33 )
          v36 = v33;
        v37 = (char *)(HeapHandle + 448);
        v38 = &RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v36 + 15) >> 4];
        v39 = &HeapHandle[4 * *v38 + 512];
        v40 = *(_QWORD *)v39;
        v108 = v39;
        if ( (v40 & 1) == 0 )
          goto LABEL_45;
        v73 = *v38;
        v105 = *v38;
        v74 = 8 * v73 + 128;
        v75 = *(_QWORD *)&v37[v74];
        v76 = (volatile signed __int64 *)&v37[v74];
        v109 = (volatile signed __int64 *)&v37[v74];
        if ( (v75 & 1) != 0 )
        {
          do
          {
            v77 = *(_QWORD *)&v37[v74];
            v110 = v77;
            v78 = v77;
            if ( (v77 & 1) == 0 )
              break;
            if ( (BYTE2(v77) & 0x1Fu) > 0x10 )
              break;
            if ( WORD1(v77) > 0xFF00u )
              break;
            WORD1(v110) = WORD1(v77) + 33;
            v78 = v110;
          }
          while ( v77 != _InterlockedCompareExchange64(v76, v110, v77) );
          v79 = v78 >> 16;
          if ( (v79 & 0x1F) > 0x10 || (unsigned __int16)v79 > 0xFF00u )
          {
            RtlpHpLfhBucketActivate(HeapHandle + 448, v105);
            v76 = v109;
            v37 = (char *)(HeapHandle + 448);
          }
          v39 = v108;
        }
        if ( (*v76 & 1) != 0 )
        {
LABEL_123:
          v44 = v26;
        }
        else
        {
LABEL_45:
          v41 = *(_QWORD *)v39;
          v42 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6;
          if ( *(_BYTE *)(*(_QWORD *)v39 + 2LL) == 1 )
            v43 = 0;
          else
            v43 = *(_BYTE *)(v42 + BYTE1(NtCurrentTeb()->HeapData) + v41);
          Heap = RtlpHpLfhSlotAllocate(
                   (_DWORD)v37,
                   v41,
                   *(_QWORD *)((unsigned __int8)v37[56]
                             - (unsigned __int64)((v37[56] - 1) & 7)
                             + v42
                             + 7
                             + 8LL * v43
                             + v41),
                   v26,
                   v31 & 0x13000003);
          v44 = v26;
          if ( Heap != -1LL )
          {
            v45 = 2LL;
            v99 = 2;
            goto LABEL_49;
          }
          v35 = v101;
        }
        if ( v33 > 0x20000 )
        {
          if ( v33 > *((unsigned int *)HeapHandle + 132) )
          {
            v84 = RtlpHpLargeAlloc(HeapHandle);
          }
          else
          {
            v83 = 256LL;
            if ( v33 <= *((unsigned int *)HeapHandle + 84) )
              v83 = 160LL;
            v84 = RtlpHpSegAlloc((__int64)&HeapHandle[v83], v26, v33, v33, v35);
          }
          Heap = v84;
        }
        else
        {
          v100 = 0;
          v114 = 0LL;
          *(_OWORD *)SRWLock = 0LL;
          Heap = (unsigned __int64)RtlpHpVsContextAllocateInternal(
                                     (PRTL_SRWLOCK)HeapHandle + 88,
                                     v44,
                                     v33,
                                     v35,
                                     (__int64)SRWLock,
                                     &v100);
          if ( v100 && (v101 & 1) == 0 )
          {
            RtlReleaseSRWLockExclusive(SRWLock[1]);
            SRWLock[1] = 0LL;
          }
        }
        v45 = 3LL;
LABEL_49:
        if ( !Heap || (v31 & 0x30000F08) == 0 )
        {
LABEL_51:
          v25 = v98;
          goto LABEL_52;
        }
        v48 = v106;
        v49 = v107;
        if ( v106 )
          *(__m128i *)(Heap + v26) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
        v50 = 0LL;
        if ( !v103 )
        {
LABEL_80:
          v63 = v102;
          if ( v102 )
          {
            *((_BYTE *)v50 + 2) ^= (*((_BYTE *)v50 + 2) ^ v102) & 0xF;
            if ( (int)RtlpCallInterceptRoutine(v63, (_DWORD)HeapHandle, Heap, 2, (__int64)(v50 + 2)) < 0 )
            {
              RtlpHpFreeHeap(HeapHandle, Heap, v31, 0LL, 0LL);
              Heap = 0LL;
            }
          }
          v45 = v99;
          goto LABEL_51;
        }
        v51 = Heap + v26;
        if ( v48 )
          v51 += 16LL;
        v52 = (v51 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        v109 = (volatile signed __int64 *)v52;
        *(_OWORD *)v52 = 0LL;
        v53 = *(_BYTE *)(v52 + 2) & 0xF;
        *(_BYTE *)(v52 + 3) = v49 >> 4;
        *(_WORD *)v52 = a4;
        *(_BYTE *)(v52 + 2) = v53 | (16 * (BYTE1(v31) & 0xFE));
        v103 = 1;
        if ( (_WORD)Heap )
        {
          v54 = 0;
        }
        else
        {
          v85 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((Heap - qword_1801859B8) >> 20));
          if ( !v85 || (v54 = v85 - 1, v54 == 2) )
          {
            RtlpHpLargeAllocSetExtraPresent(HeapHandle, Heap, v31);
LABEL_79:
            v33 = v111;
            v50 = v109;
            goto LABEL_80;
          }
        }
        v55 = 96LL * v54;
        v56 = (unsigned __int64)&HeapHandle[v55 + 160];
        if ( (RtlpHpAppCompatFlags & 1) != 0 )
        {
          DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(&HeapHandle[v55 + 160], Heap);
        }
        else if ( (RtlpHpHeapGlobals ^ v56 ^ *(_QWORD *)((*(_QWORD *)v56 & Heap) + 0x10) ^ *(_QWORD *)v56 & Heap) == 0xA2E64EADA2E64EADuLL )
        {
          DescriptorValidateSafe = (*(_QWORD *)v56 & Heap)
                                 + 32
                                 * ((unsigned __int64)((unsigned int)Heap - (*(_DWORD *)v56 & (unsigned int)Heap)) >> *(_BYTE *)(v56 + 8));
        }
        else
        {
          DescriptorValidateSafe = 0LL;
        }
        if ( DescriptorValidateSafe )
        {
          v58 = *(_BYTE *)(DescriptorValidateSafe + 24);
          if ( (v58 & 1) != 0 )
          {
            if ( (v58 & 2) != 0 )
            {
              if ( (v58 & 0xCu) >= 8 || (((1 << *(_BYTE *)(v56 + 8)) - 1) & Heap) == 0 )
              {
LABEL_76:
                v60 = *(_BYTE *)(DescriptorValidateSafe + 24) & 0xC;
                if ( v60 < 8u )
                {
                  *(_WORD *)(DescriptorValidateSafe + 8) |= 1u;
                }
                else
                {
                  v61 = (*(_QWORD *)v56 & DescriptorValidateSafe)
                      + ((__int64)(DescriptorValidateSafe - (*(_QWORD *)v56 & DescriptorValidateSafe)) >> 5 << *(_BYTE *)(v56 + 8));
                  if ( v60 == 8 )
                  {
                    v62 = (unsigned __int16)qword_180184E48 ^ *(unsigned __int16 *)(v61 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v61 >> 12);
                    *(_WORD *)(v62 + Heap - 2) |= 0x4000u;
                  }
                  else
                  {
                    v80 = Heap - 16;
                    if ( (*(_BYTE *)(*(_QWORD *)(v56 + 32) + 176LL) & 1) != 0 )
                    {
                      if ( (Heap & 0xFFF) == 0 )
                        v80 = Heap - 32;
                      v82 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v80) ^ *(unsigned __int16 *)(v80 + 2)) - 16;
                      if ( ((v80 + 32) & 0xFFF) == 0 )
                        v82 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v80) ^ *(unsigned __int16 *)(v80 + 2)) - 32;
                    }
                    else
                    {
                      v81 = WORD1(v80) ^ *(unsigned __int16 *)(v80 + 2);
                      v108 = (unsigned __int16 *)(Heap - 16);
                      v82 = 16 * (WORD1(RtlpHpHeapGlobals) ^ v81) - 16;
                    }
                    *(_WORD *)(v82 + Heap - 2) |= 0x4000u;
                  }
                }
                goto LABEL_79;
              }
            }
            else
            {
              DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
              v59 = *(_BYTE *)(DescriptorValidateSafe + 24);
              if ( (v59 & 3) == 3 && (v59 & 0xCu) >= 8 )
                goto LABEL_76;
            }
          }
        }
        DescriptorValidateSafe = 0LL;
        goto LABEL_76;
      }
      v23 |= 0x1000000u;
    }
    v116 = v23;
    goto LABEL_22;
  }
  v7 = *((_DWORD *)HeapHandle + 29);
  v8 = v7 | a3;
  LODWORD(v97) = 0;
  v104 = 0LL;
  v9 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
  {
    LODWORD(v97) = 5;
  }
  else
  {
    if ( (v7 & 0x1000000) == 0 && !dword_18017E828 )
    {
      v10 = *((_QWORD *)HeapHandle + 49);
      v11 = v10;
      if ( (v10 || (v11 = qword_180184E68) != 0) && a2 > v11 )
      {
        v89 = *((_QWORD *)HeapHandle + 50);
        if ( v89 )
          RtlpLogHeapFailure(20, (_DWORD)HeapHandle, 0, v89, a2, v10);
        LODWORD(v97) = 5;
        goto LABEL_192;
      }
    }
    v12 = *((_DWORD *)HeapHandle + 36);
    v115 = v12;
    if ( !v12 )
      goto LABEL_8;
    if ( (v8 & 0x3C000102) != 0 || (v7 & 0x1000000) != 0 )
    {
      v115 = 0;
      goto LABEL_8;
    }
    if ( (int)RtlpCallInterceptRoutine(v12, (_DWORD)HeapHandle, 0, 1, (__int64)&v104) >= 0 )
    {
      v90 = (v104 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      a2 += v90 + 16;
      v104 = v90 + 16;
LABEL_8:
      if ( a2 )
        v13 = a2;
      else
        v13 = 1LL;
      v9 = (v13 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = v9 >> 4;
      if ( (v8 & 0x7D810F61) != 0 )
        goto LABEL_130;
      if ( a2 <= RtlpLargestLfhBlock
        && ((unsigned __int8)(1 << ((v9 >> 4) & 7)) & *((_BYTE *)HeapHandle + (v9 >> 7) + 434)) != 0 )
      {
        v15 = *((_QWORD *)HeapHandle + 53);
        v16 = *((_QWORD *)HeapHandle + 51);
        LODWORD(v97) = 2;
        Heap = RtlpLowFragHeapAllocFromContext(v16, *(unsigned __int16 *)(v15 + 2 * v14), a2, v8);
        if ( Heap )
        {
LABEL_14:
          if ( !v115 )
            goto LABEL_15;
          LOWORD(v95) = v104;
          a2 -= v104;
          v91 = RtlpSetupExtendedBlock((_DWORD)HeapHandle, v8, Heap, v19, v95, v115);
          v96 = Heap;
          Heap = v91;
          if ( (int)RtlpCallInterceptRoutine(v115, (_DWORD)HeapHandle, v91, 2, v96) >= 0 )
            goto LABEL_15;
          RtlFreeHeap(HeapHandle, 0, (PVOID)Heap);
          goto LABEL_192;
        }
      }
      v67 = (__int64 *)*((_QWORD *)HeapHandle + 39);
      if ( v14 < *((unsigned int *)v67 + 2) )
      {
LABEL_105:
        v69 = v9 >> 4;
      }
      else
      {
        while ( 1 )
        {
          v68 = (__int64 *)*v67;
          if ( !*v67 )
            break;
          v67 = (__int64 *)*v67;
          if ( v14 < *((unsigned int *)v68 + 2) )
            goto LABEL_105;
        }
        v69 = (unsigned int)(*((_DWORD *)v67 + 2) - 1);
      }
      if ( v14 != v69 || v69 >= *((unsigned int *)v67 + 2) )
      {
LABEL_130:
        v71 = 0LL;
      }
      else
      {
        v70 = v14 - *((unsigned int *)v67 + 6);
        if ( *((_DWORD *)v67 + 3) )
          v70 *= 2LL;
        v71 = v67[6] + 8 * v70;
      }
      Heap = RtlpAllocateHeap((int)HeapHandle, v71, (__int64)&v97);
      if ( !Heap )
        goto LABEL_112;
      goto LABEL_14;
    }
  }
LABEL_192:
  Heap = 0LL;
LABEL_112:
  NtCurrentTeb()->LastStatusValue = -1073741801;
  v72 = NtCurrentTeb();
  v72->LastErrorValue = RtlNtStatusToDosError(-1073741801);
  if ( (v8 & 4) != 0 )
  {
    v92 = a2;
    if ( v9 )
      v92 = v9;
    RtlpAllocateHeapRaiseException(v92);
  }
LABEL_15:
  v20 = NtCurrentPeb()->SharedData;
  if ( v20 && *v20 )
    v21 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v21 = 2147353472LL;
  if ( *(_BYTE *)v21
    && (NtCurrentPeb()->TracingFlags & 1) != 0
    && (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0
    && ((v8 & 0x61000000) == 0 || (v8 & 0x10000000) != 0)
    && (_DWORD)v97 != 5 )
  {
    if ( !Heap )
      goto LABEL_208;
    v17 = (_BYTE *)(Heap - 16);
    _m_prefetchw((const void *)(Heap - 16));
    v93 = *(_BYTE *)(Heap - 16 + 15);
    v94 = Heap - 16;
    if ( v93 == 5 )
      v94 -= 16LL * (unsigned __int8)v17[14];
    if ( *(char *)(v94 + 15) < 0 )
      goto LABEL_208;
    _m_prefetchw(v17);
    if ( v93 == 5 )
      v17 -= 16 * (unsigned __int8)v17[14];
    if ( ((v17[10] ^ (unsigned __int8)(HeapHandle[69] & (*((_DWORD *)HeapHandle + 31) >> 17))) & 8) == 0 )
LABEL_208:
      RtlpLogHeapAllocateEvent(HeapHandle, Heap, a2, (unsigned int)v97);
  }
  if ( (dword_180185108 & 1) != 0 && (dword_180185108 & 2) != 0 )
  {
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v112 = RtlpHpEnvHandle;
      if ( HeapHandle != *(unsigned __int16 **)RtlpHpMetadataHeapCtxGet(&v112, v17) && Heap && (v8 & 0x10000000) == 0 )
LABEL_214:
        RtlpHpStackTraceAddStack(HeapHandle, Heap);
    }
  }
  return Heap;
}
