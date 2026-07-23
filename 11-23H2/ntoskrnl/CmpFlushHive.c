/*
 * XREFs of CmpFlushHive @ 0x140753078
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F682C (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x1402F6BDC (CmpDoFlushAll.c)
 *     CmShutdownSystem1 @ 0x140616114 (CmShutdownSystem1.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmpInitHiveFromFile @ 0x14068B418 (CmpInitHiveFromFile.c)
 *     CmpDoReconcileNextHive @ 0x140750C30 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x140752110 (CmpDoFlushNextHive.c)
 *     CmpTransMgrPrepare @ 0x140768C8C (CmpTransMgrPrepare.c)
 *     NtFlushKey @ 0x1407AC6B0 (NtFlushKey.c)
 *     CmpTransMgrSyncHive @ 0x1407E7C80 (CmpTransMgrSyncHive.c)
 *     CmpFinishSystemHivesLoad @ 0x14080B1E0 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408632EC (CmpMountPreloadedHives.c)
 *     CmFreezeRegistry @ 0x140A135B0 (CmFreezeRegistry.c)
 *     CmReplaceKey @ 0x140A159A4 (CmReplaceKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     RtlNumberOfSetBits @ 0x140293800 (RtlNumberOfSetBits.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     CmpArmLazyWriter @ 0x1402E7524 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     HvUnCOWReconciledPages @ 0x1402F62C4 (HvUnCOWReconciledPages.c)
 *     RtlMergeBitMaps @ 0x1402F6570 (RtlMergeBitMaps.c)
 *     HvMarkDirtyForFlush @ 0x1402F66EC (HvMarkDirtyForFlush.c)
 *     CmpAcquireWriteQueue @ 0x1402F6BA4 (CmpAcquireWriteQueue.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmpIsWriteQueueActive @ 0x1402F6E64 (CmpIsWriteQueueActive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     HvStoreModifiedData @ 0x140707744 (HvStoreModifiedData.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14074DAAC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     CmpFileFlushAndPurge @ 0x140750DB4 (CmpFileFlushAndPurge.c)
 *     HvWriteLogFile @ 0x140750F84 (HvWriteLogFile.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1407510EC (HvTruncateCurrentLogFileIfRequired.c)
 *     HvFreeDirtyData @ 0x14075116C (HvFreeDirtyData.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140751390 (HvpLogTypeToLogArrayIndex.c)
 *     CmpWakeWriteQueueWaiters @ 0x14075236C (CmpWakeWriteQueueWaiters.c)
 *     CmpReleaseWriteQueue @ 0x1407523C8 (CmpReleaseWriteQueue.c)
 *     CmpLogFlushPhaseStart @ 0x140752F60 (CmpLogFlushPhaseStart.c)
 *     CmpLogFlushPhaseEnd @ 0x140752FDC (CmpLogFlushPhaseEnd.c)
 *     CmpTraceHiveFlushStop @ 0x14075397C (CmpTraceHiveFlushStop.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     CmpGenerateFlushControlData @ 0x140753A5C (CmpGenerateFlushControlData.c)
 *     HvWriteHivePrimaryFile @ 0x1407D97D0 (HvWriteHivePrimaryFile.c)
 *     HvFreeUnreconciledData @ 0x1407D9D64 (HvFreeUnreconciledData.c)
 *     HvSwapLogFiles @ 0x1407DEAA4 (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1407E6400 (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1407E7D64 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1407E7DEC (HvResetLogFileStatusAll.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140860718 (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140A20C30 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFoldBackDirtyData @ 0x140A20CB0 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x140A20D9C (HvFoldBackUnreconciledData.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF5670 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF568C (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned __int16 *v2; // rbx
  int valid; // r15d
  REGHANDLE v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  unsigned int v12; // r12d
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r8d
  char v16; // r13
  unsigned int v17; // r14d
  _QWORD *v18; // rcx
  char v19; // al
  int v20; // r12d
  volatile signed __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // r12d
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  char v40; // bl
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct _KEVENT *v43; // rax
  LONG v44; // r8d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  struct _KEVENT *v49; // r13
  bool v50; // r12
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  LONG v55; // r8d
  LONG v56; // r8d
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rcx
  unsigned int v69; // eax
  int v70; // esi
  ULONGLONG v71; // rax
  unsigned int v72; // r9d
  __int64 v73; // rax
  unsigned int v74; // r9d
  ULONGLONG v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // r9d
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  int v84; // eax
  unsigned int v85; // ebx
  __int64 v86; // rcx
  _WORD v87[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v88; // [rsp+40h] [rbp-C8h]
  PRKEVENT Event; // [rsp+48h] [rbp-C0h] BYREF
  PRKEVENT Event_8[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v91; // [rsp+60h] [rbp-A8h]
  int v92; // [rsp+68h] [rbp-A0h]
  int v93; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v94; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v95; // [rsp+78h] [rbp-90h] BYREF
  int v96; // [rsp+80h] [rbp-88h] BYREF
  int v97; // [rsp+84h] [rbp-84h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v100[2]; // [rsp+E8h] [rbp-20h] BYREF
  PRKEVENT *p_Event; // [rsp+108h] [rbp+0h]
  int v102; // [rsp+110h] [rbp+8h]
  int v103; // [rsp+114h] [rbp+Ch]
  int *v104; // [rsp+118h] [rbp+10h]
  int v105; // [rsp+120h] [rbp+18h]
  int v106; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v107; // [rsp+128h] [rbp+20h] BYREF
  _DWORD *v108; // [rsp+148h] [rbp+40h]
  __int64 v109; // [rsp+150h] [rbp+48h]
  __int64 v110; // [rsp+158h] [rbp+50h]
  _DWORD v111[2]; // [rsp+160h] [rbp+58h] BYREF
  _DWORD *v112; // [rsp+168h] [rbp+60h]
  __int64 v113; // [rsp+170h] [rbp+68h]
  __int64 v114; // [rsp+178h] [rbp+70h]
  _DWORD v115[2]; // [rsp+180h] [rbp+78h] BYREF
  unsigned int *v116; // [rsp+188h] [rbp+80h]
  __int64 v117; // [rsp+190h] [rbp+88h]

  v2 = (unsigned __int16 *)(BugCheckParameter2 + 1856);
  v91 = 0LL;
  v92 = 0;
  v93 = 0;
  valid = 0;
  *(_OWORD *)Event_8 = 0LL;
  if ( (unsigned int)dword_140C04390 > 4 )
  {
    v94 = a2;
    v108 = v111;
    v110 = *(_QWORD *)(BugCheckParameter2 + 1864);
    v111[0] = *v2;
    v112 = v115;
    v114 = *(_QWORD *)(BugCheckParameter2 + 1848);
    v115[0] = *(unsigned __int16 *)(BugCheckParameter2 + 1840);
    v116 = &v94;
    v109 = 2LL;
    v111[1] = 0;
    v113 = 2LL;
    v115[1] = 0;
    v117 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04390, (unsigned __int8 *)word_140036C32, 0LL, 0LL, 7u, &v107);
  }
  v6 = EtwpRegTraceHandle;
  v95 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v71 = *(_QWORD *)(BugCheckParameter2 + 1848);
    v72 = 0;
    v87[0] = 0;
    if ( v71 )
    {
      UserData[0].Ptr = v71;
      v72 = 1;
      UserData[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1840);
      UserData[0].Reserved = 0;
    }
    v73 = v72;
    v74 = v72 + 1;
    UserData[v73].Ptr = (ULONGLONG)v87;
    *(_QWORD *)&UserData[v73].Size = 2LL;
    v75 = *((_QWORD *)v2 + 1);
    if ( v75 )
    {
      v76 = v74++;
      UserData[v76].Ptr = v75;
      UserData[v76].Size = *v2;
      *(&UserData[0].Reserved + 1 * v76) = 0;
    }
    v77 = v74;
    v78 = v74 + 1;
    UserData[v77].Ptr = (ULONGLONG)v87;
    *(_QWORD *)&UserData[v77].Size = 2LL;
    v79 = v78;
    UserData[v79].Ptr = (ULONGLONG)&v95;
    *(_QWORD *)&UserData[v79].Size = 4LL;
    EtwWrite(v6, &EventDescriptor, 0LL, v78 + 1, UserData);
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) != 0 )
    goto LABEL_86;
  if ( !*(_QWORD *)(BugCheckParameter2 + 1544) )
  {
    valid = -1073741811;
    goto LABEL_86;
  }
  v11 = a2 | 0xC;
  v12 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 160) & 2) == 0 )
    v11 = a2;
  LODWORD(v88) = (v11 >> 4) & 1;
  v13 = v11 & 1;
  LODWORD(Event) = v13;
  while ( 1 )
  {
    if ( v13 )
      CmpLockRegistry(v8, v7, v9, v10);
    else
      CmpLockRegistryFreezeAware(0LL);
    HvLockHiveFlusherExclusive(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 164) & 4) != 0 && (v11 & 0x40) == 0 )
    {
      HvUnlockHiveFlusherExclusive(BugCheckParameter2);
      CmpUnlockRegistry(v81, v80, v82, v83);
      valid = -1073741431;
      goto LABEL_86;
    }
    if ( (v11 & 2) != 0
      && (CmpIsWriteQueueActive((_QWORD *)(BugCheckParameter2 + 4208))
       || CmpIsWriteQueueActive((_QWORD *)(BugCheckParameter2 + 4192)) && (v11 & 4) == 0) )
    {
      goto LABEL_85;
    }
    if ( (v11 & 4) != 0 && CmpIsWriteQueueActive((_QWORD *)(BugCheckParameter2 + 4208)) )
      goto LABEL_93;
    if ( !CmpIsWriteQueueActive((_QWORD *)(BugCheckParameter2 + 4192)) )
      break;
    if ( v15 )
    {
      v70 = 0;
    }
    else if ( *(_DWORD *)(BugCheckParameter2 + 104) || (v70 = 2, *(_BYTE *)(BugCheckParameter2 + 195)) )
    {
      v70 = 1;
    }
    valid = CmpWaitOnHiveWriteQueue(BugCheckParameter2, v14);
    if ( valid >= 0 )
      v12 += v70;
LABEL_122:
    if ( v12 >= 2 )
      goto LABEL_86;
    v13 = (int)Event;
  }
  CmpGenerateFlushControlData(BugCheckParameter2, v11, Event_8);
  v16 = (char)Event_8[1];
  v17 = (unsigned int)Event_8[0];
  if ( (unsigned int)dword_140C04390 > 4 )
  {
    v103 = 0;
    v106 = 0;
    p_Event = (PRKEVENT *)&v96;
    v102 = 4;
    v104 = &v97;
    v105 = 4;
    v96 = (int)Event_8[0];
    v97 = (int)Event_8[1];
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04390, (unsigned __int8 *)byte_140036BE7, 0LL, 0LL, 4u, v100);
  }
  if ( (v17 & 0x358) == 0 )
  {
LABEL_85:
    HvUnlockHiveFlusherExclusive(BugCheckParameter2);
    CmpUnlockRegistry(v58, v57, v59, v60);
    valid = 0;
    goto LABEL_86;
  }
  if ( (v17 & 2) == 0 )
    goto LABEL_21;
  if ( CmpIsWriteQueueActive((_QWORD *)(BugCheckParameter2 + 4208)) )
  {
LABEL_93:
    CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 4208);
    goto LABEL_122;
  }
  CmpAcquireWriteQueue(v18);
LABEL_21:
  if ( (v17 & 1) != 0 )
    CmpAcquireWriteQueue((_QWORD *)(BugCheckParameter2 + 4192));
  v19 = (v17 & 0x110) != 0;
  v20 = (v17 >> 6) & 1;
  if ( (v17 & 8) == 0 )
  {
LABEL_32:
    if ( (v17 & 0x158) != 0 )
    {
      v24 = HvStoreModifiedData(BugCheckParameter2, v19, v20);
      if ( v24 )
      {
        v84 = v24 - 1;
        if ( !v84 )
        {
          valid = 0;
          LOBYTE(v33) = BYTE4(Event_8[0]) | 2;
          goto LABEL_70;
        }
        valid = -1073741823;
        if ( v84 == 1 )
        {
          LOBYTE(v33) = BYTE4(Event_8[0]);
          goto LABEL_70;
        }
      }
    }
    if ( (v17 & 0x80u) != 0 )
    {
      v85 = *(_DWORD *)(BugCheckParameter2 + 280);
      v26 = *(_DWORD *)(BugCheckParameter2 + 4228);
      if ( v85 > v26 )
      {
        v27 = v85 + 4096;
        *(_DWORD *)(BugCheckParameter2 + 4228) = 0;
LABEL_36:
        HvUnlockHiveFlusherExclusive(BugCheckParameter2);
        CmpUnlockRegistry(v29, v28, v30, v31);
        if ( (v17 & 0x80u) != 0 )
        {
          CmpLogFlushPhaseStart(v32, 1);
          valid = HvExtendHivePrimaryFileValidDataLength(BugCheckParameter2, v27, (unsigned int)v88);
          CmpLogFlushPhaseEnd(v86, 1, valid);
          LOBYTE(v33) = BYTE4(Event_8[0]);
          if ( valid < 0 )
            goto LABEL_55;
          v33 = HIDWORD(Event_8[0]) | 0x21;
          HIDWORD(Event_8[0]) |= 0x21u;
        }
        else
        {
          v33 = HIDWORD(Event_8[0]);
        }
        if ( (v17 & 8) != 0 )
        {
          CmpLogFlushPhaseStart(v32, 2);
          valid = HvWriteLogFile(BugCheckParameter2, v34, v35, &v93);
          CmpLogFlushPhaseEnd(v36, 2, valid);
          if ( valid < 0 )
            goto LABEL_55;
          HvTruncateCurrentLogFileIfRequired(BugCheckParameter2);
          v33 |= 2u;
          HIDWORD(Event_8[0]) = v33;
        }
        if ( (v17 & 0x10) != 0 )
        {
          CmpLogFlushPhaseStart(v32, 3);
          v40 = v88;
          LOBYTE(v63) = 1;
          valid = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0LL, v63, v88);
          CmpLogFlushPhaseEnd(v64, 3, valid);
          if ( valid < 0 )
          {
            v17 |= 0x400u;
            goto LABEL_55;
          }
          v33 |= 0x20u;
          HIDWORD(Event_8[0]) = v33;
        }
        else
        {
          v40 = v88;
        }
        CmpLogFlushPhaseStart(v32, 4);
        if ( (v17 & 0x448) == 0x48 )
        {
          RtlMergeBitMaps(BugCheckParameter2 + 1736, (unsigned int *)(BugCheckParameter2 + 1688));
          HvFreeDirtyData(BugCheckParameter2);
          v33 |= 4u;
          HIDWORD(Event_8[0]) = v33;
        }
        CmpLogFlushPhaseEnd(v41, 4, valid);
        if ( (v17 & 0x20) != 0 )
        {
          LOBYTE(v37) = (v16 & 4) != 0;
          HvSwapLogFiles(BugCheckParameter2, v37);
          v33 |= 8u;
          HIDWORD(Event_8[0]) = v33;
        }
        if ( (v17 & 0x45) == 0x41 )
        {
          CmpLockRegistry(v32, v37, v38, v39);
          HvLockHiveFlusherExclusive(BugCheckParameter2);
          v43 = (struct _KEVENT *)CmpReleaseWriteQueue(v42, (_QWORD *)(BugCheckParameter2 + 4192));
          v44 = -1073741823;
          if ( (BYTE4(Event_8[0]) & 2) != 0 )
            v44 = valid;
          CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4192, v43, v44);
          LOBYTE(v33) = v33 | 0x10;
          HvUnlockHiveFlusherExclusive(BugCheckParameter2);
          CmpUnlockRegistry(v46, v45, v47, v48);
        }
        if ( (v17 & 0x40) != 0 )
        {
          CmpLogFlushPhaseStart(v32, 5);
          valid = HvWriteHivePrimaryFile(BugCheckParameter2);
          CmpLogFlushPhaseEnd(v62, 5, valid);
          if ( valid < 0 )
            goto LABEL_55;
          LOBYTE(v33) = v33 | 0x20;
        }
        if ( (v17 & 0x100) != 0 )
        {
          CmpLogFlushPhaseStart(v32, 6);
          LOBYTE(v65) = 1;
          LOBYTE(v66) = 1;
          valid = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v66, v65, v40);
          CmpLogFlushPhaseEnd(v67, 6, valid);
          if ( valid < 0 )
            goto LABEL_55;
          LOBYTE(v33) = v33 | 0x20;
          HvTruncateAllLogFilesIfRequired(BugCheckParameter2);
        }
        if ( (v17 & 0x200) != 0 && (v33 & 0x20) == 0 )
        {
          CmpLogFlushPhaseStart(v32, 7);
          if ( (int)CmpFileFlushAndPurge(BugCheckParameter2, 0) >= 0 )
            LOBYTE(v33) = v33 | 0x20;
          CmpLogFlushPhaseEnd(v68, 7, (v33 & 0x20) == 0 ? 0xC0000001 : 0);
        }
        valid = 0;
LABEL_55:
        CmpLockRegistry(v32, v37, v38, v39);
        HvLockHiveFlusherExclusive(BugCheckParameter2);
        if ( valid < 0 && (v17 & 0x80u) != 0 && (v33 & 1) == 0 )
          *(_DWORD *)(BugCheckParameter2 + 4228) = v26;
        if ( (v33 & 0x20) != 0 )
        {
          *(_DWORD *)(BugCheckParameter2 + 4228) = 0;
          *(_DWORD *)(BugCheckParameter2 + 4224) |= 1u;
        }
        if ( valid < 0 )
        {
          if ( (v33 & 2) != 0 && (v17 & 0x400) != 0 )
          {
            *(_DWORD *)(BugCheckParameter2 + 180) -= v93;
            --*(_DWORD *)(BugCheckParameter2 + 172);
            LOBYTE(v33) = v33 & 0xFD;
          }
          goto LABEL_61;
        }
        if ( (v17 & 0x800) != 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 4144) = KiQueryUnbiasedInterruptTime();
          if ( (v17 & 0x1000) != 0 )
            goto LABEL_114;
          CmpArmLazyWriter(1LL, 0LL, 0);
        }
        if ( (v17 & 0x1000) == 0 )
        {
LABEL_61:
          if ( ((v17 >> 6) & 1) != 0 )
          {
            if ( valid < 0 )
            {
              HvFoldBackUnreconciledData(BugCheckParameter2);
            }
            else
            {
              HvUnCOWReconciledPages(BugCheckParameter2);
              HvFreeUnreconciledData(BugCheckParameter2);
              if ( (v17 & 1) == 0 || (v33 & 0x10) != 0 )
              {
                v25 = *(unsigned int *)(BugCheckParameter2 + 168);
                if ( (unsigned int)(v25 - 4) <= 1 )
                {
                  LOBYTE(v69) = HvpLogTypeToLogArrayIndex(5 - ((_DWORD)v25 != 4));
                  v25 = v69;
                  *(_BYTE *)(v69 + BugCheckParameter2 + 192) = 0;
                }
              }
              else
              {
                HvResetLogFileStatusAll(BugCheckParameter2);
                *(_DWORD *)(BugCheckParameter2 + 180) = 0;
                if ( (unsigned __int8)HvIsCurrentLogSwappable() )
                  HvSwapLogFiles(v25, 0LL);
              }
            }
          }
          if ( (v17 & 0x110) != 0 )
            HvFreeUnreconciledData(BugCheckParameter2);
          if ( (v17 & 8) != 0 && (v33 & 4) == 0 )
          {
            if ( (v33 & 2) != 0 )
            {
              if ( ((v17 >> 6) & 1) == 0 )
              {
                RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)(BugCheckParameter2 + 1688));
                *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
              }
              HvFreeDirtyData(BugCheckParameter2);
            }
            else
            {
              HvFoldBackDirtyData(BugCheckParameter2);
            }
          }
          goto LABEL_70;
        }
LABEL_114:
        CmpArmLazyWriter(1LL, 0LL, 1);
        goto LABEL_61;
      }
      v17 &= ~0x80u;
    }
    v26 = v91;
    v27 = HIDWORD(v91);
    goto LABEL_36;
  }
  v21 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  v22 = KeAbPreAcquire(BugCheckParameter2 + 80, 0LL);
  v23 = v22;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 80), v22, BugCheckParameter2 + 80);
  if ( v23 )
    *(_BYTE *)(v23 + 18) = 1;
  valid = HvMarkDirtyForFlush(BugCheckParameter2);
  if ( valid >= 0 )
  {
    if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
    KeAbPostRelease(BugCheckParameter2 + 80);
    v19 = (v17 & 0x110) != 0;
    v16 = (char)Event_8[1];
    v17 = (unsigned int)Event_8[0];
    goto LABEL_32;
  }
  if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
  KeAbPostRelease(BugCheckParameter2 + 80);
  LOBYTE(v33) = BYTE4(Event_8[0]);
  valid = -1073741823;
  LOBYTE(v17) = Event_8[0];
LABEL_70:
  Event = 0LL;
  v49 = 0LL;
  v50 = (v17 & 1) != 0 && (v33 & 0x10) == 0;
  if ( v50 )
    Event = (PRKEVENT)CmpReleaseWriteQueue(v25, (_QWORD *)(BugCheckParameter2 + 4192));
  if ( (v17 & 2) != 0 )
    v49 = (struct _KEVENT *)CmpReleaseWriteQueue(v25, (_QWORD *)(BugCheckParameter2 + 4208));
  HvUnlockHiveFlusherExclusive(BugCheckParameter2);
  CmpUnlockRegistry(v52, v51, v53, v54);
  if ( v50 )
  {
    if ( (v33 & 2) != 0 )
      v55 = 0;
    else
      v55 = -1073741823;
    CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4192, Event, v55);
  }
  if ( (v17 & 2) != 0 )
  {
    v56 = valid;
    if ( (v17 & 0x40) == 0 )
      v56 = -1073741823;
    CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4208, v49, v56);
  }
LABEL_86:
  CmpTraceHiveFlushStop((unsigned int)valid);
  if ( (unsigned int)dword_140C04390 > 4 )
  {
    v103 = 0;
    p_Event = &Event;
    LODWORD(Event) = valid;
    v102 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04390, (unsigned __int8 *)&byte_140036B6F, 0LL, 0LL, 3u, v100);
  }
  return (unsigned int)valid;
}
