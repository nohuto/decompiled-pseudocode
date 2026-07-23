/*
 * XREFs of RtlpReAllocateHeap @ 0x1800425F0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18002A180 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlTryEnterCriticalSection @ 0x180044030 (RtlTryEnterCriticalSection.c)
 *     RtlpGrowBlockInPlace @ 0x1800440A4 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180044490 (RtlpCreateSplitBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180046C90 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x180076534 (RtlpGetExtraStuffPointer.c)
 *     RtlpUpdateHeapRates @ 0x18007D408 (RtlpUpdateHeapRates.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x18010002C (RtlpUpdateTagEntry.c)
 *     RtlDebugReAllocateHeap @ 0x180105704 (RtlDebugReAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x1801069E8 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapReallocateEvent @ 0x180117400 (RtlpLogHeapReallocateEvent.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

PVOID __fastcall RtlpReAllocateHeap(unsigned __int16 *HeapHandle, ULONG a2, char *a3, SIZE_T a4)
{
  SIZE_T v4; // r15
  __int64 v7; // r12
  char *v8; // rsi
  char *v9; // r8
  char *v10; // rcx
  int *v11; // r10
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  ULONG v14; // r14d
  __int64 v15; // rax
  int v16; // r9d
  unsigned __int64 v17; // rax
  char *v18; // r10
  _DWORD *v19; // r8
  int v20; // edx
  unsigned __int16 *v21; // r11
  __int64 **v22; // rcx
  _BYTE *v23; // rdi
  char v24; // cl
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rcx
  unsigned __int8 v27; // dl
  int v28; // r9d
  _WORD *v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // r8
  char v34; // al
  SIZE_T v35; // rax
  unsigned __int64 v36; // rax
  SIZE_T v37; // r9
  __int64 v38; // rdx
  SIZE_T v39; // r8
  ULONG v40; // r14d
  char v41; // cl
  ULONG v42; // r14d
  char *v43; // r9
  char *v44; // rdi
  _DWORD *v45; // r8
  int v46; // edx
  __int64 v47; // rdi
  int v48; // eax
  signed __int32 v49; // r14d
  size_t v50; // r8
  __int64 v51; // r10
  char v52; // r11
  unsigned __int8 v53; // al
  unsigned __int64 v54; // r9
  int v55; // ecx
  _OWORD *v56; // rdx
  _BYTE *v57; // r10
  int v58; // edi
  __int64 v59; // rdx
  void *DeferredCriticalSectionEvent; // r8
  __int64 v61; // rax
  int v62; // eax
  int v63; // eax
  unsigned __int64 v64; // r9
  char *v65; // r14
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rdi
  signed __int32 v70; // esi
  _DWORD *v71; // rcx
  __int64 v72; // rcx
  void *v73; // rdi
  unsigned __int64 v75; // rdx
  size_t v76; // rdi
  ULONG v77; // esi
  PVOID Heap; // rax
  _DWORD *SharedData; // rcx
  __int64 v80; // rcx
  PVOID v81; // rdi
  __int64 v82; // rdi
  char v83; // dl
  unsigned __int16 v84; // ax
  int v85; // eax
  void *v86; // r14
  struct _TEB *v87; // rdi
  NTSTATUS v88; // ecx
  char v89; // [rsp+40h] [rbp-1A8h]
  char *v90; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 v91; // [rsp+50h] [rbp-198h]
  char *v92; // [rsp+58h] [rbp-190h]
  PVOID v93; // [rsp+58h] [rbp-190h]
  SIZE_T v94; // [rsp+60h] [rbp-188h]
  int v95; // [rsp+60h] [rbp-188h]
  unsigned __int64 v96; // [rsp+68h] [rbp-180h]
  char *v97; // [rsp+68h] [rbp-180h]
  int *v98; // [rsp+78h] [rbp-170h]
  unsigned int NtGlobalFlag; // [rsp+78h] [rbp-170h]
  unsigned __int64 v100; // [rsp+80h] [rbp-168h]
  _DWORD *v101; // [rsp+90h] [rbp-158h]
  __int16 v102[4]; // [rsp+A0h] [rbp-148h]
  char *v103; // [rsp+A8h] [rbp-140h]
  void *v104; // [rsp+B0h] [rbp-138h]
  char *v105; // [rsp+B8h] [rbp-130h] BYREF
  __int64 v106; // [rsp+C0h] [rbp-128h]
  _BYTE *v107; // [rsp+C8h] [rbp-120h]
  int v108; // [rsp+D0h] [rbp-118h]
  _QWORD v109[2]; // [rsp+D8h] [rbp-110h] BYREF
  SIZE_T v110; // [rsp+E8h] [rbp-100h]
  char *v111; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 ExtraStuffPointer; // [rsp+F8h] [rbp-F0h]
  char *v113; // [rsp+100h] [rbp-E8h]
  void *v114; // [rsp+108h] [rbp-E0h]
  unsigned int v115; // [rsp+110h] [rbp-D8h]
  SIZE_T v116; // [rsp+128h] [rbp-C0h]
  __int64 v117; // [rsp+130h] [rbp-B8h]
  unsigned __int16 *v118; // [rsp+138h] [rbp-B0h]
  int v119; // [rsp+148h] [rbp-A0h]
  struct _TEB *v120; // [rsp+150h] [rbp-98h]
  struct _TEB *v121; // [rsp+158h] [rbp-90h]
  struct _TEB *v122; // [rsp+160h] [rbp-88h]
  struct _TEB *v123; // [rsp+168h] [rbp-80h]
  __int64 v124; // [rsp+170h] [rbp-78h]
  int v125; // [rsp+1A8h] [rbp-40h]
  unsigned __int16 *v126; // [rsp+1F0h] [rbp+8h] BYREF
  ULONG Flags; // [rsp+1F8h] [rbp+10h]
  void *Src; // [rsp+200h] [rbp+18h]
  SIZE_T Size; // [rsp+208h] [rbp+20h]

  Size = a4;
  Src = a3;
  Flags = a2;
  v126 = HeapHandle;
  v4 = a4;
  v7 = 0LL;
  v103 = 0LL;
  v89 = 0;
  v114 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v87 = NtCurrentTeb();
    v88 = 0;
LABEL_220:
    v87->LastErrorValue = RtlNtStatusToDosError(v88);
    return 0LL;
  }
  v8 = a3 - 16;
  _m_prefetchw(a3 - 16);
  v9 = v8;
  if ( v8[15] == 5 )
  {
    v9 = &v8[-16 * (unsigned __int8)v8[14]];
    v90 = v9;
  }
  else
  {
    v90 = v8;
  }
  if ( *((_BYTE *)HeapHandle + 418) == 2 )
  {
    if ( *((_QWORD *)HeapHandle + 51) )
    {
      v10 = v9 + 15;
      if ( v9[15] < 0 )
      {
        if ( (a2 & 0x10) == 0 )
        {
          v11 = (int *)(v9 + 8);
          v12 = (unsigned __int64)v9 >> 4;
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*((_WORD *)v9 + 4) ^ ((unsigned __int64)v9 >> 4) ^ (unsigned __int16)HeapHandle) )
            v13 = 0LL;
          else
            v13 = *(_QWORD *)&v9[-(((unsigned int)RtlpLFHKey ^ *((_DWORD *)v9 + 2) ^ (unsigned int)((unsigned __int64)v9 >> 4) ^ (unsigned int)HeapHandle) >> 12)];
          v82 = *(unsigned __int16 *)(v13 + 36);
          v83 = *v10;
          if ( *v10 == 5 )
          {
            v75 = *((unsigned __int16 *)v90 + 6) ^ (unsigned __int64)HeapHandle[70];
          }
          else if ( (v83 & 0x40) != 0 )
          {
            v75 = *(unsigned __int16 *)&v90[16 * (v83 & 0x3F) + 12];
          }
          else if ( (v83 & 0x3F) == 0x3F )
          {
            if ( v83 >= 0 )
            {
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                v85 = *v11;
                v119 = v85;
                if ( (v85 & *((_DWORD *)HeapHandle + 31)) != 0 )
                  v119 = *((_DWORD *)HeapHandle + 34) ^ v85;
                v75 = *(_QWORD *)&v90[16 * (unsigned __int16)v119];
                goto LABEL_185;
              }
              v84 = *(_WORD *)v11;
            }
            else
            {
              if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(v12 ^ *(_WORD *)v11 ^ (unsigned __int16)HeapHandle)) )
                v7 = *(_QWORD *)&v90[-(((unsigned int)RtlpLFHKey ^ (unsigned int)v12 ^ *v11 ^ (unsigned int)HeapHandle) >> 12)];
              v84 = *(_WORD *)(v7 + 36);
            }
            v75 = *(_QWORD *)&v90[16 * v84];
          }
          else
          {
            v75 = *v10 & 0x3F;
          }
LABEL_185:
          v76 = 16 * v82 - v75;
          v95 = v76;
          Flags &= 0xC003FFFF;
          v77 = Flags;
          Heap = RtlAllocateHeap(HeapHandle, Flags, v4);
          v93 = Heap;
          if ( Heap )
          {
            if ( v4 < v76 )
              v76 = v4;
            memmove(Heap, Src, v76);
            RtlFreeHeap(HeapHandle, v77, Src);
          }
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && *SharedData )
            v80 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v80 = 2147353472LL;
          if ( !*(_BYTE *)v80 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
            return v93;
          v81 = v93;
          if ( v93 )
            RtlpLogHeapReallocateEvent((_DWORD)HeapHandle, (_DWORD)v93, (_DWORD)Src, v95, v4, 2);
          return v81;
        }
        return 0LL;
      }
    }
  }
  if ( v9 == (char *)HeapHandle )
  {
    RtlpLogHeapFailure(9, (_DWORD)HeapHandle, (_DWORD)v9, 0, 0LL, 0LL);
    return 0LL;
  }
  v14 = *((_DWORD *)HeapHandle + 29) | a2;
  Flags = v14;
  if ( (v14 & 0x61000000) != 0 && (v14 & 0x10000000) == 0 )
    return (PVOID)RtlDebugReAllocateHeap(HeapHandle);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v87 = NtCurrentTeb();
    v88 = -1073741801;
    goto LABEL_220;
  }
  v15 = a4;
  v16 = 1;
  if ( !v4 )
    v15 = 1LL;
  v17 = *((_QWORD *)HeapHandle + 33) & (*((_QWORD *)HeapHandle + 32) + v15);
  if ( v17 < 0x20 )
    v17 = 32LL;
  v91 = v17;
  LODWORD(v94) = 0;
  if ( (v14 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44)) )
    {
      ++*((_DWORD *)HeapHandle + 154);
      v16 = 1;
    }
    else
    {
      if ( byte_1801843C8 )
      {
        v120 = NtCurrentTeb();
        v120->LastStatusValue = -1073741420;
        v121 = NtCurrentTeb();
        v121->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_173;
      }
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      RtlpUpdateHeapRates(HeapHandle, 1LL);
    }
    v89 = 1;
    v14 ^= 1u;
    Flags = v14;
  }
  _m_prefetchw(v8);
  if ( v8[15] == 5 )
    v8 -= 16 * (unsigned __int8)v8[14];
  v18 = v8;
  v105 = v8;
  v19 = HeapHandle + 62;
  v101 = HeapHandle + 62;
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    v20 = *((_DWORD *)v8 + 2) ^ *((_DWORD *)HeapHandle + 34);
    *((_DWORD *)v8 + 2) = v20;
    if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(BYTE1(v20) ^ BYTE2(v20))) )
    {
      RtlpAnalyzeHeapFailure(HeapHandle, v8, v19);
      v19 = HeapHandle + 62;
      v16 = 1;
      v18 = v8;
    }
  }
  v103 = v8;
  v21 = (unsigned __int16 *)(v8 + 8);
  v98 = (int *)(v8 + 8);
  v22 = (__int64 **)*((_QWORD *)HeapHandle + 39);
  do
  {
    if ( *((unsigned __int16 *)v8 + 4) < (unsigned __int64)*((unsigned int *)v22 + 2) )
      break;
    v22 = (__int64 **)*v22;
  }
  while ( v22 );
  if ( (v14 & 0x3C000100) != 0 || *((_QWORD *)HeapHandle + 41) || (v8[10] & 2) != 0 )
    v91 += 16LL;
  v23 = v8 + 15;
  v107 = v8 + 15;
  v24 = v8[15];
  if ( (v24 & 0x3F) == 0 )
  {
    v122 = NtCurrentTeb();
    v122->LastStatusValue = -1073741811;
    v123 = NtCurrentTeb();
    v123->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    goto LABEL_173;
  }
  if ( v24 == 4 )
  {
    if ( *v19 )
    {
      v63 = *((_DWORD *)v18 + 2);
      if ( (v63 & *v19) != 0 )
        v63 ^= *((_DWORD *)HeapHandle + 34);
      v14 = Flags;
    }
    else
    {
      LOWORD(v63) = *((_WORD *)v18 + 4);
    }
    v94 = *((_QWORD *)v8 - 2) - (unsigned __int16)v63;
    v25 = (v94 + *v21) >> 4;
    v100 = v25;
    v91 = (v91 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    v25 = *((unsigned __int16 *)v18 + 4);
    v100 = v25;
    if ( v24 == 5 )
    {
      v26 = *((unsigned __int16 *)v8 + 6) ^ (unsigned __int64)HeapHandle[70];
    }
    else if ( (v24 & 0x40) != 0 )
    {
      v26 = *(unsigned __int16 *)&v8[16 * (v24 & 0x3F) + 12];
    }
    else if ( (v24 & 0x3F) == 0x3F )
    {
      if ( v24 >= 0 )
      {
        if ( *v19 )
        {
          v62 = *(_DWORD *)v21;
          v125 = v62;
          if ( (v62 & *v19) != 0 )
          {
            v62 ^= *((_DWORD *)HeapHandle + 34);
            v125 = v62;
          }
          v14 = Flags;
        }
        else
        {
          LOWORD(v62) = *v21;
        }
        v26 = *(_QWORD *)&v8[16 * (unsigned __int16)v62];
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*v21 ^ (unsigned __int16)HeapHandle ^ ((unsigned __int64)v8 >> 4)) )
          v61 = 0LL;
        else
          v61 = *(_QWORD *)&v8[-(((unsigned int)RtlpLFHKey ^ *(_DWORD *)v21 ^ (unsigned int)HeapHandle ^ (unsigned int)((unsigned __int64)v8 >> 4)) >> 12)];
        v14 = Flags;
        v25 = *((unsigned __int16 *)v18 + 4);
        v26 = *(_QWORD *)&v8[16 * *(unsigned __int16 *)(v61 + 36)];
      }
    }
    else
    {
      v26 = v8[15] & 0x3F;
    }
    v109[1] = v26;
    v94 = 16 * v25 - v26;
    if ( v25 < HeapHandle[216] )
    {
      v27 = *((_BYTE *)HeapHandle + (v25 >> 3) + 434);
      v28 = v16 << (v25 & 7);
      v25 = v100;
      if ( ((unsigned __int8)v28 & v27) == 0 )
      {
        v29 = (_WORD *)(*((_QWORD *)HeapHandle + 53) + 2 * v100);
        if ( *v29 > 1u )
          --*v29;
      }
      v14 = Flags;
    }
  }
  v30 = v91 >> 4;
  v31 = v91 >> 4;
  v96 = v91 >> 4;
  *(_QWORD *)v102 = v91 >> 4;
  if ( v91 >> 4 <= v25 )
  {
    v32 = v30 + 1;
    v33 = v91 >> 4;
    if ( v30 + 1 == v25 )
    {
      v31 = v30 + 1;
      v96 = v30 + 1;
      *(_QWORD *)v102 = v30 + 1;
      v91 += 16LL;
      ++v30;
      v33 = v32;
    }
    if ( *v23 == 4 )
    {
      v34 = 1;
    }
    else
    {
      v34 = 0;
      v30 = v33;
    }
    if ( v34 )
    {
      *v21 = v91 - Size;
LABEL_57:
      v35 = Size;
      if ( Size <= v94 )
        goto LABEL_58;
      if ( (v14 & 8) != 0 )
      {
        memset_thunk_772440563353939046((char *)Src + v94, 0, Size - v94);
        v21 = (unsigned __int16 *)(v8 + 8);
      }
      else
      {
        if ( (HeapHandle[56] & 0x40) == 0 )
          goto LABEL_58;
        v37 = v94 & 3;
        v116 = v37;
        if ( (v94 & 3) != 0 )
        {
          v37 = 4 - v37;
          v116 = v37;
        }
        if ( Size <= v37 + v94
          || ((Size - v37 - v94) & 0xFFFFFFFFFFFFFFFCuLL) == 0
          || (v38 = (__int64)&v8[v37 + 16 + v94],
              v117 = v38,
              v39 = ((Size - v37 - v94) & 0xFFFFFFFFFFFFFFFCuLL) >> 2,
              (v110 = v39) == 0) )
        {
LABEL_58:
          if ( (HeapHandle[56] & 0x20) != 0 )
            *(__m128i *)&v8[v35 + 16] = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
          if ( v31 == v25 )
            goto LABEL_61;
          if ( *v23 == 4 )
          {
            v65 = v8 - 48;
            NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
            v66 = NtGlobalFlag;
            v96 = *(_QWORD *)v102;
            if ( (NtGlobalFlag & 0x800) != 0 )
              *((_WORD *)v65 + 9) = RtlpUpdateTagEntry(
                                      (_DWORD)HeapHandle,
                                      *((unsigned __int16 *)v65 + 9),
                                      v100,
                                      *(_DWORD *)v102,
                                      5);
            v111 = &v65[v91];
            v109[0] = 16 * v100 - v91;
            v108 = RtlpSecMemFreeVirtualMemory(v66, &v111, v109, 0x4000LL);
            if ( v108 < 0 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v111, LODWORD(v109[0]), v108);
              RtlpBreakPointHeap();
              v31 = *(_QWORD *)v102;
LABEL_61:
              v4 = Size;
              if ( *v23 != 4 )
              {
                v36 = v91 - Size;
                if ( v91 - Size >= 0x3F )
                {
                  *(_QWORD *)&v8[16 * v31] = v36;
                  v105[15] = 63;
                }
                else
                {
                  v105[15] = v36;
                }
              }
              goto LABEL_173;
            }
            *((_QWORD *)v65 + 4) -= v109[0];
          }
          else
          {
            v51 = *v21 - (unsigned __int64)(unsigned __int16)v31;
            v124 = v51;
            *v21 = v31;
            v52 = (HeapHandle[56] & 0x40) != 0;
            v53 = v8[14];
            if ( v53 )
              v118 = (unsigned __int16 *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFF0000uLL)
                                        - ((unsigned __int64)v53 << 16)
                                        + 0x10000);
            else
              v118 = HeapHandle;
            RtlpCreateSplitBlock((int)HeapHandle, v52, v31, v51);
          }
          v31 = v96;
          goto LABEL_61;
        }
        if ( (v38 & 4) != 0 )
        {
          *(_DWORD *)v38 = -1163005939;
          v110 = --v39;
          if ( !v39 )
            goto LABEL_58;
          v38 += 4LL;
          v117 = v38;
        }
        memset64((void *)v38, 0xBAADF00DBAADF00DuLL, v39 >> 1);
        if ( (v39 & 1) != 0 )
          *(_DWORD *)(v38 + 4 * v39 - 4) = -1163005939;
        v23 = v107;
      }
      v35 = Size;
      v31 = v96;
      goto LABEL_58;
    }
    if ( (v8[10] & 2) != 0 )
    {
      ExtraStuffPointer = (__int64)&v8[16 * *v21 - 16];
      v106 = (__int64)&v8[16 * v30 - 16];
      *(_OWORD *)v106 = *(_OWORD *)ExtraStuffPointer;
      v115 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v115 & 0x800) != 0 )
      {
        v96 = *(_QWORD *)v102;
        v25 = v100;
        *(_WORD *)(v106 + 2) = RtlpUpdateTagEntry(
                                 (_DWORD)HeapHandle,
                                 *(unsigned __int16 *)(v106 + 2),
                                 v100,
                                 *(_DWORD *)v102,
                                 4);
        v31 = v54;
        v23 = v107;
        v21 = (unsigned __int16 *)(v8 + 8);
        goto LABEL_56;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v96 = *(_QWORD *)v102;
      v8[11] = RtlpUpdateTagEntry((_DWORD)HeapHandle, (unsigned __int8)v8[11], *v21, *(_DWORD *)v102, 4);
      v25 = v100;
      v31 = v64;
      v21 = (unsigned __int16 *)(v8 + 8);
      goto LABEL_56;
    }
    v25 = v100;
    v31 = *(_QWORD *)v102;
    v96 = *(_QWORD *)v102;
LABEL_56:
    LOBYTE(v14) = Flags;
    goto LABEL_57;
  }
  v4 = Size;
  if ( *v23 == 4 )
    goto LABEL_78;
  if ( !(unsigned __int8)RtlpGrowBlockInPlace((int)HeapHandle, v91 >> 4) )
  {
    v19 = HeapHandle + 62;
    v21 = (unsigned __int16 *)(v8 + 8);
LABEL_78:
    if ( (v14 & 0x10) != 0 )
    {
      Src = 0LL;
      goto LABEL_173;
    }
    v40 = v14 & 0xC003FFFF;
    Flags = v40;
    v41 = v8[10];
    if ( (v41 & 2) != 0 )
    {
      v42 = (16 * (v41 & 0xE0 | 0x10)) | v40 & 0xFFFFF1FF;
      Flags = v42;
      ExtraStuffPointer = RtlpGetExtraStuffPointer(v8);
      v55 = *(unsigned __int16 *)(ExtraStuffPointer + 2);
      if ( (__int16)v55 > 0 )
      {
        v42 |= v55 << 18;
        Flags = v42;
      }
    }
    else
    {
      LODWORD(v107) = NtCurrentPeb()->NtGlobalFlag;
      v42 = Flags;
      if ( ((unsigned __int16)v107 & 0x800) != 0 )
      {
        v67 = (unsigned __int8)v8[11];
        if ( (_BYTE)v67 )
        {
          v42 = (v67 << 18) | Flags;
          Flags = v42;
        }
      }
    }
    if ( *v19 )
    {
      v8[11] = *(_BYTE *)v21 ^ *((_BYTE *)v21 + 1) ^ *((_BYTE *)v21 + 2);
      *(_DWORD *)v21 ^= *((_DWORD *)HeapHandle + 34);
    }
    v103 = 0LL;
    v43 = (char *)RtlAllocateHeap(HeapHandle, v42, v4);
    v92 = v43;
    if ( !v43 )
    {
LABEL_100:
      v114 = Src;
      Src = v43;
      goto LABEL_173;
    }
    v44 = v43 - 16;
    v97 = v43 - 16;
    _m_prefetchw(v43 - 16);
    if ( *(v43 - 1) == 5 )
    {
      v44 -= 16 * (unsigned __int8)v44[14];
      v97 = v44;
    }
    v113 = v44;
    v45 = HeapHandle + 62;
    if ( *v101 )
    {
      v46 = *((_DWORD *)v44 + 2) ^ *((_DWORD *)HeapHandle + 34);
      *((_DWORD *)v44 + 2) = v46;
      if ( HIBYTE(v46) != ((unsigned __int8)v46 ^ (unsigned __int8)(BYTE1(v46) ^ BYTE2(v46))) )
      {
        RtlpAnalyzeHeapFailure(HeapHandle, v44, v101);
        v43 = v92;
        v45 = HeapHandle + 62;
      }
    }
    if ( (v44[10] & 2) != 0 )
    {
      v56 = (_OWORD *)RtlpGetExtraStuffPointer(v44);
      v106 = (__int64)v56;
      v57 = v8 + 8;
      if ( *v45 )
      {
        v58 = *v98 ^ *((_DWORD *)HeapHandle + 34);
        *v98 = v58;
        if ( HIBYTE(v58) != ((unsigned __int8)v58 ^ (unsigned __int8)(BYTE1(v58) ^ BYTE2(v58))) )
        {
          RtlpAnalyzeHeapFailure(HeapHandle, v8, v45);
          v43 = v92;
          v45 = HeapHandle + 62;
          v57 = v8 + 8;
        }
        v56 = (_OWORD *)v106;
        v44 = v97;
      }
      if ( (v8[10] & 2) != 0 )
      {
        ExtraStuffPointer = RtlpGetExtraStuffPointer(v8);
        *(_QWORD *)(v59 + 8) = *(_QWORD *)(ExtraStuffPointer + 8);
      }
      else
      {
        *v56 = 0LL;
      }
      if ( !*v45 )
        goto LABEL_92;
      v8[11] = *v57 ^ v57[1] ^ v57[2];
      *(_DWORD *)v57 ^= *((_DWORD *)HeapHandle + 34);
    }
    if ( *v45 )
    {
      v44[11] = v44[8] ^ v44[9] ^ v44[10];
      *((_DWORD *)v44 + 2) ^= *((_DWORD *)HeapHandle + 34);
    }
LABEL_92:
    v103 = 0LL;
    if ( v89 )
    {
      v47 = *((_QWORD *)HeapHandle + 44);
      v48 = *(_DWORD *)(v47 + 12) - 1;
      *(_DWORD *)(v47 + 12) = v48;
      if ( !v48 )
      {
        *(_QWORD *)(v47 + 16) = 0LL;
        v49 = _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 8), -1, -2);
        if ( v49 != -2 )
        {
          if ( (*(_BYTE *)(v47 + 8) & 1) != 0 )
            RtlpNotOwnerCriticalSection(v47);
          DeferredCriticalSectionEvent = *(void **)(v47 + 24);
          v104 = DeferredCriticalSectionEvent;
          if ( !DeferredCriticalSectionEvent )
          {
            DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v47);
            v104 = DeferredCriticalSectionEvent;
          }
          LODWORD(v105) = 0;
          while ( v49 != _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 8), v49 + (v49 & 2 | 1), v49) )
          {
            RtlBackoff((unsigned int *)&v105);
            _m_prefetchw((const void *)(v47 + 8));
            v49 = *(_DWORD *)(v47 + 8);
            DeferredCriticalSectionEvent = v104;
          }
          if ( (v49 & 2) != 0 )
            RtlpUnWaitCriticalSectionEx(v47, DeferredCriticalSectionEvent);
        }
        v43 = v92;
        v42 = Flags;
      }
      v89 = 0;
      v42 &= ~1u;
      Flags = v42;
    }
    if ( v4 < v94 )
      v50 = v4;
    else
      v50 = v94;
    memmove(v43, Src, v50);
    RtlFreeHeap(HeapHandle, v42, Src);
    v43 = v92;
    goto LABEL_100;
  }
LABEL_173:
  if ( v103 && *((_DWORD *)HeapHandle + 31) )
  {
    v103[11] = v103[8] ^ v103[9] ^ v103[10];
    *((_DWORD *)v103 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v89 )
  {
    v68 = *((_QWORD *)HeapHandle + 44);
    if ( (*(_DWORD *)(v68 + 12))-- == 1 )
    {
      *(_QWORD *)(v68 + 16) = 0LL;
      v70 = _InterlockedCompareExchange((volatile signed __int32 *)(v68 + 8), -1, -2);
      if ( v70 != -2 )
      {
        if ( (*(_BYTE *)(v68 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v68);
        v86 = *(void **)(v68 + 24);
        if ( !v86 )
          v86 = (void *)RtlpCreateDeferredCriticalSectionEvent(v68);
        LODWORD(v126) = 0;
        while ( v70 != _InterlockedCompareExchange((volatile signed __int32 *)(v68 + 8), v70 + (v70 & 2 | 1), v70) )
        {
          RtlBackoff((unsigned int *)&v126);
          _m_prefetchw((const void *)(v68 + 8));
          v70 = *(_DWORD *)(v68 + 8);
        }
        if ( (v70 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v68, v86);
      }
    }
  }
  v71 = NtCurrentPeb()->SharedData;
  if ( v71 && *v71 )
    v72 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v72 = 2147353472LL;
  if ( !*(_BYTE *)v72 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    return Src;
  v73 = Src;
  if ( Src && (Flags & 0x800000) == 0 )
    RtlpLogHeapReallocateEvent((_DWORD)HeapHandle, (_DWORD)Src, (_DWORD)v114, v94, v4, 3);
  return v73;
}
