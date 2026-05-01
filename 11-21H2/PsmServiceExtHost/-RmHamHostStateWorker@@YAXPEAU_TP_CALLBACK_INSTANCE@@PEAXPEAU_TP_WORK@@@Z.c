/*
 * XREFs of ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800121C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180005474 (-HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180007674 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800076D0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B0E0 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D214 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E63C (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013510 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013A00 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014A10 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180017F20 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001CAB0 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180024940 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002AAC0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002D444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002D998 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002DACC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800362DC (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x1800363B8 (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180038AB0 (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800399C0 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180039DA0 (-HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18003D160 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003DFDC (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180050350 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800773EC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800798AC (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x18007B184 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007B2C0 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18007B324 (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800874A8 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmHamHostStateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v4; // ebx
  char *v5; // r15
  __int64 v6; // r13
  DWORD v7; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v10; // edi
  _QWORD *v11; // rbx
  char *v12; // rbx
  char *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // r12
  DWORD v19; // edi
  __int64 v20; // rsi
  _QWORD *v21; // rbx
  unsigned int v22; // ebx
  __int64 *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // eax
  int v26; // r12d
  int v27; // eax
  struct _HAM_DEPENDENCY_GROUP *v28; // rcx
  unsigned int v29; // esi
  DWORD v30; // edi
  __int64 v31; // r13
  _QWORD *v32; // rbx
  bool v33; // bl
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  int v38; // edx
  char *v39; // rbx
  char *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // ebx
  __int64 *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // eax
  __int64 *v48; // rax
  __int64 v49; // rcx
  signed __int64 v50; // rdi
  bool v51; // cc
  signed __int64 v52; // rdi
  DWORD v53; // ebx
  int v54; // eax
  __int64 v55; // r13
  int v56; // ebx
  int v57; // edi
  __int16 v58; // cx
  bool v59; // r9
  int v60; // r9d
  int v61; // ecx
  __int16 v62; // r8
  __int64 *v63; // rax
  __int64 v64; // rcx
  DWORD v65; // edi
  _QWORD *v66; // rbx
  __int64 v67; // rdx
  unsigned int v68; // ecx
  struct _RM_HAM_ACTIVITY_HOST *v69; // rdx
  NTSTATUS v70; // ebx
  const unsigned __int16 *v71; // rcx
  __int64 v72; // rax
  int v73; // edx
  DWORD v74; // edi
  _QWORD *v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rdx
  int v78; // ecx
  struct _RM_PARTITION *v79; // rcx
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  __int64 v81; // rdx
  unsigned int IsSuspendWaiter; // ebx
  bool v83; // zf
  __int64 v84; // rcx
  unsigned __int64 v85; // rax
  __int64 v86; // rcx
  BOOL v87; // eax
  int v88; // eax
  int v89; // r8d
  int v90; // r9d
  int v91; // ecx
  void *v92; // rcx
  unsigned int v93; // [rsp+30h] [rbp-D0h]
  NTSTATUS v94; // [rsp+30h] [rbp-D0h]
  unsigned int v95; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v96; // [rsp+38h] [rbp-C8h]
  struct _HAM_DEPENDENCY_GROUP *v97; // [rsp+40h] [rbp-C0h]
  BOOL v98; // [rsp+48h] [rbp-B8h]
  __int64 v99; // [rsp+50h] [rbp-B0h] BYREF
  int v100; // [rsp+58h] [rbp-A8h] BYREF
  int v101; // [rsp+5Ch] [rbp-A4h] BYREF
  char v102[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v103[4]; // [rsp+64h] [rbp-9Ch] BYREF
  NTSTATUS v104; // [rsp+68h] [rbp-98h] BYREF
  char v105[4]; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v106; // [rsp+70h] [rbp-90h] BYREF
  int v107; // [rsp+74h] [rbp-8Ch] BYREF
  int v108; // [rsp+78h] [rbp-88h] BYREF
  int v109; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v110; // [rsp+80h] [rbp-80h] BYREF
  __int64 v111; // [rsp+88h] [rbp-78h] BYREF
  __int64 v112; // [rsp+90h] [rbp-70h] BYREF
  __int64 v113; // [rsp+98h] [rbp-68h] BYREF
  __int64 v114; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v115; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v116; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR v118; // [rsp+C8h] [rbp-38h] BYREF
  EVENT_DESCRIPTOR v119; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DESCRIPTOR v120; // [rsp+E8h] [rbp-18h] BYREF
  EVENT_DESCRIPTOR v121; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE TlsValue[144]; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1A0h] [rbp+A0h] BYREF
  void *v124; // [rsp+1B0h] [rbp+B0h]
  int v125; // [rsp+1B8h] [rbp+B8h]
  int v126; // [rsp+1BCh] [rbp+BCh]
  __int64 *v127; // [rsp+1C0h] [rbp+C0h]
  __int64 v128; // [rsp+1C8h] [rbp+C8h]
  int *v129; // [rsp+1D0h] [rbp+D0h]
  __int64 v130; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v131; // [rsp+1E0h] [rbp+E0h] BYREF
  void *v132; // [rsp+1F0h] [rbp+F0h]
  int v133; // [rsp+1F8h] [rbp+F8h]
  int v134; // [rsp+1FCh] [rbp+FCh]
  __int64 *v135; // [rsp+200h] [rbp+100h]
  __int64 v136; // [rsp+208h] [rbp+108h]
  int *v137; // [rsp+210h] [rbp+110h]
  __int64 v138; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v139; // [rsp+220h] [rbp+120h] BYREF
  void *v140; // [rsp+230h] [rbp+130h]
  int v141; // [rsp+238h] [rbp+138h]
  int v142; // [rsp+23Ch] [rbp+13Ch]
  __int64 *v143; // [rsp+240h] [rbp+140h]
  __int64 v144; // [rsp+248h] [rbp+148h]
  unsigned int *v145; // [rsp+250h] [rbp+150h]
  __int64 v146; // [rsp+258h] [rbp+158h]
  struct _EVENT_DATA_DESCRIPTOR v147; // [rsp+260h] [rbp+160h] BYREF
  void *v148; // [rsp+270h] [rbp+170h]
  int v149; // [rsp+278h] [rbp+178h]
  int v150; // [rsp+27Ch] [rbp+17Ch]
  __int64 *v151; // [rsp+280h] [rbp+180h]
  __int64 v152; // [rsp+288h] [rbp+188h]
  __int64 *v153; // [rsp+290h] [rbp+190h]
  __int64 v154; // [rsp+298h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR v155; // [rsp+2A0h] [rbp+1A0h] BYREF
  void *v156; // [rsp+2B0h] [rbp+1B0h]
  int v157; // [rsp+2B8h] [rbp+1B8h]
  int v158; // [rsp+2BCh] [rbp+1BCh]
  NTSTATUS *v159; // [rsp+2C0h] [rbp+1C0h]
  __int64 v160; // [rsp+2C8h] [rbp+1C8h]
  const unsigned __int16 *v161; // [rsp+2D0h] [rbp+1D0h]
  int v162; // [rsp+2D8h] [rbp+1D8h]
  int v163; // [rsp+2DCh] [rbp+1DCh]
  __int64 *v164; // [rsp+2E0h] [rbp+1E0h]
  __int64 v165; // [rsp+2E8h] [rbp+1E8h]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  v5 = a2 + 64;
  v6 = *((_QWORD *)a2 + 4);
  v110 = *((_QWORD *)a2 + 6);
  v99 = v6;
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
  {
    v100 = *((_DWORD *)a2 + 315);
    v129 = &v100;
    v127 = &v111;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    v111 = v6;
    v130 = 4LL;
    v128 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v124 = &unk_1800C3D06;
    v126 = 1;
    UserData.Reserved = 2;
    v125 = 42;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v7) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v10 = HampLockTrackerId;
  dword_1800DD4E8 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v11 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v11 |= 2uLL;
    ++v11[2];
  }
  RtlAcquireSRWLockExclusive(a2 + 64);
  *((_DWORD *)a2 + 18) = GetCurrentThreadId();
  *((_DWORD *)a2 + 180) = GetCurrentThreadId();
  while ( *((int *)a2 + 6) >= 0 )
  {
    v12 = (char *)*((_QWORD *)v5 + 76);
    if ( v12 != v5 + 608 )
    {
      v13 = v12 - 96;
      if ( v13 )
      {
        do
        {
          if ( v13[562] == 2 )
          {
            if ( v13[563] )
            {
              v54 = HampActTryStart(v13);
              if ( v54 )
              {
                if ( (unsigned int)dword_1800DC218 > 5 )
                {
                  v101 = v54;
                  v112 = *((_QWORD *)v13 + 5);
                  v137 = &v101;
                  v135 = &v112;
                  *(_DWORD *)&v118.Level = 5;
                  v131.Ptr = (ULONGLONG)off_1800DC220;
                  v138 = 4LL;
                  v136 = 8LL;
                  *(_DWORD *)&v118.Id = 184549376;
                  v118.Keyword = 0LL;
                  v131.Size = *(unsigned __int16 *)off_1800DC220;
                  v131.Reserved = 2;
                  v132 = &unk_1800C1350;
                  v133 = 49;
                  v134 = 1;
                  EventWriteTransfer(qword_1800DC238, &v118, 0LL, 0LL, 4u, &v131);
                }
              }
            }
          }
          v14 = *((_QWORD *)v13 + 12);
          v15 = *((_QWORD *)v13 + 10);
          v13 = 0LL;
          if ( v14 != v15 + 608 )
            v13 = (char *)(v14 - 96);
        }
        while ( v13 );
        v5 = a2 + 64;
      }
    }
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)v5,
      (union _RM_OPTIMIZATION_STATE *)v102,
      (union _RM_OPTIMIZATION_STATE *)v103);
    v17 = *((_QWORD *)v5 + 83);
    if ( ((v17 >> 16) & 3) == 0 )
      goto LABEL_27;
    if ( ((v17 >> 16) & 3) == 1 )
    {
      if ( v102[0] >= 0 || v103[0] < 0 || (v17 & 0x40000000000LL) != 0 )
        goto LABEL_27;
      FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v5);
      if ( FirstActivity )
      {
        while ( 1 )
        {
          if ( (*((_BYTE *)FirstActivity + 552) & 0x48) == 0 )
          {
            LOBYTE(v16) = 5;
            if ( (unsigned int)HampActIsStartedOrReachedPendState(FirstActivity, v16) )
            {
              if ( (*((_DWORD *)FirstActivity + 28) & 0x2000) != 0 )
                break;
            }
          }
          FirstActivity = HampHostGetNextActivity(FirstActivity);
          if ( !FirstActivity )
            goto LABEL_197;
        }
        v17 = *((_QWORD *)a2 + 91);
        goto LABEL_27;
      }
LABEL_197:
      if ( (v17 & 0x800000000LL) == 0 )
      {
        IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)v5, v16);
        *((_QWORD *)v5 + 83) |= 0x800000000uLL;
        if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 2) <= 1 )
          __fastfail(0xEu);
        TpPostWork(*((_QWORD *)v5 + 79));
        HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)v5, IsSuspendWaiter);
        v17 = *((_QWORD *)a2 + 91);
      }
      if ( (v17 & 0x30000) != 0 )
      {
        do
        {
          v113 = *((_QWORD *)v5 + 102);
          CempLockTrackerMarkReleased(HampLockTrackerId, v16, 1u);
          *((_DWORD *)v5 + 2) = 0;
          RtlReleaseSRWLockExclusive(v5);
          RmpReleaseGlobalLock();
          RtlWaitOnAddress(v5 + 816, &v113, 8LL);
          RmpAcquireGlobalLock();
          CempLockTrackerMarkAcquired(HampLockTrackerId, v81, 1u, 0);
          RtlAcquireSRWLockExclusive(v5);
          *((_DWORD *)v5 + 2) = GetCurrentThreadId();
        }
        while ( (*((_DWORD *)v5 + 166) & 0x30000) != 0 );
      }
    }
    else
    {
      if ( ((v17 >> 16) & 3) == 2 )
        v83 = (v17 & 0x8000000000000LL) == 0;
      else
        v83 = ((v17 >> 16) & 3) == 3;
      if ( v83 )
        goto LABEL_197;
LABEL_27:
      if ( (v17 & 0x8000000000000LL) != 0 )
      {
        HampHostCollectErrorReport((struct _RM_HAM_ACTIVITY_HOST *)v5);
      }
      else if ( (v5[672] & 0x40) != 0 )
      {
        HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v5, v16);
        RmpReleaseGlobalLock();
        TpWaitForWork(*((_QWORD *)v5 + 81), 0LL);
        RmpAcquireGlobalLock();
        HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v5, 0);
      }
      else
      {
        v18 = *((_QWORD *)v5 + 99);
        if ( !HampAppCheckQueueLicenseUpgradeForHost((struct _HAM_APPLICATION *)v18, (struct _RM_HAM_ACTIVITY_HOST *)v5) )
        {
          if ( (a2[1260] & 8) != 0 || (v5[788] & 1) == 0 )
            goto LABEL_42;
          v19 = HampLockTrackerId;
          v20 = (*((_QWORD *)v5 + 83) >> 61) & 3LL;
          if ( HampLockTrackerId != -1 )
          {
            v21 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v19) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
              __int2c();
            *v21 |= 0x20uLL;
            ++v21[6];
          }
          RtlAcquireSRWLockShared(v18 + 584);
          v22 = (*(_DWORD *)(v18 + 616) >> 23) & 3;
          if ( HampLockTrackerId != -1 )
          {
            v23 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v24 = *v23;
            if ( (*v23 & 0x20) == 0 )
              __int2c();
            v83 = v23[6]-- == 1;
            if ( v83 )
              *v23 = v24 & 0xFFFFFFFFFFFFFFDFuLL;
          }
          RtlReleaseSRWLockShared(v18 + 584);
          if ( v22 < (unsigned int)v20 )
          {
            if ( HampLockTrackerId != -1 )
            {
              v63 = (__int64 *)TlsGetValue(HampLockTrackerId);
              v64 = *v63;
              if ( (*v63 & 2) == 0 )
                __int2c();
              v83 = v63[2]-- == 1;
              if ( v83 )
                *v63 = v64 & 0xFFFFFFFFFFFFFFFDuLL;
            }
            *((_DWORD *)v5 + 2) = 0;
            RtlReleaseSRWLockExclusive(v5);
            RmpReleaseGlobalLock();
            v65 = HampLockTrackerId;
            if ( HampLockTrackerId != -1 )
            {
              v66 = TlsGetValue(HampLockTrackerId);
              if ( (*(_QWORD *)TlsGetValue(v65) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
                __int2c();
              *v66 |= 0x20uLL;
              ++v66[6];
            }
            RtlAcquireSRWLockExclusive(v18 + 584);
            *(_DWORD *)(v18 + 592) = GetCurrentThreadId();
            v68 = *(_DWORD *)(v18 + 616);
            if ( ((v68 >> 23) & 3) < (unsigned int)v20 )
            {
              while ( ((v68 >> 21) & 3) >= (unsigned int)v20 )
              {
                if ( (v68 & 0x100000) == 0 )
                {
                  *(_DWORD *)(v18 + 616) = v68 | 0x100000;
                  CempLockTrackerMarkReleased(HampLockTrackerId, v67, 5u);
                  *(_DWORD *)(v18 + 592) = 0;
                  RtlReleaseSRWLockExclusive(v18 + 584);
                  v70 = HampSystemEnsureStoreLicenseAcquisition((struct _HAM_APPLICATION *)v18, v69);
                  v94 = v70;
                  if ( (unsigned int)dword_1800DC218 > 4
                    && (qword_1800DC228 & 8) != 0
                    && (qword_1800DC230 & 8) == qword_1800DC230 )
                  {
                    v71 = (const unsigned __int16 *)(v5 + 24);
                    v114 = *((_QWORD *)v5 - 4);
                    v164 = &v114;
                    v104 = v70;
                    v165 = 8LL;
                    if ( v5 == (char *)-24LL )
                    {
                      v71 = &word_1800B7A9C;
                      v73 = 2;
                    }
                    else
                    {
                      v72 = -1LL;
                      do
                        v83 = v71[++v72] == 0;
                      while ( !v83 );
                      v73 = 2 * v72 + 2;
                    }
                    v161 = v71;
                    v159 = &v104;
                    *(_DWORD *)&v119.Level = 4;
                    v155.Ptr = (ULONGLONG)off_1800DC220;
                    v162 = v73;
                    v163 = 0;
                    v160 = 4LL;
                    *(_DWORD *)&v119.Id = 184549376;
                    v119.Keyword = 8LL;
                    v155.Size = *(unsigned __int16 *)off_1800DC220;
                    v156 = &unk_1800C161D;
                    v158 = 1;
                    v155.Reserved = 2;
                    v157 = 54;
                    v96 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                    EventWriteTransfer(qword_1800DC238, &v119, 0LL, 0LL, 5u, &v155);
                  }
                  if ( v70 < 0 )
                    HampAppRequestLicensingActivityStops((struct _HAM_APPLICATION *)v18, v70);
                  v74 = HampLockTrackerId;
                  if ( HampLockTrackerId != -1 )
                  {
                    v75 = TlsGetValue(HampLockTrackerId);
                    if ( (*(_QWORD *)TlsGetValue(v74) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
                      __int2c();
                    *v75 |= 0x20uLL;
                    ++v75[6];
                    v70 = v94;
                  }
                  RtlAcquireSRWLockExclusive(v18 + 584);
                  *(_DWORD *)(v18 + 592) = GetCurrentThreadId();
                  if ( v70 >= 0 )
                  {
                    *(_DWORD *)(v18 + 616) &= 0xFE7FFFFF;
                    *(_DWORD *)(v18 + 616) |= (_DWORD)v20 << 23;
                  }
                  HampAppExitLicenseWorker((struct _HAM_APPLICATION *)v18);
                  CempLockTrackerMarkReleased(HampLockTrackerId, v76, 5u);
                  *(_DWORD *)(v18 + 592) = 0;
                  RtlReleaseSRWLockExclusive(v18 + 584);
                  HampAppCheckQueueHostWorkersPostLicensing(
                    (struct _HAM_APPLICATION *)v18,
                    (struct _RM_HAM_ACTIVITY_HOST *)v5);
                  goto LABEL_184;
                }
                HampAppTraceWaitForLicenseWorkerForHost((struct _RM_HAM_ACTIVITY_HOST *)v5);
                HampAppWaitForFlagChange((struct _HAM_APPLICATION *)v18);
                v68 = *(_DWORD *)(v18 + 616);
                if ( ((v68 >> 23) & 3) >= (unsigned int)v20 )
                  break;
              }
            }
            HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v18);
LABEL_184:
            RmpAcquireGlobalLock();
            CempLockTrackerMarkAcquired(HampLockTrackerId, v77, 1u, 0);
            RtlAcquireSRWLockExclusive(v5);
            *((_DWORD *)v5 + 2) = GetCurrentThreadId();
          }
          else
          {
LABEL_42:
            v25 = HampAppCheckDowngradeLicense((struct _HAM_APPLICATION *)v18, (struct _RM_HAM_ACTIVITY_HOST *)v5);
            v26 = 0;
            if ( !v25 )
            {
              v27 = *((_DWORD *)a2 + 213);
              if ( (v27 & 1) != 0 )
              {
                v93 = HampHostCheckUpdateEnforcementSettings((struct _RM_HAM_ACTIVITY_HOST *)v5);
                v27 = *((_DWORD *)a2 + 213);
              }
              else
              {
                v93 = 0;
              }
              if ( (v27 & 1) == 0 )
              {
                v29 = 0;
                if ( !RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)a2, 3u) )
                  goto LABEL_72;
                goto LABEL_67;
              }
              v28 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)v5 + 88);
              v97 = v28;
              if ( v28 )
              {
                HampDepGroupAcquireLockExclusive(v28);
                v84 = *((_QWORD *)v5 + 88);
                v85 = *((_QWORD *)v5 + 78);
                v96 = 1;
                LOBYTE(v26) = *(_QWORD *)(v84 + 104) < v85;
                v83 = *(_DWORD *)(v84 + 92) == 0;
                v28 = v97;
                v98 = !v83;
              }
              else
              {
                v98 = 0;
                v96 = 0;
              }
              v29 = 0;
              if ( (v5[788] & 1) == 0 )
              {
                v95 = 0;
                goto LABEL_64;
              }
              RmHamHostGetCurrentState(
                (struct _RM_HAM_ACTIVITY_HOST *)v5,
                (union _RM_OPTIMIZATION_STATE *)&v95,
                (union _RM_OPTIMIZATION_STATE *)v105);
              v30 = HampLockTrackerId;
              v31 = *(_QWORD *)(*((_QWORD *)v5 + 99) + 88LL);
              if ( HampLockTrackerId != -1 )
              {
                v32 = TlsGetValue(HampLockTrackerId);
                if ( (*(_QWORD *)TlsGetValue(v30) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
                  __int2c();
                *v32 |= 0x40uLL;
                ++v32[7];
              }
              RtlAcquireSRWLockShared(v31 + 304);
              v33 = (*(_DWORD *)(v31 + 340) & 2) != 0;
              if ( HampLockTrackerId != -1 )
              {
                v34 = (__int64 *)TlsGetValue(HampLockTrackerId);
                v35 = *v34;
                if ( (*v34 & 0x40) == 0 )
                  __int2c();
                v83 = v34[7]-- == 1;
                if ( v83 )
                  *v34 = v35 & 0xFFFFFFFFFFFFFFBFuLL;
              }
              RtlReleaseSRWLockShared(v31 + 304);
              if ( v33 )
              {
                v86 = *((_QWORD *)v5 + 83);
                if ( (v86 & 0x10000000000000LL) == 0 )
                {
                  v87 = (v95 & 0x80u) == 0 && v105[0] >= 0;
                  if ( (v86 & 0x30000) == 0 && (v86 & 0x2000000000000LL) != 0 && v87 )
                    goto LABEL_239;
                }
              }
              if ( v26 )
              {
                v29 = v95 & 0x188;
LABEL_239:
                v28 = v97;
                goto LABEL_64;
              }
              v36 = *((_QWORD *)v5 + 83);
              v28 = v97;
              if ( (v36 & 0x10000000000LL) != 0 )
              {
                if ( v98 )
                  v29 = v95;
              }
              else
              {
                if ( v97 && *((_DWORD *)v97 + 22) )
                  v29 = v95 & 0x100 | 0x80;
                else
                  v29 = 384;
                if ( (v36 & 0x2080000000000LL) == 0x2000000000000LL && !v5[592] )
                  v29 |= (v29 >> 5) & 8;
              }
LABEL_64:
              if ( v96 )
                HampDepGroupReleaseLockExclusive(v28);
              if ( !*((_QWORD *)a2 + 83) )
                goto LABEL_72;
LABEL_67:
              v37 = *((_DWORD *)a2 + 156);
              switch ( v37 )
              {
                case 2:
                  goto LABEL_71;
                case 4:
                  if ( (a2[1256] & 1) != 0 )
                    v29 |= 0x40u;
LABEL_71:
                  if ( (v29 & 8) != 0 )
                  {
                    v55 = *((_QWORD *)a2 + 6);
                    v56 = 0;
                    v57 = *((_DWORD *)a2 + 315);
                    v58 = *((_WORD *)a2 + 740);
                    if ( (v57 & 0x10) == 0 && (v58 & 0x200) == 0 )
                    {
                      v56 = 2 * (*(_DWORD *)(v55 + 504) & 1);
                      if ( (v58 & 0x100) == 0 )
                        v56 |= 2 * (*(_DWORD *)(v55 + 504) & 2);
                    }
                    v29 |= v56 | v57 & 0x27 | RmpPolicyGetDesiredEmptyOptimizationsForHost(v55 + 400, (__int64)a2);
                    v59 = (a2[1176] & 8) == 0 && (a2[1178] & 8) == 0;
                    v60 = (a2[1256] & 4) == 0 && (*((_WORD *)a2 + 740) & 0x200) == 0 && v59;
                    if ( v60 )
                    {
                      v61 = 0;
                      v62 = *((_WORD *)a2 + 740);
                      if ( (*((_DWORD *)a2 + 315) & 0x10) == 0 && (v62 & 0x200) == 0 )
                      {
                        v61 = 2 * (*(_DWORD *)(v55 + 504) & 1);
                        if ( (v62 & 0x100) == 0 )
                          v61 |= 2 * (*(_DWORD *)(v55 + 504) & 2);
                        if ( (*(_DWORD *)(v55 + 504) & 4) == 0 )
                          v61 |= 0x22u;
                      }
                      if ( (((*((_DWORD *)a2 + 315) & (v61 | *((_DWORD *)a2 + 315) & 0x27)) == (v61 | *((_DWORD *)a2 + 315) & 0x27)) & (unsigned __int8)v60) != 0 )
                        v29 ^= ((unsigned __int8)v29 ^ (unsigned __int8)(8 * *(_DWORD *)(v55 + 508))) & 0x10;
                    }
                  }
                  break;
                case 8:
                  goto LABEL_71;
              }
LABEL_72:
              if ( (a2[1260] & 8) == 0
                && (v29 & 8) != 0
                && (*((_QWORD *)v5 + 83) & 0x200000000000LL) == 0
                && !RmpPolicyIsActivityHostSwappable((struct _RM_ACTIVITY_HOST *)a2) )
              {
                *((_QWORD *)v5 + 83) |= 0x200000000000uLL;
              }
              v38 = *((_DWORD *)a2 + 315);
              if ( v38 == v29 )
              {
                if ( !v93 || RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)a2) )
                  break;
              }
              else
              {
                if ( (unsigned int)dword_1800DC218 > 4
                  && (qword_1800DC228 & 0x40) != 0
                  && (qword_1800DC230 & 0x40) == qword_1800DC230 )
                {
                  v115 = v99;
                  v106 = v29;
                  v145 = &v106;
                  v146 = 4LL;
                  v143 = &v115;
                  *(_DWORD *)&v120.Level = 4;
                  v139.Ptr = (ULONGLONG)off_1800DC220;
                  v144 = 8LL;
                  *(_DWORD *)&v120.Id = 184549376;
                  v120.Keyword = 64LL;
                  v139.Size = *(unsigned __int16 *)off_1800DC220;
                  v140 = &unk_1800C3C61;
                  v142 = 1;
                  v139.Reserved = 2;
                  v141 = 51;
                  EventWriteTransfer(qword_1800DC238, &v120, 0LL, 0LL, 4u, &v139);
                  v38 = *((_DWORD *)a2 + 315);
                }
                if ( (v38 & v29) == v29 )
                  RmpEnforcementUnoptimizeHost((__int64)a2, ~(_BYTE)v29 & v38);
                else
                  RmpEnforcementOptimizeHost((__int64)a2, v29 & ~v38);
                RtlWakeAllConditionVariable(a2 + 1248);
              }
            }
          }
        }
      }
    }
  }
  v39 = (char *)*((_QWORD *)v5 + 76);
  if ( v39 != v5 + 608 )
  {
    v40 = v39 - 96;
    while ( v40 )
    {
      if ( v40[562] == 2 )
      {
        if ( v40[563] )
        {
          v88 = HampActTryStart(v40);
          if ( v88 && (unsigned int)dword_1800DC218 > 5 )
          {
            v107 = v88;
            v116 = *((_QWORD *)v40 + 5);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              (unsigned int)&dword_1800DC218,
              (unsigned int)&unk_1800C1345,
              v89,
              v90,
              (__int64)&v116,
              (__int64)&v107);
          }
        }
      }
      v41 = *((_QWORD *)v40 + 12);
      v42 = *((_QWORD *)v40 + 10);
      v40 = 0LL;
      if ( v41 != v42 + 608 )
        v40 = (char *)(v41 - 96);
    }
  }
  *((_DWORD *)v5 + 164) = 0;
  *((_QWORD *)v5 + 83) &= ~0x400000000uLL;
  if ( *((int *)a2 + 6) < 0 )
    goto LABEL_246;
  if ( *((_DWORD *)a2 + 292) + *((_DWORD *)a2 + 286) )
  {
    v43 = 0;
    goto LABEL_84;
  }
  if ( *((_QWORD *)a2 + 83) )
  {
    v43 = 0;
    goto LABEL_84;
  }
  if ( (a2[1488] & 1) != 0 )
  {
    v43 = 0;
    goto LABEL_84;
  }
  if ( (a2[852] & 1) == 0 )
    goto LABEL_153;
  RmHamHostGetCurrentState(
    (struct _RM_HAM_ACTIVITY_HOST *)v5,
    (union _RM_OPTIMIZATION_STATE *)&v109,
    (union _RM_OPTIMIZATION_STATE *)&v108);
  if ( v108 )
  {
    v43 = 0;
    goto LABEL_84;
  }
  if ( (v109 & 0x80u) == 0 || (v109 & 0x100) == 0 )
  {
LABEL_246:
    v43 = 0;
    goto LABEL_84;
  }
  if ( (v5[672] & 2) != 0 )
    v43 = 0;
  else
LABEL_153:
    v43 = 1;
LABEL_84:
  if ( HampLockTrackerId != -1 )
  {
    v44 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v45 = *v44;
    if ( (*v44 & 2) == 0 )
      __int2c();
    v83 = v44[2]-- == 1;
    if ( v83 )
      *v44 = v45 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)v5 + 2) = 0;
  RtlReleaseSRWLockExclusive(v5);
  v83 = *((_QWORD *)a2 + 180) == 0LL;
  *((_DWORD *)a2 + 371) = 0;
  if ( !v83 )
    RmpActivityHostRemoveFromRemediationGroup(a2, 1u);
  v46 = *(_QWORD *)(v110 + 3232);
  v47 = *(_DWORD *)(v46 + 160);
  if ( (v47 & 3) == 0 )
  {
    *(_DWORD *)(v46 + 160) = v47 | 1;
    TpPostWork(*(_QWORD *)(v46 + 144));
  }
  if ( v43 )
    RmpActivityHostDelete((struct _RM_ACTIVITY_HOST *)a2);
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
  {
    LODWORD(v110) = *((_DWORD *)a2 + 315);
    v153 = &v110;
    v151 = &v99;
    *(_DWORD *)&v121.Level = 516;
    v147.Ptr = (ULONGLONG)off_1800DC220;
    v154 = 4LL;
    v152 = 8LL;
    *(_DWORD *)&v121.Id = 184549376;
    v121.Keyword = 8LL;
    v147.Size = *(unsigned __int16 *)off_1800DC220;
    v148 = &unk_1800C3C2B;
    v150 = 1;
    v147.Reserved = 2;
    v149 = 42;
    EventWriteTransfer(qword_1800DC238, &v121, 0LL, 0LL, 4u, &v147);
  }
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v48 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v49 = *v48;
    if ( (*v48 & 1) == 0 )
      __int2c();
    v83 = v48[1]-- == 1;
    if ( v83 )
      *v48 = v49 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  RtlWakeAllConditionVariable(a2 + 1248);
  v50 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v51 = v50 <= 1;
  v52 = v50 - 1;
  if ( v51 )
  {
    if ( v52 )
      __fastfail(0xEu);
    v78 = *((_DWORD *)a2 + 10);
    if ( v78 )
    {
      v91 = v78 - 1;
      if ( v91 )
      {
        if ( v91 == 1 && !*((_DWORD *)a2 + 24) && !*((_DWORD *)a2 + 25) )
          NtDeleteWnfStateName(a2 + 96);
      }
      else
      {
        RmpPartitionRelease(*(struct _RM_PARTITION **)v5);
        v92 = (void *)*((_QWORD *)a2 + 9);
        if ( v92 )
          NtClose(v92);
      }
    }
    else
    {
      RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(a2 + 1312));
      v79 = (struct _RM_PARTITION *)*((_QWORD *)a2 + 7);
      if ( v79 )
        RmpPartitionRelease(v79);
      HampHostCleanup((struct _RM_HAM_ACTIVITY_HOST *)v5);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
  v53 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v53, 0LL);
  }
}
