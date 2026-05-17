/*
 * XREFs of RtlCreateHeap @ 0x180048130
 * Callers:
 *     LdrpInitializeTls @ 0x180004220 (LdrpInitializeTls.c)
 *     CsrpConnectToServer @ 0x18004B21C (CsrpConnectToServer.c)
 *     RtlDetectHeapLeaks @ 0x180051A90 (RtlDetectHeapLeaks.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081A04 (LdrEnsureMrdataHeapExists.c)
 *     LdrpInitializeProcessHeap @ 0x1800DE81C (LdrpInitializeProcessHeap.c)
 *     RtlDebugCreateHeap @ 0x180104638 (RtlDebugCreateHeap.c)
 *     RtlHeapTrkInitialize @ 0x18010A960 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x180045730 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180046C90 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpCreateHeapEncoding @ 0x1800479D8 (RtlpCreateHeapEncoding.c)
 *     RtlpPopulateListIndex @ 0x180047A34 (RtlpPopulateListIndex.c)
 *     RtlpInitializeHeapSegment @ 0x180047EBC (RtlpInitializeHeapSegment.c)
 *     RtlpMoveHeapBetweenLists @ 0x180048DC4 (RtlpMoveHeapBetweenLists.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlDeleteCriticalSection @ 0x18005DCD0 (RtlDeleteCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005FC80 (RtlInitializeCriticalSectionEx.c)
 *     RtlpHpHeapDestroy @ 0x1800653D8 (RtlpHpHeapDestroy.c)
 *     RtlpHpHeapCreate @ 0x180066018 (RtlpHpHeapCreate.c)
 *     RtlpHpConvertCreationFlags @ 0x1800852DC (RtlpHpConvertCreationFlags.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009F250 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x18009F4B0 (NtQuerySystemInformation.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlDebugCreateHeap @ 0x180104638 (RtlDebugCreateHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x180115268 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapHandleError @ 0x180115298 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeCreate @ 0x1801152B8 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCommit @ 0x180116FC0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x180117128 (RtlpLogHeapCreateEvent.c)
 *     RtlpHpParametersVerify @ 0x18011864C (RtlpHpParametersVerify.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateHeap(unsigned int a1, char *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // r14d
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
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  int v25; // esi
  __int64 v26; // rdx
  __int64 v27; // rcx
  char *v28; // rsi
  char *v29; // rdx
  char *v30; // r12
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rsi
  unsigned int v34; // eax
  __int64 v35; // r9
  __int64 v36; // r10
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  unsigned __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  _BYTE *v50; // rax
  unsigned int v51; // eax
  unsigned __int64 v52; // rbx
  unsigned int v53; // eax
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  int v56; // eax
  unsigned __int64 v57; // rsi
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v59; // r10
  _QWORD *v60; // [rsp+40h] [rbp-218h] BYREF
  __int64 v61; // [rsp+48h] [rbp-210h]
  __int64 v62; // [rsp+50h] [rbp-208h]
  unsigned int NtGlobalFlag; // [rsp+58h] [rbp-200h]
  unsigned __int64 v64; // [rsp+60h] [rbp-1F8h] BYREF
  int v65; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v66; // [rsp+70h] [rbp-1E8h] BYREF
  char *v67; // [rsp+78h] [rbp-1E0h] BYREF
  __int64 v68; // [rsp+80h] [rbp-1D8h]
  unsigned __int64 v69; // [rsp+88h] [rbp-1D0h] BYREF
  __int64 v70; // [rsp+90h] [rbp-1C8h] BYREF
  unsigned __int64 v71; // [rsp+98h] [rbp-1C0h] BYREF
  __int128 v72; // [rsp+A0h] [rbp-1B8h] BYREF
  char *v73; // [rsp+B8h] [rbp-1A0h]
  void *v74; // [rsp+C0h] [rbp-198h] BYREF
  unsigned __int64 v75; // [rsp+D8h] [rbp-180h]
  int v76; // [rsp+E0h] [rbp-178h]
  char v77; // [rsp+E4h] [rbp-174h]
  char v78[16]; // [rsp+F0h] [rbp-168h] BYREF
  unsigned __int64 v79; // [rsp+100h] [rbp-158h]
  __int128 v80; // [rsp+120h] [rbp-138h] BYREF
  __int128 v81; // [rsp+130h] [rbp-128h]
  __int128 v82; // [rsp+140h] [rbp-118h]
  __int128 v83; // [rsp+150h] [rbp-108h]
  __int128 v84; // [rsp+160h] [rbp-F8h]
  __int128 v85; // [rsp+170h] [rbp-E8h]
  _BYTE v86[80]; // [rsp+180h] [rbp-D8h] BYREF
  char SystemInformation[40]; // [rsp+1D0h] [rbp-88h] BYREF
  __int64 v88; // [rsp+1F8h] [rbp-60h]

  v68 = a3;
  v9 = a5;
  v61 = a5;
  v73 = a2;
  *(_QWORD *)&v72 = a5;
  v10 = a6;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v65 = 0;
  v60 = 0LL;
  v62 = 0LL;
  if ( !dword_18017E828 || a2 || a5 )
  {
    if ( dword_18017E838 && a6 == 1 )
      v10 = (a1 & 0x100) == 0;
  }
  else
  {
    v12 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_18017E858)(a1, 0LL);
    if ( v12 )
    {
LABEL_93:
      v26 = v61;
LABEL_94:
      v48 = 0LL;
      goto LABEL_95;
    }
    if ( a6 != -1 )
      goto LABEL_165;
    v10 = 0LL;
    a3 = v68;
    v9 = v61;
  }
  v11 = a1 & 0xF1FFFFFF;
  v12 = 0LL;
  if ( (v11 & 0x100) != 0 )
  {
    if ( (v11 & 2) == 0 || a2 || a3 || a4 || v9 )
      goto LABEL_93;
    if ( v10 == -1 && dword_18017E838 )
      v10 = 0LL;
    if ( v10 )
    {
      v12 = (_DWORD *)v10;
      if ( !(unsigned int)RtlpHpParametersVerify(v10) )
        goto LABEL_165;
    }
    else
    {
      v12 = v86;
    }
  }
  else if ( (RtlpHpHeapFeatures & 1) != 0 && (v11 & 2) != 0 && !a2 )
  {
    if ( !v10 )
      goto LABEL_120;
    if ( *(_QWORD *)(v10 + 8) || *(_QWORD *)(v10 + 16) || *(_QWORD *)(v10 + 48) || (v56 = 1, *(_QWORD *)(v10 + 72)) )
      v56 = 0;
    if ( v56 )
    {
LABEL_120:
      v50 = v86;
      if ( v9 )
        v50 = 0LL;
      v12 = v50;
    }
  }
  if ( v12 )
  {
    if ( v12 == (_DWORD *)v86 )
    {
      memset_thunk_772440563353939046(v12, 0, 0x50uLL);
      *v12 = 5242883;
      v12[3] = 1;
      v12[4] = -1;
    }
    if ( (v12[1] & 1) != 0 )
    {
      if ( dword_18017E838 )
      {
        v12 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, char *, __int64, unsigned __int64, _QWORD, _QWORD))qword_18017E858)(
                          v11,
                          a2,
                          v68,
                          a4,
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
      v52 = a4;
      if ( v68 )
        v52 = v68;
      if ( a4 > v52 )
        a4 = v52;
      v53 = RtlpHpConvertCreationFlags(v11, NtGlobalFlag);
      v54 = RtlpHpHeapCreate(v53, v52, a4, &v72);
      v12 = (_DWORD *)v54;
      if ( !v54 )
        goto LABEL_93;
      RtlpMoveHeapBetweenLists(v54, 0LL, 1LL);
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
  memset_thunk_772440563353939046(&v80, 0, 0x60uLL);
  if ( v10 && *(_DWORD *)v10 == 96 )
  {
    v80 = *(_OWORD *)v10;
    v81 = *(_OWORD *)(v10 + 16);
    v82 = *(_OWORD *)(v10 + 32);
    v83 = *(_OWORD *)(v10 + 48);
    v84 = *(_OWORD *)(v10 + 64);
    v85 = *(_OWORD *)(v10 + 80);
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
  if ( !*((_QWORD *)&v80 + 1) )
    *((_QWORD *)&v80 + 1) = v19->HeapSegmentReserve;
  if ( !(_QWORD)v81 )
    *(_QWORD *)&v81 = v19->HeapSegmentCommit;
  if ( !*((_QWORD *)&v81 + 1) )
    *((_QWORD *)&v81 + 1) = v19->HeapDeCommitFreeBlockThreshold;
  if ( !(_QWORD)v82 )
    *(_QWORD *)&v82 = v19->HeapDeCommitTotalFreeThreshold;
  v20 = qword_180184C90;
  if ( !qword_180184C90 )
  {
    qword_180184C98 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      v20 = v88;
      qword_180184C90 = v88;
      goto LABEL_32;
    }
LABEL_165:
    v12 = 0LL;
    goto LABEL_93;
  }
LABEL_32:
  if ( !*((_QWORD *)&v82 + 1) )
    *((_QWORD *)&v82 + 1) = v20 - qword_180184C98 - 4096;
  v21 = v83;
  if ( (unsigned __int64)(v83 - 1) > 0xFEFFF )
    v21 = 1044480LL;
  *(_QWORD *)&v83 = v21;
  if ( a4 )
    v22 = (a4 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
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
  if ( (v18 & 2) == 0 || a2 )
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
  if ( !v22 || !v23 )
    goto LABEL_165;
  if ( (v18 & 0x61000000) != 0 && (v18 & 0x10000000) == 0 )
    return RtlDebugCreateHeap(v18, (_DWORD)a2, v23, v22, v61, (__int64)&v80);
  NtGlobalFlag = 704;
  v26 = v61;
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
  if ( a2 )
  {
    if ( *((_QWORD *)&v84 + 1) )
    {
      if ( !*((_QWORD *)&v83 + 1) || !(_QWORD)v84 || *((_QWORD *)&v83 + 1) > (unsigned __int64)v84 || (v18 & 2) != 0 )
        goto LABEL_184;
      v67 = a2;
      v30 = &a2[*((_QWORD *)&v83 + 1)];
      v64 = v84;
      memset_thunk_772440563353939046(a2, 0, 0x1000uLL);
      v29 = a2;
    }
    else
    {
      if ( (int)ZwQueryVirtualMemory(-1LL, a2, 0LL, &v74, 48LL, 0LL) < 0 )
        goto LABEL_185;
      v30 = (char *)v74;
      if ( v74 != a2 || v76 == 0x10000 )
        goto LABEL_185;
      v29 = (char *)v74;
      v67 = (char *)v74;
      if ( v76 == 4096 )
      {
        if ( (v18 & 0x40000) != 0 && (v77 & 0x40) == 0 )
          goto LABEL_185;
        memset_thunk_772440563353939046(v74, 0, 0x1000uLL);
        if ( (int)ZwQueryVirtualMemory(-1LL, a2, 3LL, v78, 48LL, 0LL) < 0 )
          goto LABEL_185;
        v64 = v79;
        v66 = v75;
        v29 = v67;
        v30 = &v67[v75];
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
    v28 = a2;
    v60 = a2;
    goto LABEL_59;
  }
  v70 = 0LL;
  if ( *((_QWORD *)&v84 + 1) )
  {
LABEL_184:
    v12 = 0LL;
    v48 = v62;
    goto LABEL_95;
  }
  v69 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
  v71 = v64 + v69;
  if ( v64 + v69 < v64 )
  {
    v71 = v64;
    v69 = 0LL;
  }
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v70, 0LL, &v71, 0x2000, (v18 & 0x40000) != 0 ? 64 : 4) < 0 )
    goto LABEL_185;
  v28 = (char *)v70;
  v60 = (_QWORD *)v70;
  v64 = v71;
  if ( v69 )
  {
    RtlpSecMemFreeVirtualMemory(v27, &v70, &v69, 0x8000LL);
    v28 = (char *)(v69 + v70);
    v60 = (_QWORD *)(v69 + v70);
    v64 = v71 - v69;
  }
  v29 = v28;
  v67 = v28;
  v30 = v28;
LABEL_59:
  if ( v29 == v30 )
  {
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v67, 0LL, &v66, 4096, (v18 & 0x40000) != 0 ? 64 : 4) < 0 )
      goto LABEL_185;
    v31 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v32 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v32 = 2147353472LL;
    if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(v60, v67, v66, 1LL);
    v30 += v66;
    v28 = (char *)v60;
  }
  else
  {
    v31 = 2147353472LL;
  }
  v33 = (__int64)(v28 + 704);
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v57 = (v33 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v60[41] = v57;
    v34 = NtGlobalFlag + 2064;
    v33 = v57 + 2064;
    v18 |= 0x4000000u;
  }
  else
  {
    v34 = NtGlobalFlag;
  }
  NtGlobalFlag = (v34 + 15) & 0xFFFFFFF0;
  *((_WORD *)v60 + 4) = NtGlobalFlag >> 4;
  *((_BYTE *)v60 + 10) = 1;
  *((_BYTE *)v60 + 15) = 1;
  *((_DWORD *)v60 + 38) = -285217025;
  *((_DWORD *)v60 + 28) = v18 & 0xEFFFFFFF;
  *((_DWORD *)v60 + 36) = 0;
  memset_thunk_772440563353939046(v60 + 71, 0, 0x78uLL);
  RtlpCreateHeapEncoding((__int64)v60);
  *((_DWORD *)v60 + 162) = 1;
  v36 = (__int64)v60;
  if ( (v60[14] & 0x8000000) != 0 )
  {
    HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
    *(_DWORD *)(v59 + 144) = HeapInterceptorIndex;
    *((_DWORD *)v60 + 28) &= ~0x40u;
    v36 = (__int64)v60;
  }
  *(_DWORD *)(v36 + 116) = v18 & 0x6001007D;
  *((_WORD *)v60 + 105) = v33 - (_WORD)v60;
  v60[27] = 0LL;
  v37 = v60 + 42;
  v60[43] = v60 + 42;
  *v37 = v37;
  v38 = v60 + 34;
  v60[35] = v60 + 34;
  *v38 = v38;
  v39 = v60 + 36;
  v60[37] = v60 + 36;
  *v39 = v39;
  v40 = v60 + 30;
  v60[31] = v60 + 30;
  *v40 = v40;
  if ( !v62 && (v18 & 1) == 0 )
  {
    v62 = v33;
    if ( (int)RtlInitializeCriticalSectionEx(v33, 0LL, 0x10000000LL) >= 0 )
    {
      v33 += 40LL;
      goto LABEL_71;
    }
    goto LABEL_165;
  }
LABEL_71:
  v60[44] = v62;
  *((_DWORD *)v60 + 30) |= 0x80000000;
  if ( RtlpInitializeHeapSegment(
         (__int64)v60,
         (__int64)v60,
         NtGlobalFlag + 1104,
         v35,
         v65,
         (__int64)v67,
         (unsigned __int64)v30,
         (unsigned __int64)&v67[v64 - v68]) )
  {
    if ( a2 )
      memset_thunk_772440563353939046((void *)v33, 0, 0x80uLL);
    *(_DWORD *)(v33 + 8) = 128;
    *(_QWORD *)(v33 + 40) = v33 + 56;
    *(_QWORD *)(v33 + 32) = v60 + 42;
    *(_QWORD *)(v33 + 48) = v33 + 72;
    RtlpPopulateListIndex((__int64)v60, v33, v41);
    *((_WORD *)v60 + 104) = 0;
    v60[20] = *((_QWORD *)&v80 + 1);
    v60[21] = v81;
    v60[22] = *((_QWORD *)&v81 + 1) >> 4;
    v60[23] = (unsigned __int64)v82 >> 4;
    v60[25] = *((_QWORD *)&v82 + 1);
    *((_DWORD *)v60 + 37) = (unsigned __int64)(v83 + 15) >> 4;
    v60[45] = RtlpHeapKey ^ *((_QWORD *)&v84 + 1);
    *((_DWORD *)v60 + 172) = 4;
    v60[87] = 2088960LL;
    if ( (RtlpDisableHeapLookaside & 1) != 0 )
      *((_DWORD *)v60 + 30) = 1;
    v60[32] = 31LL;
    v60[33] = -16LL;
    v42 = (__int64)v60;
    if ( (v60[14] & 0x20) != 0 )
    {
      v60[32] += 16LL;
      v42 = (__int64)v60;
    }
    *(_QWORD *)(v42 + 408) = 0LL;
    *((_WORD *)v60 + 208) = 0;
    *((_BYTE *)v60 + 418) = 0;
    *((_BYTE *)v60 + 419) = 0;
    v60[40] = 0LL;
    if ( (v18 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
    {
LABEL_81:
      RtlpMoveHeapBetweenLists(v60, 0LL, 1LL);
      if ( *((_WORD *)v60 + 104) )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v44 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v44 = 2147353472LL;
        if ( *(_BYTE *)v44 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v31 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapCreateEvent((_DWORD)v60, v18, v64, v66, *(unsigned __int8 *)v31);
        }
        v45 = 2147353482LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v46 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v46 = 2147353482LL;
        if ( *(_BYTE *)v46 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v45 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapCreateEvent((_DWORD)v60, v18, v64, v66, *(unsigned __int8 *)v45);
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v47 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v47 = 2147353480LL;
        if ( *(_BYTE *)v47 )
          RtlpHeapLogRangeCreate(v60, v64, v18);
        *((_DWORD *)v60 + 30) &= ~0x80000000;
        v60[46] = 0LL;
        v12 = v60;
        v60 = 0LL;
        goto LABEL_93;
      }
      goto LABEL_185;
    }
    v60[53] = RtlAllocateHeap((__int64)v60, 0x80000Au, 256LL);
    v43 = v60[53];
    if ( v43 )
    {
      *(_BYTE *)(v43 - 1) = 1;
      *((_WORD *)v60 + 216) = 128;
      goto LABEL_81;
    }
  }
LABEL_185:
  v12 = 0LL;
  v48 = v62;
  v26 = v61;
LABEL_95:
  if ( v48 && v48 != v26 )
    RtlDeleteCriticalSection();
  if ( v60 )
  {
    if ( !a2 )
    {
      v64 = 0LL;
      RtlpSecMemFreeVirtualMemory(v48, &v60, &v64, 0x8000LL);
    }
  }
  return (__int64)v12;
}
