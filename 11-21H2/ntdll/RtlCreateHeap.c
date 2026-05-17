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

__int64 __fastcall RtlCreateHeap(
        unsigned int a1,
        char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // r12
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
  unsigned __int64 v22; // rcx
  int v23; // r14d
  unsigned __int64 v24; // rdx
  int v25; // r14d
  __int64 v26; // rcx
  char *v27; // rsi
  char *v28; // rdx
  char *v29; // r12
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned int v33; // eax
  __int64 v34; // r10
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 *v45; // rcx
  _BYTE *v47; // rax
  unsigned int v48; // eax
  unsigned __int64 v49; // rbx
  unsigned int v50; // eax
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  int v53; // eax
  unsigned __int64 v54; // rsi
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v56; // r10
  _QWORD *v57; // [rsp+40h] [rbp-218h] BYREF
  __int64 v58; // [rsp+48h] [rbp-210h]
  __int64 v59; // [rsp+50h] [rbp-208h]
  unsigned int NtGlobalFlag; // [rsp+58h] [rbp-200h]
  unsigned __int64 v61; // [rsp+60h] [rbp-1F8h] BYREF
  int v62; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v63; // [rsp+70h] [rbp-1E8h] BYREF
  char *v64; // [rsp+78h] [rbp-1E0h] BYREF
  __int64 v65; // [rsp+80h] [rbp-1D8h]
  unsigned __int64 v66; // [rsp+88h] [rbp-1D0h] BYREF
  __int64 v67; // [rsp+90h] [rbp-1C8h] BYREF
  unsigned __int64 v68; // [rsp+98h] [rbp-1C0h] BYREF
  __int128 v69; // [rsp+A0h] [rbp-1B8h] BYREF
  char *v70; // [rsp+B8h] [rbp-1A0h]
  void *v71; // [rsp+C0h] [rbp-198h] BYREF
  unsigned __int64 v72; // [rsp+D8h] [rbp-180h]
  int v73; // [rsp+E0h] [rbp-178h]
  char v74; // [rsp+E4h] [rbp-174h]
  char v75[16]; // [rsp+F0h] [rbp-168h] BYREF
  unsigned __int64 v76; // [rsp+100h] [rbp-158h]
  _OWORD v77[6]; // [rsp+120h] [rbp-138h] BYREF
  _BYTE v78[80]; // [rsp+180h] [rbp-D8h] BYREF
  char SystemInformation[40]; // [rsp+1D0h] [rbp-88h] BYREF
  __int64 v80; // [rsp+1F8h] [rbp-60h]

  v6 = a4;
  v65 = a3;
  v9 = a5;
  v58 = a5;
  v70 = a2;
  *(_QWORD *)&v69 = a5;
  v10 = a6;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v62 = 0;
  v57 = 0LL;
  v59 = 0LL;
  if ( !dword_180174238 || a2 || a5 )
  {
    if ( dword_180174248 && a6 == 1 )
      v10 = (a1 & 0x100) == 0;
  }
  else
  {
    v12 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_180174268)(a1, 0LL);
    if ( v12 )
    {
LABEL_93:
      v24 = v58;
LABEL_94:
      v45 = 0LL;
      goto LABEL_95;
    }
    if ( a6 != -1 )
      goto LABEL_165;
    v10 = 0LL;
    a3 = v65;
    v9 = v58;
  }
  v11 = a1 & 0xF1FFFFFF;
  v12 = 0LL;
  if ( (v11 & 0x100) != 0 )
  {
    if ( (v11 & 2) == 0 || a2 || a3 || v6 || v9 )
      goto LABEL_93;
    if ( v10 == -1 && dword_180174248 )
      v10 = 0LL;
    if ( v10 )
    {
      v12 = (_DWORD *)v10;
      if ( !(unsigned int)RtlpHpParametersVerify(v10) )
        goto LABEL_165;
    }
    else
    {
      v12 = v78;
    }
  }
  else if ( (RtlpHpHeapFeatures & 1) != 0 && (v11 & 2) != 0 && !a2 )
  {
    if ( !v10 )
      goto LABEL_120;
    if ( *(_QWORD *)(v10 + 8) || *(_QWORD *)(v10 + 16) || *(_QWORD *)(v10 + 48) || (v53 = 1, *(_QWORD *)(v10 + 72)) )
      v53 = 0;
    if ( v53 )
    {
LABEL_120:
      v47 = v78;
      if ( v9 )
        v47 = 0LL;
      v12 = v47;
    }
  }
  if ( v12 )
  {
    if ( v12 == (_DWORD *)v78 )
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
        v12 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, char *, __int64, unsigned __int64, _QWORD, _QWORD))qword_180174268)(
                          v11,
                          a2,
                          v65,
                          v6,
                          0LL,
                          0LL);
        goto LABEL_93;
      }
    }
    else
    {
      v69 = RtlpHpEnvHandle;
      _BitScanReverse(&v48, v12[3]);
      BYTE1(v69) = v48;
      if ( v12[4] != -1 )
        BYTE2(v69) = *((_BYTE *)v12 + 16) + 1;
      *((_QWORD *)&v69 + 1) = *((_QWORD *)v12 + 3);
      v49 = v6;
      if ( v65 )
        v49 = v65;
      if ( v6 > v49 )
        v6 = v49;
      v50 = RtlpHpConvertCreationFlags(v11, NtGlobalFlag);
      v51 = RtlpHpHeapCreate(v50, v49, v6, &v69);
      v12 = (_DWORD *)v51;
      if ( !v51 )
        goto LABEL_93;
      RtlpMoveHeapBetweenLists(v51, 0, 1, 0);
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
  memset(v77, 0, sizeof(v77));
  if ( v10 && *(_DWORD *)v10 == 96 )
  {
    v77[0] = *(_OWORD *)v10;
    v77[1] = *(_OWORD *)(v10 + 16);
    v77[2] = *(_OWORD *)(v10 + 32);
    v77[3] = *(_OWORD *)(v10 + 48);
    v77[4] = *(_OWORD *)(v10 + 64);
    v77[5] = *(_OWORD *)(v10 + 80);
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
  if ( !*((_QWORD *)&v77[0] + 1) )
    *((_QWORD *)&v77[0] + 1) = v19->HeapSegmentReserve;
  if ( !*(_QWORD *)&v77[1] )
    *(_QWORD *)&v77[1] = v19->HeapSegmentCommit;
  if ( !*((_QWORD *)&v77[1] + 1) )
    *((_QWORD *)&v77[1] + 1) = v19->HeapDeCommitFreeBlockThreshold;
  if ( !*(_QWORD *)&v77[2] )
    *(_QWORD *)&v77[2] = v19->HeapDeCommitTotalFreeThreshold;
  v20 = qword_18017AA60;
  if ( !qword_18017AA60 )
  {
    qword_18017AA68 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      v20 = v80;
      qword_18017AA60 = v80;
      goto LABEL_32;
    }
LABEL_165:
    v12 = 0LL;
    goto LABEL_93;
  }
LABEL_32:
  if ( !*((_QWORD *)&v77[2] + 1) )
    *((_QWORD *)&v77[2] + 1) = v20 - qword_18017AA68 - 4096;
  v21 = *(_QWORD *)&v77[3];
  if ( (unsigned __int64)(*(_QWORD *)&v77[3] - 1LL) > 0xFEFFF )
    v21 = 1044480LL;
  *(_QWORD *)&v77[3] = v21;
  if ( v6 )
    a4 = (v6 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    a4 = 0x2000LL;
  v63 = a4;
  if ( v65 )
    a3 = (v65 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    a3 = (a4 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v61 = a3;
  v22 = a4;
  if ( a4 > a3 )
  {
    a4 = a3;
    v63 = a3;
    v22 = a3;
  }
  if ( (v18 & 2) == 0 || a2 )
  {
    v65 = 0LL;
    v23 = v62;
  }
  else
  {
    v65 = 4096LL;
    v23 = 2;
    v62 = 2;
    if ( a3 - 4096 < v22 )
    {
      a3 = (a3 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v61 = a3;
    }
  }
  if ( !v22 || !a3 )
    goto LABEL_165;
  if ( (v18 & 0x61000000) != 0 && (v18 & 0x10000000) == 0 )
    return RtlDebugCreateHeap(v18, (_DWORD)a2, a3, a4, v58, (__int64)v77);
  NtGlobalFlag = 704;
  v24 = v58;
  if ( (v18 & 1) != 0 )
  {
    if ( v58 )
    {
      v12 = 0LL;
      goto LABEL_94;
    }
  }
  else
  {
    if ( v58 )
      v18 |= 0x80000000;
    v59 = v58 & -(__int64)(v58 != 0);
    NtGlobalFlag = v58 != 0 ? 704 : 744;
  }
  if ( a2 )
  {
    if ( *((_QWORD *)&v77[4] + 1) )
    {
      if ( !*((_QWORD *)&v77[3] + 1)
        || !*(_QWORD *)&v77[4]
        || *((_QWORD *)&v77[3] + 1) > *(_QWORD *)&v77[4]
        || (v18 & 2) != 0 )
      {
        goto LABEL_184;
      }
      v64 = a2;
      v29 = &a2[*((_QWORD *)&v77[3] + 1)];
      v61 = *(_QWORD *)&v77[4];
      memset(a2, 0, 0x1000uLL);
      v28 = a2;
    }
    else
    {
      if ( (int)ZwQueryVirtualMemory(-1LL, a2, 0LL, &v71, 48LL, 0LL) < 0 )
        goto LABEL_185;
      v29 = (char *)v71;
      if ( v71 != a2 || v73 == 0x10000 )
        goto LABEL_185;
      v28 = (char *)v71;
      v64 = (char *)v71;
      if ( v73 == 4096 )
      {
        if ( (v18 & 0x40000) != 0 && (v74 & 0x40) == 0 )
          goto LABEL_185;
        memset(v71, 0, 0x1000uLL);
        if ( (int)ZwQueryVirtualMemory(-1LL, a2, 3LL, v75, 48LL, 0LL) < 0 )
          goto LABEL_185;
        v61 = v76;
        v63 = v72;
        v28 = v64;
        v29 = &v64[v72];
      }
      else
      {
        v61 = v72;
        v52 = v63;
        if ( v63 > v72 )
          v52 = v72;
        v63 = v52;
        if ( v52 < 0x2000 )
          goto LABEL_185;
      }
    }
    v62 = v23 | 1;
    v27 = a2;
    v57 = a2;
    v25 = v18 & 0x40000;
    goto LABEL_59;
  }
  v67 = 0LL;
  if ( *((_QWORD *)&v77[4] + 1) )
  {
LABEL_184:
    v12 = 0LL;
    v45 = (__int64 *)v59;
    goto LABEL_95;
  }
  v66 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
  v68 = v61 + v66;
  if ( v61 + v66 < v61 )
  {
    v68 = v61;
    v66 = 0LL;
  }
  v25 = v18 & 0x40000;
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v67, 0LL, &v68, 0x2000, (v18 & 0x40000) != 0 ? 64 : 4) < 0 )
    goto LABEL_185;
  v27 = (char *)v67;
  v57 = (_QWORD *)v67;
  v61 = v68;
  if ( v66 )
  {
    RtlpSecMemFreeVirtualMemory(v26, &v67, &v66, 0x8000LL);
    v27 = (char *)(v66 + v67);
    v57 = (_QWORD *)(v66 + v67);
    v61 = v68 - v66;
  }
  v28 = v27;
  v64 = v27;
  v29 = v27;
LABEL_59:
  if ( v28 == v29 )
  {
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v64, 0LL, &v63, 4096, v25 != 0 ? 64 : 4) < 0 )
      goto LABEL_185;
    v30 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v31 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v31 = 2147353472LL;
    if ( *(_BYTE *)v31 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(v57, v64, v63, 1LL);
    v29 += v63;
    v27 = (char *)v57;
  }
  else
  {
    v30 = 2147353472LL;
  }
  v32 = (__int64)(v27 + 704);
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v54 = (v32 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v57[41] = v54;
    v33 = NtGlobalFlag + 2064;
    v32 = v54 + 2064;
    v18 |= 0x4000000u;
  }
  else
  {
    v33 = NtGlobalFlag;
  }
  NtGlobalFlag = (v33 + 15) & 0xFFFFFFF0;
  *((_WORD *)v57 + 4) = NtGlobalFlag >> 4;
  *((_BYTE *)v57 + 10) = 1;
  *((_BYTE *)v57 + 15) = 1;
  *((_DWORD *)v57 + 38) = -285217025;
  *((_DWORD *)v57 + 28) = v18 & 0xEFFFFFFF;
  *((_DWORD *)v57 + 36) = 0;
  memset(v57 + 71, 0, 0x78uLL);
  RtlpCreateHeapEncoding((__int64)v57);
  *((_DWORD *)v57 + 162) = 1;
  v34 = (__int64)v57;
  if ( (v57[14] & 0x8000000) != 0 )
  {
    HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
    *(_DWORD *)(v56 + 144) = HeapInterceptorIndex;
    *((_DWORD *)v57 + 28) &= ~0x40u;
    v34 = (__int64)v57;
  }
  *(_DWORD *)(v34 + 116) = v18 & 0x6001007D;
  *((_WORD *)v57 + 105) = v32 - (_WORD)v57;
  v57[27] = 0LL;
  v35 = v57 + 42;
  v57[43] = v57 + 42;
  *v35 = v35;
  v36 = v57 + 34;
  v57[35] = v57 + 34;
  *v36 = v36;
  v37 = v57 + 36;
  v57[37] = v57 + 36;
  *v37 = v37;
  v38 = v57 + 30;
  v57[31] = v57 + 30;
  *v38 = v38;
  if ( !v59 && (v18 & 1) == 0 )
  {
    v59 = v32;
    if ( (int)RtlInitializeCriticalSectionEx(v32, 0LL, 0x10000000LL, a4) >= 0 )
    {
      v32 += 40LL;
      goto LABEL_71;
    }
    goto LABEL_165;
  }
LABEL_71:
  v57[44] = v59;
  *((_DWORD *)v57 + 30) |= 0x80000000;
  if ( (unsigned __int8)RtlpInitializeHeapSegment(
                          (_DWORD)v57,
                          (_DWORD)v57,
                          NtGlobalFlag + 1104,
                          a4,
                          v62,
                          (__int64)v64,
                          (__int64)v29,
                          (__int64)&v64[v61 - v65]) )
  {
    if ( a2 )
      memset((void *)v32, 0, 0x80uLL);
    *(_DWORD *)(v32 + 8) = 128;
    *(_QWORD *)(v32 + 40) = v32 + 56;
    *(_QWORD *)(v32 + 32) = v57 + 42;
    *(_QWORD *)(v32 + 48) = v32 + 72;
    RtlpPopulateListIndex((__int64)v57, (__int64 *)v32);
    *((_WORD *)v57 + 104) = 0;
    v57[20] = *((_QWORD *)&v77[0] + 1);
    v57[21] = *(_QWORD *)&v77[1];
    v57[22] = *((_QWORD *)&v77[1] + 1) >> 4;
    v57[23] = *(_QWORD *)&v77[2] >> 4;
    v57[25] = *((_QWORD *)&v77[2] + 1);
    *((_DWORD *)v57 + 37) = (unsigned __int64)(*(_QWORD *)&v77[3] + 15LL) >> 4;
    v57[45] = RtlpHeapKey ^ *((_QWORD *)&v77[4] + 1);
    *((_DWORD *)v57 + 172) = 4;
    v57[87] = 2088960LL;
    if ( (RtlpDisableHeapLookaside & 1) != 0 )
      *((_DWORD *)v57 + 30) = 1;
    v57[32] = 31LL;
    v57[33] = -16LL;
    v39 = (__int64)v57;
    if ( (v57[14] & 0x20) != 0 )
    {
      v57[32] += 16LL;
      v39 = (__int64)v57;
    }
    *(_QWORD *)(v39 + 408) = 0LL;
    *((_WORD *)v57 + 208) = 0;
    *((_BYTE *)v57 + 418) = 0;
    *((_BYTE *)v57 + 419) = 0;
    v57[40] = 0LL;
    if ( (v18 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
    {
LABEL_81:
      RtlpMoveHeapBetweenLists((__int64)v57, 0, 1, 0);
      if ( *((_WORD *)v57 + 104) )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v41 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v41 = 2147353472LL;
        if ( *(_BYTE *)v41 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v30 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapCreateEvent((_DWORD)v57, v18, v61, v63, *(unsigned __int8 *)v30);
        }
        v42 = 2147353482LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v43 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v43 = 2147353482LL;
        if ( *(_BYTE *)v43 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v42 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapCreateEvent((_DWORD)v57, v18, v61, v63, *(unsigned __int8 *)v42);
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v44 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v44 = 2147353480LL;
        if ( *(_BYTE *)v44 )
          RtlpHeapLogRangeCreate(v57, v61, v18);
        *((_DWORD *)v57 + 30) &= ~0x80000000;
        v57[46] = 0LL;
        v12 = v57;
        v57 = 0LL;
        goto LABEL_93;
      }
      goto LABEL_185;
    }
    v57[53] = RtlAllocateHeap((__int64)v57, 0x80000Au, 256LL);
    v40 = v57[53];
    if ( v40 )
    {
      *(_BYTE *)(v40 - 1) = 1;
      *((_WORD *)v57 + 216) = 128;
      goto LABEL_81;
    }
  }
LABEL_185:
  v12 = 0LL;
  v45 = (__int64 *)v59;
  v24 = v58;
LABEL_95:
  if ( v45 && v45 != (__int64 *)v24 )
    RtlDeleteCriticalSection(v45, v24, a3, a4);
  if ( v57 )
  {
    if ( !a2 )
    {
      v61 = 0LL;
      RtlpSecMemFreeVirtualMemory((__int64)v45, &v57, &v61, 0x8000LL);
    }
  }
  return (__int64)v12;
}
