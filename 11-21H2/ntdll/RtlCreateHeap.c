/*
 * XREFs of RtlCreateHeap @ 0x18002F7E0
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180054B20 (RtlDetectHeapLeaks.c)
 *     CsrpConnectToServer @ 0x180079664 (CsrpConnectToServer.c)
 *     LdrpInitializeTls @ 0x18007A64C (LdrpInitializeTls.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     LdrpInitializeProcessHeap @ 0x1800DFF28 (LdrpInitializeProcessHeap.c)
 *     RtlDebugCreateHeap @ 0x18010495C (RtlDebugCreateHeap.c)
 *     RtlHeapTrkInitialize @ 0x18010A7A0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlInitializeCriticalSectionEx @ 0x18001DA80 (RtlInitializeCriticalSectionEx.c)
 *     RtlDeleteCriticalSection @ 0x18001E130 (RtlDeleteCriticalSection.c)
 *     RtlpPopulateListIndex @ 0x18001FF74 (RtlpPopulateListIndex.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800206D4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x18002EA94 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpCreateHeapEncoding @ 0x18002F0BC (RtlpCreateHeapEncoding.c)
 *     RtlpMoveHeapBetweenLists @ 0x18002F448 (RtlpMoveHeapBetweenLists.c)
 *     RtlpInitializeHeapSegment @ 0x1800304FC (RtlpInitializeHeapSegment.c)
 *     RtlpHpHeapCreate @ 0x180054CB4 (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x180056C28 (RtlpHpHeapDestroy.c)
 *     RtlpHpConvertCreationFlags @ 0x1800895B8 (RtlpHpConvertCreationFlags.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1800A4730 (NtQuerySystemInformation.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlDebugCreateHeap @ 0x18010495C (RtlDebugCreateHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x180114E08 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapHandleError @ 0x180114EB0 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeCreate @ 0x180114ED0 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCommit @ 0x180116BD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x180116D3C (RtlpLogHeapCreateEvent.c)
 *     RtlpHpParametersVerify @ 0x180118254 (RtlpHpParametersVerify.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

PVOID __cdecl RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PVOID Parameters)
{
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  ULONG v11; // r14d
  _DWORD *v12; // rbx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // ebx
  struct _PEB *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  ULONG_PTR v22; // r9
  ULONG_PTR v23; // r8
  unsigned __int64 v24; // rcx
  int v25; // r14d
  _RTL_CRITICAL_SECTION *v26; // rdx
  int v27; // r14d
  __int64 v28; // rcx
  char *v29; // rsi
  char *v30; // rdx
  char *v31; // r12
  __int64 v32; // r14
  __int64 v33; // rcx
  char *v34; // rsi
  unsigned int v35; // eax
  int v36; // r9d
  _DWORD *v37; // r10
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rcx
  _RTL_CRITICAL_SECTION *v48; // rcx
  _BYTE *v50; // rax
  unsigned int v51; // eax
  SIZE_T v52; // rbx
  unsigned int v53; // eax
  __int64 v54; // rax
  ULONG_PTR v55; // rcx
  int v56; // eax
  unsigned __int64 v57; // rsi
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v59; // r10
  PVOID HeapHandle; // [rsp+40h] [rbp-218h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-210h]
  __int64 v62; // [rsp+50h] [rbp-208h]
  unsigned int NtGlobalFlag; // [rsp+58h] [rbp-200h]
  ULONG_PTR v64; // [rsp+60h] [rbp-1F8h] BYREF
  int v65; // [rsp+68h] [rbp-1F0h]
  ULONG_PTR v66; // [rsp+70h] [rbp-1E8h] BYREF
  PVOID v67; // [rsp+78h] [rbp-1E0h] BYREF
  SIZE_T v68; // [rsp+80h] [rbp-1D8h]
  ULONG_PTR v69; // [rsp+88h] [rbp-1D0h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp-1C8h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp-1C0h] BYREF
  __int128 v72; // [rsp+A0h] [rbp-1B8h] BYREF
  PVOID v73; // [rsp+B8h] [rbp-1A0h]
  PVOID MemoryInformation[3]; // [rsp+C0h] [rbp-198h] BYREF
  ULONG_PTR v75; // [rsp+D8h] [rbp-180h]
  int v76; // [rsp+E0h] [rbp-178h]
  char v77; // [rsp+E4h] [rbp-174h]
  char v78[16]; // [rsp+F0h] [rbp-168h] BYREF
  ULONG_PTR v79; // [rsp+100h] [rbp-158h]
  _OWORD v80[6]; // [rsp+120h] [rbp-138h] BYREF
  _BYTE v81[80]; // [rsp+180h] [rbp-D8h] BYREF
  char SystemInformation[40]; // [rsp+1D0h] [rbp-88h] BYREF
  __int64 v83; // [rsp+1F8h] [rbp-60h]

  v68 = ReserveSize;
  v9 = (unsigned __int64)Lock;
  v61 = (unsigned __int64)Lock;
  v73 = HeapBase;
  *(_QWORD *)&v72 = Lock;
  v10 = (unsigned __int64)Parameters;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v65 = 0;
  HeapHandle = 0LL;
  v62 = 0LL;
  if ( !dword_180174238 || HeapBase || Lock )
  {
    if ( dword_180174248 && Parameters == (PVOID)1 )
      v10 = (Flags & 0x100) == 0;
  }
  else
  {
    v12 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_180174268)(Flags, 0LL);
    if ( v12 )
    {
LABEL_93:
      v26 = (_RTL_CRITICAL_SECTION *)v61;
LABEL_94:
      v48 = 0LL;
      goto LABEL_95;
    }
    if ( Parameters != (PVOID)-1LL )
      goto LABEL_165;
    v10 = 0LL;
    ReserveSize = v68;
    v9 = v61;
  }
  v11 = Flags & 0xF1FFFFFF;
  v12 = 0LL;
  if ( (v11 & 0x100) != 0 )
  {
    if ( (v11 & 2) == 0 || HeapBase || ReserveSize || CommitSize || v9 )
      goto LABEL_93;
    if ( v10 == -1LL && dword_180174248 )
      v10 = 0LL;
    if ( v10 )
    {
      v12 = (_DWORD *)v10;
      if ( !(unsigned int)RtlpHpParametersVerify(v10) )
        goto LABEL_165;
    }
    else
    {
      v12 = v81;
    }
  }
  else if ( (RtlpHpHeapFeatures & 1) != 0 && (v11 & 2) != 0 && !HeapBase )
  {
    if ( !v10 )
      goto LABEL_120;
    if ( *(_QWORD *)(v10 + 8) || *(_QWORD *)(v10 + 16) || *(_QWORD *)(v10 + 48) || (v56 = 1, *(_QWORD *)(v10 + 72)) )
      v56 = 0;
    if ( v56 )
    {
LABEL_120:
      v50 = v81;
      if ( v9 )
        v50 = 0LL;
      v12 = v50;
    }
  }
  if ( v12 )
  {
    if ( v12 == (_DWORD *)v81 )
    {
      memset(v12, 0, 0x50uLL);
      *v12 = 5242883;
      v12[3] = 1;
      v12[4] = -1;
    }
    if ( (v12[1] & 1) != 0 )
    {
      if ( dword_180174248 )
      {
        v12 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, PVOID, SIZE_T, SIZE_T, _QWORD, _QWORD))qword_180174268)(
                          v11,
                          HeapBase,
                          v68,
                          CommitSize,
                          0LL,
                          0LL);
        goto LABEL_93;
      }
    }
    else
    {
      v72 = RtlpHpEnvHandle;
      _BitScanReverse(&v51, v12[3]);
      BYTE1(v72) = v51;
      if ( v12[4] != -1 )
        BYTE2(v72) = *((_BYTE *)v12 + 16) + 1;
      *((_QWORD *)&v72 + 1) = *((_QWORD *)v12 + 3);
      v52 = CommitSize;
      if ( v68 )
        v52 = v68;
      if ( CommitSize > v52 )
        CommitSize = v52;
      v53 = RtlpHpConvertCreationFlags(v11, NtGlobalFlag);
      v54 = RtlpHpHeapCreate(v53, v52, CommitSize, &v72);
      v12 = (_DWORD *)v54;
      if ( !v54 )
        goto LABEL_93;
      RtlpMoveHeapBetweenLists(v54, 0, 1, 0);
      if ( *((_WORD *)v12 + 14) )
        goto LABEL_93;
      RtlpHpHeapDestroy(v12);
    }
    goto LABEL_165;
  }
  if ( (v11 & 0x10000000) != 0 )
    goto LABEL_10;
  if ( RtlpHeapErrorHandlerThreshold >= 2 )
  {
    if ( (v11 & 0xFFF80C00) == 0 )
      goto LABEL_10;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
    RtlpHeapHandleError(2LL);
  }
  if ( (v11 & 0xFFF80C00) != 0 )
    v11 &= 0x7F3FFu;
LABEL_10:
  memset(v80, 0, sizeof(v80));
  if ( v10 && *(_DWORD *)v10 == 96 )
  {
    v80[0] = *(_OWORD *)v10;
    v80[1] = *(_OWORD *)(v10 + 16);
    v80[2] = *(_OWORD *)(v10 + 32);
    v80[3] = *(_OWORD *)(v10 + 48);
    v80[4] = *(_OWORD *)(v10 + 64);
    v80[5] = *(_OWORD *)(v10 + 80);
  }
  v13 = v11 | 0x20;
  if ( (NtGlobalFlag & 0x10) == 0 )
    v13 = v11;
  v14 = v13 | 0x40;
  if ( (NtGlobalFlag & 0x20) == 0 )
    v14 = v13;
  v15 = v14 | 0x80;
  if ( (NtGlobalFlag & 0x200000) == 0 )
    v15 = v14;
  v16 = v15 | 0x40000000;
  if ( (NtGlobalFlag & 0x40) == 0 )
    v16 = v15;
  v17 = v16 | 0x20000000;
  if ( (NtGlobalFlag & 0x80) == 0 )
    v17 = v16;
  v18 = v17 | 0x8000000;
  if ( (NtGlobalFlag & 0x1000) == 0 )
    v18 = v17;
  v19 = NtCurrentPeb();
  if ( !*((_QWORD *)&v80[0] + 1) )
    *((_QWORD *)&v80[0] + 1) = v19->HeapSegmentReserve;
  if ( !*(_QWORD *)&v80[1] )
    *(_QWORD *)&v80[1] = v19->HeapSegmentCommit;
  if ( !*((_QWORD *)&v80[1] + 1) )
    *((_QWORD *)&v80[1] + 1) = v19->HeapDeCommitFreeBlockThreshold;
  if ( !*(_QWORD *)&v80[2] )
    *(_QWORD *)&v80[2] = v19->HeapDeCommitTotalFreeThreshold;
  v20 = qword_18017AA60;
  if ( !qword_18017AA60 )
  {
    qword_18017AA68 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      v20 = v83;
      qword_18017AA60 = v83;
      goto LABEL_32;
    }
LABEL_165:
    v12 = 0LL;
    goto LABEL_93;
  }
LABEL_32:
  if ( !*((_QWORD *)&v80[2] + 1) )
    *((_QWORD *)&v80[2] + 1) = v20 - qword_18017AA68 - 4096;
  v21 = *(_QWORD *)&v80[3];
  if ( (unsigned __int64)(*(_QWORD *)&v80[3] - 1LL) > 0xFEFFF )
    v21 = 1044480LL;
  *(_QWORD *)&v80[3] = v21;
  if ( CommitSize )
    v22 = (CommitSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v22 = 0x2000LL;
  v66 = v22;
  if ( v68 )
    v23 = (v68 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v23 = (v22 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v64 = v23;
  v24 = v22;
  if ( v22 > v23 )
  {
    v22 = v23;
    v66 = v23;
    v24 = v23;
  }
  if ( (v18 & 2) == 0 || HeapBase )
  {
    v68 = 0LL;
    v25 = v65;
  }
  else
  {
    v68 = 4096LL;
    v25 = 2;
    v65 = 2;
    if ( v23 - 4096 < v24 )
    {
      v23 = (v23 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v64 = v23;
    }
  }
  if ( !v24 || !v23 )
    goto LABEL_165;
  if ( (v18 & 0x61000000) != 0 && (v18 & 0x10000000) == 0 )
    return (PVOID)RtlDebugCreateHeap(v18, HeapBase, v23, v22, v61, v80);
  NtGlobalFlag = 704;
  v26 = (_RTL_CRITICAL_SECTION *)v61;
  if ( (v18 & 1) != 0 )
  {
    if ( v61 )
    {
      v12 = 0LL;
      goto LABEL_94;
    }
  }
  else
  {
    if ( v61 )
      v18 |= 0x80000000;
    v62 = v61 & -(__int64)(v61 != 0);
    NtGlobalFlag = v61 != 0 ? 704 : 744;
  }
  if ( HeapBase )
  {
    if ( *((_QWORD *)&v80[4] + 1) )
    {
      if ( !*((_QWORD *)&v80[3] + 1)
        || !*(_QWORD *)&v80[4]
        || *((_QWORD *)&v80[3] + 1) > *(_QWORD *)&v80[4]
        || (v18 & 2) != 0 )
      {
        goto LABEL_184;
      }
      v67 = HeapBase;
      v31 = (char *)HeapBase + *((_QWORD *)&v80[3] + 1);
      v64 = *(_QWORD *)&v80[4];
      memset(HeapBase, 0, 0x1000uLL);
      v30 = (char *)HeapBase;
    }
    else
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             HeapBase,
             MemoryBasicInformation,
             MemoryInformation,
             0x30uLL,
             0LL) < 0 )
        goto LABEL_185;
      v31 = (char *)MemoryInformation[0];
      if ( MemoryInformation[0] != HeapBase || v76 == 0x10000 )
        goto LABEL_185;
      v30 = (char *)MemoryInformation[0];
      v67 = MemoryInformation[0];
      if ( v76 == 4096 )
      {
        if ( (v18 & 0x40000) != 0 && (v77 & 0x40) == 0 )
          goto LABEL_185;
        memset(MemoryInformation[0], 0, 0x1000uLL);
        if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, v78, 0x30uLL, 0LL) < 0 )
          goto LABEL_185;
        v64 = v79;
        v66 = v75;
        v30 = (char *)v67;
        v31 = (char *)v67 + v75;
      }
      else
      {
        v64 = v75;
        v55 = v66;
        if ( v66 > v75 )
          v55 = v75;
        v66 = v55;
        if ( v55 < 0x2000 )
          goto LABEL_185;
      }
    }
    v65 = v25 | 1;
    v29 = (char *)HeapBase;
    HeapHandle = HeapBase;
    v27 = v18 & 0x40000;
    goto LABEL_59;
  }
  BaseAddress = 0LL;
  if ( *((_QWORD *)&v80[4] + 1) )
  {
LABEL_184:
    v12 = 0LL;
    v48 = (_RTL_CRITICAL_SECTION *)v62;
    goto LABEL_95;
  }
  v69 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
  RegionSize = v64 + v69;
  if ( v64 + v69 < v64 )
  {
    RegionSize = v64;
    v69 = 0LL;
  }
  v27 = v18 & 0x40000;
  if ( ZwAllocateVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         &RegionSize,
         0x2000u,
         (v18 & 0x40000) != 0 ? 64 : 4) < 0 )
    goto LABEL_185;
  v29 = (char *)BaseAddress;
  HeapHandle = BaseAddress;
  v64 = RegionSize;
  if ( v69 )
  {
    RtlpSecMemFreeVirtualMemory(v28, &BaseAddress, &v69, 0x8000u);
    v29 = (char *)BaseAddress + v69;
    HeapHandle = (char *)BaseAddress + v69;
    v64 = RegionSize - v69;
  }
  v30 = v29;
  v67 = v29;
  v31 = v29;
LABEL_59:
  if ( v30 == v31 )
  {
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v67, 0LL, &v66, 0x1000u, v27 != 0 ? 64 : 4) < 0 )
      goto LABEL_185;
    v32 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      v33 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v33 = 2147353472LL;
    if ( *(_BYTE *)v33 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(HeapHandle, v67, v66, 1LL);
    v31 += v66;
    v29 = (char *)HeapHandle;
  }
  else
  {
    v32 = 2147353472LL;
  }
  v34 = v29 + 704;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v57 = (unsigned __int64)(v34 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)HeapHandle + 41) = v57;
    v35 = NtGlobalFlag + 2064;
    v34 = (char *)(v57 + 2064);
    v18 |= 0x4000000u;
  }
  else
  {
    v35 = NtGlobalFlag;
  }
  NtGlobalFlag = (v35 + 15) & 0xFFFFFFF0;
  *((_WORD *)HeapHandle + 4) = NtGlobalFlag >> 4;
  *((_BYTE *)HeapHandle + 10) = 1;
  *((_BYTE *)HeapHandle + 15) = 1;
  *((_DWORD *)HeapHandle + 38) = -285217025;
  *((_DWORD *)HeapHandle + 28) = v18 & 0xEFFFFFFF;
  *((_DWORD *)HeapHandle + 36) = 0;
  memset((char *)HeapHandle + 568, 0, 0x78uLL);
  RtlpCreateHeapEncoding((__int64)HeapHandle);
  *((_DWORD *)HeapHandle + 162) = 1;
  v37 = HeapHandle;
  if ( (*((_DWORD *)HeapHandle + 28) & 0x8000000) != 0 )
  {
    HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
    *(_DWORD *)(v59 + 144) = HeapInterceptorIndex;
    *((_DWORD *)HeapHandle + 28) &= ~0x40u;
    v37 = HeapHandle;
  }
  v37[29] = v18 & 0x6001007D;
  *((_WORD *)HeapHandle + 105) = (_WORD)v34 - (_WORD)HeapHandle;
  *((_QWORD *)HeapHandle + 27) = 0LL;
  v38 = (char *)HeapHandle + 336;
  *((_QWORD *)HeapHandle + 43) = (char *)HeapHandle + 336;
  *v38 = v38;
  v39 = (char *)HeapHandle + 272;
  *((_QWORD *)HeapHandle + 35) = (char *)HeapHandle + 272;
  *v39 = v39;
  v40 = (char *)HeapHandle + 288;
  *((_QWORD *)HeapHandle + 37) = (char *)HeapHandle + 288;
  *v40 = v40;
  v41 = (char *)HeapHandle + 240;
  *((_QWORD *)HeapHandle + 31) = (char *)HeapHandle + 240;
  *v41 = v41;
  if ( !v62 && (v18 & 1) == 0 )
  {
    v62 = (__int64)v34;
    if ( RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)v34, 0, 0x10000000u) >= 0 )
    {
      v34 += 40;
      goto LABEL_71;
    }
    goto LABEL_165;
  }
LABEL_71:
  *((_QWORD *)HeapHandle + 44) = v62;
  *((_DWORD *)HeapHandle + 30) |= 0x80000000;
  if ( (unsigned __int8)RtlpInitializeHeapSegment(
                          (int)HeapHandle,
                          (int)HeapHandle,
                          NtGlobalFlag + 1104,
                          v36,
                          v65,
                          (__int64)v67,
                          v31,
                          (ULONG_PTR)v67 + v64 - v68) )
  {
    if ( HeapBase )
      memset(v34, 0, 0x80uLL);
    *((_DWORD *)v34 + 2) = 128;
    *((_QWORD *)v34 + 5) = v34 + 56;
    *((_QWORD *)v34 + 4) = (char *)HeapHandle + 336;
    *((_QWORD *)v34 + 6) = v34 + 72;
    RtlpPopulateListIndex((__int64)HeapHandle, (__int64 *)v34);
    *((_WORD *)HeapHandle + 104) = 0;
    *((_QWORD *)HeapHandle + 20) = *((_QWORD *)&v80[0] + 1);
    *((_QWORD *)HeapHandle + 21) = *(_QWORD *)&v80[1];
    *((_QWORD *)HeapHandle + 22) = *((_QWORD *)&v80[1] + 1) >> 4;
    *((_QWORD *)HeapHandle + 23) = *(_QWORD *)&v80[2] >> 4;
    *((_QWORD *)HeapHandle + 25) = *((_QWORD *)&v80[2] + 1);
    *((_DWORD *)HeapHandle + 37) = (unsigned __int64)(*(_QWORD *)&v80[3] + 15LL) >> 4;
    *((_QWORD *)HeapHandle + 45) = RtlpHeapKey ^ *((_QWORD *)&v80[4] + 1);
    *((_DWORD *)HeapHandle + 172) = 4;
    *((_QWORD *)HeapHandle + 87) = 2088960LL;
    if ( (RtlpDisableHeapLookaside & 1) != 0 )
      *((_DWORD *)HeapHandle + 30) = 1;
    *((_QWORD *)HeapHandle + 32) = 31LL;
    *((_QWORD *)HeapHandle + 33) = -16LL;
    v42 = HeapHandle;
    if ( (*((_BYTE *)HeapHandle + 112) & 0x20) != 0 )
    {
      *((_QWORD *)HeapHandle + 32) += 16LL;
      v42 = HeapHandle;
    }
    v42[51] = 0LL;
    *((_WORD *)HeapHandle + 208) = 0;
    *((_BYTE *)HeapHandle + 418) = 0;
    *((_BYTE *)HeapHandle + 419) = 0;
    *((_QWORD *)HeapHandle + 40) = 0LL;
    if ( (v18 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
    {
LABEL_81:
      RtlpMoveHeapBetweenLists((__int64)HeapHandle, 0, 1, 0);
      if ( *((_WORD *)HeapHandle + 104) )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v44 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v44 = 2147353472LL;
        if ( *(_BYTE *)v44 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v32 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v18, v64, v66, *(unsigned __int8 *)v32);
        }
        v45 = 2147353482LL;
        if ( RtlGetCurrentServiceSessionId() )
          v46 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v46 = 2147353482LL;
        if ( *(_BYTE *)v46 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v45 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v18, v64, v66, *(unsigned __int8 *)v45);
        }
        if ( RtlGetCurrentServiceSessionId() )
          v47 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v47 = 2147353480LL;
        if ( *(_BYTE *)v47 )
          RtlpHeapLogRangeCreate(HeapHandle, v64, v18);
        *((_DWORD *)HeapHandle + 30) &= ~0x80000000;
        *((_QWORD *)HeapHandle + 46) = 0LL;
        v12 = HeapHandle;
        HeapHandle = 0LL;
        goto LABEL_93;
      }
      goto LABEL_185;
    }
    *((_QWORD *)HeapHandle + 53) = RtlAllocateHeap(HeapHandle, 0x80000Au, 0x100uLL);
    v43 = *((_QWORD *)HeapHandle + 53);
    if ( v43 )
    {
      *(_BYTE *)(v43 - 1) = 1;
      *((_WORD *)HeapHandle + 216) = 128;
      goto LABEL_81;
    }
  }
LABEL_185:
  v12 = 0LL;
  v48 = (_RTL_CRITICAL_SECTION *)v62;
  v26 = (_RTL_CRITICAL_SECTION *)v61;
LABEL_95:
  if ( v48 && v48 != v26 )
    RtlDeleteCriticalSection(v48);
  if ( HeapHandle )
  {
    if ( !HeapBase )
    {
      v64 = 0LL;
      RtlpSecMemFreeVirtualMemory((__int64)v48, &HeapHandle, &v64, 0x8000u);
    }
  }
  return v12;
}
