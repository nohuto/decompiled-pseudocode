/*
 * XREFs of EtwpCoverageSamplerQuery @ 0x1408AA1E8
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x1409F3D14 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     RtlStringCchCopyNW @ 0x1402F815C (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1408A86BC (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1408A88DC (EtwpCovSampCaptureFlushStats.c)
 *     EtwpCovSampContextPruneModules @ 0x1408A9190 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1409F0C1C (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureFlush @ 0x1409F11A0 (EtwpCovSampCaptureFlush.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1409F2A94 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCoverageSamplerFreeTable @ 0x1409F3398 (EtwpCoverageSamplerFreeTable.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpCoverageSamplerQuery(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        int a3,
        unsigned int *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  signed int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ecx
  __int64 *v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // r15d
  unsigned int v15; // esi
  struct _KTHREAD *v16; // rax
  __int64 *v17; // r8
  __int64 *v18; // rdx
  int v19; // r9d
  int v20; // r10d
  unsigned int v21; // ecx
  unsigned int v22; // eax
  int v23; // esi
  unsigned int v24; // ecx
  unsigned int v25; // eax
  int v26; // esi
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  unsigned __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // r15d
  unsigned int v36; // eax
  unsigned int v37; // edx
  char *Pool2; // rax
  char *v39; // r15
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  char *v45; // rsi
  char *v46; // rcx
  char *v47; // rsi
  _OWORD *v48; // rax
  __int64 v49; // r8
  char *v50; // rsi
  char *v51; // r10
  char *v52; // rsi
  __int64 *v53; // rax
  __int64 *v54; // r8
  unsigned int v55; // r9d
  _DWORD *v56; // r11
  char *v57; // rcx
  char *v58; // rsi
  void *v59; // r9
  unsigned int v60; // r8d
  unsigned int v61; // esi
  __int128 *v62; // r15
  int v63; // ecx
  char *v64; // rdx
  struct _KTHREAD *v65; // rcx
  int v66; // edx
  _OWORD *v67; // r15
  __int64 *v68; // rax
  __int64 *v69; // rsi
  __int64 *v70; // r15
  __int64 **v71; // rax
  char *v72; // rbx
  __int64 v73; // r14
  unsigned int v75; // [rsp+20h] [rbp-158h]
  unsigned int v76; // [rsp+24h] [rbp-154h]
  __int64 *v77; // [rsp+28h] [rbp-150h]
  char *v78; // [rsp+30h] [rbp-148h]
  char *v79; // [rsp+38h] [rbp-140h]
  int v80; // [rsp+40h] [rbp-138h]
  unsigned int v81; // [rsp+44h] [rbp-134h]
  unsigned int v82; // [rsp+48h] [rbp-130h]
  unsigned int v83; // [rsp+4Ch] [rbp-12Ch]
  int v84; // [rsp+50h] [rbp-128h]
  unsigned __int64 v85; // [rsp+58h] [rbp-120h]
  __int128 v86; // [rsp+60h] [rbp-118h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+70h] [rbp-108h]
  __int64 v88; // [rsp+78h] [rbp-100h]
  unsigned __int64 v89; // [rsp+80h] [rbp-F8h]
  int v90; // [rsp+88h] [rbp-F0h]
  unsigned int v91; // [rsp+8Ch] [rbp-ECh]
  unsigned __int64 v92; // [rsp+90h] [rbp-E8h]
  __int64 v93; // [rsp+98h] [rbp-E0h] BYREF
  char *v94; // [rsp+A0h] [rbp-D8h]
  unsigned int *v95; // [rsp+A8h] [rbp-D0h]
  ULONG_PTR v96; // [rsp+B0h] [rbp-C8h]
  ULONG_PTR v97; // [rsp+B8h] [rbp-C0h]
  unsigned __int64 v98; // [rsp+C0h] [rbp-B8h]
  char *v99; // [rsp+C8h] [rbp-B0h]
  char *v100; // [rsp+D0h] [rbp-A8h]
  __int64 v101; // [rsp+D8h] [rbp-A0h]
  wchar_t *v102; // [rsp+E0h] [rbp-98h]
  __int64 *v103; // [rsp+E8h] [rbp-90h]
  unsigned __int64 v104; // [rsp+F0h] [rbp-88h]
  char *v105; // [rsp+F8h] [rbp-80h]
  char *v106; // [rsp+100h] [rbp-78h]
  _DWORD *v107; // [rsp+108h] [rbp-70h]
  __int128 v108; // [rsp+110h] [rbp-68h] BYREF
  __int128 v109; // [rsp+120h] [rbp-58h]

  v95 = a4;
  LODWORD(v85) = a3;
  v89 = a2;
  v97 = BugCheckParameter2;
  v93 = 0LL;
  v5 = qword_140C31C68;
  v88 = qword_140C31C68;
  v6 = BugCheckParameter2 + 16;
  v96 = BugCheckParameter2 + 16;
  v78 = 0LL;
  v92 = 0LL;
  v86 = 0LL;
  v75 = 0;
  v79 = 0LL;
  v94 = 0LL;
  v7 = EtwpCovSampAcquireSamplerRundown(&v93);
  if ( v7 < 0 )
    goto LABEL_89;
  if ( v93 != BugCheckParameter2 )
  {
    v7 = -1073741431;
LABEL_89:
    v39 = 0LL;
    goto LABEL_90;
  }
  EtwpCovSampCaptureFlush(v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v9 = 0;
  v83 = 0;
  v10 = *(__int64 **)(BugCheckParameter2 + 1680);
  v77 = v10;
  if ( v10 != (__int64 *)(BugCheckParameter2 + 1680) )
  {
    do
    {
      v9 += *((_DWORD *)v10 + 4);
      v10 = (__int64 *)*v10;
    }
    while ( v10 != (__int64 *)(BugCheckParameter2 + 1680) );
    v77 = v10;
    v83 = v9;
  }
  v11 = 8LL * v9;
  v104 = v11;
  v12 = -1;
  if ( v11 <= 0xFFFFFFFF )
    v12 = v11;
  v7 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v11 > 0xFFFFFFFF )
    goto LABEL_89;
  v13 = v12 + 1232;
  v14 = -1;
  if ( v12 + 1232 >= v12 )
    v14 = v12 + 1232;
  v7 = v13 < v12 ? 0xC0000095 : 0;
  if ( v13 < v12 )
    goto LABEL_89;
  v15 = 0;
  v75 = 0;
  v82 = 0;
  v76 = 0;
  v81 = 0;
  v80 = 0;
  *((_QWORD *)&v86 + 1) = &v86;
  *(_QWORD *)&v86 = &v86;
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  ExAcquirePushLockSharedEx(v6 + 1176, 0LL);
  v17 = *(__int64 **)(v6 + 1224);
  v77 = v17;
  while ( v17 != (__int64 *)(v6 + 1224) )
  {
    v18 = v17;
    v17 = (__int64 *)*v17;
    v77 = v17;
    v19 = *((_DWORD *)v18 + 15);
    if ( v19 || (v18[6] & 0x100000) != 0 )
    {
      if ( v18[4] )
      {
        v75 = v15 + 1;
        v82 = v15 + 1;
        ++v76;
        v20 = *((_DWORD *)v18 + 12);
        v21 = 2 * (unsigned __int16)v20 + 2;
        v22 = v21 + v81;
        v23 = -1;
        if ( v21 + v81 >= v21 )
          v23 = v21 + v81;
        v81 = v23;
        v7 = v22 < v21 ? 0xC0000095 : 0;
        if ( v22 < v21 )
          goto LABEL_89;
        v24 = *((_DWORD *)v18 - 4) - (((unsigned __int8)*((_DWORD *)v18 - 4) - 1) & 3) + 3;
        v25 = v24 + v80;
        v26 = -1;
        if ( v24 + v80 >= v24 )
          v26 = v24 + v80;
        v80 = v26;
        v7 = v25 < v24 ? 0xC0000095 : 0;
        if ( v25 < v24 )
          goto LABEL_89;
        if ( (v20 & 0x100000) != 0 && !v19 )
        {
          _InterlockedExchange((volatile __int32 *)v18 + 15, 1);
          v17 = v77;
        }
        v27 = v18 + 9;
        v28 = (_QWORD *)*((_QWORD *)&v86 + 1);
        if ( **((__int128 ***)&v86 + 1) != &v86 )
LABEL_88:
          __fastfail(3u);
        *v27 = &v86;
        v27[1] = v28;
        *v28 = v27;
        *((_QWORD *)&v86 + 1) = v27;
        v15 = v75;
      }
      else
      {
        if ( *(v18 - 1) == 1 )
          _InterlockedAdd((volatile signed __int32 *)(v6 + 1636), 1u);
        _InterlockedExchange((volatile __int32 *)v18 + 15, 0);
        v17 = v77;
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 1176), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 1176));
  KeAbPostRelease(v6 + 1176);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v29 = 48LL * v76;
  v98 = v29;
  v30 = -1;
  if ( v29 <= 0xFFFFFFFF )
    v30 = 48 * v76;
  v7 = v29 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v29 > 0xFFFFFFFF )
    goto LABEL_89;
  v31 = v14 + v30;
  v32 = -1;
  if ( v31 >= v14 )
    v32 = v31;
  v7 = v31 < v14 ? 0xC0000095 : 0;
  if ( v31 < v14 )
    goto LABEL_89;
  v33 = v32 + v81;
  v34 = -1;
  if ( v32 + v81 >= v32 )
    v34 = v32 + v81;
  v7 = v33 < v32 ? 0xC0000095 : 0;
  if ( v33 < v32 )
    goto LABEL_89;
  v35 = v80;
  v36 = v34 + v80;
  v37 = -1;
  if ( v34 + v80 >= v34 )
    v37 = v34 + v80;
  v91 = v37;
  v7 = v36 < v34 ? 0xC0000095 : 0;
  if ( v36 < v34 )
    goto LABEL_89;
  if ( (unsigned int)v85 < v37 )
  {
    *v95 = v37;
    v7 = -1073741789;
    goto LABEL_89;
  }
  if ( v75 )
  {
    Pool2 = (char *)ExAllocatePool2(256LL, 8 * v75, 1450669125LL);
    v39 = Pool2;
    v79 = Pool2;
    if ( !Pool2 )
    {
      v7 = -1073741670;
      goto LABEL_90;
    }
    memset(Pool2, 0, 8 * v75);
    v35 = v80;
  }
  v40 = v89;
  if ( (*(_DWORD *)(v89 + 16) & 1) != 0 )
  {
    v41 = v88;
    v42 = *(_QWORD *)(v88 + 1320);
    if ( v42 )
    {
      v101 = *(_QWORD *)(v88 + 1320);
      memset((void *)(v42 + 8), 0, 4LL * *(unsigned int *)(v42 + 4));
      v41 = v88;
    }
    v43 = *(_QWORD *)(v41 + 1328);
    if ( v43 )
    {
      v101 = *(_QWORD *)(v41 + 1328);
      memset((void *)(v43 + 8), 0, 4LL * *(unsigned int *)(v43 + 4));
    }
  }
  v44 = v40 + 20;
  v92 = v44;
  v45 = (char *)(v40 + 64);
  v78 = v45;
  *(_OWORD *)v44 = 0LL;
  *(_OWORD *)(v44 + 16) = 0LL;
  *(_QWORD *)(v44 + 32) = 0LL;
  *(_DWORD *)(v44 + 40) = 0;
  *(_DWORD *)v44 = 44;
  *(_DWORD *)(v44 + 8) = *(_DWORD *)(BugCheckParameter2 + 1724);
  *(_DWORD *)(v44 + 16) = 1108;
  *(_DWORD *)(v44 + 12) = (_DWORD)v45 - v44;
  v46 = v45;
  v105 = v45;
  v47 = v45 + 1108;
  v78 = v47;
  v48 = (_OWORD *)(v6 + 8);
  v49 = 8LL;
  do
  {
    *(_OWORD *)v46 = *v48;
    *((_OWORD *)v46 + 1) = v48[1];
    *((_OWORD *)v46 + 2) = v48[2];
    *((_OWORD *)v46 + 3) = v48[3];
    *((_OWORD *)v46 + 4) = v48[4];
    *((_OWORD *)v46 + 5) = v48[5];
    *((_OWORD *)v46 + 6) = v48[6];
    v46 += 128;
    *((_OWORD *)v46 - 1) = v48[7];
    v48 += 8;
    --v49;
  }
  while ( v49 );
  *(_OWORD *)v46 = *v48;
  *((_OWORD *)v46 + 1) = v48[1];
  *((_OWORD *)v46 + 2) = v48[2];
  *((_OWORD *)v46 + 3) = v48[3];
  *((_OWORD *)v46 + 4) = v48[4];
  *((_DWORD *)v46 + 20) = *((_DWORD *)v48 + 20);
  *(_DWORD *)(v44 + 24) = 60;
  *(_DWORD *)(v44 + 20) = (_DWORD)v47 - v44;
  v94 = v47;
  v50 = v47 + 60;
  *(_DWORD *)(v44 + 32) = v83;
  *(_DWORD *)(v44 + 28) = (_DWORD)v50 - v44;
  v51 = v50;
  v100 = v50;
  v52 = &v50[v104];
  v78 = v52;
  v106 = v52;
  v53 = (__int64 *)(BugCheckParameter2 + 1680);
  v54 = *(__int64 **)(BugCheckParameter2 + 1680);
  while ( 1 )
  {
    v77 = v54;
    if ( v54 == v53 )
      break;
    v103 = v54;
    v55 = 0;
    v90 = 0;
    while ( v55 < *((_DWORD *)v54 + 5) )
    {
      v56 = (_DWORD *)(v54[3] + 8LL * v55);
      v107 = v56;
      if ( *(_QWORD *)v56 )
      {
        if ( v51 >= v52 )
          break;
        *(_DWORD *)v51 = *v56;
        *((_DWORD *)v51 + 1) = v56[1];
        v51 += 8;
        v100 = v51;
      }
      v90 = ++v55;
    }
    v54 = (__int64 *)*v54;
    v53 = (__int64 *)(BugCheckParameter2 + 1680);
  }
  *(_DWORD *)(v44 + 40) = v76;
  *(_DWORD *)(v44 + 36) = (_DWORD)v52 - v44;
  v57 = v52;
  v99 = v52;
  v58 = &v52[v98];
  memset(v57, 0, v58 - v99);
  v59 = v58;
  v85 = (unsigned __int64)v58;
  v102 = (wchar_t *)&v58[v35];
  v60 = v35 + (_DWORD)v58;
  pszDest = v102;
  v61 = v81 + (_DWORD)v102;
  v78 = (char *)v102 + v81;
  v89 = (unsigned __int64)v78;
  v84 = 0;
  v62 = (__int128 *)v86;
  v77 = (__int64 *)v86;
  while ( v62 != &v86 )
  {
    v77 = *(__int64 **)v62;
    v63 = v92;
    v64 = v99;
    *((_DWORD *)v99 + 2) = (_DWORD)v59 - v92;
    *((_DWORD *)v64 + 3) = *((_DWORD *)v62 - 22);
    *(_DWORD *)v64 = v60 - v63;
    *((_DWORD *)v64 + 1) = (unsigned __int16)*((_DWORD *)v62 - 6);
    *((_DWORD *)v64 + 4) = *((_DWORD *)v62 - 27);
    *((_DWORD *)v64 + 5) = *((_DWORD *)v62 - 28);
    *((_DWORD *)v64 + 6) = *((_DWORD *)v62 - 26);
    *((_DWORD *)v64 + 7) = *((_DWORD *)v62 - 5);
    *((_DWORD *)v64 + 8) = *((_DWORD *)v62 - 4);
    *((_DWORD *)v64 + 9) = *((_DWORD *)v62 + 4);
    *((_DWORD *)v64 + 10) = *((_DWORD *)v62 + 5);
    *((_DWORD *)v64 + 11) = *((_DWORD *)v62 + 6);
    v99 = v64 + 48;
    memmove(v59, *((const void **)v62 - 12), *((unsigned int *)v62 - 22));
    v85 = (*((unsigned int *)v62 - 22) + v85 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v85 > (unsigned __int64)v102 )
      break;
    RtlStringCchCopyNW(
      pszDest,
      (__int64)(v89 - (_QWORD)pszDest) >> 1,
      *((STRSAFE_PCNZWCH *)v62 - 4),
      (unsigned __int16)*((_DWORD *)v62 - 6));
    pszDest += (unsigned int)(unsigned __int16)*((_DWORD *)v62 - 6) + 1;
    if ( (unsigned __int64)pszDest > v89 )
      break;
    v65 = KeGetCurrentThread();
    --v65->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v6 + 1176, 0LL);
    *(_QWORD *)(v6 + 1184) = KeGetCurrentThread();
    v66 = v84;
    *(_QWORD *)&v79[8 * v84] = *((_QWORD *)v62 - 5);
    v84 = v66 + 1;
    *((_QWORD *)v62 - 5) = 0LL;
    *((_QWORD *)v62 - 4) = 0LL;
    *((_DWORD *)v62 - 6) &= 0xFFFF0000;
    *((_DWORD *)v62 - 6) |= 0x80000u;
    *(_QWORD *)(v6 + 1184) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1176));
    KeAbPostRelease(v6 + 1176);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    --v76;
    if ( *((_QWORD *)v62 - 10) == 1LL )
      _InterlockedAdd((volatile signed __int32 *)(v6 + 1636), 1u);
    _InterlockedExchange((volatile __int32 *)v62 - 3, 0);
    v61 = (unsigned int)v78;
    v62 = (__int128 *)v77;
    v60 = (unsigned int)pszDest;
    v59 = (void *)v85;
  }
  v67 = v94;
  *(_OWORD *)v94 = *(_OWORD *)(v6 + 1116);
  v67[1] = *(_OWORD *)(v6 + 1132);
  v67[2] = *(_OWORD *)(v6 + 1148);
  *((_QWORD *)v67 + 6) = *(_QWORD *)(v6 + 1164);
  *((_DWORD *)v67 + 14) = *(_DWORD *)(v6 + 1172);
  *(_OWORD *)(v6 + 1116) = 0LL;
  *(_OWORD *)(v6 + 1132) = 0LL;
  *(_OWORD *)(v6 + 1148) = 0LL;
  *(_QWORD *)(v6 + 1164) = 0LL;
  *(_DWORD *)(v6 + 1172) = 0;
  v108 = 0LL;
  v109 = 0LL;
  EtwpCovSampCaptureFlushStats(v88, &v108);
  *(_OWORD *)((char *)v67 + 28) = v108;
  *(_OWORD *)((char *)v67 + 44) = v109;
  *(_DWORD *)(v92 + 4) = v61 - v92;
  v68 = (__int64 *)(BugCheckParameter2 + 1680);
  v69 = *(__int64 **)(BugCheckParameter2 + 1680);
  v77 = v69;
  while ( v69 != v68 )
  {
    v70 = v69;
    v103 = v69;
    v69 = (__int64 *)*v69;
    v77 = v69;
    if ( v70 == *(__int64 **)(BugCheckParameter2 + 1664) )
    {
      memset((void *)v70[3], 0, 8LL * *((unsigned int *)v70 + 5));
      *((_DWORD *)v70 + 4) = 0;
    }
    else
    {
      v71 = (__int64 **)v70[1];
      if ( (__int64 *)v69[1] != v70 || *v71 != v70 )
        goto LABEL_88;
      *v71 = v69;
      v69[1] = (__int64)v71;
      --*(_DWORD *)(BugCheckParameter2 + 1696);
      EtwpCoverageSamplerFreeTable(v70);
    }
    v68 = (__int64 *)(BugCheckParameter2 + 1680);
  }
  ++*(_DWORD *)(BugCheckParameter2 + 1724);
  EtwpCovSampCaptureContextSetPaused(BugCheckParameter2, v88, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  EtwpCovSampContextPruneModules(v6);
  *v95 = v91;
  v7 = 0;
  v39 = v79;
LABEL_90:
  if ( *(struct _KTHREAD **)(v6 + 1184) == KeGetCurrentThread() )
  {
    *(_QWORD *)(v6 + 1184) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1176));
    KeAbPostRelease(v6 + 1176);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v39 )
  {
    if ( v75 )
    {
      v72 = v39;
      v73 = v75;
      do
      {
        EtwpCovSampModuleNameInfoCleanup(v72);
        v72 += 8;
        --v73;
      }
      while ( v73 );
    }
    ExFreePoolWithTag(v39, 0x56777445u);
  }
  if ( v93 )
  {
    ExReleaseRundownProtection_0(&stru_140C31C60);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v7;
}
