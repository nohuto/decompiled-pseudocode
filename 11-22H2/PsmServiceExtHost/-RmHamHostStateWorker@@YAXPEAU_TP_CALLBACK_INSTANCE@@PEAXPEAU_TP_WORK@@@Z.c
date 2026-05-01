/*
 * XREFs of ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180007078 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000709C (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BEEC (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D208 (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18000E280 (-HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x180013270 (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180015710 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800184AC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001852C (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800188E0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180019AE0 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B0EC (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C840 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E1C0 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001FAE0 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180020130 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180021270 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180024B30 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002D540 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180032A04 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035F94 (-HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800380D4 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BBBC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BFD0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800537B4 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800552DC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180055B58 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F05C (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x18007F834 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007F970 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18007F9E0 (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall RmHamHostStateWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_ACTIVITY_HOST *a2,
        struct _TP_WORK *a3)
{
  DWORD v3; // ebx
  struct _RM_ACTIVITY_HOST *v4; // r13
  __int64 v5; // rax
  struct _RM_HAM_ACTIVITY_HOST *v6; // r15
  __int64 v7; // rdx
  DWORD v8; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v11; // edi
  _QWORD *v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v15; // rbx
  char *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // edx
  unsigned __int64 v20; // r8
  bool v21; // zf
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  BOOL IsSuspendWaiter; // ebx
  struct _RM_ACTIVITY_HOST *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _RM_ACTIVITY_HOST *v27; // rax
  char *v28; // rsi
  __int64 *v29; // rax
  __int64 v30; // rcx
  DWORD v31; // edi
  _QWORD *v32; // rbx
  __int64 v33; // r14
  DWORD v34; // edi
  __int64 v35; // r15
  _QWORD *v36; // rbx
  unsigned int v37; // ebx
  __int64 *v38; // rax
  __int64 v39; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v40; // rbx
  struct _RM_ACTIVITY_HOST *v41; // r13
  __int64 *v42; // rax
  __int64 v43; // rcx
  char *v44; // rsi
  DWORD v45; // edi
  _QWORD *v46; // rbx
  unsigned int v47; // ecx
  DWORD v48; // edi
  _QWORD *v49; // rbx
  __int64 *v50; // rax
  __int64 v51; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v52; // rdx
  NTSTATUS v53; // esi
  const unsigned __int16 *v54; // rcx
  __int64 v55; // rax
  int v56; // edx
  DWORD v57; // edi
  _QWORD *v58; // rbx
  __int64 *v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // r13
  __int64 v63; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v64; // rdi
  BOOL v65; // r15d
  BOOL v66; // r12d
  unsigned int v67; // ebx
  DWORD v68; // esi
  __int64 v69; // r14
  _QWORD *v70; // rdi
  bool v71; // di
  __int64 *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rdx
  int v75; // ecx
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // r14
  int v79; // edi
  int v80; // esi
  int v81; // ecx
  int DesiredEmptyOptimizationsForHost; // eax
  unsigned __int8 v83; // r10
  int v84; // r10d
  int v85; // ecx
  int v86; // r9d
  int v87; // edx
  int v88; // edx
  int v89; // edx
  _QWORD *v90; // rax
  _QWORD *v91; // rbx
  int v92; // eax
  int v93; // r8d
  int v94; // r9d
  __int64 v95; // rcx
  int v96; // ebx
  __int64 *v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rcx
  int v100; // eax
  __int64 *v101; // rax
  __int64 v102; // rcx
  signed __int64 v103; // rdi
  bool v104; // cc
  signed __int64 v105; // rdi
  int v106; // ecx
  int v107; // ecx
  void *v108; // rcx
  struct _RM_PARTITION *v109; // rcx
  DWORD v110; // ebx
  unsigned int v111; // [rsp+30h] [rbp-D0h]
  struct _RM_HAM_ACTIVITY_HOST *v112; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_ACTIVITY_HOST *v113; // [rsp+40h] [rbp-C0h] BYREF
  char *v114; // [rsp+48h] [rbp-B8h]
  int v115; // [rsp+50h] [rbp-B0h] BYREF
  int v116; // [rsp+54h] [rbp-ACh] BYREF
  char v117[4]; // [rsp+58h] [rbp-A8h] BYREF
  char v118[4]; // [rsp+5Ch] [rbp-A4h] BYREF
  NTSTATUS v119; // [rsp+60h] [rbp-A0h] BYREF
  int v120; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v121; // [rsp+68h] [rbp-98h] BYREF
  char v122[4]; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v123; // [rsp+70h] [rbp-90h] BYREF
  int v124; // [rsp+74h] [rbp-8Ch] BYREF
  int v125; // [rsp+78h] [rbp-88h] BYREF
  __int64 v126; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR v127; // [rsp+88h] [rbp-78h] BYREF
  __int64 v128; // [rsp+98h] [rbp-68h] BYREF
  __int64 v129; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v130; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v131; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v132; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v133; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C8h] [rbp-38h] BYREF
  EVENT_DESCRIPTOR v135; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DESCRIPTOR v136; // [rsp+E8h] [rbp-18h] BYREF
  EVENT_DESCRIPTOR v137; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD TlsValue[8]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v139; // [rsp+190h] [rbp+90h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1A0h] [rbp+A0h] BYREF
  void *v141; // [rsp+1B0h] [rbp+B0h]
  int v142; // [rsp+1B8h] [rbp+B8h]
  int v143; // [rsp+1BCh] [rbp+BCh]
  __int64 *v144; // [rsp+1C0h] [rbp+C0h]
  __int64 v145; // [rsp+1C8h] [rbp+C8h]
  int *v146; // [rsp+1D0h] [rbp+D0h]
  __int64 v147; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v148; // [rsp+1E0h] [rbp+E0h] BYREF
  void *v149; // [rsp+1F0h] [rbp+F0h]
  int v150; // [rsp+1F8h] [rbp+F8h]
  int v151; // [rsp+1FCh] [rbp+FCh]
  __int64 *v152; // [rsp+200h] [rbp+100h]
  __int64 v153; // [rsp+208h] [rbp+108h]
  int *v154; // [rsp+210h] [rbp+110h]
  __int64 v155; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v156; // [rsp+220h] [rbp+120h] BYREF
  void *v157; // [rsp+230h] [rbp+130h]
  int v158; // [rsp+238h] [rbp+138h]
  int v159; // [rsp+23Ch] [rbp+13Ch]
  __int64 *v160; // [rsp+240h] [rbp+140h]
  __int64 v161; // [rsp+248h] [rbp+148h]
  unsigned int *v162; // [rsp+250h] [rbp+150h]
  __int64 v163; // [rsp+258h] [rbp+158h]
  struct _EVENT_DATA_DESCRIPTOR v164; // [rsp+260h] [rbp+160h] BYREF
  void *v165; // [rsp+270h] [rbp+170h]
  int v166; // [rsp+278h] [rbp+178h]
  int v167; // [rsp+27Ch] [rbp+17Ch]
  __int64 *v168; // [rsp+280h] [rbp+180h]
  __int64 v169; // [rsp+288h] [rbp+188h]
  struct _RM_HAM_ACTIVITY_HOST **v170; // [rsp+290h] [rbp+190h]
  __int64 v171; // [rsp+298h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR v172; // [rsp+2A0h] [rbp+1A0h] BYREF
  void *v173; // [rsp+2B0h] [rbp+1B0h]
  int v174; // [rsp+2B8h] [rbp+1B8h]
  int v175; // [rsp+2BCh] [rbp+1BCh]
  NTSTATUS *v176; // [rsp+2C0h] [rbp+1C0h]
  __int64 v177; // [rsp+2C8h] [rbp+1C8h]
  const unsigned __int16 *v178; // [rsp+2D0h] [rbp+1D0h]
  int v179; // [rsp+2D8h] [rbp+1D8h]
  int v180; // [rsp+2DCh] [rbp+1DCh]
  __int64 *v181; // [rsp+2E0h] [rbp+1E0h]
  __int64 v182; // [rsp+2E8h] [rbp+1E8h]

  v3 = HampLockTrackerId;
  v113 = a2;
  v139 = 0LL;
  v4 = a2;
  memset(TlsValue, 0, sizeof(TlsValue));
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v3, TlsValue);
  }
  v5 = *((_QWORD *)v4 + 6);
  v6 = (struct _RM_ACTIVITY_HOST *)((char *)v4 + 64);
  v7 = *((_QWORD *)v4 + 4);
  v112 = (struct _RM_ACTIVITY_HOST *)((char *)v4 + 64);
  v126 = v5;
  *(_QWORD *)&v127.Id = v7;
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 0x40) != 0 && (qword_1800DB230 & 0x40) == qword_1800DB230 )
  {
    v115 = *((_DWORD *)v4 + 317);
    v146 = &v115;
    v144 = &v133;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    v133 = v7;
    v147 = 4LL;
    v145 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v141 = &unk_1800C4604;
    UserData.Reserved = 2;
    v142 = 42;
    v143 = 1;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  v8 = HampLockTrackerId;
  v120 = 0;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v8) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v11 = HampLockTrackerId;
  dword_1800DC590 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v12 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v11) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v12 |= 2uLL;
    ++v12[2];
  }
  RtlAcquireSRWLockExclusive((char *)v4 + 64);
  *((_DWORD *)v4 + 18) = GetCurrentThreadId();
  *((_DWORD *)v4 + 180) = GetCurrentThreadId();
  v13 = (_QWORD *)((char *)v4 + 672);
  while ( *((int *)v4 + 6) >= 0 )
  {
    v14 = (_QWORD *)((char *)v6 + 608);
    v15 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v6 + 76);
    if ( v15 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)v6 + 608) )
    {
      v16 = (char *)v15 - 96;
      if ( v16 )
      {
        do
        {
          if ( v16[562] == 2 )
          {
            if ( v16[563] )
            {
              v17 = HampActTryStart(v16);
              if ( v17 )
              {
                if ( (unsigned int)dword_1800DB218 > 5 )
                {
                  v116 = v17;
                  v128 = *((_QWORD *)v16 + 5);
                  v154 = &v116;
                  v152 = &v128;
                  *(_DWORD *)&v135.Level = 5;
                  v148.Ptr = (ULONGLONG)off_1800DB220;
                  v155 = 4LL;
                  v153 = 8LL;
                  *(_DWORD *)&v135.Id = 184549376;
                  v135.Keyword = 0LL;
                  v148.Size = *(unsigned __int16 *)off_1800DB220;
                  v148.Reserved = 2;
                  v149 = &unk_1800BFFF8;
                  v150 = 49;
                  v151 = 1;
                  EventWriteTransfer(qword_1800DB238, &v135, 0LL, 0LL, 4u, &v148);
                }
              }
            }
          }
          v18 = *((_QWORD *)v16 + 12);
          if ( v18 == *((_QWORD *)v16 + 10) + 608LL )
            break;
          v16 = (char *)(v18 - 96);
        }
        while ( v18 != 96 );
        v14 = (_QWORD *)((char *)v6 + 608);
      }
    }
    RmHamHostGetCurrentState(v6, (union _RM_OPTIMIZATION_STATE *)v117, (union _RM_OPTIMIZATION_STATE *)v118);
    v20 = *((_QWORD *)v6 + 83);
    if ( ((v20 >> 16) & 3) == 0 )
      goto LABEL_34;
    if ( ((*((_QWORD *)v6 + 83) >> 16) & 3LL) == 1 )
    {
      if ( v117[0] < 0 && v118[0] >= 0 && (v20 & 0x40000000000LL) == 0 )
      {
        FirstActivity = HampHostGetFirstActivity(v6);
        if ( FirstActivity )
        {
          while ( (*((_BYTE *)FirstActivity + 552) & 0x48) != 0
               || !HampActIsStartedOrReachedPendState((__int64)FirstActivity, 5u)
               || (*((_DWORD *)FirstActivity + 28) & 0x2000) == 0 )
          {
            FirstActivity = HampHostGetNextActivity(FirstActivity);
            if ( !FirstActivity )
              goto LABEL_45;
          }
          goto LABEL_34;
        }
        goto LABEL_45;
      }
LABEL_34:
      if ( (v20 & 0x8000000000000LL) != 0 )
      {
        HampHostCollectErrorReport(v6);
        v13 = v14;
      }
      else if ( (*((_BYTE *)v6 + 672) & 0x40) != 0 )
      {
        HampHostReleaseLockExclusiveEx(v6);
        RmpReleaseGlobalLock();
        TpWaitForWork(*((_QWORD *)v6 + 81), 0LL);
        RmpAcquireGlobalLock();
        HampHostAcquireLockExclusiveEx(v6, 0);
        v13 = v14;
      }
      else
      {
        v33 = *((_QWORD *)v6 + 99);
        v13 = v14;
        if ( !HampAppCheckQueueLicenseUpgradeForHost((struct _HAM_APPLICATION *)v33, v6) )
        {
          if ( (*((_BYTE *)v4 + 1268) & 8) == 0 )
          {
            v34 = HampLockTrackerId;
            v35 = (*((_QWORD *)v6 + 83) >> 61) & 3LL;
            if ( HampLockTrackerId != -1 )
            {
              v36 = TlsGetValue(HampLockTrackerId);
              if ( (*(_QWORD *)TlsGetValue(v34) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
                __int2c();
              *v36 |= 0x20uLL;
              ++v36[6];
            }
            RtlAcquireSRWLockShared(v33 + 584);
            v37 = (*(_DWORD *)(v33 + 616) >> 23) & 3;
            if ( HampLockTrackerId != -1 )
            {
              v38 = (__int64 *)TlsGetValue(HampLockTrackerId);
              v39 = *v38;
              if ( (*v38 & 0x20) == 0 )
                __int2c();
              v21 = v38[6]-- == 1;
              if ( v21 )
                *v38 = v39 & 0xFFFFFFFFFFFFFFDFuLL;
            }
            RtlReleaseSRWLockShared(v33 + 584);
            if ( v37 < (unsigned int)v35 )
            {
              v40 = v112;
              v41 = 0LL;
              if ( v112 )
                v41 = v113;
              if ( HampLockTrackerId != -1 )
              {
                v42 = (__int64 *)TlsGetValue(HampLockTrackerId);
                v43 = *v42;
                if ( (*v42 & 2) == 0 )
                  __int2c();
                v21 = v42[2]-- == 1;
                if ( v21 )
                  *v42 = v43 & 0xFFFFFFFFFFFFFFFDuLL;
              }
              v44 = (char *)v41 + 64;
              *((_DWORD *)v41 + 18) = 0;
              v114 = (char *)v41 + 64;
              RtlReleaseSRWLockExclusive((char *)v41 + 64);
              RmpReleaseGlobalLock();
              v45 = HampLockTrackerId;
              if ( HampLockTrackerId != -1 )
              {
                v46 = TlsGetValue(HampLockTrackerId);
                if ( (*(_QWORD *)TlsGetValue(v45) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
                  __int2c();
                *v46 |= 0x20uLL;
                ++v46[6];
                v40 = v112;
              }
              RtlAcquireSRWLockExclusive(v33 + 584);
              *(_DWORD *)(v33 + 592) = GetCurrentThreadId();
              v47 = *(_DWORD *)(v33 + 616);
              if ( ((v47 >> 23) & 3) < (unsigned int)v35 )
              {
                while ( ((v47 >> 21) & 3) >= (unsigned int)v35 )
                {
                  if ( (v47 & 0x100000) == 0 )
                  {
                    *(_DWORD *)(v33 + 616) = v47 | 0x100000;
                    if ( HampLockTrackerId != -1 )
                    {
                      v50 = (__int64 *)TlsGetValue(HampLockTrackerId);
                      v51 = *v50;
                      if ( (*v50 & 0x20) == 0 )
                        __int2c();
                      v21 = v50[6]-- == 1;
                      if ( v21 )
                        *v50 = v51 & 0xFFFFFFFFFFFFFFDFuLL;
                    }
                    *(_DWORD *)(v33 + 592) = 0;
                    RtlReleaseSRWLockExclusive(v33 + 584);
                    v53 = HampSystemEnsureStoreLicenseAcquisition((struct _HAM_APPLICATION *)v33, v52);
                    if ( (unsigned int)dword_1800DB218 > 4
                      && (qword_1800DB228 & 8) != 0
                      && (qword_1800DB230 & 8) == qword_1800DB230 )
                    {
                      v54 = (const unsigned __int16 *)((char *)v40 + 24);
                      v130 = *((_QWORD *)v41 + 4);
                      v181 = &v130;
                      v119 = v53;
                      v182 = 8LL;
                      if ( v40 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
                      {
                        v54 = &word_1800B66C4;
                        v56 = 2;
                      }
                      else
                      {
                        v55 = -1LL;
                        do
                          v21 = v54[++v55] == 0;
                        while ( !v21 );
                        v56 = 2 * v55 + 2;
                      }
                      v178 = v54;
                      v176 = &v119;
                      *(_DWORD *)&v136.Level = 4;
                      v172.Ptr = (ULONGLONG)off_1800DB220;
                      v179 = v56;
                      v180 = 0;
                      v177 = 4LL;
                      *(_DWORD *)&v136.Id = 184549376;
                      v136.Keyword = 8LL;
                      v172.Size = *(unsigned __int16 *)off_1800DB220;
                      v173 = &unk_1800C2BA1;
                      v172.Reserved = 2;
                      v174 = 54;
                      v175 = 1;
                      EventWriteTransfer(qword_1800DB238, &v136, 0LL, 0LL, 5u, &v172);
                    }
                    if ( v53 < 0 )
                      HampAppRequestLicensingActivityStops((struct _HAM_APPLICATION *)v33, v53);
                    v57 = HampLockTrackerId;
                    if ( HampLockTrackerId != -1 )
                    {
                      v58 = TlsGetValue(HampLockTrackerId);
                      if ( (*(_QWORD *)TlsGetValue(v57) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
                        __int2c();
                      *v58 |= 0x20uLL;
                      ++v58[6];
                    }
                    RtlAcquireSRWLockExclusive(v33 + 584);
                    *(_DWORD *)(v33 + 592) = GetCurrentThreadId();
                    if ( v53 >= 0 )
                    {
                      *(_DWORD *)(v33 + 616) &= 0xFE7FFFFF;
                      *(_DWORD *)(v33 + 616) |= (_DWORD)v35 << 23;
                    }
                    HampAppExitLicenseWorker((struct _HAM_APPLICATION *)v33);
                    if ( HampLockTrackerId != -1 )
                    {
                      v59 = (__int64 *)TlsGetValue(HampLockTrackerId);
                      v60 = *v59;
                      if ( (*v59 & 0x20) == 0 )
                        __int2c();
                      v21 = v59[6]-- == 1;
                      if ( v21 )
                        *v59 = v60 & 0xFFFFFFFFFFFFFFDFuLL;
                    }
                    *(_DWORD *)(v33 + 592) = 0;
                    RtlReleaseSRWLockExclusive(v33 + 584);
                    v6 = v112;
                    HampAppCheckQueueHostWorkersPostLicensing((struct _HAM_APPLICATION *)v33, v112);
                    v44 = v114;
                    goto LABEL_97;
                  }
                  HampAppTraceWaitForLicenseWorkerForHost(v40);
                  HampAppWaitForFlagChange((struct _HAM_APPLICATION *)v33);
                  v47 = *(_DWORD *)(v33 + 616);
                  if ( ((v47 >> 23) & 3) >= (unsigned int)v35 )
                    break;
                }
              }
              HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v33);
              v6 = v112;
LABEL_97:
              RmpAcquireGlobalLock();
              v48 = HampLockTrackerId;
              if ( HampLockTrackerId != -1 )
              {
                v49 = TlsGetValue(HampLockTrackerId);
                if ( (*(_QWORD *)TlsGetValue(v48) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
                  __int2c();
                *v49 |= 2uLL;
                ++v49[2];
              }
              RtlAcquireSRWLockExclusive(v44);
              v4 = v113;
              *((_DWORD *)v44 + 2) = GetCurrentThreadId();
              goto LABEL_204;
            }
            v6 = v112;
          }
          v13 = v14;
          if ( !HampAppCheckDowngradeLicense((struct _HAM_APPLICATION *)v33, v6) )
          {
            v61 = HampHostCheckUpdateEnforcementSettings(v6, (struct _HAM_ENFORCEMENT_SETTINGS_CONTEXT *)&v120);
            v62 = *((_QWORD *)v6 + 88);
            v111 = v61;
            if ( v62 )
            {
              HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v62);
              v63 = *((_QWORD *)v6 + 88);
              v64 = v112;
              LODWORD(v114) = 1;
              v65 = *(_QWORD *)(v63 + 104) < *((_QWORD *)v112 + 78);
              v66 = *(_DWORD *)(v63 + 92) != 0;
            }
            else
            {
              v64 = v112;
              v65 = 0;
              v66 = 0;
              LODWORD(v114) = 0;
            }
            v67 = 0;
            RmHamHostGetCurrentState(v64, (union _RM_OPTIMIZATION_STATE *)&v121, (union _RM_OPTIMIZATION_STATE *)v122);
            v68 = HampLockTrackerId;
            v69 = *(_QWORD *)(*((_QWORD *)v64 + 99) + 88LL);
            if ( HampLockTrackerId != -1 )
            {
              v70 = TlsGetValue(HampLockTrackerId);
              if ( (*(_QWORD *)TlsGetValue(v68) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
                __int2c();
              *v70 |= 0x40uLL;
              ++v70[7];
            }
            RtlAcquireSRWLockShared(v69 + 304);
            v71 = (*(_DWORD *)(v69 + 340) & 4) != 0;
            if ( HampLockTrackerId != -1 )
            {
              v72 = (__int64 *)TlsGetValue(HampLockTrackerId);
              v73 = *v72;
              if ( (*v72 & 0x40) == 0 )
                __int2c();
              v21 = v72[7]-- == 1;
              if ( v21 )
                *v72 = v73 & 0xFFFFFFFFFFFFFFBFuLL;
            }
            RtlReleaseSRWLockShared(v69 + 304);
            if ( v71
              && (v74 = *((_QWORD *)v113 + 91), (v74 & 0x10000000000000LL) == 0)
              && ((v121 & 0x80u) != 0 || v122[0] < 0 ? (v75 = 0) : (v75 = 1),
                  (v74 & 0x30000) == 0 && (v74 & 0x2000000000000LL) != 0 && v75) )
            {
              v6 = v112;
            }
            else
            {
              v21 = !v65;
              v6 = v112;
              if ( v21 )
              {
                v77 = *((_QWORD *)v112 + 83);
                if ( (v77 & 0x10000000000LL) != 0 )
                {
                  if ( v66 )
                    v67 = v121;
                }
                else
                {
                  if ( v62 && *(_DWORD *)(v62 + 88) )
                    v67 = v121 & 0x100 | 0x80;
                  else
                    v67 = 384;
                  if ( (v77 & 0x80000000000LL) == 0 && (v77 & 0x2000000000000LL) != 0 && !*((_BYTE *)v112 + 592) )
                    v67 |= (v67 >> 5) & 8;
                }
              }
              else
              {
                v67 = v121 & 0x188;
              }
            }
            if ( (_DWORD)v114 )
              HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v62);
            v4 = v113;
            if ( !*((_QWORD *)v113 + 83) )
              goto LABEL_196;
            v76 = *((_DWORD *)v113 + 156);
            if ( v76 != 2 )
            {
              if ( v76 == 4 )
              {
                if ( (*((_BYTE *)v113 + 1264) & 1) != 0 )
                  v67 |= 0x40u;
              }
              else if ( v76 != 8 )
              {
                goto LABEL_196;
              }
            }
            if ( (v67 & 8) != 0 )
            {
              v78 = *((_QWORD *)v113 + 6);
              v79 = 0;
              v80 = *((_DWORD *)v113 + 317);
              v81 = *((_DWORD *)v113 + 364);
              if ( (v80 & 0x10) == 0 && (v81 & 0x200) == 0 )
              {
                v79 = 2 * (*(_DWORD *)(v78 + 504) & 1);
                if ( (v81 & 0x100) == 0 )
                  v79 |= 2 * (*(_DWORD *)(v78 + 504) & 2);
              }
              DesiredEmptyOptimizationsForHost = RmpPolicyGetDesiredEmptyOptimizationsForHost(v78 + 400, (__int64)v113);
              v83 = 0;
              v67 |= v79 | v80 & 0x27 | DesiredEmptyOptimizationsForHost;
              if ( (*((_BYTE *)v113 + 1184) & 8) == 0 )
                v83 = (unsigned __int16)~*((_WORD *)v113 + 728) >> 9;
              v84 = (unsigned __int8)~(*((_DWORD *)v113 + 316) >> 1) & v83 & 1;
              if ( v84 )
              {
                v85 = 0;
                v86 = *((_DWORD *)v113 + 364);
                if ( (*((_DWORD *)v113 + 317) & 0x10) == 0 && (v86 & 0x200) == 0 )
                {
                  v87 = 2 * (*(_DWORD *)(v78 + 504) & 1);
                  if ( (v86 & 0x100) == 0 )
                    v87 |= 2 * (*(_DWORD *)(v78 + 504) & 2);
                  if ( (*(_DWORD *)(v78 + 504) & 4) != 0 )
                    v85 = v87;
                  else
                    v85 = v87 | 0x22;
                }
                v88 = 0;
                if ( (*((_DWORD *)v113 + 317) & (v85 | *((_DWORD *)v113 + 317) & 0x27)) == (v85 | *((_DWORD *)v113 + 317) & 0x27) )
                  v88 = v84;
                if ( v88 )
                  v67 ^= ((unsigned __int8)v67 ^ (unsigned __int8)(8 * *(_DWORD *)(v78 + 508))) & 0x10;
              }
LABEL_196:
              if ( (v67 & 8) != 0
                && (*((_BYTE *)v113 + 1268) & 8) == 0
                && (*((_QWORD *)v6 + 83) & 0x200000000000LL) == 0
                && !RmpPolicyIsActivityHostSwappable(v113) )
              {
                *((_QWORD *)v6 + 83) |= 0x200000000000uLL;
              }
            }
            if ( *((_DWORD *)v4 + 317) == v67 )
            {
              v13 = (_QWORD *)((char *)v6 + 608);
              if ( !v111 )
                break;
              v13 = (_QWORD *)((char *)v6 + 608);
              if ( RmpActivityHostCanDelete(v4) )
                break;
LABEL_204:
              v13 = (_QWORD *)((char *)v6 + 608);
            }
            else
            {
              if ( (unsigned int)dword_1800DB218 > 4
                && (qword_1800DB228 & 0x40) != 0
                && (qword_1800DB230 & 0x40) == qword_1800DB230 )
              {
                v131 = *(_QWORD *)&v127.Id;
                v123 = v67;
                v162 = &v123;
                v163 = 4LL;
                v160 = &v131;
                *(_DWORD *)&v137.Level = 4;
                v156.Ptr = (ULONGLONG)off_1800DB220;
                v161 = 8LL;
                *(_DWORD *)&v137.Id = 184549376;
                v137.Keyword = 64LL;
                v156.Size = *(unsigned __int16 *)off_1800DB220;
                v157 = &unk_1800C44F6;
                v156.Reserved = 2;
                v158 = 51;
                v159 = 1;
                EventWriteTransfer(qword_1800DB238, &v137, 0LL, 0LL, 4u, &v156);
              }
              v89 = *((_DWORD *)v4 + 317);
              if ( (v67 & v89) == v67 )
                RmpEnforcementUnoptimizeHost((__int64)v4, ~(_BYTE)v67 & v89);
              else
                RmpEnforcementOptimizeHost((__int64)v4, v67 & ~v89);
              RtlWakeAllConditionVariable((char *)v4 + 1256);
              v13 = (_QWORD *)((char *)v6 + 608);
            }
          }
        }
      }
    }
    else
    {
      if ( ((*((_QWORD *)v6 + 83) >> 16) & 3LL) == 2 )
        v21 = (v20 & 0x8000000000000LL) == 0;
      else
        v21 = ((*((_QWORD *)v6 + 83) >> 16) & 3LL) == 3;
      if ( !v21 )
        goto LABEL_34;
LABEL_45:
      if ( (v20 & 0x800000000LL) == 0 )
      {
        IsSuspendWaiter = HampHostIsSuspendWaiter(v6, v19);
        v24 = 0LL;
        *((_QWORD *)v6 + 83) |= 0x800000000uLL;
        if ( v6 )
          v24 = v4;
        if ( _InterlockedIncrement64((volatile signed __int64 *)v24 + 2) <= 1 )
          __fastfail(0xEu);
        TpPostWork(*((_QWORD *)v6 + 79));
        HampHostCheckUpdateSuspendWaitState(v6, IsSuspendWaiter, v25, v26);
      }
      if ( (*((_DWORD *)v6 + 166) & 0x30000LL) != 0 )
      {
        v27 = 0LL;
        if ( v6 )
          v27 = v4;
        v28 = (char *)v27 + 64;
        do
        {
          v129 = *((_QWORD *)v6 + 102);
          if ( HampLockTrackerId != -1 )
          {
            v29 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v30 = *v29;
            if ( (*v29 & 2) == 0 )
              __int2c();
            v21 = v29[2]-- == 1;
            if ( v21 )
              *v29 = v30 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          *((_DWORD *)v28 + 2) = 0;
          RtlReleaseSRWLockExclusive(v28);
          RmpReleaseGlobalLock();
          RtlWaitOnAddress((char *)v6 + 816, &v129, 8LL);
          RmpAcquireGlobalLock();
          v31 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v32 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v31) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              __int2c();
            *v32 |= 2uLL;
            ++v32[2];
          }
          RtlAcquireSRWLockExclusive(v28);
          *((_DWORD *)v28 + 2) = GetCurrentThreadId();
        }
        while ( (*((_DWORD *)v6 + 166) & 0x30000LL) != 0 );
        v14 = (_QWORD *)((char *)v6 + 608);
      }
      v13 = v14;
    }
  }
  v90 = (_QWORD *)*v13;
  if ( (_QWORD *)*v13 != v13 )
  {
    v91 = v90 - 12;
    if ( v90 != (_QWORD *)96 )
    {
      do
      {
        if ( *((_BYTE *)v91 + 562) == 2 )
        {
          if ( *((_BYTE *)v91 + 563) )
          {
            v92 = HampActTryStart(v91);
            if ( v92 )
            {
              if ( (unsigned int)dword_1800DB218 > 5 )
              {
                v124 = v92;
                v132 = v91[5];
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                  (unsigned int)&dword_1800DB218,
                  (unsigned int)&unk_1800BFFED,
                  v93,
                  v94,
                  (__int64)&v132,
                  (__int64)&v124);
              }
            }
          }
        }
        v95 = v91[12];
        if ( v95 == v91[10] + 608LL )
          break;
        v91 = (_QWORD *)(v95 - 96);
      }
      while ( v95 != 96 );
    }
  }
  *((_QWORD *)v6 + 83) &= ~0x400000000uLL;
  *((_DWORD *)v6 + 164) = 0;
  if ( *((int *)v4 + 6) < 0
    || *((_DWORD *)v4 + 294) + *((_DWORD *)v4 + 288)
    || *((_QWORD *)v4 + 83)
    || (RmHamHostGetCurrentState(v6, (union _RM_OPTIMIZATION_STATE *)&v113, (union _RM_OPTIMIZATION_STATE *)&v125), v125)
    || (char)v113 >= 0
    || ((unsigned __int16)v113 & 0x100) == 0 )
  {
    v96 = 0;
  }
  else
  {
    v96 = 0;
    if ( (*((_BYTE *)v6 + 672) & 2) == 0 )
      LOBYTE(v96) = *((_QWORD *)v6 + 132) == 0LL;
  }
  if ( HampLockTrackerId != -1 )
  {
    v97 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v98 = *v97;
    if ( (*v97 & 2) == 0 )
      __int2c();
    v21 = v97[2]-- == 1;
    if ( v21 )
      *v97 = v98 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)v6 + 2) = 0;
  RtlReleaseSRWLockExclusive(v6);
  *((_DWORD *)v4 + 365) = 0;
  if ( *((_QWORD *)v4 + 178) )
    RmpActivityHostRemoveFromRemediationGroup(v4, 1u);
  v99 = *(_QWORD *)(v126 + 3536);
  v100 = *(_DWORD *)(v99 + 160);
  if ( (v100 & 3) == 0 )
  {
    *(_DWORD *)(v99 + 160) = v100 | 1;
    TpPostWork(*(_QWORD *)(v99 + 144));
  }
  if ( v96 )
    RmpActivityHostDelete(v4);
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    LODWORD(v112) = *((_DWORD *)v4 + 317);
    v126 = *(_QWORD *)&v127.Id;
    v170 = &v112;
    v168 = &v126;
    *(_DWORD *)&v127.Level = 516;
    v164.Ptr = (ULONGLONG)off_1800DB220;
    v171 = 4LL;
    v169 = 8LL;
    *(_DWORD *)&v127.Id = 184549376;
    v127.Keyword = 8LL;
    v164.Size = *(unsigned __int16 *)off_1800DB220;
    v165 = &unk_1800C4568;
    v164.Reserved = 2;
    v166 = 42;
    v167 = 1;
    EventWriteTransfer(qword_1800DB238, &v127, 0LL, 0LL, 4u, &v164);
  }
  dword_1800DC590 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v101 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v102 = *v101;
    if ( (*v101 & 1) == 0 )
      __int2c();
    v21 = v101[1]-- == 1;
    if ( v21 )
      *v101 = v102 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  RtlWakeAllConditionVariable((char *)v4 + 1256);
  v103 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v104 = v103 <= 1;
  v105 = v103 - 1;
  if ( v104 )
  {
    if ( v105 )
      __fastfail(0xEu);
    v106 = *((_DWORD *)v4 + 10);
    if ( v106 )
    {
      v107 = v106 - 1;
      if ( v107 )
      {
        if ( v107 == 1 && !*((_DWORD *)v4 + 24) && !*((_DWORD *)v4 + 25) )
          NtDeleteWnfStateName((char *)v4 + 96);
      }
      else
      {
        v108 = (void *)*((_QWORD *)v4 + 7);
        if ( v108 )
          NtClose(v108);
      }
    }
    else
    {
      RmpEmptyWorkerCleanup((struct _RM_ACTIVITY_HOST *)((char *)v4 + 1320));
      v109 = (struct _RM_PARTITION *)*((_QWORD *)v4 + 7);
      if ( v109 )
        RmpPartitionRelease(v109);
      HampHostCleanup(v6);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  v110 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v110, 0LL);
  }
}
