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

void *__fastcall RtlpReAllocateHeap(unsigned __int16 *Src, __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r15
  __int64 v7; // r12
  char *v8; // rsi
  char *v9; // r8
  char *v10; // rcx
  int *v11; // r10
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  unsigned int v14; // r14d
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
  size_t v35; // rax
  unsigned __int64 v36; // rax
  size_t v37; // r9
  __int64 v38; // rdx
  unsigned __int64 v39; // r8
  unsigned int v40; // r14d
  char v41; // cl
  unsigned int v42; // r14d
  char *v43; // r9
  char *v44; // rdi
  _DWORD *v45; // r8
  int v46; // edx
  __int64 v47; // rdi
  int v48; // eax
  signed __int32 v49; // r14d
  size_t v50; // r8
  int v51; // r9d
  __int64 v52; // r10
  char v53; // r11
  unsigned __int8 v54; // al
  unsigned int v55; // edx
  unsigned __int64 v56; // r9
  int v57; // ecx
  _OWORD *v58; // rdx
  _BYTE *v59; // r10
  int v60; // edi
  __int64 v61; // rdx
  __int64 DeferredCriticalSectionEvent; // r8
  __int64 v63; // rax
  int v64; // eax
  int v65; // eax
  unsigned __int64 v66; // r9
  char *v67; // r14
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rdi
  signed __int32 v72; // esi
  _DWORD *v73; // rcx
  __int64 v74; // rcx
  void *v75; // rdi
  unsigned __int64 v77; // rdx
  size_t v78; // rdi
  unsigned int v79; // esi
  void *Heap; // rax
  _DWORD *SharedData; // rcx
  __int64 v82; // rcx
  void *v83; // rdi
  __int64 v84; // rdi
  char v85; // dl
  unsigned __int16 v86; // ax
  int v87; // eax
  __int64 v88; // r14
  struct _TEB *v89; // rdi
  NTSTATUS v90; // ecx
  char v91; // [rsp+40h] [rbp-1A8h]
  char *v92; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 v93; // [rsp+50h] [rbp-198h]
  char *v94; // [rsp+58h] [rbp-190h]
  void *v95; // [rsp+58h] [rbp-190h]
  size_t Size; // [rsp+60h] [rbp-188h]
  int Sizea; // [rsp+60h] [rbp-188h]
  unsigned __int64 v98; // [rsp+68h] [rbp-180h]
  char *v99; // [rsp+68h] [rbp-180h]
  int *v100; // [rsp+78h] [rbp-170h]
  unsigned int NtGlobalFlag; // [rsp+78h] [rbp-170h]
  unsigned __int64 v102; // [rsp+80h] [rbp-168h]
  _DWORD *v103; // [rsp+90h] [rbp-158h]
  unsigned __int64 v104; // [rsp+A0h] [rbp-148h]
  char *v105; // [rsp+A8h] [rbp-140h]
  __int64 v106; // [rsp+B0h] [rbp-138h]
  char *v107; // [rsp+B8h] [rbp-130h] BYREF
  __int64 v108; // [rsp+C0h] [rbp-128h]
  _BYTE *v109; // [rsp+C8h] [rbp-120h]
  int v110; // [rsp+D0h] [rbp-118h]
  _QWORD v111[2]; // [rsp+D8h] [rbp-110h] BYREF
  unsigned __int64 v112; // [rsp+E8h] [rbp-100h]
  char *v113; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 ExtraStuffPointer; // [rsp+F8h] [rbp-F0h]
  char *v115; // [rsp+100h] [rbp-E8h]
  void *v116; // [rsp+108h] [rbp-E0h]
  unsigned int v117; // [rsp+110h] [rbp-D8h]
  size_t v118; // [rsp+128h] [rbp-C0h]
  __int64 v119; // [rsp+130h] [rbp-B8h]
  unsigned __int16 *v120; // [rsp+138h] [rbp-B0h]
  int v121; // [rsp+148h] [rbp-A0h]
  struct _TEB *v122; // [rsp+150h] [rbp-98h]
  struct _TEB *v123; // [rsp+158h] [rbp-90h]
  struct _TEB *v124; // [rsp+160h] [rbp-88h]
  struct _TEB *v125; // [rsp+168h] [rbp-80h]
  __int64 v126; // [rsp+170h] [rbp-78h]
  int v127; // [rsp+1A8h] [rbp-40h]
  unsigned __int16 *v128; // [rsp+1F0h] [rbp+8h] BYREF
  unsigned int v129; // [rsp+1F8h] [rbp+10h]
  void *Srca; // [rsp+200h] [rbp+18h]
  size_t v131; // [rsp+208h] [rbp+20h]

  v131 = a4;
  Srca = a3;
  v129 = a2;
  v128 = Src;
  v4 = a4;
  v7 = 0LL;
  v105 = 0LL;
  v91 = 0;
  v116 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v89 = NtCurrentTeb();
    v90 = 0;
LABEL_220:
    v89->LastErrorValue = RtlNtStatusToDosError(v90);
    return 0LL;
  }
  v8 = a3 - 16;
  _m_prefetchw(a3 - 16);
  v9 = v8;
  if ( v8[15] == 5 )
  {
    v9 = &v8[-16 * (unsigned __int8)v8[14]];
    v92 = v9;
  }
  else
  {
    v92 = v8;
  }
  if ( *((_BYTE *)Src + 418) == 2 )
  {
    if ( *((_QWORD *)Src + 51) )
    {
      v10 = v9 + 15;
      if ( v9[15] < 0 )
      {
        if ( (a2 & 0x10) == 0 )
        {
          v11 = (int *)(v9 + 8);
          v12 = (unsigned __int64)v9 >> 4;
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*((_WORD *)v9 + 4) ^ ((unsigned __int64)v9 >> 4) ^ (unsigned __int16)Src) )
            v13 = 0LL;
          else
            v13 = *(_QWORD *)&v9[-(((unsigned int)RtlpLFHKey ^ *((_DWORD *)v9 + 2) ^ (unsigned int)((unsigned __int64)v9 >> 4) ^ (unsigned int)Src) >> 12)];
          v84 = *(unsigned __int16 *)(v13 + 36);
          v85 = *v10;
          if ( *v10 == 5 )
          {
            v77 = *((unsigned __int16 *)v92 + 6) ^ (unsigned __int64)Src[70];
          }
          else if ( (v85 & 0x40) != 0 )
          {
            v77 = *(unsigned __int16 *)&v92[16 * (v85 & 0x3F) + 12];
          }
          else if ( (v85 & 0x3F) == 0x3F )
          {
            if ( v85 >= 0 )
            {
              if ( *((_DWORD *)Src + 31) )
              {
                v87 = *v11;
                v121 = v87;
                if ( (v87 & *((_DWORD *)Src + 31)) != 0 )
                  v121 = *((_DWORD *)Src + 34) ^ v87;
                v77 = *(_QWORD *)&v92[16 * (unsigned __int16)v121];
                goto LABEL_185;
              }
              v86 = *(_WORD *)v11;
            }
            else
            {
              if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(v12 ^ *(_WORD *)v11 ^ (unsigned __int16)Src)) )
                v7 = *(_QWORD *)&v92[-(((unsigned int)RtlpLFHKey ^ (unsigned int)v12 ^ *v11 ^ (unsigned int)Src) >> 12)];
              v86 = *(_WORD *)(v7 + 36);
            }
            v77 = *(_QWORD *)&v92[16 * v86];
          }
          else
          {
            v77 = *v10 & 0x3F;
          }
LABEL_185:
          v78 = 16 * v84 - v77;
          Sizea = v78;
          v129 &= 0xC003FFFF;
          v79 = v129;
          Heap = (void *)RtlAllocateHeap((__int64)Src, v129, v4);
          v95 = Heap;
          if ( Heap )
          {
            if ( v4 < v78 )
              v78 = v4;
            memmove(Heap, Srca, v78);
            RtlFreeHeap((__int64)Src, v79, (__int64)Srca);
          }
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && *SharedData )
            v82 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v82 = 2147353472LL;
          if ( !*(_BYTE *)v82 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
            return v95;
          v83 = v95;
          if ( v95 )
            RtlpLogHeapReallocateEvent((_DWORD)Src, (_DWORD)v95, (_DWORD)Srca, Sizea, v4, 2);
          return v83;
        }
        return 0LL;
      }
    }
  }
  if ( v9 == (char *)Src )
  {
    RtlpLogHeapFailure(9, (_DWORD)Src, (_DWORD)v9, 0, 0LL, 0LL);
    return 0LL;
  }
  v14 = *((_DWORD *)Src + 29) | a2;
  v129 = v14;
  if ( (v14 & 0x61000000) != 0 && (v14 & 0x10000000) == 0 )
    return (void *)RtlDebugReAllocateHeap(Src);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v89 = NtCurrentTeb();
    v90 = -1073741801;
    goto LABEL_220;
  }
  v15 = a4;
  v16 = 1;
  if ( !v4 )
    v15 = 1LL;
  v17 = *((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v15);
  if ( v17 < 0x20 )
    v17 = 32LL;
  v93 = v17;
  LODWORD(Size) = 0;
  if ( (v14 & 1) == 0 )
  {
    if ( (unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)Src + 44), a2, v9) )
    {
      ++*((_DWORD *)Src + 154);
      v16 = 1;
    }
    else
    {
      if ( byte_1801843C8 )
      {
        v122 = NtCurrentTeb();
        v122->LastStatusValue = -1073741420;
        v123 = NtCurrentTeb();
        v123->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_173;
      }
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      RtlpUpdateHeapRates(Src, 1LL);
    }
    v91 = 1;
    v14 ^= 1u;
    v129 = v14;
  }
  _m_prefetchw(v8);
  if ( v8[15] == 5 )
    v8 -= 16 * (unsigned __int8)v8[14];
  v18 = v8;
  v107 = v8;
  v19 = Src + 62;
  v103 = Src + 62;
  if ( *((_DWORD *)Src + 31) )
  {
    v20 = *((_DWORD *)v8 + 2) ^ *((_DWORD *)Src + 34);
    *((_DWORD *)v8 + 2) = v20;
    if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(BYTE1(v20) ^ BYTE2(v20))) )
    {
      RtlpAnalyzeHeapFailure(Src, v8, v19);
      v19 = Src + 62;
      v16 = 1;
      v18 = v8;
    }
  }
  v105 = v8;
  v21 = (unsigned __int16 *)(v8 + 8);
  v100 = (int *)(v8 + 8);
  v22 = (__int64 **)*((_QWORD *)Src + 39);
  do
  {
    if ( *((unsigned __int16 *)v8 + 4) < (unsigned __int64)*((unsigned int *)v22 + 2) )
      break;
    v22 = (__int64 **)*v22;
  }
  while ( v22 );
  if ( (v14 & 0x3C000100) != 0 || *((_QWORD *)Src + 41) || (v8[10] & 2) != 0 )
    v93 += 16LL;
  v23 = v8 + 15;
  v109 = v8 + 15;
  v24 = v8[15];
  if ( (v24 & 0x3F) == 0 )
  {
    v124 = NtCurrentTeb();
    v124->LastStatusValue = -1073741811;
    v125 = NtCurrentTeb();
    v125->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    goto LABEL_173;
  }
  if ( v24 == 4 )
  {
    if ( *v19 )
    {
      v65 = *((_DWORD *)v18 + 2);
      if ( (v65 & *v19) != 0 )
        v65 ^= *((_DWORD *)Src + 34);
      v14 = v129;
    }
    else
    {
      LOWORD(v65) = *((_WORD *)v18 + 4);
    }
    Size = *((_QWORD *)v8 - 2) - (unsigned __int16)v65;
    v25 = (Size + *v21) >> 4;
    v102 = v25;
    v93 = (v93 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    v25 = *((unsigned __int16 *)v18 + 4);
    v102 = v25;
    if ( v24 == 5 )
    {
      v26 = *((unsigned __int16 *)v8 + 6) ^ (unsigned __int64)Src[70];
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
          v64 = *(_DWORD *)v21;
          v127 = v64;
          if ( (v64 & *v19) != 0 )
          {
            v64 ^= *((_DWORD *)Src + 34);
            v127 = v64;
          }
          v14 = v129;
        }
        else
        {
          LOWORD(v64) = *v21;
        }
        v26 = *(_QWORD *)&v8[16 * (unsigned __int16)v64];
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*v21 ^ (unsigned __int16)Src ^ ((unsigned __int64)v8 >> 4)) )
          v63 = 0LL;
        else
          v63 = *(_QWORD *)&v8[-(((unsigned int)RtlpLFHKey ^ *(_DWORD *)v21 ^ (unsigned int)Src ^ (unsigned int)((unsigned __int64)v8 >> 4)) >> 12)];
        v14 = v129;
        v25 = *((unsigned __int16 *)v18 + 4);
        v26 = *(_QWORD *)&v8[16 * *(unsigned __int16 *)(v63 + 36)];
      }
    }
    else
    {
      v26 = v8[15] & 0x3F;
    }
    v111[1] = v26;
    Size = 16 * v25 - v26;
    if ( v25 < Src[216] )
    {
      v27 = *((_BYTE *)Src + (v25 >> 3) + 434);
      v28 = v16 << (v25 & 7);
      v25 = v102;
      if ( ((unsigned __int8)v28 & v27) == 0 )
      {
        v29 = (_WORD *)(*((_QWORD *)Src + 53) + 2 * v102);
        if ( *v29 > 1u )
          --*v29;
      }
      v14 = v129;
    }
  }
  v30 = v93 >> 4;
  v31 = v93 >> 4;
  v98 = v93 >> 4;
  v104 = v93 >> 4;
  if ( v93 >> 4 <= v25 )
  {
    v32 = v30 + 1;
    v33 = v93 >> 4;
    if ( v30 + 1 == v25 )
    {
      v31 = v30 + 1;
      v98 = v30 + 1;
      v104 = v30 + 1;
      v93 += 16LL;
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
      *v21 = v93 - v131;
LABEL_57:
      v35 = v131;
      if ( v131 <= Size )
        goto LABEL_58;
      if ( (v14 & 8) != 0 )
      {
        memset_thunk_772440563353939046((char *)Srca + Size, 0, v131 - Size);
        v21 = (unsigned __int16 *)(v8 + 8);
      }
      else
      {
        if ( (Src[56] & 0x40) == 0 )
          goto LABEL_58;
        v37 = Size & 3;
        v118 = v37;
        if ( (Size & 3) != 0 )
        {
          v37 = 4 - v37;
          v118 = v37;
        }
        if ( v131 <= v37 + Size
          || ((v131 - v37 - Size) & 0xFFFFFFFFFFFFFFFCuLL) == 0
          || (v38 = (__int64)&v8[v37 + 16 + Size],
              v119 = v38,
              v39 = ((v131 - v37 - Size) & 0xFFFFFFFFFFFFFFFCuLL) >> 2,
              (v112 = v39) == 0) )
        {
LABEL_58:
          if ( (Src[56] & 0x20) != 0 )
            *(__m128i *)&v8[v35 + 16] = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
          if ( v31 == v25 )
            goto LABEL_61;
          v51 = (unsigned __int8)v8[10];
          LOBYTE(v51) = v51 & 0xFE;
          if ( *v23 == 4 )
          {
            v67 = v8 - 48;
            NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
            v68 = NtGlobalFlag;
            v98 = v104;
            if ( (NtGlobalFlag & 0x800) != 0 )
              *((_WORD *)v67 + 9) = RtlpUpdateTagEntry((_DWORD)Src, *((unsigned __int16 *)v67 + 9), v102, v104, 5);
            v113 = &v67[v93];
            v111[0] = 16 * v102 - v93;
            v110 = RtlpSecMemFreeVirtualMemory(v68, &v113, v111, 0x4000LL);
            if ( v110 < 0 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v113, LODWORD(v111[0]), v110);
              RtlpBreakPointHeap();
              v31 = v104;
LABEL_61:
              v4 = v131;
              if ( *v23 != 4 )
              {
                v36 = v93 - v131;
                if ( v93 - v131 >= 0x3F )
                {
                  *(_QWORD *)&v8[16 * v31] = v36;
                  v107[15] = 63;
                }
                else
                {
                  v107[15] = v36;
                }
              }
              goto LABEL_173;
            }
            *((_QWORD *)v67 + 4) -= v111[0];
          }
          else
          {
            v52 = *v21 - (unsigned __int64)(unsigned __int16)v31;
            v126 = v52;
            *v21 = v31;
            v53 = (Src[56] & 0x40) != 0;
            v54 = v8[14];
            if ( v54 )
            {
              v55 = ((unsigned int)v8 & 0xFFFF0000) - (v54 << 16) + 0x10000;
              v120 = (unsigned __int16 *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFF0000uLL)
                                        - ((unsigned __int64)v54 << 16)
                                        + 0x10000);
            }
            else
            {
              v55 = (unsigned int)Src;
              v120 = Src;
            }
            RtlpCreateSplitBlock((_DWORD)Src, v55, (_DWORD)v8 + 16 * v31, v51, v53, v31, v52);
          }
          v31 = v98;
          goto LABEL_61;
        }
        if ( (v38 & 4) != 0 )
        {
          *(_DWORD *)v38 = -1163005939;
          v112 = --v39;
          if ( !v39 )
            goto LABEL_58;
          v38 += 4LL;
          v119 = v38;
        }
        memset64((void *)v38, 0xBAADF00DBAADF00DuLL, v39 >> 1);
        if ( (v39 & 1) != 0 )
          *(_DWORD *)(v38 + 4 * v39 - 4) = -1163005939;
        v23 = v109;
      }
      v35 = v131;
      v31 = v98;
      goto LABEL_58;
    }
    if ( (v8[10] & 2) != 0 )
    {
      ExtraStuffPointer = (__int64)&v8[16 * *v21 - 16];
      v108 = (__int64)&v8[16 * v30 - 16];
      *(_OWORD *)v108 = *(_OWORD *)ExtraStuffPointer;
      v117 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v117 & 0x800) != 0 )
      {
        v98 = v104;
        v25 = v102;
        *(_WORD *)(v108 + 2) = RtlpUpdateTagEntry((_DWORD)Src, *(unsigned __int16 *)(v108 + 2), v102, v104, 4);
        v31 = v56;
        v23 = v109;
        v21 = (unsigned __int16 *)(v8 + 8);
        goto LABEL_56;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v98 = v104;
      v8[11] = RtlpUpdateTagEntry((_DWORD)Src, (unsigned __int8)v8[11], *v21, v104, 4);
      v25 = v102;
      v31 = v66;
      v21 = (unsigned __int16 *)(v8 + 8);
      goto LABEL_56;
    }
    v25 = v102;
    v31 = v104;
    v98 = v104;
LABEL_56:
    LOBYTE(v14) = v129;
    goto LABEL_57;
  }
  v4 = v131;
  if ( *v23 == 4 )
    goto LABEL_78;
  if ( !(unsigned __int8)RtlpGrowBlockInPlace((_DWORD)Src, v14, (_DWORD)v8, v131, v93 >> 4) )
  {
    v19 = Src + 62;
    v21 = (unsigned __int16 *)(v8 + 8);
LABEL_78:
    if ( (v14 & 0x10) != 0 )
    {
      Srca = 0LL;
      goto LABEL_173;
    }
    v40 = v14 & 0xC003FFFF;
    v129 = v40;
    v41 = v8[10];
    if ( (v41 & 2) != 0 )
    {
      v42 = (16 * (v41 & 0xE0 | 0x10)) | v40 & 0xFFFFF1FF;
      v129 = v42;
      ExtraStuffPointer = RtlpGetExtraStuffPointer(v8);
      v57 = *(unsigned __int16 *)(ExtraStuffPointer + 2);
      if ( (__int16)v57 > 0 )
      {
        v42 |= v57 << 18;
        v129 = v42;
      }
    }
    else
    {
      LODWORD(v109) = NtCurrentPeb()->NtGlobalFlag;
      v42 = v129;
      if ( ((unsigned __int16)v109 & 0x800) != 0 )
      {
        v69 = (unsigned __int8)v8[11];
        if ( (_BYTE)v69 )
        {
          v42 = (v69 << 18) | v129;
          v129 = v42;
        }
      }
    }
    if ( *v19 )
    {
      v8[11] = *(_BYTE *)v21 ^ *((_BYTE *)v21 + 1) ^ *((_BYTE *)v21 + 2);
      *(_DWORD *)v21 ^= *((_DWORD *)Src + 34);
    }
    v105 = 0LL;
    v43 = (char *)RtlAllocateHeap((__int64)Src, v42, v4);
    v94 = v43;
    if ( !v43 )
    {
LABEL_100:
      v116 = Srca;
      Srca = v43;
      goto LABEL_173;
    }
    v44 = v43 - 16;
    v99 = v43 - 16;
    _m_prefetchw(v43 - 16);
    if ( *(v43 - 1) == 5 )
    {
      v44 -= 16 * (unsigned __int8)v44[14];
      v99 = v44;
    }
    v115 = v44;
    v45 = Src + 62;
    if ( *v103 )
    {
      v46 = *((_DWORD *)v44 + 2) ^ *((_DWORD *)Src + 34);
      *((_DWORD *)v44 + 2) = v46;
      if ( HIBYTE(v46) != ((unsigned __int8)v46 ^ (unsigned __int8)(BYTE1(v46) ^ BYTE2(v46))) )
      {
        RtlpAnalyzeHeapFailure(Src, v44, v103);
        v43 = v94;
        v45 = Src + 62;
      }
    }
    if ( (v44[10] & 2) != 0 )
    {
      v58 = (_OWORD *)RtlpGetExtraStuffPointer(v44);
      v108 = (__int64)v58;
      v59 = v8 + 8;
      if ( *v45 )
      {
        v60 = *v100 ^ *((_DWORD *)Src + 34);
        *v100 = v60;
        if ( HIBYTE(v60) != ((unsigned __int8)v60 ^ (unsigned __int8)(BYTE1(v60) ^ BYTE2(v60))) )
        {
          RtlpAnalyzeHeapFailure(Src, v8, v45);
          v43 = v94;
          v45 = Src + 62;
          v59 = v8 + 8;
        }
        v58 = (_OWORD *)v108;
        v44 = v99;
      }
      if ( (v8[10] & 2) != 0 )
      {
        ExtraStuffPointer = RtlpGetExtraStuffPointer(v8);
        *(_QWORD *)(v61 + 8) = *(_QWORD *)(ExtraStuffPointer + 8);
      }
      else
      {
        *v58 = 0LL;
      }
      if ( !*v45 )
        goto LABEL_92;
      v8[11] = *v59 ^ v59[1] ^ v59[2];
      *(_DWORD *)v59 ^= *((_DWORD *)Src + 34);
    }
    if ( *v45 )
    {
      v44[11] = v44[8] ^ v44[9] ^ v44[10];
      *((_DWORD *)v44 + 2) ^= *((_DWORD *)Src + 34);
    }
LABEL_92:
    v105 = 0LL;
    if ( v91 )
    {
      v47 = *((_QWORD *)Src + 44);
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
          DeferredCriticalSectionEvent = *(_QWORD *)(v47 + 24);
          v106 = DeferredCriticalSectionEvent;
          if ( !DeferredCriticalSectionEvent )
          {
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v47);
            v106 = DeferredCriticalSectionEvent;
          }
          LODWORD(v107) = 0;
          while ( v49 != _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 8), v49 + (v49 & 2 | 1), v49) )
          {
            RtlBackoff((unsigned int *)&v107);
            _m_prefetchw((const void *)(v47 + 8));
            v49 = *(_DWORD *)(v47 + 8);
            DeferredCriticalSectionEvent = v106;
          }
          if ( (v49 & 2) != 0 )
            RtlpUnWaitCriticalSectionEx(v47, DeferredCriticalSectionEvent);
        }
        v43 = v94;
        v42 = v129;
      }
      v91 = 0;
      v42 &= ~1u;
      v129 = v42;
    }
    if ( v4 < Size )
      v50 = v4;
    else
      v50 = Size;
    memmove(v43, Srca, v50);
    RtlFreeHeap((__int64)Src, v42, (__int64)Srca);
    v43 = v94;
    goto LABEL_100;
  }
LABEL_173:
  if ( v105 && *((_DWORD *)Src + 31) )
  {
    v105[11] = v105[8] ^ v105[9] ^ v105[10];
    *((_DWORD *)v105 + 2) ^= *((_DWORD *)Src + 34);
  }
  if ( v91 )
  {
    v70 = *((_QWORD *)Src + 44);
    if ( (*(_DWORD *)(v70 + 12))-- == 1 )
    {
      *(_QWORD *)(v70 + 16) = 0LL;
      v72 = _InterlockedCompareExchange((volatile signed __int32 *)(v70 + 8), -1, -2);
      if ( v72 != -2 )
      {
        if ( (*(_BYTE *)(v70 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v70);
        v88 = *(_QWORD *)(v70 + 24);
        if ( !v88 )
          v88 = RtlpCreateDeferredCriticalSectionEvent(v70);
        LODWORD(v128) = 0;
        while ( v72 != _InterlockedCompareExchange((volatile signed __int32 *)(v70 + 8), v72 + (v72 & 2 | 1), v72) )
        {
          RtlBackoff((unsigned int *)&v128);
          _m_prefetchw((const void *)(v70 + 8));
          v72 = *(_DWORD *)(v70 + 8);
        }
        if ( (v72 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v70, v88);
      }
    }
  }
  v73 = NtCurrentPeb()->SharedData;
  if ( v73 && *v73 )
    v74 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v74 = 2147353472LL;
  if ( !*(_BYTE *)v74 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    return Srca;
  v75 = Srca;
  if ( Srca && (v129 & 0x800000) == 0 )
    RtlpLogHeapReallocateEvent((_DWORD)Src, (_DWORD)Srca, (_DWORD)v116, Size, v4, 3);
  return v75;
}
