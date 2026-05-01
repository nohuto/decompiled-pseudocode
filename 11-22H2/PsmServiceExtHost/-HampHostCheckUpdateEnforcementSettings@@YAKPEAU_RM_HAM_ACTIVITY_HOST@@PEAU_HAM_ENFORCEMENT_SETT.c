/*
 * XREFs of ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180021270
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x180053810 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x180005C14 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180010EB0 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180011A04 (-RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014438 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180023E30 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180027750 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ACD4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x180036888 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B664 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003DD2C (-HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z @ 0x18004C2A8 (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z.c)
 *     ?HampProcessSnapshotEnsureAdditionalCapacity@@YAJPEAU_HAM_PROCESS_SNAPSHOT@@K@Z @ 0x18004C330 (-HampProcessSnapshotEnsureAdditionalCapacity@@YAJPEAU_HAM_PROCESS_SNAPSHOT@@K@Z.c)
 *     memcmp_0 @ 0x1800536D6 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x18006EDB8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18008FAA4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampHostCheckUpdateEnforcementSettings(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _HAM_ENFORCEMENT_SETTINGS_CONTEXT *a2)
{
  __int64 v2; // rax
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int64 *Value; // rax
  __int64 v9; // rcx
  bool v10; // zf
  __int64 *v11; // rax
  __int64 v12; // rcx
  struct _RM_ACTIVITY_HOST *v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // r12d
  __int64 v16; // r13
  int v17; // r14d
  int v18; // r14d
  __int64 v19; // r15
  unsigned int v20; // r8d
  int v21; // r9d
  unsigned __int64 v22; // r13
  DWORD v23; // esi
  _QWORD *v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r8
  int v30; // r8d
  int v31; // r9d
  unsigned __int64 v32; // r14
  int v33; // ecx
  unsigned int *v34; // r12
  unsigned int *Heap; // rdi
  int v36; // r14d
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // eax
  PVOID ProcessHeap; // rcx
  unsigned int v41; // esi
  void **v42; // r13
  unsigned int *v43; // r8
  unsigned int *v44; // r12
  unsigned int *v45; // rcx
  struct _RM_ACTIVITY_HOST *v46; // rbx
  __int64 v47; // r15
  unsigned int v48; // esi
  void *v49; // r14
  __int64 v50; // rcx
  __int64 v51; // rdi
  struct _RM_ACTIVITY_HOST *v52; // rsi
  unsigned __int64 v53; // rdx
  int v54; // r8d
  int v55; // r9d
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  const unsigned __int16 *v58; // rdx
  __int64 v59; // rax
  int v60; // ecx
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // r10
  unsigned __int64 v63; // rtt
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rtt
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rax
  struct _HAM_ACTIVITY *v71; // r9
  __int64 v72; // r8
  int v73; // r10d
  int v74; // r11d
  int v75; // r14d
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  unsigned __int64 v78; // rax
  __int64 v79; // rcx
  unsigned __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  DWORD v87; // ecx
  __int64 *v88; // rax
  __int64 v89; // rcx
  unsigned __int64 v90; // rsi
  int v91; // r8d
  int v92; // r9d
  unsigned int v93; // edi
  DWORD v94; // r14d
  _QWORD *v95; // rsi
  char *v96; // rsi
  int v97; // eax
  unsigned int v98; // ecx
  DWORD v99; // r14d
  _QWORD *v100; // rsi
  __int64 v101; // r8
  __int64 v102; // rax
  const unsigned __int16 *v103; // rax
  int v104; // ecx
  struct _HAM_DEPENDENCY_GROUP *v105; // rdi
  char v106; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v107; // [rsp+58h] [rbp-A8h]
  unsigned int v108; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v109[2]; // [rsp+68h] [rbp-98h]
  unsigned int v110; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v111; // [rsp+74h] [rbp-8Ch] BYREF
  struct _RM_ACTIVITY_HOST *v112; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v113; // [rsp+80h] [rbp-80h]
  unsigned int *v114; // [rsp+88h] [rbp-78h]
  __int128 v115; // [rsp+90h] [rbp-70h] BYREF
  __int64 v116; // [rsp+A0h] [rbp-60h]
  void *ProcessHandle; // [rsp+A8h] [rbp-58h] BYREF
  int v118; // [rsp+B0h] [rbp-50h] BYREF
  int v119; // [rsp+B4h] [rbp-4Ch] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v120; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v121; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v122; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v123; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v124; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v125; // [rsp+E0h] [rbp-20h] BYREF
  EVENT_DESCRIPTOR v126; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int *v127; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v128; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v129; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v130; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v131; // [rsp+118h] [rbp+18h] BYREF
  __int64 v132; // [rsp+120h] [rbp+20h] BYREF
  struct _HAM_ACTIVITY *v133; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v134; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v135; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v136; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v137; // [rsp+148h] [rbp+48h] BYREF
  __int64 v138; // [rsp+150h] [rbp+50h] BYREF
  struct _HAM_ACTIVITY *v139; // [rsp+158h] [rbp+58h] BYREF
  unsigned int *v140; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v141; // [rsp+168h] [rbp+68h] BYREF
  __int64 v142; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v143; // [rsp+178h] [rbp+78h]
  __int64 v144; // [rsp+180h] [rbp+80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+188h] [rbp+88h] BYREF
  __int64 v146; // [rsp+198h] [rbp+98h] BYREF
  _CLIENT_ID ClientId; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v148; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v149; // [rsp+1C0h] [rbp+C0h]
  __int64 v150; // [rsp+1D0h] [rbp+D0h]
  __int64 v151; // [rsp+1D8h] [rbp+D8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1E0h] [rbp+E0h] BYREF
  char v153[16]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v154; // [rsp+220h] [rbp+120h]
  __int64 v155; // [rsp+228h] [rbp+128h]
  __int128 v156; // [rsp+230h] [rbp+130h] BYREF
  unsigned __int64 v157[2]; // [rsp+240h] [rbp+140h]
  _OWORD Buf2[2]; // [rsp+250h] [rbp+150h] BYREF
  _OWORD Buf1[2]; // [rsp+270h] [rbp+170h] BYREF
  _QWORD v160[4]; // [rsp+290h] [rbp+190h] BYREF
  char v161[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int *v162; // [rsp+2C0h] [rbp+1C0h]
  unsigned __int64 v163; // [rsp+2C8h] [rbp+1C8h]
  _BYTE v164[32]; // [rsp+2D0h] [rbp+1D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2F0h] [rbp+1F0h] BYREF
  void *v166; // [rsp+300h] [rbp+200h]
  int v167; // [rsp+308h] [rbp+208h]
  int v168; // [rsp+30Ch] [rbp+20Ch]
  __int64 *v169; // [rsp+310h] [rbp+210h]
  __int64 v170; // [rsp+318h] [rbp+218h]
  const unsigned __int16 *v171; // [rsp+320h] [rbp+220h]
  int v172; // [rsp+328h] [rbp+228h]
  int v173; // [rsp+32Ch] [rbp+22Ch]
  struct _RM_HAM_ACTIVITY_HOST **v174; // [rsp+330h] [rbp+230h]
  __int64 v175; // [rsp+338h] [rbp+238h]
  unsigned __int64 *v176; // [rsp+340h] [rbp+240h]
  __int64 v177; // [rsp+348h] [rbp+248h]
  __int64 *v178; // [rsp+350h] [rbp+250h]
  __int64 v179; // [rsp+358h] [rbp+258h]
  unsigned __int64 *v180; // [rsp+360h] [rbp+260h]
  __int64 v181; // [rsp+368h] [rbp+268h]
  __int64 *v182; // [rsp+370h] [rbp+270h]
  __int64 v183; // [rsp+378h] [rbp+278h]
  struct _EVENT_DATA_DESCRIPTOR v184; // [rsp+380h] [rbp+280h] BYREF
  void *v185; // [rsp+390h] [rbp+290h]
  int v186; // [rsp+398h] [rbp+298h]
  int v187; // [rsp+39Ch] [rbp+29Ch]
  const unsigned __int16 *v188; // [rsp+3A0h] [rbp+2A0h]
  int v189; // [rsp+3A8h] [rbp+2A8h]
  int v190; // [rsp+3ACh] [rbp+2ACh]
  unsigned int *v191; // [rsp+3B0h] [rbp+2B0h]
  __int64 v192; // [rsp+3B8h] [rbp+2B8h]
  __int64 *v193; // [rsp+3C0h] [rbp+2C0h]
  __int64 v194; // [rsp+3C8h] [rbp+2C8h]
  char *v195; // [rsp+3D0h] [rbp+2D0h]
  __int64 v196; // [rsp+3D8h] [rbp+2D8h]
  unsigned __int64 *v197; // [rsp+3E0h] [rbp+2E0h]
  __int64 v198; // [rsp+3E8h] [rbp+2E8h]
  unsigned __int64 *v199; // [rsp+3F0h] [rbp+2F0h]
  __int64 v200; // [rsp+3F8h] [rbp+2F8h]
  unsigned __int64 *v201; // [rsp+400h] [rbp+300h]
  __int64 v202; // [rsp+408h] [rbp+308h]

  v2 = *((_QWORD *)a1 + 83);
  v113 = (unsigned __int64)a2;
  v120 = a1;
  v4 = a1;
  if ( (v2 & 0x40000000000000LL) == 0 && (v2 & 0x20000000000000LL) == 0 )
  {
    HampHostComputeStaticEnforcementSettings(
      a1,
      (struct _RM_ENFORCEMENT_SETTINGS *)&v148,
      (struct _RM_COMMIT_THRESHOLDS *)v164,
      (struct _RM_COMMIT_THRESHOLDS *)v153,
      &v139);
    if ( ((*((_QWORD *)v4 + 83) & 0x80000000000000LL) == 0
       || SDWORD2(v149) < 2 && (BYTE12(v149) & 0x70) == 0 && (BYTE12(v149) & 8) == 0)
      && *((struct _HAM_ACTIVITY **)v4 + 127) == v139 )
    {
      v5 = 1192LL;
      if ( v4 )
        v5 = (__int64)v4 + 1128;
      v6 = *(_OWORD *)(v5 + 16);
      Buf1[0] = 0uLL;
      Buf1[1] = v6;
      Buf2[0] = 0uLL;
      Buf2[1] = v149;
      if ( !memcmp_0(Buf1, Buf2, 0x20uLL)
        && v155 == *((_QWORD *)v4 + 108)
        && v154 == *((_QWORD *)v4 + 109)
        && !memcmp_0(v164, (char *)v4 + 888, 0x20uLL) )
      {
        *(_DWORD *)a2 = 0;
        return 0LL;
      }
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v9 = *Value;
    if ( (*Value & 2) == 0 )
      __int2c();
    v10 = Value[2]-- == 1;
    if ( v10 )
      *Value = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)v4 + 2) = 0;
  RtlReleaseSRWLockExclusive(v4);
  dword_1800DC590 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v11 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v12 = *v11;
    if ( (*v11 & 1) == 0 )
      __int2c();
    v10 = v11[1]-- == 1;
    if ( v10 )
      *v11 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v13 = 0LL;
  if ( v4 )
    v13 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v4 - 64);
  v112 = v13;
  v14 = *((_QWORD *)v13 + 4);
  v15 = *((_DWORD *)v13 + 156);
  v16 = *(_QWORD *)(*((_QWORD *)v13 + 6) + 40LL);
  v17 = -(*((_BYTE *)v13 + 656) != 0);
  v111 = *((_DWORD *)v13 + 155);
  v18 = v17 & 4;
  v19 = -1LL;
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, int, unsigned int **, _QWORD))(v16 + 24))(
         (__int64)v13 + 552,
         v111,
         (__int64)v13 + 88,
         v15,
         v14,
         v18,
         &v127,
         0LL) < 0 )
  {
    if ( (unsigned int)dword_1800DB1E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB1E0, 1LL) )
    {
      v144 = v14;
      v111 = v20;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800DB1E0,
        (unsigned int)&unk_1800C30DD,
        v20,
        v21,
        (__int64)&v111,
        (__int64)&v144);
    }
    goto LABEL_31;
  }
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, int, unsigned __int64 *))(v16 + 96))(
         (__int64)v13 + 552,
         v111,
         (__int64)v13 + 88,
         v15,
         v14,
         v18,
         &v121) < 0 )
  {
    if ( (unsigned int)dword_1800DB1E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB1E0, 1LL) )
    {
      v146 = v14;
      v118 = v30;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800DB1E0,
        (unsigned int)&unk_1800C3125,
        v30,
        v31,
        (__int64)&v118,
        (__int64)&v146);
    }
    goto LABEL_31;
  }
  *(_QWORD *)&v126.Id = (v121 * (unsigned __int128)0x1000uLL) >> 64;
  v32 = v121 << 12;
  v107 = v121 << 12;
  if ( is_mul_ok(v121, 0x1000uLL) )
  {
    v121 <<= 12;
    v33 = 0;
  }
  else
  {
    v121 = -1LL;
    v33 = -1073741675;
    v32 = -1LL;
    v107 = -1LL;
  }
  v34 = v127;
  *(_QWORD *)v109 = v127;
  if ( v33 < 0 )
  {
LABEL_31:
    v22 = v113;
    goto LABEL_32;
  }
  v122 = 0LL;
  v110 = 1;
  v115 = 0LL;
  v116 = 0LL;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
  {
    v36 = -1073741801;
    goto LABEL_79;
  }
  v107 = v32;
  *(_QWORD *)v109 = v34;
  while ( 1 )
  {
    v37 = *((_QWORD *)v13 + 6);
    v38 = *((_QWORD *)v13 + 4);
    v114 = v34;
    v124 = v32;
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, int, unsigned int *, unsigned int *))(*(_QWORD *)(v37 + 40) + 72LL))(
            (__int64)v13 + 552,
            *((unsigned int *)v13 + 155),
            (__int64)v13 + 88,
            *((unsigned int *)v13 + 156),
            v38,
            *((_BYTE *)v13 + 656) != 0 ? 4 : 0,
            Heap,
            &v110);
    v36 = v39;
    if ( v39 >= 0 )
      break;
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( v39 != -2147483643 )
    {
      RtlFreeHeap(ProcessHeap, 0, Heap);
      goto LABEL_79;
    }
    RtlFreeHeap(ProcessHeap, 0, Heap);
    v32 = v107;
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v110);
    if ( !Heap )
    {
      v36 = -1073741801;
      goto LABEL_79;
    }
  }
  v41 = v110;
  v36 = HampProcessSnapshotEnsureAdditionalCapacity((struct _HAM_PROCESS_SNAPSHOT *)&v115, v110);
  v42 = (void **)v115;
  v43 = Heap;
  *(_QWORD *)v109 = v34;
  v44 = (unsigned int *)*((_QWORD *)&v115 + 1);
  v107 = v124;
  if ( v36 < 0 )
  {
    v48 = v116;
  }
  else
  {
    v45 = v114;
    ProcessHandle = 0LL;
    v107 = v124;
    *(_QWORD *)v109 = v114;
    if ( v41 )
    {
      v46 = v112;
      v47 = v41;
      v48 = v116;
      v114 = Heap;
      v107 = v124;
      *(_QWORD *)v109 = v45;
      do
      {
        v49 = (void *)*Heap;
        ClientId.UniqueThread = 0LL;
        memset(&ObjectAttributes.RootDirectory, 0, 20);
        ClientId.UniqueProcess = v49;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.Length = 48;
        if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*((_QWORD *)v46 + 6) + 40LL) + 80LL))(
                 (__int64)v46 + 552,
                 *((unsigned int *)v46 + 155),
                 (__int64)v46 + 88,
                 *((unsigned int *)v46 + 156),
                 *((_QWORD *)v46 + 4),
                 *((_BYTE *)v46 + 656) != 0 ? 4 : 0,
                 ProcessHandle) )
          {
            v50 = v48++;
            v42[v50] = ProcessHandle;
            v44[v50] = (unsigned int)v49;
          }
          else
          {
            NtClose(ProcessHandle);
          }
        }
        Heap += 2;
        --v47;
      }
      while ( v47 );
      v4 = v120;
      v19 = -1LL;
      v43 = v114;
      v36 = 0;
      LODWORD(v116) = v48;
    }
    else
    {
      v48 = v116;
      v36 = 0;
    }
  }
  if ( v43 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v43);
    v48 = v116;
    v44 = (unsigned int *)*((_QWORD *)&v115 + 1);
    v42 = (void **)v115;
  }
  if ( v36 < 0 )
  {
    v13 = v112;
LABEL_79:
    HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v115, 0LL);
    if ( (unsigned int)dword_1800DB1E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB1E0, 1LL) )
    {
      v128 = *((_QWORD *)v13 + 4);
      v119 = v36;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800DB1E0,
        (unsigned int)&unk_1800C6BD7,
        v54,
        v55,
        (__int64)&v119,
        (__int64)&v128);
    }
    v52 = v112;
    v53 = 0LL;
    v122 = 0LL;
    goto LABEL_83;
  }
  if ( v48 )
  {
    v51 = v48;
    v52 = v112;
    do
    {
      RmpActivityHostCommitDebtCallback(v52, *v42++, *v44++, &v122);
      --v51;
    }
    while ( v51 );
  }
  else
  {
    v52 = v112;
  }
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v115, 0LL);
  v53 = v122;
LABEL_83:
  v56 = *(_QWORD *)v109;
  if ( v53 < *(_QWORD *)v109 )
    v56 = v53;
  v57 = *(_QWORD *)v109 - v56;
  if ( *(_QWORD *)v109 && v57 <= 1 )
    v57 = 1LL;
  if ( (unsigned int)dword_1800DB1E0 > 4 && (byte_1800DB1F0 & 1) != 0 && (qword_1800DB1F8 & 1) == qword_1800DB1F8 )
  {
    LODWORD(v120) = *((_DWORD *)v52 + 156);
    v132 = *((_QWORD *)v52 + 4);
    v182 = (__int64 *)&v134;
    v180 = &v129;
    v178 = (__int64 *)&v130;
    v134 = v53;
    v58 = (const unsigned __int16 *)((char *)v52 + 88);
    v176 = &v131;
    v174 = &v120;
    v129 = v107;
    v130 = *(_QWORD *)v109;
    v131 = v57 + v107;
    v183 = 8LL;
    v181 = 8LL;
    v179 = 8LL;
    v177 = 8LL;
    v175 = 4LL;
    if ( v52 == (struct _RM_ACTIVITY_HOST *)-88LL )
    {
      v58 = &word_1800B66C4;
      v60 = 2;
    }
    else
    {
      v59 = -1LL;
      do
        v10 = v58[++v59] == 0;
      while ( !v10 );
      v60 = 2 * v59 + 2;
    }
    v172 = v60;
    v169 = &v132;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DB1E8;
    v171 = v58;
    EventDescriptor.Keyword = 1LL;
    v173 = 0;
    v170 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
    v166 = &unk_1800C4387;
    v168 = 1;
    UserData.Reserved = 2;
    v167 = 150;
    v108 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  v22 = *(_QWORD *)v109 + v107;
LABEL_32:
  v23 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v24 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v23) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v24 |= 2uLL;
    ++v24[2];
  }
  RtlAcquireSRWLockExclusive(v4);
  *((_DWORD *)v4 + 2) = GetCurrentThreadId();
  v25 = *((_QWORD *)v4 + 83);
  if ( (v25 & 0x40000000000000LL) != 0 )
  {
    v25 &= ~0x40000000000000uLL;
    *((_QWORD *)v4 + 108) = 0LL;
    *((_QWORD *)v4 + 83) = v25;
    *((_QWORD *)v4 + 109) = 0LL;
  }
  v26 = (v25 >> 53) & 1;
  *(_QWORD *)v109 = v26;
  if ( (v25 & 0x80000000000000LL) != 0 )
  {
    *(_QWORD *)v109 = (unsigned int)v26 | 2;
    *((_QWORD *)v4 + 83) = v25 & 0xFF7FFFFFFFFFFFFFuLL;
  }
  HampHostComputeStaticEnforcementSettings(
    v4,
    (struct _RM_ENFORCEMENT_SETTINGS *)v160,
    (struct _RM_COMMIT_THRESHOLDS *)&v156,
    (struct _RM_COMMIT_THRESHOLDS *)v161,
    &v133);
  v27 = v157[0];
  v123 = *((_QWORD *)&v156 + 1);
  v125 = v156;
  if ( v22 >= (unsigned __int64)v156 )
  {
    if ( v22 >= *((_QWORD *)&v156 + 1) )
    {
      if ( v22 >= v157[0] )
      {
        v28 = v157[0];
        v29 = -1LL;
      }
      else
      {
        v28 = *((_QWORD *)&v156 + 1);
        v29 = v157[0];
      }
    }
    else
    {
      v29 = *((_QWORD *)&v156 + 1);
      v28 = v156;
    }
  }
  else
  {
    v28 = 0LL;
    v29 = v156;
  }
  v61 = v157[1];
  v62 = v22 >> 3;
  if ( v157[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    v62 = v157[1] >> 4;
  if ( v62 <= 0x1400000 )
    v62 = 20971520LL;
  v63 = v62 + v22 - 1;
  v64 = v63 / v62 * v62;
  v65 = -1LL;
  v150 = (v63 / v62 * (unsigned __int128)v62) >> 64;
  if ( is_mul_ok(v63 / v62, v62) )
    v65 = v64;
  if ( v157[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v65 > v157[1] )
  {
    v66 = v62 + v157[1] - 1;
    v151 = (v66 / v62 * (unsigned __int128)v62) >> 64;
    v65 = v66 / v62 * v62;
    if ( !is_mul_ok(v66 / v62, v62) )
    {
      v65 = -1LL;
LABEL_113:
      v67 = -1LL;
      goto LABEL_114;
    }
  }
  if ( v65 == -1LL )
    goto LABEL_113;
  v67 = -1LL;
  if ( v65 + v62 >= v65 )
    v67 = v65 + v62;
LABEL_114:
  if ( v157[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v65 >= v157[1] )
      v65 = v157[1];
    if ( v157[1] < v67 )
      v67 = v157[1];
  }
  v68 = 2 * v62;
  if ( 2 * v62 >= v65 )
    v68 = v65;
  v69 = v65 - v68;
  if ( v28 <= v69 )
    v28 = v69;
  if ( v22 <= v157[1] && v29 >= v67 )
    v29 = v67;
  v160[0] = v28;
  v160[1] = v29;
  if ( v29 != -1LL )
  {
    v70 = *((_QWORD *)v4 + 123);
    if ( v70 <= v29 )
      v70 = v29;
    *((_QWORD *)v4 + 123) = v70;
  }
  v71 = v133;
  if ( *((_QWORD *)v4 + 88) )
  {
    LODWORD(v107) = (*((_QWORD *)v4 + 83) & 0x200000000000000LL) != 0 && *((struct _HAM_ACTIVITY **)v4 + 127) != v133;
    if ( HampHostIsElasticRecipient(v4) )
    {
      if ( v72 != *((_QWORD *)v4 + 142) )
        v73 = v74;
      LODWORD(v107) = v73;
    }
    if ( *((_QWORD *)v4 + 122) )
      LODWORD(v107) = 1;
  }
  else
  {
    LODWORD(v107) = 0;
  }
  if ( *((_QWORD *)v4 + 113) <= v27 && *((_QWORD *)v4 + 114) <= v61 || (v75 = 1, (*((_BYTE *)v4 + 671) & 1) != 0) )
    v75 = 0;
  v124 = v163;
  *((_QWORD *)v4 + 108) = v163;
  v114 = v162;
  *((_QWORD *)v4 + 109) = v162;
  *((_QWORD *)v4 + 127) = v71;
  v76 = v156;
  v77 = *(_OWORD *)v157;
  *(_OWORD *)((char *)v4 + 888) = v156;
  *(_OWORD *)((char *)v4 + 904) = v77;
  if ( v71 )
    v78 = *((_QWORD *)v71 + 59);
  else
    v78 = v27;
  if ( v78 == *((_QWORD *)v4 + 110) )
  {
    v108 = 0;
  }
  else
  {
    v108 = 1;
    *((_QWORD *)v4 + 110) = v78;
  }
  v79 = *((_QWORD *)v4 + 121);
  if ( v27 == -1LL || v79 == -1 || (v80 = v79 + v27, v79 + v27 < v27) )
  {
    *((_QWORD *)v4 + 119) = -1LL;
    v81 = *((_QWORD *)v4 + 122);
LABEL_164:
    v82 = -1LL;
    goto LABEL_165;
  }
  *((_QWORD *)v4 + 119) = v80;
  v81 = *((_QWORD *)v4 + 122);
  if ( v80 == -1LL )
    goto LABEL_164;
  if ( v81 == -1 )
    goto LABEL_164;
  v82 = v80 + v81;
  if ( v80 + v81 < v80 )
    goto LABEL_164;
LABEL_165:
  *((_QWORD *)v4 + 119) = v82;
  *(_OWORD *)((char *)v4 + 920) = v76;
  *(_OWORD *)((char *)v4 + 936) = v77;
  v83 = *((_QWORD *)v4 + 118);
  if ( v83 == -1LL || v81 == -1 || v83 + v81 < v83 )
    *((_QWORD *)v4 + 118) = -1LL;
  else
    *((_QWORD *)v4 + 118) = v83 + v81;
  v84 = *((_QWORD *)v4 + 117);
  if ( v84 == -1LL || v81 == -1 || v84 + v81 < v84 )
    *((_QWORD *)v4 + 117) = -1LL;
  else
    *((_QWORD *)v4 + 117) = v84 + v81;
  v85 = *((_QWORD *)v4 + 116);
  if ( v85 == -1LL || v81 == -1 || v85 + v81 < v85 )
    *((_QWORD *)v4 + 116) = -1LL;
  else
    *((_QWORD *)v4 + 116) = v85 + v81;
  v86 = *((_QWORD *)v4 + 115);
  if ( v86 == -1LL || v81 == -1 || v86 + v81 < v86 )
    *((_QWORD *)v4 + 115) = -1LL;
  else
    *((_QWORD *)v4 + 115) = v86 + v81;
  v87 = HampLockTrackerId;
  *((_QWORD *)v4 + 83) &= ~0x20000000000000uLL;
  if ( v87 != -1 )
  {
    v88 = (__int64 *)TlsGetValue(v87);
    v89 = *v88;
    if ( (*v88 & 2) == 0 )
      __int2c();
    v10 = v88[2]-- == 1;
    if ( v10 )
      *v88 = v89 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)v4 + 2) = 0;
  RtlReleaseSRWLockExclusive(v4);
  v90 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  v143 = v90;
  if ( v75 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)v4 - 2) + 40LL) + 192LL))(
      *((_QWORD *)v4 + 126),
      1LL);
    HampHostAcquireLockExclusiveEx(v4, 0);
    *((_QWORD *)v4 + 83) &= ~0x40000000000000uLL;
    HampHostReleaseLockExclusiveEx(v4);
    RmpSystemResourceTimerSet(v4, *(unsigned int *)(v90 + 1060), *((void **)v4 + 126));
    if ( (unsigned int)dword_1800DB218 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
      {
        v140 = v114;
        v135 = v124;
        v138 = *((_QWORD *)v4 - 4);
        v136 = v27;
        v137 = v61;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (unsigned int)&dword_1800DB218,
          (unsigned int)&unk_1800BF7A2,
          v91,
          v92,
          (__int64)&v138,
          (__int64)&v137,
          (__int64)&v136,
          (__int64)&v135,
          (__int64)&v140);
      }
    }
  }
  if ( v22 >= v125 )
  {
    if ( v22 >= v123 )
      v93 = 4 - (v22 < v27);
    else
      v93 = 2;
  }
  else
  {
    v93 = 1;
  }
  v94 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v95 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v94) )
      __int2c();
    *v95 |= 1uLL;
    ++v95[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DC590 = GetCurrentThreadId();
  v96 = (char *)v4 - 64;
  if ( v93 >= 4 )
    RmHamHostTryDecommitOffered((struct _RM_HAM_ACTIVITY_HOST *)((char *)v4 - 64), v22, v27);
  v97 = RmpActivityHostApplyEnforcementSettings(
          (struct _RM_HAM_ACTIVITY_HOST *)((char *)v4 - 64),
          (struct _RM_ENFORCEMENT_SETTINGS *)v160,
          v109[0]);
  if ( (*(_BYTE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          + 120)
                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                 + 700) & 1) != 0 )
  {
    if ( v97 < 0 )
    {
LABEL_208:
      v98 = *(_DWORD *)v113 + 1;
      *(_DWORD *)v113 = v98;
      if ( v98 == 5 * (v98 / 5) )
      {
        RmpReleaseGlobalLock();
        HampHostQueueTerminateEx((__int64)v4, 3u, 0x1301u, 0LL, 0, 0, 0LL, (unsigned int *)&v112);
        RmpAcquireGlobalLock();
      }
      goto LABEL_210;
    }
  }
  else if ( v97 < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    goto LABEL_208;
  }
  *(_DWORD *)v113 = 0;
LABEL_210:
  v99 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v100 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v99) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v100 |= 2uLL;
    ++v100[2];
    v96 = (char *)v4 - 64;
  }
  RtlAcquireSRWLockExclusive(v4);
  *((_DWORD *)v4 + 2) = GetCurrentThreadId();
  v101 = *((_QWORD *)v96 + 174);
  if ( (v27 != v101 || v108)
    && (int)ExecutionModel::ResourceManager::CommitMemoryLimitChange(
              *(ExecutionModel::ResourceManager **)(*((_QWORD *)v96 + 6) + 3536LL),
              (struct _RM_PSM_HOST_INFO *)(v96 + 88),
              v101,
              v27,
              *((_QWORD *)v96 + 118)) >= 0 )
  {
    *((_QWORD *)v96 + 174) = v27;
  }
  if ( *((_DWORD *)v96 + 350) != v93 )
  {
    if ( (unsigned int)dword_1800DB218 > 4
      && (qword_1800DB228 & 0x40) != 0
      && (qword_1800DB230 & 0x40) == qword_1800DB230 )
    {
      v201 = &v123;
      v123 = v160[2];
      v102 = *((_QWORD *)v96 + 4);
      v199 = &v125;
      v197 = &v141;
      v195 = &v106;
      v142 = v102;
      v108 = *((_DWORD *)v96 + 156);
      v103 = (const unsigned __int16 *)((char *)v4 + 24);
      v193 = &v142;
      v191 = &v108;
      v125 = v27;
      v141 = v22;
      v106 = v93;
      v202 = 8LL;
      v200 = 8LL;
      v198 = 8LL;
      v196 = 1LL;
      v194 = 8LL;
      v192 = 4LL;
      if ( v4 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
      {
        v103 = &word_1800B66C4;
        v104 = 2;
      }
      else
      {
        do
          v10 = v103[++v19] == 0;
        while ( !v10 );
        v104 = 2 * v19 + 2;
      }
      v188 = v103;
      *(_DWORD *)&v126.Level = 4;
      v184.Ptr = (ULONGLONG)off_1800DB220;
      v189 = v104;
      v190 = 0;
      *(_DWORD *)&v126.Id = 184549376;
      v126.Keyword = 64LL;
      v184.Size = *(unsigned __int16 *)off_1800DB220;
      v185 = &unk_1800BF4E4;
      v187 = 1;
      v184.Reserved = 2;
      v186 = 119;
      LODWORD(v112) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800DB238, &v126, 0LL, 0LL, 9u, &v184);
    }
    (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**(_QWORD **)(v143 + 896) + 32LL))(
      *(_QWORD *)(v143 + 896),
      v96,
      *((unsigned int *)v96 + 350),
      v93);
    *((_DWORD *)v96 + 350) = v93;
  }
  if ( (_DWORD)v107 )
  {
    v105 = HampHostCheckEnterDependencyWorker(v4);
    if ( v105 )
    {
      HampHostReleaseLockExclusiveEx(v4);
      RmpReleaseGlobalLock();
      HampDepGroupRunStateChangeWorker(v105);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(v4, 0);
    }
  }
  return 1LL;
}
