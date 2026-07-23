/*
 * XREFs of CmpLoadHiveThread @ 0x140826B80
 * Callers:
 *     <none>
 * Callees:
 *     RtlAreBitsClear @ 0x1402208E0 (RtlAreBitsClear.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     RtlNumberOfSetBits @ 0x140293800 (RtlNumberOfSetBits.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     RtlSetBits @ 0x1402E07C0 (RtlSetBits.c)
 *     RtlSetAllBits @ 0x1402E1D70 (RtlSetAllBits.c)
 *     SetFailureLocation @ 0x1402F6C80 (SetFailureLocation.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     ExIsSoftBoot @ 0x140384330 (ExIsSoftBoot.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x14039003C (CmpApplyAdminSdOnHiveFiles.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpInitHiveFromFile @ 0x14068B418 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     PsTerminateSystemThread @ 0x140700FC0 (PsTerminateSystemThread.c)
 *     CmpDoFileSetSizeEx @ 0x14074D5E8 (CmpDoFileSetSizeEx.c)
 *     CmpGetFileSize @ 0x140751320 (CmpGetFileSize.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     RtlAppendStringToString @ 0x1407DD440 (RtlAppendStringToString.c)
 *     HvpDropPagedBins @ 0x140827334 (HvpDropPagedBins.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1408274A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14082752C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpMarkCurrentValueDirty @ 0x1408276B4 (CmpMarkCurrentValueDirty.c)
 *     ExRaiseHardError @ 0x140A00E10 (ExRaiseHardError.c)
 *     CmpDiskFullWarning @ 0x140A11CF8 (CmpDiskFullWarning.c)
 *     CmpInitBackupHive @ 0x140A1AF84 (CmpInitBackupHive.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1D134 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpLogFailureToGetFileSize @ 0x140A20B60 (CmpLogFailureToGetFileSize.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140AF506C (CmpIsHiveLoadUnloadRundownActive.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF5670 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF568C (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpLoadHiveThread(__int64 a1)
{
  int v1; // edi
  unsigned int v2; // r12d
  __int64 v3; // r14
  ULONG_PTR inited; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  wchar_t *v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  wchar_t *v14; // rcx
  wchar_t *v16; // r12
  int v17; // eax
  STRING *v18; // r12
  unsigned int v19; // r15d
  void *v20; // r13
  void *v21; // r12
  NTSTATUS FileSize; // eax
  __int64 v23; // rcx
  int v24; // ebx
  void *v25; // r15
  NTSTATUS v26; // eax
  __int64 v27; // rcx
  int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int128 v33; // xmm0
  __int64 v34; // rax
  int v35; // r13d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  ULONG v44; // ebx
  ULONG i; // r15d
  ULONG v46; // eax
  wchar_t *v47; // r15
  __int64 v48; // rax
  __int64 v49; // r12
  struct _KEVENT *v50; // r15
  int v51; // r13d
  signed __int64 *v52; // rsi
  unsigned __int64 v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  signed __int64 *v62; // rsi
  unsigned __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  int v80; // [rsp+38h] [rbp-D0h]
  int v81; // [rsp+40h] [rbp-C8h]
  __int64 v82; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR v83; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v84; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t *v85; // [rsp+70h] [rbp-98h]
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-90h]
  int v87; // [rsp+80h] [rbp-88h] BYREF
  int v88; // [rsp+84h] [rbp-84h] BYREF
  int v89; // [rsp+88h] [rbp-80h] BYREF
  ULONG Length[2]; // [rsp+90h] [rbp-78h] BYREF
  STRING *Source; // [rsp+98h] [rbp-70h]
  __int64 v92; // [rsp+A0h] [rbp-68h]
  void *v93; // [rsp+A8h] [rbp-60h] BYREF
  void *v94; // [rsp+B0h] [rbp-58h] BYREF
  void *v95; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v97; // [rsp+C8h] [rbp-40h] BYREF
  STRING *v98; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v99; // [rsp+E0h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2[54]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = 0;
  v92 = a1;
  v2 = a1;
  v83 = 0LL;
  v89 = 0;
  v96 = 0LL;
  v87 = 0;
  v94 = 0LL;
  v99 = 0LL;
  v88 = 0;
  v95 = 0LL;
  LOBYTE(v82) = 0;
  LODWORD(v84) = 0;
  v93 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  *(_QWORD *)Length = 0LL;
  CmpInitializeThreadInfo((__int64)&v99);
  v3 = 23LL * v2;
  BugCheckParameter3 = v2;
  LODWORD(inited) = 0;
  KeWaitForSingleObject(&CmpMachineHiveList[v3 + 8], Executive, 0, 0, 0LL);
  if ( v2 == CmpCheckHiveIndex )
  {
    KeWaitForSingleObject(&CmpLoadWorkerDebugEvent, Executive, 0, 0, 0LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v9 = CmpMachineHiveList[v3 + 3];
  BYTE2(CmpMachineHiveList[v3 + 7]) = 1;
  if ( v9 )
  {
    v16 = v9 + 80;
    v83 = (ULONG_PTR)v9;
    v17 = *((_DWORD *)v9 + 40);
    v85 = v9 + 80;
    if ( (v17 & 0x8001) != 0 )
    {
      if ( CmpMiniNTBoot || CmpVolatileBoot )
      {
        if ( (v17 & 2) != 0 )
        {
          CmpLockRegistry(v6, v5, v7, v8);
          HvLockHiveFlusherExclusive(v9);
          *(_DWORD *)v16 &= ~2u;
          HvUnlockHiveFlusherExclusive(v9);
          CmpUnlockRegistry(v77, v76, v78, v79);
        }
        *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
        SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
        RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)&CmpMachineHiveList[v3 + 21]);
      }
      v51 = v92;
    }
    else
    {
      v18 = (STRING *)&CmpMachineHiveList[v3 + 21];
      Source = v18;
      LODWORD(inited) = CmpOpenHiveFile(
                          (PCUNICODE_STRING)v18,
                          0,
                          &v93,
                          (int *)&v84,
                          7u,
                          0LL,
                          (int *)Length,
                          0LL,
                          0LL,
                          (__int64)BugCheckParameter2);
      if ( (inited & 0x80000000) != 0LL )
        goto LABEL_99;
      v19 = (16 * ((_DWORD)v84 == 2)) | 2;
      LODWORD(inited) = CmpOpenHiveFile(
                          (PCUNICODE_STRING)&CmpMachineHiveList[v3 + 21],
                          4,
                          &v94,
                          &v87,
                          v19,
                          0LL,
                          0LL,
                          0LL,
                          0LL,
                          (__int64)BugCheckParameter2);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 16;
        goto LABEL_99;
      }
      LODWORD(inited) = CmpOpenHiveFile(
                          (PCUNICODE_STRING)&CmpMachineHiveList[v3 + 21],
                          5,
                          &v95,
                          &v88,
                          v19,
                          0LL,
                          0LL,
                          0LL,
                          0LL,
                          (__int64)BugCheckParameter2);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 32;
        goto LABEL_99;
      }
      v20 = v93;
      LODWORD(inited) = CmpGetFileSize(v93, &v96);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 40;
        goto LABEL_99;
      }
      v21 = v94;
      FileSize = CmpGetFileSize(v94, &v97);
      v24 = FileSize;
      if ( FileSize < 0 )
      {
        CmpLogFailureToGetFileSize(v23, 4LL, (unsigned int)FileSize);
        *((_QWORD *)v9 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v9;
        SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v24, 43);
        *(_QWORD *)&v97 = 0LL;
      }
      v25 = v95;
      v26 = CmpGetFileSize(v95, (_QWORD *)&v97 + 1);
      v28 = v26;
      if ( v26 < 0 )
      {
        CmpLogFailureToGetFileSize(v27, 5LL, (unsigned int)v26);
        *((_QWORD *)v9 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v9;
        SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v28, 45);
        *((_QWORD *)&v97 + 1) = 0LL;
      }
      CmpBecomeActiveFlusherAndReconciler(v9);
      CmpLockRegistry(v30, v29, v31, v32);
      HvLockHiveFlusherExclusive(v9);
      v33 = v97;
      v34 = v96;
      *((_QWORD *)v9 + 193) = v20;
      *((_QWORD *)v9 + 197) = v21;
      v16 = v85;
      *((_QWORD *)v9 + 198) = v25;
      *((_QWORD *)v9 + 225) = v34;
      *((_OWORD *)v9 + 113) = v33;
      *(_DWORD *)v16 &= ~2u;
      v35 = *((_DWORD *)v9 + 1028) & 0x8000;
      *((_DWORD *)v9 + 1028) = HIDWORD(CmpMachineHiveList[v3 + 4]);
      *((_DWORD *)v9 + 47) = Length[1];
      if ( (int)CmpDoFileSetSizeEx((__int64)v9, 0, (unsigned int)(*((_DWORD *)v9 + 70) + 4096), 1) < 0 )
        CmpCannotWriteConfiguration = 1;
      HvUnlockHiveFlusherExclusive(v9);
      CmpUnlockRegistry(v37, v36, v38, v39);
      if ( v35 )
      {
        LODWORD(inited) = CmpRecoverFlushProtocolStateFromFiles((ULONG_PTR)v9);
        if ( (inited & 0x80000000) != 0LL )
        {
          v18 = Source;
          v1 = 72;
          goto LABEL_99;
        }
      }
      CmpLockRegistry(v41, v40, v42, v43);
      HvLockHiveFlusherExclusive(v9);
      v44 = Length[0];
      if ( *((_DWORD *)v9 + 34) != Length[0] )
      {
        for ( i = 0; i < *((_DWORD *)v9 + 22); i += v44 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v9 + 44), i, v44) )
            RtlSetBits((PRTL_BITMAP)(v9 + 44), i, v44);
        }
        v46 = RtlNumberOfSetBits((PRTL_BITMAP)(v9 + 44));
        v16 = v85;
        *((_DWORD *)v9 + 26) = v46;
        *((_DWORD *)v9 + 34) = v44;
      }
      v47 = v9 + 32;
      v48 = *((_QWORD *)v9 + 8);
      if ( *(_DWORD *)(v48 + 4092) || (*(_DWORD *)(v48 + 4088) & 4) != 0 || v35 )
      {
        RtlSetAllBits((PRTL_BITMAP)(v9 + 44));
        *((_DWORD *)v9 + 26) = *((_DWORD *)v9 + 22);
      }
      HvUnlockHiveFlusherExclusive(v9);
      CmpUnlockRegistry(v59, v58, v60, v61);
      CmpLockRegistryExclusive();
      v51 = v92;
      if ( (_DWORD)v92 == 3 )
      {
        v62 = (signed __int64 *)(v9 + 36);
        v63 = KeAbPreAcquire((__int64)v62, 0LL);
        if ( _InterlockedCompareExchange64(v62, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v62, 0LL, v63, (__int64)v62);
        if ( v63 )
          *(_BYTE *)(v63 + 18) = 1;
        CmpMarkCurrentValueDirty(v83);
        if ( _InterlockedCompareExchange64(v62, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v62);
        KeAbPostRelease((ULONG_PTR)v62);
        v9 = (wchar_t *)v83;
      }
      CmpMachineHiveList[v3 + 6] = v9;
      LODWORD(inited) = HvpDropPagedBins((ULONG_PTR)v9);
      if ( (inited & 0x80000000) != 0LL )
      {
        v18 = Source;
        v1 = 80;
LABEL_99:
        *((_QWORD *)v9 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v9;
        SetFailureLocation((__int64)BugCheckParameter2, 0, 22, inited, v1);
        CmpPuntBoot = 1;
        v98 = v18;
        ExRaiseHardError(3221226008LL, 1LL, 1LL, &v98, 1, &v89);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, BugCheckParameter3, (int)inited);
      }
      CmpUnlockRegistry(v65, v64, v66, v67);
      CmpFinishBeingActiveFlusherAndReconciler(v9);
      if ( *(_DWORD *)(*(_QWORD *)v47 + 4092LL) || (*(_DWORD *)(*(_QWORD *)v47 + 4088LL) & 4) != 0 )
      {
        if ( !ExIsSoftBoot() )
          CmpFlushHive((ULONG_PTR)v9, 0xCu);
        CmpLockRegistry(v69, v68, v70, v71);
        HvLockHiveFlusherExclusive(v9);
        *(_DWORD *)(*(_QWORD *)v47 + 4092LL) = 0;
        *(_DWORD *)(*(_QWORD *)v47 + 4088LL) &= ~4u;
        HvUnlockHiveFlusherExclusive(v9);
        CmpUnlockRegistry(v73, v72, v74, v75);
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
      *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
      RtlAppendStringToString(&SystemHiveFullPathName, Source);
      if ( CmpDoIdleProcessing && (int)CmpInitBackupHive(v9, CmpMachineHiveList[v3]) < 0 )
        CmpDoIdleProcessing = 0;
    }
    *((_DWORD *)v9 + 1028) |= 4u;
    if ( v51 == 3 )
    {
      CmpLockRegistry(v6, v5, v7, v8);
      v52 = (signed __int64 *)(v9 + 36);
      v53 = KeAbPreAcquire((__int64)v52, 0LL);
      if ( _InterlockedCompareExchange64(v52, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v52, 0LL, v53, (__int64)v52);
      if ( v53 )
        *(_BYTE *)(v53 + 18) = 1;
      *(_DWORD *)v16 |= 0x200u;
      if ( _InterlockedCompareExchange64(v52, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v52);
      KeAbPostRelease((ULONG_PTR)v52);
      CmpUnlockRegistry(v55, v54, v56, v57);
      v9 = (wchar_t *)v83;
    }
    goto LABEL_13;
  }
  inited = (int)CmpInitHiveFromFile(
                  (unsigned __int16 *)&CmpMachineHiveList[v3 + 21],
                  (unsigned int)CmpMachineHiveList[v3 + 4],
                  &v83,
                  (char *)&CmpMachineHiveList[v3 + 7] + 3,
                  22609921,
                  0LL,
                  v80,
                  v81,
                  (__int64)&v82,
                  BugCheckParameter2);
  v5 = 3221225524LL;
  if ( v2 == 6 && !BYTE4(CmpMachineHiveList[v3 + 7]) && ((_DWORD)inited == -1073741772 || (_DWORD)inited == -1073741765)
    || (v10 = (int)CmpMachineHiveList[v3 + 4], (v10 & 0x8000) != 0)
    && !BYTE4(CmpMachineHiveList[v3 + 7])
    && (_DWORD)inited == -1073741772 )
  {
    LODWORD(inited) = 0;
    goto LABEL_18;
  }
  if ( (_DWORD)inited == -1073741431 )
  {
    if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v6) )
      goto LABEL_18;
LABEL_90:
    CmpPuntBoot = 1;
    KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, inited);
  }
  if ( (inited & 0x80000000) != 0LL )
    goto LABEL_90;
  v9 = (wchar_t *)v83;
  if ( (v10 & 0x8000) == 0 && (!*(_QWORD *)(v83 + 1576) || !*(_QWORD *)(v83 + 1584)) )
    goto LABEL_90;
  *(_DWORD *)(v83 + 4112) = HIDWORD(CmpMachineHiveList[v3 + 4]) | 4;
  CmpMachineHiveList[v3 + 6] = v9;
  if ( (_BYTE)v82 )
  {
    CmpInitRmLogOnLoad = 1;
    v49 = 7LL;
    v50 = &stru_140C026D0;
    do
    {
      KeSetEvent(v50, 0, 0);
      v50 = (struct _KEVENT *)((char *)v50 + 184);
      --v49;
    }
    while ( v49 );
  }
  if ( (*((_DWORD *)v9 + 40) & 0x8001) == 0
    && CmpDoIdleProcessing
    && (int)CmpInitBackupHive(v9, CmpMachineHiveList[v3]) < 0 )
  {
    CmpDoIdleProcessing = 0;
  }
LABEL_13:
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v6, v5, v7) )
  {
    if ( (*((_DWORD *)v9 + 40) & 0x8001) == 0 )
    {
      if ( *((_QWORD *)v9 + 193) )
      {
        v13 = CmpApplyAdminSdOnHiveFiles((ULONG_PTR)v9, (ULONG_PTR)CmpMachineHiveList[v3]);
        LODWORD(inited) = v13;
        if ( v13 < 0 )
          KeBugCheckEx(0x51u, 0x13uLL, (ULONG_PTR)v9, (ULONG_PTR)CmpMachineHiveList[v3], v13);
      }
    }
    CmpReleaseShutdownRundown(v12, v11);
  }
  else
  {
    LODWORD(inited) = -1073741431;
  }
LABEL_18:
  BYTE1(CmpMachineHiveList[v3 + 7]) = 1;
  KeSetEvent((PRKEVENT)&CmpMachineHiveList[v3 + 11], 0, 0);
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 6 && (unsigned int)CmpCheckHiveIndex < 7 )
    KeSetEvent(&CmpLoadWorkerDebugEvent, 0, 0);
  v14 = CmpMachineHiveList[v3 + 22];
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_OWORD *)&CmpMachineHiveList[v3 + 21] = 0LL;
  }
  PsTerminateSystemThread(inited);
  return CmCleanupThreadInfo((__int64 *)&v99);
}
