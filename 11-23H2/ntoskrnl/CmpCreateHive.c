/*
 * XREFs of CmpCreateHive @ 0x1407023CC
 * Callers:
 *     CmpInitHiveFromFile @ 0x14068B418 (CmpInitHiveFromFile.c)
 *     CmRestoreKey @ 0x140A0AC44 (CmRestoreKey.c)
 *     CmpCreateTemporaryHive @ 0x140A0C270 (CmpCreateTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x140A0C330 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140B37640 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140B37CBC (CmpInitializePreloadedHive.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BD830 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402F634C (CmpRecheckHiveVolumePolicy.c)
 *     SetFailureLocation @ 0x1402F69F0 (SetFailureLocation.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     CmpAdjustFileCFSafety @ 0x1404197E0 (CmpAdjustFileCFSafety.c)
 *     ZwSetInformationObject @ 0x14041B8E0 (ZwSetInformationObject.c)
 *     CmpAllocateForNonPagedHive @ 0x140616510 (CmpAllocateForNonPagedHive.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     HvHiveStartFileBacked @ 0x140701204 (HvHiveStartFileBacked.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140701C08 (CmpVolumeManagerGetContextForFile.c)
 *     CmpAllocate @ 0x140702F30 (CmpAllocate.c)
 *     CmpReorganizeHive @ 0x140703020 (CmpReorganizeHive.c)
 *     CmpHiveInitialize @ 0x14070327C (CmpHiveInitialize.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1407033FC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmCheckRegistry @ 0x140705210 (CmCheckRegistry.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x1407507AC (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvHiveStartMemoryBacked @ 0x140826290 (HvHiveStartMemoryBacked.c)
 *     HvMarkBaseBlockDirty @ 0x14087482C (HvMarkBaseBlockDirty.c)
 *     CmpLogHiveInitializeEvent @ 0x140A12864 (CmpLogHiveInitializeEvent.c)
 *     CmpDestroyHive @ 0x140A1CCA0 (CmpDestroyHive.c)
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
  __int64 v26; // rcx
  void *v27; // rdx
  __int64 v28; // rcx
  void *v29; // rdx
  __int64 *v30; // r13
  void *v31; // rdx
  void *v32; // rdx
  __int64 v33; // r8
  __int64 (__fastcall *v34)(unsigned int, char, unsigned int); // rax
  unsigned int v35; // eax
  unsigned int v37; // r15d
  __int64 v38; // rax
  int v39; // r9d
  int v40; // edx
  int v41; // r9d
  int v42; // r10d
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rbx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  signed __int8 v59; // cf
  __int64 v60; // rbx
  _QWORD *v61; // rcx
  _QWORD *v62; // rax
  signed __int64 v63; // rdx
  ULONG_PTR v64; // rtt
  ULONG_PTR *v65; // rax
  int v66; // [rsp+20h] [rbp-E0h]
  int v67; // [rsp+30h] [rbp-D0h]
  char v68; // [rsp+70h] [rbp-90h]
  char v69; // [rsp+71h] [rbp-8Fh]
  int v70; // [rsp+78h] [rbp-88h] BYREF
  __int16 v71; // [rsp+7Ch] [rbp-84h]
  __int16 v72; // [rsp+80h] [rbp-80h]
  __int16 v73; // [rsp+84h] [rbp-7Ch]
  unsigned int v74; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v75; // [rsp+8Ch] [rbp-74h]
  __int16 v76; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v77; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v78; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v79; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 *v80; // [rsp+A8h] [rbp-58h]
  _OWORD *v81; // [rsp+B0h] [rbp-50h]
  __int64 v82; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD *v83; // [rsp+C0h] [rbp-40h]
  ULONG_PTR *v84; // [rsp+C8h] [rbp-38h]
  __int128 v85; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v86; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v87)(__int64, unsigned int, ULONG, char *, ULONG); // [rsp+F0h] [rbp-10h]
  _OWORD v88[3]; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+130h] [rbp+30h] BYREF
  _BYTE **v90; // [rsp+150h] [rbp+50h]
  __int64 v91; // [rsp+158h] [rbp+58h]
  __int16 *v92; // [rsp+160h] [rbp+60h]
  __int64 v93; // [rsp+168h] [rbp+68h]
  unsigned int *v94; // [rsp+170h] [rbp+70h]
  __int64 v95; // [rsp+178h] [rbp+78h]
  int *v96; // [rsp+180h] [rbp+80h]
  __int64 v97; // [rsp+188h] [rbp+88h]
  __int64 v98; // [rsp+190h] [rbp+90h]
  __int64 v99; // [rsp+198h] [rbp+98h]
  __int64 v100; // [rsp+1A0h] [rbp+A0h]
  int v101; // [rsp+1A8h] [rbp+A8h]
  int v102; // [rsp+1ACh] [rbp+ACh]
  __int64 v103; // [rsp+1B0h] [rbp+B0h]
  __int64 v104; // [rsp+1B8h] [rbp+B8h]
  __int64 v105; // [rsp+1C0h] [rbp+C0h]
  int v106; // [rsp+1C8h] [rbp+C8h]
  int v107; // [rsp+1CCh] [rbp+CCh]
  __int64 v108; // [rsp+1D0h] [rbp+D0h]
  __int64 v109; // [rsp+1D8h] [rbp+D8h]
  __int64 v110; // [rsp+1E0h] [rbp+E0h]
  int v111; // [rsp+1E8h] [rbp+E8h]
  int v112; // [rsp+1ECh] [rbp+ECh]
  __int64 *v113; // [rsp+1F0h] [rbp+F0h]
  __int64 v114; // [rsp+1F8h] [rbp+F8h]

  v75 = a2;
  v13 = a3;
  v80 = a7;
  Pool2 = 0LL;
  v81 = a9;
  v83 = a10;
  v79 = a11;
  v15 = 0LL;
  v84 = a1;
  v16 = a5;
  v74 = a4;
  v82 = a5;
  v87 = 0LL;
  v78 = 0;
  v68 = 0;
  v69 = 0;
  v85 = 0LL;
  v86 = 0LL;
  memset(v88, 0, sizeof(v88));
  if ( a2 > 2 && a2 != 5 )
  {
    started = -1073741811;
    v18 = 0;
    goto LABEL_44;
  }
  if ( (a3 & 0xFD617CEC) != 0 )
  {
    v66 = 16;
LABEL_6:
    started = -1073741811;
    SetFailureLocation(a12, (int)v15, 1, -1073741811, v66);
    return (unsigned int)started;
  }
  if ( a4 > 2 )
  {
    v66 = 32;
    goto LABEL_6;
  }
  if ( !a5 && a2 == 1 )
  {
    v66 = 48;
    goto LABEL_6;
  }
  if ( a6 )
  {
    if ( (a3 & 0x8001) == 1 )
    {
      v66 = 64;
      goto LABEL_6;
    }
    v15 = *(HANDLE *)a6;
    if ( !*(_QWORD *)a6 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
    {
      v66 = 80;
LABEL_19:
      LODWORD(v15) = 0;
      goto LABEL_6;
    }
    v16 = *(_QWORD *)(a6 + 8);
    if ( v16 && !a4 )
    {
      v66 = 96;
      goto LABEL_19;
    }
    v19 = *(_QWORD *)(a6 + 16);
    if ( v19 && a4 != 2 )
    {
      v66 = 112;
      goto LABEL_19;
    }
    if ( *(_QWORD *)(a6 + 24) && (v15 || v16 || v19) )
    {
      v66 = 128;
      goto LABEL_19;
    }
  }
  v68 = CmpAcquireShutdownRundown(v16, v15, a3);
  if ( !v68 )
    return (unsigned int)-1073741431;
  v77 = 1;
  if ( a6 )
  {
    if ( *(_QWORD *)a6 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize(*(HANDLE *)a6, (int *)&v77);
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
  v70 = v13 & 0x2000000;
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
      CmpAttachToRegistryProcess(v88);
      v69 = 1;
      v34 = (__int64 (__fastcall *)(unsigned int, char, unsigned int))CmpAllocate;
      if ( v23 )
        v34 = CmpAllocateForNonPagedHive;
      *(_QWORD *)&v85 = v34;
      *((_QWORD *)&v85 + 1) = CmpFree;
      *((_QWORD *)&v86 + 1) = CmpFileWrite;
      v87 = CmpFileRead;
      v35 = v75;
      *(_QWORD *)(v25 + 56) = a12;
      *(_QWORD *)a12 = v25;
      if ( v35 != 2 && v35 != 5 && (v35 || !a6 || !*(_QWORD *)a6) )
      {
        started = HvHiveStartMemoryBacked(
                    v25,
                    v82,
                    (__int64)&v85,
                    v77,
                    (__int64)v80,
                    a8,
                    (__int64)v81,
                    (__int64)v83,
                    (__int64)v79,
                    (__int64)&v78,
                    a12);
        if ( started < 0 )
        {
          SetFailureLocation(a12, 0, 1, started, 232);
          goto LABEL_79;
        }
        v37 = v75;
        goto LABEL_96;
      }
      v13 |= 0x20000u;
      started = CmpVolumeManagerGetContextForFile(
                  (__int64)CmpAllocateForNonPagedHive,
                  *(void **)a6,
                  v33,
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
      v37 = v75;
      started = HvHiveStartFileBacked(v25, v75 == 0, v13, v74, &v85, v77, v67, v80, a8, v81, v83, v79, &v78, a12);
      if ( started < 0 )
      {
        SetFailureLocation(a12, 0, 1, started, 228);
        goto LABEL_79;
      }
LABEL_96:
      if ( (v13 & 0x180000) == 0x80000 && (a8 & 0x800000) == 0 )
      {
        v38 = *(_QWORD *)(v25 + 64);
        if ( *(_DWORD *)(v38 + 24) < 6u || (*(_DWORD *)(v38 + 144) & 2) == 0 )
        {
          started = -1073741811;
          goto LABEL_79;
        }
      }
      if ( ((v37 - 1) & 0xFFFFFFFA) == 0 && v37 != 6 )
      {
        started = CmCheckRegistry(v25);
        if ( started == -2147483606 )
        {
          if ( (unsigned int)dword_140C043C8 > 5 && tlgKeywordOn((__int64)&dword_140C043C8, 0x400000000000LL) )
          {
            LODWORD(v79) = v39;
            v90 = &v79;
            v92 = &v76;
            v40 = *(unsigned __int16 *)(a12 + 8);
            v41 = *(unsigned __int16 *)(a12 + 10);
            v98 = a12 + 8;
            v94 = &v74;
            v100 = a12 + 12;
            v42 = *(unsigned __int8 *)(a12 + 394);
            v101 = 12 * v40;
            v105 = a12 + 108;
            v106 = 12 * v41;
            v110 = a12 + 396;
            v113 = &v82;
            LOWORD(v70) = v42;
            v76 = v40;
            LOWORD(v74) = v41;
            v103 = a12 + 10;
            v108 = a12 + 394;
            v91 = 4LL;
            v93 = 2LL;
            v95 = 2LL;
            v96 = &v70;
            v97 = 2LL;
            v99 = 2LL;
            v102 = 0;
            v104 = 2LL;
            v107 = 0;
            v109 = 2LL;
            v111 = 8 * v42;
            v112 = 0;
            v82 = 0x1000000LL;
            v114 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C043C8,
              (unsigned __int8 *)word_140037762,
              0LL,
              0LL,
              0xDu,
              &v89);
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
        v43 = *(_QWORD *)(v25 + 64);
        if ( *(_DWORD *)(v43 + 24) < 6u || (*(_DWORD *)(v43 + 144) & 2) == 0 )
        {
          HvMarkBaseBlockDirty(v25);
          *(_DWORD *)(*(_QWORD *)(v25 + 64) + 24LL) = 6;
          *(_DWORD *)(*(_QWORD *)(v25 + 64) + 144LL) |= 2u;
        }
      }
      CmpReorganizeHive(v25);
      CmpLockRegistry(v45, v44, v46, v47);
      v48 = KeAbPreAcquire(v25 + 72, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 72), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v25 + 72), 0LL, v48, v25 + 72);
      if ( v48 )
        *(_BYTE *)(v48 + 18) = 1;
      v49 = KeAbPreAcquire(v25 + 80, 0LL);
      v50 = v49;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 80), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v25 + 80), v49, v25 + 80);
      v51 = 0;
      if ( v50 )
        *(_BYTE *)(v50 + 18) = 1;
      if ( v75 )
        v51 = HvCheckAndUpdateHiveBackupTimeStamp(v25);
      else
        *(_BYTE *)(v25 + 195) = 1;
      started = v51;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 80));
      KeAbPostRelease(v25 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v25 + 72));
      KeAbPostRelease(v25 + 72);
      CmpUnlockRegistry(v53, v52, v54, v55);
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
          v58 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
          v59 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
          v60 = v58;
          if ( v59 )
            ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v58, (__int64)&CmpHiveListHeadLock);
          if ( v60 )
            *(_BYTE *)(v60 + 18) = 1;
          v61 = (_QWORD *)qword_140D54C70;
          v62 = (_QWORD *)(v25 + 1608);
          if ( *(__int64 **)qword_140D54C70 != &CmpHiveListHead )
            __fastfail(3u);
          *v62 = &CmpHiveListHead;
          *(_QWORD *)(v25 + 1616) = v61;
          *v61 = v62;
          qword_140D54C70 = v25 + 1608;
          _m_prefetchw(&CmpHiveListHeadLock);
          started = 0;
          v63 = CmpHiveListHeadLock - 16;
          if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v63 = 0LL;
          if ( (CmpHiveListHeadLock & 2) != 0
            || (v64 = CmpHiveListHeadLock,
                v64 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpHiveListHeadLock,
                         v63,
                         CmpHiveListHeadLock)) )
          {
            ExfReleasePushLock(&CmpHiveListHeadLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
          CmpRecheckHiveVolumePolicy(v25);
        }
        v65 = v84;
        *(_QWORD *)(v25 + 56) = 0LL;
        *v65 = v25;
        CmpReleaseShutdownRundown(v57, v56);
        v68 = 0;
        if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
          CmpLogHiveInitializeEvent(v25, v75, v80, v78);
LABEL_80:
        CmpDetachFromRegistryProcess(v88);
        goto LABEL_81;
      }
      SetFailureLocation(a12, 0, 1, started, 256);
LABEL_79:
      CmpDestroyHive((PVOID)v25);
      if ( !v69 )
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
      v26 = *(_QWORD *)(v25 + 1544);
      v71 = 256;
      ZwSetInformationObject(v26, 4LL);
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
      v28 = *(_QWORD *)(v25 + 1560);
      v72 = 256;
      ZwSetInformationObject(v28, 4LL);
    }
    if ( v74 == 1 )
    {
      v29 = *(void **)(a6 + 8);
      if ( !v29 )
      {
LABEL_65:
        v23 = v70;
        goto LABEL_66;
      }
      v30 = (__int64 *)(v25 + 1552);
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
    }
    else
    {
      if ( v74 != 2 )
        goto LABEL_65;
      v31 = *(void **)(a6 + 8);
      if ( v31 )
      {
        started = ObDuplicateObject(
                    (ULONG_PTR)PsInitialSystemProcess,
                    v31,
                    0LL,
                    (unsigned __int64 *)(v25 + 1576),
                    0,
                    512,
                    2,
                    0);
        if ( started < 0 )
          goto LABEL_79;
        ZwSetInformationObject(*(_QWORD *)(v25 + 1576), 4LL);
      }
      v32 = *(void **)(a6 + 16);
      if ( !v32 )
        goto LABEL_65;
      v30 = (__int64 *)(v25 + 1584);
      started = ObDuplicateObject(
                  (ULONG_PTR)PsInitialSystemProcess,
                  v32,
                  0LL,
                  (unsigned __int64 *)(v25 + 1584),
                  0,
                  512,
                  2,
                  0);
      if ( started < 0 )
        goto LABEL_79;
      v73 = 256;
    }
    ZwSetInformationObject(*v30, 4LL);
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
  if ( v68 )
    goto LABEL_82;
  return (unsigned int)started;
}
