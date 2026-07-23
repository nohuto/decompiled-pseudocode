/*
 * XREFs of RtlpReAllocateHeap @ 0x180024890
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800206D4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpCreateSplitBlock @ 0x1800214F0 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x1800219DC (RtlpGrowBlockInPlace.c)
 *     RtlTryEnterCriticalSection @ 0x1800225E0 (RtlTryEnterCriticalSection.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18005B090 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpGetExtraStuffPointer @ 0x180078E10 (RtlpGetExtraStuffPointer.c)
 *     RtlpUpdateHeapRates @ 0x180083928 (RtlpUpdateHeapRates.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x180100360 (RtlpUpdateTagEntry.c)
 *     RtlDebugReAllocateHeap @ 0x1801059F0 (RtlDebugReAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x180106C88 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapReallocateEvent @ 0x180117014 (RtlpLogHeapReallocateEvent.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

PVOID __fastcall RtlpReAllocateHeap(unsigned __int16 *BaseAddress, ULONG a2, char *a3, SIZE_T a4)
{
  SIZE_T v4; // r12
  __int64 v7; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  char *v10; // rcx
  int *v11; // r9
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  ULONG v14; // r14d
  __int64 v15; // rax
  int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r9
  int v19; // edx
  unsigned __int64 v20; // rdx
  __int64 **v21; // rcx
  _BYTE *v22; // rdi
  char v23; // cl
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rcx
  unsigned __int8 v26; // dl
  int v27; // r8d
  __int64 v28; // rdx
  SIZE_T v29; // rax
  unsigned __int64 v30; // rax
  _WORD *v31; // rcx
  SIZE_T v32; // r9
  SIZE_T v33; // r8
  __int64 v34; // r9
  SIZE_T v35; // r8
  char v36; // r9
  __int64 v37; // r10
  char v38; // r11
  unsigned __int8 v39; // al
  unsigned __int16 *v40; // rcx
  ULONG v41; // r14d
  char v42; // al
  ULONG v43; // r14d
  char *v44; // r9
  char *v45; // rdi
  _DWORD *v46; // rdx
  int v47; // edx
  __int64 v48; // rdi
  bool v49; // zf
  signed __int32 v50; // r14d
  size_t v51; // r8
  __int64 v52; // r9
  _OWORD *v53; // r8
  int v54; // edi
  __int64 v55; // r8
  int v56; // ecx
  __int64 v57; // rax
  unsigned __int16 v58; // cx
  int v59; // ecx
  __int64 DeferredCriticalSectionEvent; // r8
  int v61; // ecx
  unsigned __int16 v62; // dx
  __int64 v63; // r9
  unsigned __int64 v64; // r14
  int v65; // eax
  __int64 v66; // rdi
  signed __int32 v67; // esi
  _DWORD *v68; // rcx
  __int64 v69; // rcx
  void *v70; // rdi
  unsigned __int64 v72; // rdx
  size_t v73; // rdi
  ULONG v74; // esi
  PVOID Heap; // rax
  _DWORD *SharedData; // rcx
  __int64 v77; // rcx
  PVOID v78; // rdi
  __int64 v79; // r8
  char v80; // dl
  unsigned __int16 v81; // ax
  int v82; // eax
  __int64 v83; // r14
  struct _TEB *v84; // rdi
  NTSTATUS v85; // ecx
  char v86; // [rsp+40h] [rbp-1A8h]
  unsigned __int64 v87; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 v88; // [rsp+50h] [rbp-198h]
  char *v89; // [rsp+58h] [rbp-190h]
  PVOID v90; // [rsp+58h] [rbp-190h]
  SIZE_T v91; // [rsp+60h] [rbp-188h]
  int v92; // [rsp+60h] [rbp-188h]
  __int64 v93; // [rsp+68h] [rbp-180h]
  unsigned __int64 v94; // [rsp+78h] [rbp-170h]
  char *v95; // [rsp+90h] [rbp-158h]
  __int64 v96; // [rsp+90h] [rbp-158h]
  __int16 v97[4]; // [rsp+98h] [rbp-150h]
  _BYTE *v98; // [rsp+A0h] [rbp-148h]
  unsigned __int64 v99; // [rsp+A8h] [rbp-140h] BYREF
  __int64 v100; // [rsp+B0h] [rbp-138h]
  unsigned __int64 v101; // [rsp+B8h] [rbp-130h]
  NTSTATUS v102; // [rsp+C0h] [rbp-128h]
  unsigned __int64 v103; // [rsp+C8h] [rbp-120h]
  ULONG_PTR v104; // [rsp+D0h] [rbp-118h] BYREF
  SIZE_T v105; // [rsp+D8h] [rbp-110h]
  PVOID v106; // [rsp+E0h] [rbp-108h] BYREF
  __int64 ExtraStuffPointer; // [rsp+E8h] [rbp-100h]
  char *v108; // [rsp+F0h] [rbp-F8h]
  void *v109; // [rsp+F8h] [rbp-F0h]
  unsigned int v110; // [rsp+100h] [rbp-E8h]
  unsigned int v111; // [rsp+104h] [rbp-E4h]
  unsigned int NtGlobalFlag; // [rsp+108h] [rbp-E0h]
  SIZE_T v113; // [rsp+120h] [rbp-C8h]
  __int64 v114; // [rsp+128h] [rbp-C0h]
  unsigned __int16 *v115; // [rsp+130h] [rbp-B8h]
  int v116; // [rsp+140h] [rbp-A8h]
  struct _TEB *v117; // [rsp+148h] [rbp-A0h]
  struct _TEB *v118; // [rsp+150h] [rbp-98h]
  __int64 v119; // [rsp+158h] [rbp-90h]
  struct _TEB *v120; // [rsp+178h] [rbp-70h]
  struct _TEB *v121; // [rsp+180h] [rbp-68h]
  int v122; // [rsp+1A0h] [rbp-48h]
  unsigned __int16 *v123; // [rsp+1F0h] [rbp+8h] BYREF
  ULONG Flags; // [rsp+1F8h] [rbp+10h]
  void *Src; // [rsp+200h] [rbp+18h]
  SIZE_T Size; // [rsp+208h] [rbp+20h]

  Size = a4;
  Src = a3;
  Flags = a2;
  v123 = BaseAddress;
  v4 = a4;
  v7 = 0LL;
  v98 = 0LL;
  v86 = 0;
  v109 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v84 = NtCurrentTeb();
    v85 = 0;
LABEL_217:
    v84->LastErrorValue = RtlNtStatusToDosError(v85);
    return 0LL;
  }
  v8 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  v9 = v8;
  if ( *(_BYTE *)(v8 + 15) == 5 )
  {
    v9 = v8 - 16LL * *(unsigned __int8 *)(v8 + 14);
    v87 = v9;
  }
  else
  {
    v87 = v8;
  }
  if ( *((_BYTE *)BaseAddress + 418) == 2 )
  {
    if ( *((_QWORD *)BaseAddress + 51) )
    {
      v10 = (char *)(v9 + 15);
      if ( *(char *)(v9 + 15) < 0 )
      {
        if ( (a2 & 0x10) == 0 )
        {
          v11 = (int *)(v9 + 8);
          v12 = v9 >> 4;
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((v9 >> 4) ^ *(_WORD *)(v9 + 8) ^ (unsigned __int16)BaseAddress) )
            v13 = 0LL;
          else
            v13 = *(_QWORD *)(v9
                            - (((unsigned int)RtlpLFHKey ^ (unsigned int)(v9 >> 4) ^ *(_DWORD *)(v9 + 8) ^ (unsigned int)BaseAddress) >> 12));
          v79 = *(unsigned __int16 *)(v13 + 36);
          v80 = *v10;
          if ( *v10 == 5 )
          {
            v72 = *(unsigned __int16 *)(v87 + 12) ^ (unsigned __int64)BaseAddress[70];
          }
          else if ( (v80 & 0x40) != 0 )
          {
            v72 = *(unsigned __int16 *)(v87 + 16LL * (v80 & 0x3F) + 12);
          }
          else if ( (v80 & 0x3F) == 0x3F )
          {
            if ( v80 >= 0 )
            {
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v82 = *v11;
                v116 = v82;
                if ( (v82 & *((_DWORD *)BaseAddress + 31)) != 0 )
                  v116 = *((_DWORD *)BaseAddress + 34) ^ v82;
                v72 = *(_QWORD *)(v87 + 16LL * (unsigned __int16)v116);
                goto LABEL_182;
              }
              v81 = *(_WORD *)v11;
            }
            else
            {
              if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(v12 ^ *(_WORD *)v11 ^ (unsigned __int16)BaseAddress)) )
                v7 = *(_QWORD *)(v87
                               - (((unsigned int)RtlpLFHKey ^ (unsigned int)v12 ^ *v11 ^ (unsigned int)BaseAddress) >> 12));
              v81 = *(_WORD *)(v7 + 36);
            }
            v72 = *(_QWORD *)(v87 + 16LL * v81);
          }
          else
          {
            v72 = *v10 & 0x3F;
          }
LABEL_182:
          v73 = 16 * v79 - v72;
          v92 = 16 * v79 - v72;
          Flags &= 0xC003FFFF;
          v74 = Flags;
          Heap = RtlAllocateHeap(BaseAddress, Flags, v4);
          v90 = Heap;
          if ( Heap )
          {
            if ( v4 < v73 )
              v73 = v4;
            memmove(Heap, Src, v73);
            RtlFreeHeap(BaseAddress, v74, Src);
          }
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && *SharedData )
            v77 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v77 = 2147353472LL;
          if ( !*(_BYTE *)v77 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
            return v90;
          v78 = v90;
          if ( v90 )
            RtlpLogHeapReallocateEvent((_DWORD)BaseAddress, (_DWORD)v90, (_DWORD)Src, v92, v4, 2);
          return v78;
        }
        return 0LL;
      }
    }
  }
  if ( (unsigned __int16 *)v9 == BaseAddress )
  {
    RtlpLogHeapFailure(9, (_DWORD)BaseAddress, v9, 0, 0LL, 0LL);
    return 0LL;
  }
  v14 = *((_DWORD *)BaseAddress + 29) | a2;
  Flags = v14;
  if ( (v14 & 0x61000000) != 0 && (v14 & 0x10000000) == 0 )
    return (PVOID)RtlDebugReAllocateHeap(BaseAddress);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v84 = NtCurrentTeb();
    v85 = -1073741801;
    goto LABEL_217;
  }
  v15 = a4;
  v16 = 1;
  if ( !a4 )
    v15 = 1LL;
  v17 = *((_QWORD *)BaseAddress + 33) & (*((_QWORD *)BaseAddress + 32) + v15);
  if ( v17 < 0x20 )
    v17 = 32LL;
  v88 = v17;
  LODWORD(v91) = 0;
  if ( (v14 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44)) )
    {
      ++*((_DWORD *)BaseAddress + 154);
      v16 = 1;
    }
    else
    {
      if ( byte_18017A188 )
      {
        v117 = NtCurrentTeb();
        v117->LastStatusValue = -1073741420;
        v118 = NtCurrentTeb();
        v118->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_170;
      }
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
      RtlpUpdateHeapRates(BaseAddress, 1LL);
    }
    v86 = 1;
    v14 ^= 1u;
    Flags = v14;
  }
  _m_prefetchw((const void *)v8);
  if ( *(_BYTE *)(v8 + 15) == 5 )
    v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
  v18 = v8;
  v99 = v8;
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v19 = *(_DWORD *)(v8 + 8) ^ *((_DWORD *)BaseAddress + 34);
    *(_DWORD *)(v8 + 8) = v19;
    if ( HIBYTE(v19) != ((unsigned __int8)v19 ^ (unsigned __int8)(BYTE1(v19) ^ BYTE2(v19))) )
    {
      RtlpAnalyzeHeapFailure(BaseAddress, v8);
      v16 = 1;
      v18 = v8;
    }
  }
  v98 = (_BYTE *)v8;
  v20 = *(unsigned __int16 *)(v8 + 8);
  v21 = (__int64 **)*((_QWORD *)BaseAddress + 39);
  do
  {
    if ( v20 < *((unsigned int *)v21 + 2) )
      break;
    v21 = (__int64 **)*v21;
  }
  while ( v21 );
  if ( (v14 & 0x3C000100) != 0 || *((_QWORD *)BaseAddress + 41) || (*(_BYTE *)(v8 + 10) & 2) != 0 )
    v88 += 16LL;
  v22 = (_BYTE *)(v8 + 15);
  v101 = v8 + 15;
  v23 = *(_BYTE *)(v8 + 15);
  if ( (v23 & 0x3F) != 0 )
  {
    if ( v23 == 4 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v61 = *(_DWORD *)(v18 + 8);
        if ( (v61 & *((_DWORD *)BaseAddress + 31)) != 0 )
          LOWORD(v61) = v61 ^ BaseAddress[68];
        v62 = *(_WORD *)(v8 + 8);
        v14 = Flags;
      }
      else
      {
        v62 = *(_WORD *)(v18 + 8);
        LOWORD(v61) = v62;
      }
      v91 = *(_QWORD *)(v8 - 48 + 32) - (unsigned __int16)v61;
      v24 = (v91 + v62) >> 4;
      v94 = v24;
      v88 = (v88 + 4151) & 0xFFFFFFFFFFFFF000uLL;
LABEL_41:
      v28 = v88 >> 4;
      v93 = v88 >> 4;
      *(_QWORD *)v97 = v88 >> 4;
      if ( v88 >> 4 > v24 )
      {
        v4 = Size;
        if ( *v22 == 4 || !RtlpGrowBlockInPlace(BaseAddress, v14, v8, Size, v88 >> 4) )
        {
          if ( (v14 & 0x10) != 0 )
          {
            Src = 0LL;
          }
          else
          {
            v41 = v14 & 0xC003FFFF;
            Flags = v41;
            v42 = *(_BYTE *)(v8 + 10);
            if ( (v42 & 2) != 0 )
            {
              v43 = (16 * (v42 & 0xE0 | 0x10)) | v41 & 0xFFFFF1FF;
              Flags = v43;
              ExtraStuffPointer = RtlpGetExtraStuffPointer(v8, v28);
              v56 = *(unsigned __int16 *)(ExtraStuffPointer + 2);
              if ( (__int16)v56 > 0 )
              {
                v43 |= v56 << 18;
                Flags = v43;
              }
            }
            else
            {
              LODWORD(v101) = NtCurrentPeb()->NtGlobalFlag;
              v43 = Flags;
              if ( (v101 & 0x800) != 0 )
              {
                v65 = *(unsigned __int8 *)(v8 + 11);
                if ( (_BYTE)v65 )
                {
                  v43 = (v65 << 18) | Flags;
                  Flags = v43;
                }
              }
            }
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
              *(_DWORD *)(v8 + 8) ^= *((_DWORD *)BaseAddress + 34);
            }
            v98 = 0LL;
            v44 = (char *)RtlAllocateHeap(BaseAddress, v43, v4);
            v89 = v44;
            if ( v44 )
            {
              v45 = v44 - 16;
              v95 = v44 - 16;
              _m_prefetchw(v44 - 16);
              if ( *(v44 - 1) == 5 )
              {
                v45 -= 16 * (unsigned __int8)v45[14];
                v95 = v45;
              }
              v108 = v45;
              v46 = BaseAddress + 62;
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v47 = *((_DWORD *)v45 + 2) ^ *((_DWORD *)BaseAddress + 34);
                *((_DWORD *)v45 + 2) = v47;
                if ( HIBYTE(v47) != ((unsigned __int8)v47 ^ (unsigned __int8)(BYTE1(v47) ^ BYTE2(v47))) )
                {
                  RtlpAnalyzeHeapFailure(BaseAddress, v45);
                  v44 = v89;
                }
                v46 = BaseAddress + 62;
              }
              if ( (v45[10] & 2) != 0 )
              {
                v53 = (_OWORD *)RtlpGetExtraStuffPointer(v45, v46);
                v100 = (__int64)v53;
                if ( *v46 )
                {
                  v54 = *(_DWORD *)(v8 + 8) ^ *((_DWORD *)BaseAddress + 34);
                  *(_DWORD *)(v8 + 8) = v54;
                  if ( HIBYTE(v54) != ((unsigned __int8)v54 ^ (unsigned __int8)(BYTE1(v54) ^ BYTE2(v54))) )
                  {
                    RtlpAnalyzeHeapFailure(BaseAddress, v8);
                    v44 = v89;
                    v53 = (_OWORD *)v100;
                  }
                  v46 = BaseAddress + 62;
                  v45 = v95;
                }
                if ( (*(_BYTE *)(v8 + 10) & 2) != 0 )
                {
                  ExtraStuffPointer = RtlpGetExtraStuffPointer(v8, v46);
                  *(_QWORD *)(v55 + 8) = *(_QWORD *)(ExtraStuffPointer + 8);
                }
                else
                {
                  *v53 = 0LL;
                }
                if ( *((_DWORD *)BaseAddress + 31) )
                {
                  *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
                  *(_DWORD *)(v8 + 8) ^= *((_DWORD *)BaseAddress + 34);
                }
              }
              if ( *v46 )
              {
                v45[11] = v45[8] ^ v45[9] ^ v45[10];
                *((_DWORD *)v45 + 2) ^= *((_DWORD *)BaseAddress + 34);
              }
              v98 = 0LL;
              if ( v86 )
              {
                v48 = *((_QWORD *)BaseAddress + 44);
                v49 = (*(_DWORD *)(v48 + 12))-- == 1;
                if ( v49 )
                {
                  *(_QWORD *)(v48 + 16) = 0LL;
                  v50 = _InterlockedCompareExchange((volatile signed __int32 *)(v48 + 8), -1, -2);
                  if ( v50 != -2 )
                  {
                    if ( (*(_BYTE *)(v48 + 8) & 1) != 0 )
                      RtlpNotOwnerCriticalSection(v48);
                    DeferredCriticalSectionEvent = *(_QWORD *)(v48 + 24);
                    v96 = DeferredCriticalSectionEvent;
                    if ( !DeferredCriticalSectionEvent )
                    {
                      DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v48);
                      v96 = DeferredCriticalSectionEvent;
                    }
                    LODWORD(v99) = 0;
                    while ( v50 != _InterlockedCompareExchange(
                                     (volatile signed __int32 *)(v48 + 8),
                                     (v50 & 2 | 1) + v50,
                                     v50) )
                    {
                      RtlBackoff((unsigned int *)&v99);
                      _m_prefetchw((const void *)(v48 + 8));
                      v50 = *(_DWORD *)(v48 + 8);
                      DeferredCriticalSectionEvent = v96;
                    }
                    if ( (v50 & 2) != 0 )
                      RtlpUnWaitCriticalSectionEx(v48, DeferredCriticalSectionEvent);
                  }
                  v44 = v89;
                  v43 = Flags;
                }
                v86 = 0;
                v43 &= ~1u;
                Flags = v43;
              }
              if ( v4 < v91 )
                v51 = v4;
              else
                v51 = v91;
              memmove(v44, Src, v51);
              RtlFreeHeap(BaseAddress, v43, Src);
              v44 = v89;
            }
            v109 = Src;
            Src = v44;
          }
        }
        goto LABEL_170;
      }
      if ( (v88 >> 4) + 1 == v24 )
      {
        v28 = (v88 >> 4) + 1;
        v93 = v28;
        *(_QWORD *)v97 = v28;
        v88 += 16LL;
      }
      if ( *v22 == 4 )
      {
        *(_WORD *)(v8 + 8) = v88 - Size;
LABEL_53:
        v29 = Size;
        if ( Size <= v91 )
          goto LABEL_54;
        if ( (v14 & 8) != 0 )
        {
          memset((char *)Src + v91, 0, Size - v91);
          v28 = v93;
        }
        else
        {
          if ( (BaseAddress[56] & 0x40) == 0 )
            goto LABEL_54;
          v32 = v91 & 3;
          v113 = v32;
          if ( (v91 & 3) != 0 )
          {
            v32 = 4 - v32;
            v113 = v32;
          }
          if ( Size <= v32 + v91
            || (v33 = (Size - v32 - v91) & 0xFFFFFFFFFFFFFFFCuLL) == 0
            || (v34 = v32 + v91 + v8 + 16, v114 = v34, v35 = v33 >> 2, (v105 = v35) == 0) )
          {
LABEL_54:
            if ( (BaseAddress[56] & 0x20) != 0 )
              *(__m128i *)(v8 + v29 + 16) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
            if ( v28 == v24 )
              goto LABEL_57;
            v36 = *(_BYTE *)(v8 + 10) & 0xFE;
            if ( *v22 == 4 )
            {
              v64 = v8 - 48;
              NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
              v93 = *(_QWORD *)v97;
              if ( (NtGlobalFlag & 0x800) != 0 )
                *(_WORD *)(v64 + 18) = RtlpUpdateTagEntry(
                                         (_DWORD)BaseAddress,
                                         *(unsigned __int16 *)(v64 + 18),
                                         v94,
                                         *(_DWORD *)v97,
                                         5);
              v106 = (PVOID)(v64 + v88);
              v104 = 16 * v94 - v88;
              v102 = RtlpSecMemFreeVirtualMemory(v88, &v106, &v104, 0x4000u);
              if ( v102 < 0 )
              {
                if ( NtCurrentPeb()->Ldr )
                  DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                else
                  DbgPrint("HEAP: ");
                DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v106, v104, v102);
                RtlpBreakPointHeap();
                v28 = *(_QWORD *)v97;
LABEL_57:
                v4 = Size;
                if ( *v22 != 4 )
                {
                  v30 = v88 - Size;
                  if ( v88 - Size >= 0x3F )
                  {
                    *(_QWORD *)(v8 + 16 * v28) = v30;
                    *(_BYTE *)(v99 + 15) = 63;
                  }
                  else
                  {
                    *(_BYTE *)(v99 + 15) = v30;
                  }
                }
                goto LABEL_170;
              }
              *(_QWORD *)(v64 + 32) -= v104;
            }
            else
            {
              v37 = *(unsigned __int16 *)(v8 + 8) - (unsigned __int64)(unsigned __int16)v28;
              v119 = v37;
              *(_WORD *)(v8 + 8) = v28;
              v38 = (BaseAddress[56] & 0x40) != 0;
              v39 = *(_BYTE *)(v8 + 14);
              if ( v39 )
              {
                v40 = (unsigned __int16 *)((v8 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v39 << 16) + 0x10000);
                v115 = v40;
              }
              else
              {
                v40 = BaseAddress;
                v115 = BaseAddress;
              }
              RtlpCreateSplitBlock(BaseAddress, (__int64)v40, v8 + 16 * v28, v36, v38, v28, v37);
            }
            v28 = v93;
            goto LABEL_57;
          }
          if ( (v34 & 4) != 0 )
          {
            *(_DWORD *)v34 = -1163005939;
            v105 = --v35;
            if ( !v35 )
              goto LABEL_54;
            v34 += 4LL;
            v114 = v34;
          }
          memset64((void *)v34, 0xBAADF00DBAADF00DuLL, v35 >> 1);
          if ( (v35 & 1) != 0 )
            *(_DWORD *)(v34 + 4 * v35 - 4) = -1163005939;
          v22 = (_BYTE *)v101;
        }
        v29 = Size;
        goto LABEL_54;
      }
      if ( (*(_BYTE *)(v8 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = v8 + 16LL * *(unsigned __int16 *)(v8 + 8) - 16;
        v100 = 16 * v28 + v8 - 16;
        *(_OWORD *)v100 = *(_OWORD *)ExtraStuffPointer;
        v110 = NtCurrentPeb()->NtGlobalFlag;
        if ( (v110 & 0x800) != 0 )
        {
          v93 = *(_QWORD *)v97;
          v24 = v94;
          *(_WORD *)(v100 + 2) = RtlpUpdateTagEntry(
                                   (_DWORD)BaseAddress,
                                   *(unsigned __int16 *)(v100 + 2),
                                   v94,
                                   *(_DWORD *)v97,
                                   4);
          v28 = v52;
          v22 = (_BYTE *)v101;
          goto LABEL_52;
        }
      }
      else
      {
        v111 = NtCurrentPeb()->NtGlobalFlag;
        if ( (v111 & 0x800) != 0 )
        {
          v93 = *(_QWORD *)v97;
          *(_BYTE *)(v8 + 11) = RtlpUpdateTagEntry(
                                  (_DWORD)BaseAddress,
                                  *(unsigned __int8 *)(v8 + 11),
                                  *(unsigned __int16 *)(v8 + 8),
                                  *(_DWORD *)v97,
                                  4);
          v24 = v94;
          v28 = v63;
          goto LABEL_52;
        }
      }
      v24 = v94;
      v28 = *(_QWORD *)v97;
      v93 = *(_QWORD *)v97;
LABEL_52:
      LOBYTE(v14) = Flags;
      goto LABEL_53;
    }
    v24 = *(unsigned __int16 *)(v18 + 8);
    v94 = v24;
    if ( v23 == 5 )
    {
      v25 = *(unsigned __int16 *)(v8 + 12) ^ (unsigned __int64)BaseAddress[70];
    }
    else if ( (v23 & 0x40) != 0 )
    {
      v25 = *(unsigned __int16 *)(v8 + 16LL * (v23 & 0x3F) + 12);
    }
    else if ( (v23 & 0x3F) == 0x3F )
    {
      if ( v23 >= 0 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v59 = *(_DWORD *)(v8 + 8);
          v122 = v59;
          if ( (v59 & *((_DWORD *)BaseAddress + 31)) != 0 )
          {
            v122 = v59 ^ *((_DWORD *)BaseAddress + 34);
            LOWORD(v59) = v122;
          }
          v14 = Flags;
          v25 = *(_QWORD *)(v8 + 16LL * (unsigned __int16)v59);
          goto LABEL_38;
        }
        v58 = v20;
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4)) )
          v57 = 0LL;
        else
          v57 = *(_QWORD *)(v8
                          - (((unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
        v58 = *(_WORD *)(v57 + 36);
        v14 = Flags;
        v24 = *(unsigned __int16 *)(v18 + 8);
      }
      v25 = *(_QWORD *)(v8 + 16LL * v58);
    }
    else
    {
      v25 = *(_BYTE *)(v8 + 15) & 0x3F;
    }
LABEL_38:
    v103 = v25;
    v91 = 16 * v24 - v25;
    if ( v24 < BaseAddress[216] )
    {
      v26 = *((_BYTE *)BaseAddress + (v24 >> 3) + 434);
      v27 = v16 << (v24 & 7);
      v24 = v94;
      if ( ((unsigned __int8)v27 & v26) == 0 )
      {
        v31 = (_WORD *)(*((_QWORD *)BaseAddress + 53) + 2 * v94);
        if ( *v31 > 1u )
          --*v31;
      }
      v14 = Flags;
    }
    goto LABEL_41;
  }
  v120 = NtCurrentTeb();
  v120->LastStatusValue = -1073741811;
  v121 = NtCurrentTeb();
  v121->LastErrorValue = RtlNtStatusToDosError(-1073741811);
LABEL_170:
  if ( v98 && *((_DWORD *)BaseAddress + 31) )
  {
    v98[11] = v98[8] ^ v98[9] ^ v98[10];
    *((_DWORD *)v98 + 2) ^= *((_DWORD *)BaseAddress + 34);
  }
  if ( v86 )
  {
    v66 = *((_QWORD *)BaseAddress + 44);
    v49 = (*(_DWORD *)(v66 + 12))-- == 1;
    if ( v49 )
    {
      *(_QWORD *)(v66 + 16) = 0LL;
      v67 = _InterlockedCompareExchange((volatile signed __int32 *)(v66 + 8), -1, -2);
      if ( v67 != -2 )
      {
        if ( (*(_BYTE *)(v66 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v66);
        v83 = *(_QWORD *)(v66 + 24);
        if ( !v83 )
          v83 = RtlpCreateDeferredCriticalSectionEvent(v66);
        LODWORD(v123) = 0;
        while ( v67 != _InterlockedCompareExchange((volatile signed __int32 *)(v66 + 8), v67 + (v67 & 2 | 1), v67) )
        {
          RtlBackoff((unsigned int *)&v123);
          _m_prefetchw((const void *)(v66 + 8));
          v67 = *(_DWORD *)(v66 + 8);
        }
        if ( (v67 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v66, v83);
      }
    }
  }
  v68 = NtCurrentPeb()->SharedData;
  if ( v68 && *v68 )
    v69 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v69 = 2147353472LL;
  if ( !*(_BYTE *)v69 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    return Src;
  v70 = Src;
  if ( Src && (Flags & 0x800000) == 0 )
    RtlpLogHeapReallocateEvent((_DWORD)BaseAddress, (_DWORD)Src, (_DWORD)v109, v91, v4, 3);
  return v70;
}
