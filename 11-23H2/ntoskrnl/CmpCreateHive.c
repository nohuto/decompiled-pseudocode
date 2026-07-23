/*
 * XREFs of CmpCreateHive @ 0x1407025DC
 * Callers:
 *     CmpInitHiveFromFile @ 0x14068B418 (CmpInitHiveFromFile.c)
 *     CmRestoreKey @ 0x140A0AEF4 (CmRestoreKey.c)
 *     CmpCreateTemporaryHive @ 0x140A0C520 (CmpCreateTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x140A0C5E0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A0CB40 (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140B37640 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140B37CBC (CmpInitializePreloadedHive.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402F65DC (CmpRecheckHiveVolumePolicy.c)
 *     SetFailureLocation @ 0x1402F6C80 (SetFailureLocation.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpAdjustFileCFSafety @ 0x140419B70 (CmpAdjustFileCFSafety.c)
 *     ZwSetInformationObject @ 0x14041BC70 (ZwSetInformationObject.c)
 *     CmpAllocateForNonPagedHive @ 0x140616A60 (CmpAllocateForNonPagedHive.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 *     HvHiveStartFileBacked @ 0x140701414 (HvHiveStartFileBacked.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140701E18 (CmpVolumeManagerGetContextForFile.c)
 *     CmpAllocate @ 0x140703140 (CmpAllocate.c)
 *     CmpReorganizeHive @ 0x140703230 (CmpReorganizeHive.c)
 *     CmpHiveInitialize @ 0x14070348C (CmpHiveInitialize.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14070360C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmCheckRegistry @ 0x140705420 (CmCheckRegistry.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14075099C (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvHiveStartMemoryBacked @ 0x140826590 (HvHiveStartMemoryBacked.c)
 *     HvMarkBaseBlockDirty @ 0x140874A6C (HvMarkBaseBlockDirty.c)
 *     CmpLogHiveInitializeEvent @ 0x140A12B14 (CmpLogHiveInitializeEvent.c)
 *     CmpDestroyHive @ 0x140A1CF50 (CmpDestroyHive.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCreateHive(
        ULONG_PTR *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        _OWORD *a9,
        _OWORD *a10,
        _BYTE *a11,
        __int64 a12)
{
  unsigned int v13; // r12d
  void *Pool2; // r13
  HANDLE v15; // rdx
  __int64 v16; // rcx
  int started; // ebx
  int v18; // eax
  __int64 v19; // rax
  NTSTATUS VolumeClusterSize; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rax
  ULONG_PTR v25; // rsi
  void *v26; // rcx
  void *v27; // rdx
  void *v28; // rcx
  void *v29; // rdx
  HANDLE *v30; // r13
  __int16 *v31; // r8
  void *v32; // rdx
  void *v33; // rcx
  void *v34; // rdx
  __int64 v35; // r8
  __int64 (__fastcall *v36)(unsigned int, char, unsigned int); // rax
  unsigned int v37; // eax
  unsigned int v39; // r15d
  __int64 v40; // rax
  int v41; // r9d
  int v42; // edx
  int v43; // r9d
  int v44; // r10d
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  signed __int8 v61; // cf
  __int64 v62; // rbx
  _QWORD *v63; // rcx
  _QWORD *v64; // rax
  signed __int64 v65; // rdx
  ULONG_PTR v66; // rtt
  ULONG_PTR *v67; // rax
  int v68; // [rsp+20h] [rbp-E0h]
  int v69; // [rsp+30h] [rbp-D0h]
  char v70; // [rsp+70h] [rbp-90h]
  char v71; // [rsp+71h] [rbp-8Fh]
  _WORD v72[2]; // [rsp+74h] [rbp-8Ch] BYREF
  int v73; // [rsp+78h] [rbp-88h] BYREF
  __int16 ObjectInformation; // [rsp+7Ch] [rbp-84h] BYREF
  __int16 v75[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v76; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v77; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v78; // [rsp+8Ch] [rbp-74h]
  __int16 v79; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v80; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v81; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v82; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 *v83; // [rsp+A8h] [rbp-58h]
  _OWORD *v84; // [rsp+B0h] [rbp-50h]
  __int64 v85; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD *v86; // [rsp+C0h] [rbp-40h]
  ULONG_PTR *v87; // [rsp+C8h] [rbp-38h]
  __int128 v88; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v89; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v90)(__int64, unsigned int, ULONG, char *, ULONG); // [rsp+F0h] [rbp-10h]
  _OWORD v91[3]; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+130h] [rbp+30h] BYREF
  _BYTE **v93; // [rsp+150h] [rbp+50h]
  __int64 v94; // [rsp+158h] [rbp+58h]
  __int16 *v95; // [rsp+160h] [rbp+60h]
  __int64 v96; // [rsp+168h] [rbp+68h]
  unsigned int *v97; // [rsp+170h] [rbp+70h]
  __int64 v98; // [rsp+178h] [rbp+78h]
  int *v99; // [rsp+180h] [rbp+80h]
  __int64 v100; // [rsp+188h] [rbp+88h]
  __int64 v101; // [rsp+190h] [rbp+90h]
  __int64 v102; // [rsp+198h] [rbp+98h]
  __int64 v103; // [rsp+1A0h] [rbp+A0h]
  int v104; // [rsp+1A8h] [rbp+A8h]
  int v105; // [rsp+1ACh] [rbp+ACh]
  __int64 v106; // [rsp+1B0h] [rbp+B0h]
  __int64 v107; // [rsp+1B8h] [rbp+B8h]
  __int64 v108; // [rsp+1C0h] [rbp+C0h]
  int v109; // [rsp+1C8h] [rbp+C8h]
  int v110; // [rsp+1CCh] [rbp+CCh]
  __int64 v111; // [rsp+1D0h] [rbp+D0h]
  __int64 v112; // [rsp+1D8h] [rbp+D8h]
  __int64 v113; // [rsp+1E0h] [rbp+E0h]
  int v114; // [rsp+1E8h] [rbp+E8h]
  int v115; // [rsp+1ECh] [rbp+ECh]
  __int64 *v116; // [rsp+1F0h] [rbp+F0h]
  __int64 v117; // [rsp+1F8h] [rbp+F8h]

  v78 = a2;
  v13 = a3;
  v83 = a7;
  Pool2 = 0LL;
  v84 = a9;
  v86 = a10;
  v82 = a11;
  v15 = 0LL;
  v87 = a1;
  v16 = a5;
  v77 = a4;
  v85 = a5;
  v90 = 0LL;
  v81 = 0;
  v70 = 0;
  v71 = 0;
  v88 = 0LL;
  v89 = 0LL;
  memset(v91, 0, sizeof(v91));
  if ( a2 > 2 && a2 != 5 )
  {
    started = -1073741811;
    v18 = 0;
    goto LABEL_44;
  }
  if ( (a3 & 0xFD617CEC) != 0 )
  {
    v68 = 16;
LABEL_6:
    started = -1073741811;
    SetFailureLocation(a12, (int)v15, 1, -1073741811, v68);
    return (unsigned int)started;
  }
  if ( a4 > 2 )
  {
    v68 = 32;
    goto LABEL_6;
  }
  if ( !a5 && a2 == 1 )
  {
    v68 = 48;
    goto LABEL_6;
  }
  if ( a6 )
  {
    if ( (a3 & 0x8001) == 1 )
    {
      v68 = 64;
      goto LABEL_6;
    }
    v15 = *(HANDLE *)a6;
    if ( !*(_QWORD *)a6 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
    {
      v68 = 80;
LABEL_19:
      LODWORD(v15) = 0;
      goto LABEL_6;
    }
    v16 = *(_QWORD *)(a6 + 8);
    if ( v16 && !a4 )
    {
      v68 = 96;
      goto LABEL_19;
    }
    v19 = *(_QWORD *)(a6 + 16);
    if ( v19 && a4 != 2 )
    {
      v68 = 112;
      goto LABEL_19;
    }
    if ( *(_QWORD *)(a6 + 24) && (v15 || v16 || v19) )
    {
      v68 = 128;
      goto LABEL_19;
    }
  }
  v70 = CmpAcquireShutdownRundown(v16, v15, a3);
  if ( !v70 )
    return (unsigned int)-1073741431;
  v80 = 1;
  if ( a6 )
  {
    if ( *(_QWORD *)a6 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize(*(HANDLE *)a6, (int *)&v80);
      started = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        SetFailureLocation(a12, 0, 1, VolumeClusterSize, 160);
LABEL_82:
        CmpReleaseShutdownRundown(v22, v21);
        return (unsigned int)started;
      }
    }
  }
  Pool2 = (void *)ExAllocatePool2(64LL, 32LL, 892947779LL);
  if ( !Pool2 )
  {
    started = -1073741801;
    goto LABEL_82;
  }
  v23 = v13 & 0x2000000;
  v73 = v13 & 0x2000000;
  if ( (v13 & 0x2000000) != 0 )
    v24 = CmpAllocateForNonPagedHive(0x12D8u, 0, 0x30314D43u);
  else
    v24 = CmpAllocate(4824LL, 0LL, 808537411LL);
  v25 = v24;
  if ( v24 )
  {
    CmpHiveInitialize(v24, Pool2);
    if ( !a6 )
    {
LABEL_66:
      if ( (a8 & 0x8000000) != 0 )
        *(_DWORD *)(v25 + 4112) |= 0x80u;
      if ( a8 < 0 )
        *(_DWORD *)(v25 + 4112) |= 0x800u;
      CmpAttachToRegistryProcess(v91);
      v71 = 1;
      v36 = (__int64 (__fastcall *)(unsigned int, char, unsigned int))CmpAllocate;
      if ( v23 )
        v36 = CmpAllocateForNonPagedHive;
      *(_QWORD *)&v88 = v36;
      *((_QWORD *)&v88 + 1) = CmpFree;
      *((_QWORD *)&v89 + 1) = CmpFileWrite;
      v90 = CmpFileRead;
      v37 = v78;
      *(_QWORD *)(v25 + 56) = a12;
      *(_QWORD *)a12 = v25;
      if ( v37 != 2 && v37 != 5 && (v37 || !a6 || !*(_QWORD *)a6) )
      {
        started = HvHiveStartMemoryBacked(
                    v25,
                    v85,
                    (__int64)&v88,
                    v80,
                    (__int64)v83,
                    a8,
                    (__int64)v84,
                    (__int64)v86,
                    (__int64)v82,
                    (__int64)&v81,
                    a12);
        if ( started < 0 )
        {
          SetFailureLocation(a12, 0, 1, started, 232);
          goto LABEL_79;
        }
        v39 = v78;
        goto LABEL_96;
      }
      v13 |= 0x20000u;
      started = CmpVolumeManagerGetContextForFile(
                  (__int64)CmpAllocateForNonPagedHive,
                  *(void **)a6,
                  v35,
                  (PPRIVILEGE_SET *)(v25 + 4792));
      if ( started < 0 )
        goto LABEL_79;
      if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v25 + 4792))
        || (a8 & 0x2000000) != 0
        || (v13 & 0x8000) != 0
        || (a8 & 0x40) != 0 )
      {
        goto LABEL_92;
      }
      if ( (a8 & 0x20) != 0 )
        goto LABEL_93;
      if ( (int)CmpAdjustFileCFSafety(*(HANDLE *)a6, 1) < 0 )
LABEL_92:
        v13 |= 0x800000u;
      else
        *(_DWORD *)(v25 + 4112) |= 0x10000u;
LABEL_93:
      v39 = v78;
      started = HvHiveStartFileBacked(v25, v78 == 0, v13, v77, &v88, v80, v69, v83, a8, v84, v86, v82, &v81, a12);
      if ( started < 0 )
      {
        SetFailureLocation(a12, 0, 1, started, 228);
        goto LABEL_79;
      }
LABEL_96:
      if ( (v13 & 0x180000) == 0x80000 && (a8 & 0x800000) == 0 )
      {
        v40 = *(_QWORD *)(v25 + 64);
        if ( *(_DWORD *)(v40 + 24) < 6u || (*(_DWORD *)(v40 + 144) & 2) == 0 )
        {
          started = -1073741811;
          goto LABEL_79;
        }
      }
      if ( ((v39 - 1) & 0xFFFFFFFA) == 0 && v39 != 6 )
      {
        started = CmCheckRegistry(v25);
        if ( started == -2147483606 )
        {
          if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 0x400000000000LL) )
          {
            LODWORD(v82) = v41;
            v93 = &v82;
            v95 = &v79;
            v42 = *(unsigned __int16 *)(a12 + 8);
            v43 = *(unsigned __int16 *)(a12 + 10);
            v101 = a12 + 8;
            v97 = &v77;
            v103 = a12 + 12;
            v44 = *(unsigned __int8 *)(a12 + 394);
            v104 = 12 * v42;
            v108 = a12 + 108;
            v109 = 12 * v43;
            v113 = a12 + 396;
            v116 = &v85;
            LOWORD(v73) = v44;
            v79 = v42;
            LOWORD(v77) = v43;
            v106 = a12 + 10;
            v111 = a12 + 394;
            v94 = 4LL;
            v96 = 2LL;
            v98 = 2LL;
            v99 = &v73;
            v100 = 2LL;
            v102 = 2LL;
            v105 = 0;
            v107 = 2LL;
            v110 = 0;
            v112 = 2LL;
            v114 = 8 * v44;
            v115 = 0;
            v85 = 0x1000000LL;
            v117 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C04390,
              (unsigned __int8 *)byte_1400375DD,
              0LL,
              0LL,
              0xDu,
              &v92);
          }
        }
        else if ( started < 0 )
        {
          SetFailureLocation(a12, 0, 1, started, 240);
          goto LABEL_79;
        }
      }
      if ( (a8 & 0x800000) != 0 )
      {
        v45 = *(_QWORD *)(v25 + 64);
        if ( *(_DWORD *)(v45 + 24) < 6u || (*(_DWORD *)(v45 + 144) & 2) == 0 )
        {
          HvMarkBaseBlockDirty(v25);
          *(_DWORD *)(*(_QWORD *)(v25 + 64) + 24LL) = 6;
          *(_DWORD *)(*(_QWORD *)(v25 + 64) + 144LL) |= 2u;
        }
      }
      CmpReorganizeHive(v25);
      CmpLockRegistry(v47, v46, v48, v49);
      v50 = KeAbPreAcquire(v25 + 72, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 72), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v25 + 72), 0LL, v50, v25 + 72);
      if ( v50 )
        *(_BYTE *)(v50 + 18) = 1;
      v51 = KeAbPreAcquire(v25 + 80, 0LL);
      v52 = v51;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 80), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v25 + 80), v51, v25 + 80);
      v53 = 0;
      if ( v52 )
        *(_BYTE *)(v52 + 18) = 1;
      if ( v78 )
        v53 = HvCheckAndUpdateHiveBackupTimeStamp(v25);
      else
        *(_BYTE *)(v25 + 195) = 1;
      started = v53;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 80));
      KeAbPostRelease(v25 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v25 + 72));
      KeAbPostRelease(v25 + 72);
      CmpUnlockRegistry(v55, v54, v56, v57);
      if ( started >= 0 )
      {
        if ( (a8 & 0x1000000) != 0 )
        {
          started = 0;
          *(_QWORD *)(v25 + 1616) = v25 + 1608;
          *(_QWORD *)(v25 + 1608) = v25 + 1608;
        }
        else
        {
          v60 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
          v61 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
          v62 = v60;
          if ( v61 )
            ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v60, (__int64)&CmpHiveListHeadLock);
          if ( v62 )
            *(_BYTE *)(v62 + 18) = 1;
          v63 = (_QWORD *)qword_140D54C70;
          v64 = (_QWORD *)(v25 + 1608);
          if ( *(__int64 **)qword_140D54C70 != &CmpHiveListHead )
            __fastfail(3u);
          *v64 = &CmpHiveListHead;
          *(_QWORD *)(v25 + 1616) = v63;
          *v63 = v64;
          qword_140D54C70 = v25 + 1608;
          _m_prefetchw(&CmpHiveListHeadLock);
          started = 0;
          v65 = CmpHiveListHeadLock - 16;
          if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v65 = 0LL;
          if ( (CmpHiveListHeadLock & 2) != 0
            || (v66 = CmpHiveListHeadLock,
                v66 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpHiveListHeadLock,
                         v65,
                         CmpHiveListHeadLock)) )
          {
            ExfReleasePushLock(&CmpHiveListHeadLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
          CmpRecheckHiveVolumePolicy(v25);
        }
        v67 = v87;
        *(_QWORD *)(v25 + 56) = 0LL;
        *v67 = v25;
        CmpReleaseShutdownRundown(v59, v58);
        v70 = 0;
        if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
          CmpLogHiveInitializeEvent(v25, v78, v83, v81);
LABEL_80:
        CmpDetachFromRegistryProcess(v91);
        goto LABEL_81;
      }
      SetFailureLocation(a12, 0, 1, started, 256);
LABEL_79:
      CmpDestroyHive((PVOID)v25);
      if ( !v71 )
        goto LABEL_81;
      goto LABEL_80;
    }
    if ( *(_QWORD *)a6 )
    {
      started = ObDuplicateObject(
                  (ULONG_PTR)PsInitialSystemProcess,
                  *(void **)a6,
                  0LL,
                  (unsigned __int64 *)(v25 + 1544),
                  0,
                  512,
                  2,
                  0);
      if ( started < 0 )
        goto LABEL_79;
      v26 = *(void **)(v25 + 1544);
      ObjectInformation = 256;
      ZwSetInformationObject(v26, ObjectHandleFlagInformation, &ObjectInformation, 2u);
    }
    v27 = *(void **)(a6 + 24);
    if ( v27 )
    {
      started = ObDuplicateObject(
                  (ULONG_PTR)PsInitialSystemProcess,
                  v27,
                  0LL,
                  (unsigned __int64 *)(v25 + 1560),
                  0,
                  512,
                  2,
                  0);
      if ( started < 0 )
        goto LABEL_79;
      v28 = *(void **)(v25 + 1560);
      v75[0] = 256;
      ZwSetInformationObject(v28, ObjectHandleFlagInformation, v75, 2u);
    }
    if ( v77 == 1 )
    {
      v29 = *(void **)(a6 + 8);
      if ( !v29 )
      {
LABEL_65:
        v23 = v73;
        goto LABEL_66;
      }
      v30 = (HANDLE *)(v25 + 1552);
      started = ObDuplicateObject(
                  (ULONG_PTR)PsInitialSystemProcess,
                  v29,
                  0LL,
                  (unsigned __int64 *)(v25 + 1552),
                  0,
                  512,
                  2,
                  0);
      if ( started < 0 )
        goto LABEL_79;
      v72[0] = 256;
      v31 = v72;
    }
    else
    {
      if ( v77 != 2 )
        goto LABEL_65;
      v32 = *(void **)(a6 + 8);
      if ( v32 )
      {
        started = ObDuplicateObject(
                    (ULONG_PTR)PsInitialSystemProcess,
                    v32,
                    0LL,
                    (unsigned __int64 *)(v25 + 1576),
                    0,
                    512,
                    2,
                    0);
        if ( started < 0 )
          goto LABEL_79;
        v33 = *(void **)(v25 + 1576);
        v72[0] = 256;
        ZwSetInformationObject(v33, ObjectHandleFlagInformation, v72, 2u);
      }
      v34 = *(void **)(a6 + 16);
      if ( !v34 )
        goto LABEL_65;
      v30 = (HANDLE *)(v25 + 1584);
      started = ObDuplicateObject(
                  (ULONG_PTR)PsInitialSystemProcess,
                  v34,
                  0LL,
                  (unsigned __int64 *)(v25 + 1584),
                  0,
                  512,
                  2,
                  0);
      if ( started < 0 )
        goto LABEL_79;
      v76 = 256;
      v31 = &v76;
    }
    ZwSetInformationObject(*v30, ObjectHandleFlagInformation, v31, 2u);
    goto LABEL_65;
  }
  LODWORD(v15) = 0;
  started = -1073741670;
  v18 = 176;
LABEL_44:
  SetFailureLocation(a12, (int)v15, 1, started, v18);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_81:
  if ( v70 )
    goto LABEL_82;
  return (unsigned int)started;
}
