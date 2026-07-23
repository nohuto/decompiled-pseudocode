/*
 * XREFs of RtlpAllocateHeapInternal @ 0x180028BF0
 * Callers:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x18002A180 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpTagAllocateHeap @ 0x18005594C (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlpHpSegAlloc @ 0x1800184F8 (RtlpHpSegAlloc.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180019520 (RtlpHpVsContextAllocateInternal.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180027850 (RtlpHpFreeHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180029530 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhSlotAllocate @ 0x18002A1C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpHpLfhBucketActivate @ 0x1800307CC (RtlpHpLfhBucketActivate.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180055544 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpLargeAlloc @ 0x180058D3C (RtlpHpLargeAlloc.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059108 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18008ACC8 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpCallInterceptRoutine @ 0x1800FEA3C (RtlpCallInterceptRoutine.c)
 *     RtlpAllocateHeapRaiseException @ 0x1801028EC (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x180102C1C (RtlpSetupExtendedBlock.c)
 *     RtlpHpStackTraceAddStack @ 0x1801155F0 (RtlpHpStackTraceAddStack.c)
 *     RtlpLogHeapAllocateEvent @ 0x180116B4C (RtlpLogHeapAllocateEvent.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x180120184 (RtlpHpSegGetDescriptorValidateSafe.c)
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
  unsigned __int64 Heap; // rsi
  int v18; // r9d
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  int v22; // r9d
  int v23; // ecx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r13
  unsigned int v26; // edi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  int v29; // r10d
  unsigned int v30; // r14d
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  int v33; // eax
  unsigned int v34; // esi
  int v35; // edx
  char *v36; // r11
  unsigned __int8 *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r10
  __int64 v40; // rdx
  unsigned __int8 v41; // al
  unsigned int v42; // edx
  _DWORD *SharedData; // rcx
  __int64 v44; // rcx
  int v45; // eax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r13
  int v49; // eax
  __int64 v50; // rcx
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // r8
  __int64 v53; // rdx
  char v54; // al
  char v55; // cl
  unsigned __int8 v56; // r8
  __int64 v57; // r10
  unsigned __int64 v58; // rcx
  int v59; // ecx
  int v60; // edx
  unsigned int v61; // ecx
  int v62; // edx
  __int64 *v63; // rcx
  __int64 *v64; // rax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rdi
  __int64 v67; // rcx
  struct _TEB *v68; // rdi
  __int64 v69; // r10
  volatile signed __int64 *v70; // r9
  volatile signed __int64 v71; // rax
  signed __int64 v72; // rax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  struct _TEB *v80; // rdi
  __int64 v81; // r9
  int v82; // eax
  __int64 DescriptorValidateSafe; // rax
  __int64 v84; // r9
  unsigned __int64 v85; // rcx
  __int64 v86; // rax
  unsigned __int64 v87; // rcx
  _BYTE *v88; // rdx
  char v89; // r8
  unsigned __int64 v90; // rcx
  int v91; // [rsp+20h] [rbp-79h]
  __int64 v92; // [rsp+20h] [rbp-79h]
  __int64 v93; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v94; // [rsp+38h] [rbp-61h]
  int v95; // [rsp+40h] [rbp-59h]
  int v96; // [rsp+44h] [rbp-55h] BYREF
  int v97; // [rsp+48h] [rbp-51h]
  int v98; // [rsp+4Ch] [rbp-4Dh]
  int v99; // [rsp+50h] [rbp-49h]
  unsigned __int64 v100; // [rsp+58h] [rbp-41h] BYREF
  int v101; // [rsp+60h] [rbp-39h]
  unsigned __int64 v102; // [rsp+68h] [rbp-31h] BYREF
  volatile signed __int64 *v103; // [rsp+70h] [rbp-29h]
  signed __int64 v104; // [rsp+78h] [rbp-21h]
  __int64 v105; // [rsp+80h] [rbp-19h]
  unsigned __int64 v106; // [rsp+88h] [rbp-11h]
  __int128 v107; // [rsp+90h] [rbp-9h] BYREF
  PRTL_SRWLOCK SRWLock[2]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v109; // [rsp+B0h] [rbp+17h]
  int v110; // [rsp+100h] [rbp+67h]
  int v111; // [rsp+100h] [rbp+67h]

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( !a3 )
    {
      v22 = 0;
      v111 = 0;
      goto LABEL_22;
    }
    if ( a3 == 8 )
    {
      v22 = 2;
    }
    else
    {
      v60 = a3 & 1 | 2;
      if ( (a3 & 8) == 0 )
        v60 = a3 & 1;
      v61 = v60 | 0x80000000;
      if ( (a3 & 4) == 0 )
        v61 = v60;
      v62 = v61 | 0x100;
      if ( (a3 & 0x100) == 0 )
        v62 = v61;
      v22 = a3 & 0xE00 | v62;
      if ( (a3 & 0xE00) == 0 )
        v22 = v62;
      v111 = v22;
      if ( (a3 & 0x10) != 0 )
      {
        v22 |= 0x2000000u;
        v111 = v22;
      }
      if ( (a3 & 2) == 0 )
      {
LABEL_22:
        v23 = *((_DWORD *)HeapHandle + 55);
        if ( v23 && v23 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
        {
          v22 |= 1u;
          v111 = v22;
        }
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          v24 = 64LL;
          if ( a2 <= 0xFEFF8 )
            v24 = 16LL;
        }
        else
        {
          v24 = 0LL;
        }
        v25 = v24 + a2;
        v94 = v24;
        if ( v24 + a2 < a2 )
        {
          Heap = 0LL;
          goto LABEL_154;
        }
        v26 = (v22 | *((_DWORD *)HeapHandle + 5)) & 0x93000F0B;
        if ( !dword_180174238 )
        {
          v27 = *((_QWORD *)HeapHandle + 6);
          if ( (v27 || (v27 = qword_18017AC28) != 0) && v25 > v27 )
          {
            v81 = *((_QWORD *)HeapHandle + 7);
            if ( v81 )
            {
              RtlpLogHeapFailure(20, (_DWORD)HeapHandle, 0, v81, v25, *((_QWORD *)HeapHandle + 6));
              v24 = v94;
            }
            Heap = 0LL;
            v32 = 0LL;
            v42 = 0;
LABEL_54:
            SharedData = NtCurrentPeb()->SharedData;
            if ( SharedData && *SharedData )
              v44 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v44 = 2147353472LL;
            if ( *(_BYTE *)v44 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            {
              RtlpLogHeapAllocateEvent(HeapHandle, Heap, v32, v42);
              v24 = v94;
            }
            if ( Heap )
            {
              if ( (RtlpHpAppCompatFlags & 2) != 0 )
              {
                *(_QWORD *)(Heap + v24 - 16) = v24;
                if ( v24 > 0x10 )
                  *(_QWORD *)Heap = v24;
                Heap += v24;
              }
              if ( (dword_18017AE98 & 1) != 0 && (dword_18017AE98 & 2) != 0 )
              {
                if ( NtCurrentPeb()->ProcessHeap )
                {
                  v107 = RtlpHpEnvHandle;
                  if ( HeapHandle != *(unsigned __int16 **)RtlpHpMetadataHeapCtxGet(&v107) )
                    goto LABEL_214;
                }
              }
              return Heap;
            }
LABEL_154:
            NtCurrentTeb()->LastStatusValue = -1073741801;
            v80 = NtCurrentTeb();
            v80->LastErrorValue = RtlNtStatusToDosError(-1073741801);
            if ( v111 < 0 || *((int *)HeapHandle + 5) < 0 )
              RtlpAllocateHeapRaiseException(a2);
            return Heap;
          }
        }
        v98 = 0;
        v28 = 0LL;
        v102 = 0LL;
        if ( (v26 & 0x1000000) == 0 )
        {
          v29 = *((_DWORD *)HeapHandle + 6);
          v98 = v29;
          if ( v29 )
          {
            v26 |= 8u;
            v82 = RtlpCallInterceptRoutine(v29, (_DWORD)HeapHandle, 0, 1, (__int64)&v102);
            v24 = v94;
            if ( v82 < 0 )
            {
              Heap = 0LL;
              v32 = 0LL;
              v42 = 0;
              goto LABEL_54;
            }
            v28 = v102;
          }
        }
        v30 = v26 | 8;
        if ( !a4 )
          v30 = v26;
        v31 = v25 + v28;
        v101 = v30 & 0x10000000;
        if ( (v30 & 0x10000000) != 0 )
          v31 += 16LL;
        v99 = v30 & 0x20000F08;
        if ( (v30 & 0x20000F08) != 0 )
          v31 = ((v31 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
        v32 = 1LL;
        if ( v31 )
          v32 = v31;
        v106 = v32;
        if ( v32 < v25 || v25 > 0x7FFFFFFFFFFFFFFFLL )
        {
          Heap = 0LL;
          v42 = 0;
          goto LABEL_54;
        }
        v33 = HeapHandle[478];
        v34 = v30 & 0x13000003;
        v95 = 3;
        v97 = v30 & 0x13000003;
        if ( v32 <= (unsigned int)(v33 - 16) )
        {
          v35 = v32 + 2;
          if ( (_DWORD)v25 == (_DWORD)v32 )
            v35 = v32;
          v36 = (char *)(HeapHandle + 448);
          v37 = &RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v35 + 15) >> 4];
          v38 = *v37;
          v105 = v38;
          if ( (*(_QWORD *)&HeapHandle[4 * v38 + 512] & 1) == 0 )
            goto LABEL_47;
          v69 = *v37;
          v70 = (volatile signed __int64 *)&HeapHandle[4 * v69 + 512];
          v71 = *v70;
          v103 = v70;
          if ( (v71 & 1) != 0 )
          {
            do
            {
              v72 = *v70;
              v104 = v72;
              v73 = v72;
              if ( (v72 & 1) == 0 )
                break;
              if ( (BYTE2(v72) & 0x1Fu) > 0x10 )
                break;
              if ( WORD1(v72) > 0xFF00u )
                break;
              WORD1(v104) = WORD1(v72) + 33;
              v73 = v104;
            }
            while ( v72 != _InterlockedCompareExchange64(v70, v104, v72) );
            v74 = v73 >> 16;
            if ( (v74 & 0x1F) > 0x10 || (unsigned __int16)v74 > 0xFF00u )
            {
              RtlpHpLfhBucketActivate(HeapHandle + 448, (unsigned int)v69);
              v70 = v103;
              v36 = (char *)(HeapHandle + 448);
            }
            v38 = v105;
          }
          if ( (*v70 & 1) == 0 )
          {
LABEL_47:
            v39 = *(_QWORD *)&v36[8 * v38 + 128];
            v40 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6;
            if ( *(_BYTE *)(v39 + 2) == 1 )
              v41 = 0;
            else
              v41 = *(_BYTE *)(v40 + BYTE1(NtCurrentTeb()->HeapData) + v39);
            Heap = RtlpHpLfhSlotAllocate(
                     (_DWORD)v36,
                     v39,
                     *(_QWORD *)((unsigned __int8)v36[56]
                               - (unsigned __int64)((v36[56] - 1) & 7)
                               + v40
                               + 7
                               + 8LL * v41
                               + v39),
                     v25,
                     v30 & 0x13000003);
            if ( Heap != -1LL )
            {
              v42 = 2;
              v95 = 2;
              goto LABEL_51;
            }
            v34 = v97;
          }
        }
        if ( v32 > 0x20000 )
        {
          if ( v32 > *((unsigned int *)HeapHandle + 132) )
          {
            v78 = RtlpHpLargeAlloc(HeapHandle);
          }
          else
          {
            v77 = 256LL;
            if ( v32 <= *((unsigned int *)HeapHandle + 84) )
              v77 = 160LL;
            v78 = RtlpHpSegAlloc((__int64)&HeapHandle[v77], v25, v32, v32, v34);
          }
          Heap = v78;
        }
        else
        {
          v96 = 0;
          v109 = 0LL;
          *(_OWORD *)SRWLock = 0LL;
          Heap = (unsigned __int64)RtlpHpVsContextAllocateInternal(
                                     (PRTL_SRWLOCK)HeapHandle + 88,
                                     v25,
                                     v32,
                                     v34,
                                     (__int64)SRWLock,
                                     &v96);
          if ( v96 && (v97 & 1) == 0 )
          {
            RtlReleaseSRWLockExclusive(SRWLock[1]);
            SRWLock[1] = 0LL;
          }
        }
        v42 = 3;
LABEL_51:
        if ( !Heap || (v30 & 0x30000F08) == 0 )
        {
LABEL_53:
          v24 = v94;
          goto LABEL_54;
        }
        v45 = v101;
        v46 = v102;
        v47 = Heap + v25;
        if ( v101 )
          *(__m128i *)(Heap + v25) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
        v48 = 0LL;
        if ( !v99 )
        {
LABEL_80:
          v59 = v98;
          if ( v98 )
          {
            *(_BYTE *)(v48 + 2) &= 0xF0u;
            *(_BYTE *)(v48 + 2) |= v59 & 0xF;
            if ( (int)RtlpCallInterceptRoutine(v59, (_DWORD)HeapHandle, Heap, 2, v48 + 16) < 0 )
            {
              RtlpHpFreeHeap(HeapHandle, Heap, v30, 0LL, 0LL);
              Heap = 0LL;
            }
          }
          v42 = v95;
          goto LABEL_53;
        }
        if ( v45 )
          v47 += 16LL;
        v48 = (v47 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        *(_OWORD *)v48 = 0LL;
        *(_BYTE *)(v48 + 2) &= 0xFu;
        *(_BYTE *)(v48 + 2) |= 16 * (BYTE1(v30) & 0xFE);
        *(_WORD *)v48 = a4;
        *(_BYTE *)(v48 + 3) = v46 >> 4;
        v99 = 1;
        if ( (_WORD)Heap )
        {
          v49 = 0;
        }
        else
        {
          v79 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((Heap - qword_18017B718) >> 20));
          if ( !v79 || (v49 = v79 - 1, v49 == 2) )
          {
            RtlpHpLargeAllocSetExtraPresent(HeapHandle, Heap, v30);
LABEL_79:
            v32 = v106;
            goto LABEL_80;
          }
        }
        v50 = 96LL * v49;
        v51 = (unsigned __int64)&HeapHandle[v50 + 160];
        v103 = (volatile signed __int64 *)v51;
        if ( (RtlpHpAppCompatFlags & 1) != 0 )
        {
          DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(&HeapHandle[v50 + 160], Heap);
          v51 = (unsigned __int64)v103;
          v53 = DescriptorValidateSafe;
        }
        else
        {
          v52 = *(_QWORD *)v51 & Heap;
          if ( (RtlpHpHeapGlobals ^ v51 ^ v52 ^ *(_QWORD *)(v52 + 0x10)) == 0xA2E64EADA2E64EADuLL )
            v53 = v52 + 32 * ((unsigned __int64)(unsigned int)(Heap - v52) >> *(_BYTE *)(v51 + 8));
          else
            v53 = 0LL;
        }
        if ( v53 )
        {
          v54 = *(_BYTE *)(v53 + 24);
          if ( (v54 & 1) != 0 )
          {
            if ( (v54 & 2) != 0 )
            {
              if ( (v54 & 0xCu) >= 8 || (((1 << *(_BYTE *)(v51 + 8)) - 1) & Heap) == 0 )
              {
LABEL_76:
                v56 = *(_BYTE *)(v53 + 24) & 0xC;
                if ( v56 < 8u )
                {
                  *(_WORD *)(v53 + 8) |= 1u;
                }
                else if ( v56 == 8 )
                {
                  v57 = ((v53 - (*(_QWORD *)v51 & v53)) >> 5 << *(_BYTE *)(v51 + 8)) + (*(_QWORD *)v51 & v53);
                  v58 = (unsigned __int16)qword_18017AC08 ^ *(unsigned __int16 *)(v57 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v57 >> 12);
                  *(_WORD *)(v58 + Heap - 2) |= 0x4000u;
                }
                else
                {
                  v75 = Heap - 16;
                  if ( (*(_BYTE *)(*(_QWORD *)(v51 + 32) + 176LL) & 1) != 0 )
                  {
                    if ( (Heap & 0xFFF) == 0 )
                      v75 = Heap - 32;
                    v76 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v75) ^ *(unsigned __int16 *)(v75 + 2)) - 16;
                    if ( ((v75 + 32) & 0xFFF) == 0 )
                      v76 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v75) ^ *(unsigned __int16 *)(v75 + 2)) - 32;
                  }
                  else
                  {
                    v76 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v75) ^ *(unsigned __int16 *)(v75 + 2)) - 16;
                  }
                  *(_WORD *)(v76 + Heap - 2) |= 0x4000u;
                }
                goto LABEL_79;
              }
            }
            else
            {
              v53 += -32LL * *(unsigned __int8 *)(v53 + 31);
              v55 = *(_BYTE *)(v53 + 24);
              if ( (v55 & 3) == 3 && (v55 & 0xCu) >= 8 )
                goto LABEL_76;
            }
          }
        }
        v53 = 0LL;
        goto LABEL_76;
      }
      v22 |= 0x1000000u;
    }
    v111 = v22;
    goto LABEL_22;
  }
  v7 = *((_DWORD *)HeapHandle + 29);
  v8 = v7 | a3;
  LODWORD(v93) = 0;
  v100 = 0LL;
  v9 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
  {
    LODWORD(v93) = 5;
  }
  else
  {
    if ( (v7 & 0x1000000) == 0 && !dword_180174238 )
    {
      v10 = *((_QWORD *)HeapHandle + 49);
      v11 = v10;
      if ( (v10 || (v11 = qword_18017AC28) != 0) && a2 > v11 )
      {
        v84 = *((_QWORD *)HeapHandle + 50);
        if ( v84 )
          RtlpLogHeapFailure(20, (_DWORD)HeapHandle, 0, v84, a2, v10);
        LODWORD(v93) = 5;
        goto LABEL_192;
      }
    }
    v12 = *((_DWORD *)HeapHandle + 36);
    v110 = v12;
    if ( !v12 )
      goto LABEL_8;
    if ( (v8 & 0x3C000102) != 0 || (v7 & 0x1000000) != 0 )
    {
      v110 = 0;
      goto LABEL_8;
    }
    if ( (int)RtlpCallInterceptRoutine(v12, (_DWORD)HeapHandle, 0, 1, (__int64)&v100) >= 0 )
    {
      v85 = (v100 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      a2 += v85 + 16;
      v100 = v85 + 16;
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
        LODWORD(v93) = 2;
        Heap = RtlpLowFragHeapAllocFromContext(v16, *(unsigned __int16 *)(v15 + 2 * v14), a2, v8);
        if ( Heap )
        {
LABEL_14:
          if ( !v110 )
            goto LABEL_15;
          LOWORD(v91) = v100;
          a2 -= v100;
          v86 = RtlpSetupExtendedBlock((_DWORD)HeapHandle, v8, Heap, v18, v91, v110);
          v92 = Heap;
          Heap = v86;
          if ( (int)RtlpCallInterceptRoutine(v110, (_DWORD)HeapHandle, v86, 2, v92) >= 0 )
            goto LABEL_15;
          RtlFreeHeap(HeapHandle, 0, (PVOID)Heap);
          goto LABEL_192;
        }
      }
      v63 = (__int64 *)*((_QWORD *)HeapHandle + 39);
      if ( v14 < *((unsigned int *)v63 + 2) )
      {
LABEL_105:
        v65 = v9 >> 4;
      }
      else
      {
        while ( 1 )
        {
          v64 = (__int64 *)*v63;
          if ( !*v63 )
            break;
          v63 = (__int64 *)*v63;
          if ( v14 < *((unsigned int *)v64 + 2) )
            goto LABEL_105;
        }
        v65 = (unsigned int)(*((_DWORD *)v63 + 2) - 1);
      }
      if ( v14 != v65 || v65 >= *((unsigned int *)v63 + 2) )
      {
LABEL_130:
        v67 = 0LL;
      }
      else
      {
        v66 = v14 - *((unsigned int *)v63 + 6);
        if ( *((_DWORD *)v63 + 3) )
          v66 *= 2LL;
        v67 = v63[6] + 8 * v66;
      }
      Heap = RtlpAllocateHeap((int)HeapHandle, v67, (__int64)&v93);
      if ( !Heap )
        goto LABEL_112;
      goto LABEL_14;
    }
  }
LABEL_192:
  Heap = 0LL;
LABEL_112:
  NtCurrentTeb()->LastStatusValue = -1073741801;
  v68 = NtCurrentTeb();
  v68->LastErrorValue = RtlNtStatusToDosError(-1073741801);
  if ( (v8 & 4) != 0 )
  {
    v87 = a2;
    if ( v9 )
      v87 = v9;
    RtlpAllocateHeapRaiseException(v87);
  }
LABEL_15:
  v19 = NtCurrentPeb()->SharedData;
  if ( v19 && *v19 )
    v20 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v20 = 2147353472LL;
  if ( *(_BYTE *)v20
    && (NtCurrentPeb()->TracingFlags & 1) != 0
    && (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0
    && ((v8 & 0x61000000) == 0 || (v8 & 0x10000000) != 0)
    && (_DWORD)v93 != 5 )
  {
    if ( !Heap )
      goto LABEL_208;
    v88 = (_BYTE *)(Heap - 16);
    _m_prefetchw((const void *)(Heap - 16));
    v89 = *(_BYTE *)(Heap - 16 + 15);
    v90 = Heap - 16;
    if ( v89 == 5 )
      v90 -= 16LL * (unsigned __int8)v88[14];
    if ( *(char *)(v90 + 15) < 0 )
      goto LABEL_208;
    _m_prefetchw(v88);
    if ( v89 == 5 )
      v88 -= 16 * (unsigned __int8)v88[14];
    if ( ((v88[10] ^ (unsigned __int8)(HeapHandle[69] & (*((_DWORD *)HeapHandle + 31) >> 17))) & 8) == 0 )
LABEL_208:
      RtlpLogHeapAllocateEvent(HeapHandle, Heap, a2, (unsigned int)v93);
  }
  if ( (dword_18017AE98 & 1) != 0 && (dword_18017AE98 & 2) != 0 )
  {
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v107 = RtlpHpEnvHandle;
      if ( HeapHandle != *(unsigned __int16 **)RtlpHpMetadataHeapCtxGet(&v107) && Heap && (v8 & 0x10000000) == 0 )
LABEL_214:
        RtlpHpStackTraceAddStack(HeapHandle, Heap);
    }
  }
  return Heap;
}
