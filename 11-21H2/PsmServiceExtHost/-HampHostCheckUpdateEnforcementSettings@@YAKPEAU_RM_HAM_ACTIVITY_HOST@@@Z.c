/*
 * XREFs of ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014A10
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800121C0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x1800503AC (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800171D0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18001CC20 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18002DB4C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x18002E578 (-RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x180032950 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18003A2D4 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x18003D660 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003E6B0 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180050216 (memcmp_0.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x18007929C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     ?HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007A15C (-HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180094414 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampHostCheckUpdateEnforcementSettings(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  __int128 v3; // xmm1
  __int64 *Value; // rax
  __int64 v6; // rcx
  bool v7; // zf
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r13
  char v11; // al
  int v12; // r15d
  unsigned int v13; // ecx
  const unsigned __int16 *v14; // rsi
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // r8
  int v21; // ecx
  unsigned __int64 v22; // r13
  PVOID v23; // r8
  PVOID Heap; // r15
  unsigned __int64 v25; // rdx
  char v26; // al
  __int64 (__fastcall *v27)(char *, _QWORD, char *, _QWORD, __int64, int, PVOID, unsigned int *); // r11
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // r13d
  __int64 v32; // r15
  unsigned int v33; // r13d
  PVOID v34; // rax
  PVOID v35; // rax
  char *v36; // r12
  _DWORD *v37; // r13
  char v38; // al
  int v39; // eax
  __int64 v40; // rdx
  void **v41; // r15
  __int64 v42; // r14
  unsigned int *v43; // r13
  HANDLE *v44; // r15
  __int64 v45; // r14
  ULONGLONG v46; // r9
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // ecx
  unsigned __int64 v52; // r13
  DWORD v53; // r15d
  _QWORD *v54; // rsi
  unsigned __int64 v55; // rax
  __int64 v56; // rcx
  unsigned __int64 v57; // r15
  unsigned __int64 v58; // r10
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  unsigned __int128 v65; // rax
  unsigned __int64 v66; // kr00_8
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rax
  struct _HAM_ACTIVITY *v71; // r8
  int v72; // r11d
  int v73; // r12d
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  unsigned __int64 v76; // rax
  __int64 v77; // rcx
  unsigned __int64 *v78; // rax
  unsigned __int64 *v79; // rdx
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  __int64 v82; // rdx
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  DWORD v87; // ecx
  __int64 *v88; // rax
  __int64 v89; // rcx
  unsigned __int64 v90; // r13
  unsigned int v91; // r12d
  unsigned __int64 v92; // rsi
  DWORD v93; // r15d
  _QWORD *v94; // rsi
  DWORD v95; // r15d
  _QWORD *v96; // rsi
  PVOID v97; // rsi
  unsigned __int64 v98; // r8
  __int64 v99; // r8
  __int64 v100; // rax
  const unsigned __int16 *v101; // rax
  int v102; // ecx
  PVOID ProcessHeap; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // r8
  unsigned __int64 v109; // rtt
  __int64 v110; // r9
  int v111; // r10d
  unsigned int v112; // edx
  __int64 v113; // r8
  __int64 v114; // r9
  int v115; // r8d
  int v116; // r9d
  unsigned int v117; // edx
  struct _HAM_DEPENDENCY_GROUP *v118; // rdi
  unsigned __int64 v119; // [rsp+50h] [rbp-B0h]
  BOOL v120; // [rsp+50h] [rbp-B0h]
  char v121; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v122; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v123; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h]
  unsigned int v125[2]; // [rsp+78h] [rbp-88h]
  unsigned int v126; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v127; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v128; // [rsp+88h] [rbp-78h] BYREF
  PVOID v129[2]; // [rsp+90h] [rbp-70h]
  __int64 v130; // [rsp+A0h] [rbp-60h]
  void *ProcessHandle; // [rsp+A8h] [rbp-58h] BYREF
  char *v132; // [rsp+B0h] [rbp-50h] BYREF
  struct _HAM_ACTIVITY *v133; // [rsp+B8h] [rbp-48h] BYREF
  int v134; // [rsp+C0h] [rbp-40h] BYREF
  int v135; // [rsp+C4h] [rbp-3Ch] BYREF
  int v136; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v137; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v138; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v139; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v140; // [rsp+E8h] [rbp-18h] BYREF
  EVENT_DESCRIPTOR v141; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v142; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v143; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v144; // [rsp+118h] [rbp+18h] BYREF
  __int64 v145; // [rsp+120h] [rbp+20h] BYREF
  struct _HAM_ACTIVITY *v146; // [rsp+128h] [rbp+28h] BYREF
  __int64 v147; // [rsp+130h] [rbp+30h] BYREF
  __int64 v148; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v149; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v150; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v151; // [rsp+150h] [rbp+50h] BYREF
  __int64 v152; // [rsp+158h] [rbp+58h] BYREF
  __int64 v153; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v154; // [rsp+168h] [rbp+68h] BYREF
  __int64 v155; // [rsp+170h] [rbp+70h] BYREF
  __int64 v156; // [rsp+178h] [rbp+78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int64 v158; // [rsp+190h] [rbp+90h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+198h] [rbp+98h] BYREF
  __int128 v160; // [rsp+1A8h] [rbp+A8h] BYREF
  __int128 v161; // [rsp+1B8h] [rbp+B8h]
  __int64 v162; // [rsp+1C8h] [rbp+C8h]
  __int64 v163; // [rsp+1D0h] [rbp+D0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1D8h] [rbp+D8h] BYREF
  char v165[16]; // [rsp+208h] [rbp+108h] BYREF
  __int64 v166; // [rsp+218h] [rbp+118h]
  __int64 v167; // [rsp+220h] [rbp+120h]
  __int128 v168; // [rsp+228h] [rbp+128h] BYREF
  __int128 v169; // [rsp+238h] [rbp+138h]
  _OWORD Buf2[2]; // [rsp+248h] [rbp+148h] BYREF
  _OWORD Buf1[2]; // [rsp+268h] [rbp+168h] BYREF
  _QWORD v172[4]; // [rsp+288h] [rbp+188h] BYREF
  char v173[16]; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int64 v174; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int64 v175; // [rsp+2C0h] [rbp+1C0h]
  _BYTE v176[40]; // [rsp+2C8h] [rbp+1C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2F0h] [rbp+1F0h] BYREF
  void *v178; // [rsp+300h] [rbp+200h]
  int v179; // [rsp+308h] [rbp+208h]
  int v180; // [rsp+30Ch] [rbp+20Ch]
  __int64 *v181; // [rsp+310h] [rbp+210h]
  __int64 v182; // [rsp+318h] [rbp+218h]
  const unsigned __int16 *v183; // [rsp+320h] [rbp+220h]
  int v184; // [rsp+328h] [rbp+228h]
  int v185; // [rsp+32Ch] [rbp+22Ch]
  int *v186; // [rsp+330h] [rbp+230h]
  __int64 v187; // [rsp+338h] [rbp+238h]
  unsigned __int64 *v188; // [rsp+340h] [rbp+240h]
  __int64 v189; // [rsp+348h] [rbp+248h]
  unsigned __int64 *v190; // [rsp+350h] [rbp+250h]
  __int64 v191; // [rsp+358h] [rbp+258h]
  unsigned __int64 *v192; // [rsp+360h] [rbp+260h]
  __int64 v193; // [rsp+368h] [rbp+268h]
  unsigned __int64 *v194; // [rsp+370h] [rbp+270h]
  __int64 v195; // [rsp+378h] [rbp+278h]
  struct _EVENT_DATA_DESCRIPTOR v196; // [rsp+380h] [rbp+280h] BYREF
  void *v197; // [rsp+390h] [rbp+290h]
  int v198; // [rsp+398h] [rbp+298h]
  int v199; // [rsp+39Ch] [rbp+29Ch]
  const unsigned __int16 *v200; // [rsp+3A0h] [rbp+2A0h]
  int v201; // [rsp+3A8h] [rbp+2A8h]
  int v202; // [rsp+3ACh] [rbp+2ACh]
  __int64 *v203; // [rsp+3B0h] [rbp+2B0h]
  __int64 v204; // [rsp+3B8h] [rbp+2B8h]
  __int64 *v205; // [rsp+3C0h] [rbp+2C0h]
  __int64 v206; // [rsp+3C8h] [rbp+2C8h]
  char *v207; // [rsp+3D0h] [rbp+2D0h]
  __int64 v208; // [rsp+3D8h] [rbp+2D8h]
  unsigned __int64 *v209; // [rsp+3E0h] [rbp+2E0h]
  __int64 v210; // [rsp+3E8h] [rbp+2E8h]
  __int128 *v211; // [rsp+3F0h] [rbp+2F0h]
  __int64 v212; // [rsp+3F8h] [rbp+2F8h]
  char *v213; // [rsp+400h] [rbp+300h]
  __int64 v214; // [rsp+408h] [rbp+308h]

  v1 = *((_QWORD *)a1 + 83);
  if ( (v1 & 0x40000000000000LL) == 0 && (v1 & 0x20000000000000LL) == 0 )
  {
    HampHostComputeStaticEnforcementSettings(
      a1,
      (struct _RM_ENFORCEMENT_SETTINGS *)&v160,
      (struct _RM_COMMIT_THRESHOLDS *)v176,
      (struct _RM_COMMIT_THRESHOLDS *)v165,
      &v133);
    if ( ((*((_QWORD *)a1 + 83) & 0x80000000000000LL) == 0
       || SDWORD2(v161) < 2 && (BYTE12(v161) & 0x70) == 0 && (BYTE12(v161) & 8) == 0)
      && *((struct _HAM_ACTIVITY **)a1 + 127) == v133 )
    {
      v3 = *((_OWORD *)a1 + 71);
      Buf1[0] = 0uLL;
      Buf1[1] = v3;
      Buf2[0] = 0uLL;
      Buf2[1] = v161;
      if ( !memcmp_0(Buf1, Buf2, 0x20uLL)
        && v167 == *((_QWORD *)a1 + 108)
        && v166 == *((_QWORD *)a1 + 109)
        && !memcmp_0(v176, (char *)a1 + 888, 0x20uLL) )
      {
        return 0LL;
      }
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v6 = *Value;
    if ( (*Value & 2) == 0 )
      __int2c();
    v7 = Value[2]-- == 1;
    if ( v7 )
      *Value = v6 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v8 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v9 = *v8;
    if ( (*v8 & 1) == 0 )
      __int2c();
    v7 = v8[1]-- == 1;
    if ( v7 )
      *v8 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v10 = *(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL);
  v11 = *((_BYTE *)a1 + 592);
  if ( v11 )
  {
    v12 = 8;
    if ( v11 == 1 )
      v12 = 4;
  }
  else
  {
    v12 = 0;
  }
  v13 = *((_DWORD *)a1 + 140);
  v14 = (const unsigned __int16 *)((char *)a1 + 24);
  v15 = *((unsigned int *)a1 + 139);
  *(_QWORD *)v125 = *((_QWORD *)a1 - 4);
  v132 = (char *)a1 + 488;
  v127 = v13;
  LODWORD(v123) = v15;
  v16 = (*(__int64 (__fastcall **)(char *, __int64, char *, _QWORD, _QWORD, int, unsigned __int64 *, _QWORD))(v10 + 24))(
          (char *)a1 + 488,
          v15,
          (char *)a1 + 24,
          v13,
          *(_QWORD *)v125,
          v12,
          &v154,
          0LL);
  v18 = -1LL;
  if ( v16 < 0 )
  {
    if ( (unsigned int)dword_1800DC1E0 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 1LL, v17, (unsigned int)v16) )
    {
      v147 = *(_QWORD *)v125;
      v127 = v105;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (int)&dword_1800DC1E0,
        (int)&unk_1800C1ED3,
        v104,
        v105,
        (__int64)&v127,
        (__int64)&v147);
    }
    goto LABEL_214;
  }
  v19 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, unsigned __int64 *))(v10 + 96))(
          v132,
          (unsigned int)v123,
          (char *)a1 + 24,
          v127,
          *(_QWORD *)v125,
          v12,
          &v137);
  if ( v19 < 0 )
  {
    if ( (unsigned int)dword_1800DC1E0 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 1LL, v20, (unsigned int)v19) )
    {
      v153 = *(_QWORD *)v125;
      v134 = v107;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (int)&dword_1800DC1E0,
        (int)&unk_1800C1F1B,
        v106,
        v107,
        (__int64)&v134,
        (__int64)&v153);
    }
    goto LABEL_214;
  }
  *(_QWORD *)&v141.Id = (v137 * (unsigned __int128)0x1000uLL) >> 64;
  v119 = v137 << 12;
  if ( is_mul_ok(v137, 0x1000uLL) )
  {
    v137 <<= 12;
    v21 = 0;
  }
  else
  {
    v137 = -1LL;
    v21 = -1073741675;
    v119 = -1LL;
  }
  v22 = v154;
  v122 = v154;
  if ( v21 < 0 )
  {
LABEL_214:
    v52 = (unsigned __int64)v133;
    goto LABEL_76;
  }
  v138 = 0LL;
  v130 = 0LL;
  v126 = 1;
  *(_OWORD *)v129 = 0LL;
  P = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  Heap = P;
  if ( P )
  {
    v25 = v119;
    v122 = v22;
    while ( 1 )
    {
      v26 = *((_BYTE *)a1 + 592);
      v27 = *(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, __int64, int, PVOID, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 72LL);
      if ( v26 )
        v28 = v26 == 1 ? 4 : 8;
      else
        v28 = 0;
      v29 = *((_QWORD *)a1 - 4);
      *(_QWORD *)v125 = v22;
      v123 = v25;
      v30 = v27(v132, *((unsigned int *)a1 + 139), (char *)a1 + 24, *((unsigned int *)a1 + 140), v29, v28, Heap, &v126);
      v31 = v30;
      if ( v30 >= 0 )
        break;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v30 != -2147483643 )
      {
        RtlFreeHeap(ProcessHeap, 0, Heap);
        goto LABEL_52;
      }
      RtlFreeHeap(ProcessHeap, 0, Heap);
      v22 = v122;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v126);
      v25 = v119;
      P = Heap;
      if ( !Heap )
      {
        v31 = -1073741801;
        goto LABEL_52;
      }
    }
    v32 = v126;
    if ( v126 )
    {
      v33 = 8 * v126;
      v34 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v126);
      v129[0] = v34;
      if ( !v34
        || (memset_0(v34, 0, v33),
            v35 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(4 * v32)),
            (v129[1] = v35) == 0LL) )
      {
        v31 = -1073741801;
        v119 = v123;
        v122 = *(_QWORD *)v125;
        goto LABEL_44;
      }
      memset_0(v35, 0, (unsigned int)(4 * v32));
      v119 = v123;
      v122 = *(_QWORD *)v125;
      ProcessHandle = 0LL;
      if ( (_DWORD)v32 )
      {
        v36 = v132;
        v37 = P;
        v119 = v123;
        v122 = *(_QWORD *)v125;
        do
        {
          LODWORD(v123) = *v37;
          ClientId.UniqueProcess = (HANDLE)(unsigned int)v123;
          ClientId.UniqueThread = 0LL;
          ObjectAttributes.Length = 48;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
          {
            v38 = *((_BYTE *)a1 + 592);
            if ( v38 )
            {
              if ( v38 == 1 )
                v39 = 4;
              else
                v39 = 8;
            }
            else
            {
              v39 = 0;
            }
            if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 80LL))(
                   v36,
                   *((unsigned int *)a1 + 139),
                   (char *)a1 + 24,
                   *((unsigned int *)a1 + 140),
                   *((_QWORD *)a1 - 4),
                   v39,
                   ProcessHandle) )
            {
              v40 = (unsigned int)v130;
              LODWORD(v130) = v130 + 1;
              *((_QWORD *)v129[0] + v40) = ProcessHandle;
              *((_DWORD *)v129[1] + v40) = v123;
            }
            else
            {
              NtClose(ProcessHandle);
            }
          }
          v37 += 2;
          --v32;
        }
        while ( v32 );
      }
    }
    else
    {
      v119 = v123;
      v122 = *(_QWORD *)v125;
      ProcessHandle = 0LL;
    }
    v31 = 0;
LABEL_44:
    v23 = P;
    if ( P )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    if ( v31 >= 0 )
    {
      if ( (_DWORD)v130 )
      {
        v41 = (void **)v129[0];
        v42 = (unsigned int)v130;
        v43 = (unsigned int *)v129[1];
        do
        {
          RmpActivityHostCommitDebtCallback((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), *v41++, *v43++, &v138);
          --v42;
        }
        while ( v42 );
        v18 = -1LL;
      }
      v31 = 0;
    }
    goto LABEL_52;
  }
  v31 = -1073741801;
LABEL_52:
  if ( (_DWORD)v130 )
  {
    v44 = (HANDLE *)v129[0];
    v45 = (unsigned int)v130;
    do
    {
      NtClose(*v44++);
      --v45;
    }
    while ( v45 );
    v18 = -1LL;
  }
  if ( v129[0] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v129[0]);
  if ( v129[1] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v129[1]);
  v46 = 1LL;
  if ( v31 < 0 )
  {
    if ( (unsigned int)dword_1800DC1E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 1LL, v23, 1LL) )
    {
      v156 = *((_QWORD *)a1 - 4);
      v136 = v31;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (int)&dword_1800DC1E0,
        (int)&unk_1800C644E,
        v108,
        v46,
        (__int64)&v136,
        (__int64)&v156);
      v46 = 1LL;
    }
    v47 = 0LL;
    v138 = 0LL;
  }
  else
  {
    v47 = v138;
  }
  v48 = v122;
  if ( v47 < v122 )
    v48 = v47;
  v49 = v122 - v48;
  if ( v122 && v49 <= 1 )
    v49 = v46;
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
  {
    v135 = *((_DWORD *)a1 + 140);
    v145 = *((_QWORD *)a1 - 4);
    v194 = &v158;
    v192 = &v142;
    v190 = &v143;
    v188 = &v144;
    v186 = &v135;
    v158 = v47;
    v142 = v119;
    v143 = v122;
    v144 = v49 + v119;
    v195 = 8LL;
    v193 = 8LL;
    v191 = 8LL;
    v189 = 8LL;
    v187 = 4LL;
    if ( a1 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
    {
      v14 = &word_1800B7A9C;
      v51 = 2;
    }
    else
    {
      v50 = -1LL;
      do
        v7 = v14[++v50] == 0;
      while ( !v7 );
      v51 = 2 * v50 + 2;
    }
    v184 = v51;
    v181 = &v145;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DC1E8;
    EventDescriptor.Keyword = v46;
    v183 = v14;
    v185 = 0;
    v182 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
    v178 = &unk_1800C3A4A;
    v180 = v46;
    UserData.Reserved = 2;
    v179 = 150;
    LODWORD(v128) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  v52 = v122 + v119;
LABEL_76:
  v122 = v52;
  v53 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v54 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v53) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v54 |= 2uLL;
    ++v54[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  v55 = *((_QWORD *)a1 + 83);
  if ( (v55 & 0x40000000000000LL) != 0 )
  {
    v55 &= ~0x40000000000000uLL;
    *((_QWORD *)a1 + 108) = 0LL;
    *((_QWORD *)a1 + 83) = v55;
    *((_QWORD *)a1 + 109) = 0LL;
  }
  v56 = (v55 >> 53) & 1;
  *(_QWORD *)v125 = v56;
  if ( (v55 & 0x80000000000000LL) != 0 )
  {
    *(_QWORD *)v125 = (unsigned int)v56 | 2;
    *((_QWORD *)a1 + 83) = v55 & 0xFF7FFFFFFFFFFFFFuLL;
  }
  HampHostComputeStaticEnforcementSettings(
    a1,
    (struct _RM_ENFORCEMENT_SETTINGS *)v172,
    (struct _RM_COMMIT_THRESHOLDS *)&v168,
    (struct _RM_COMMIT_THRESHOLDS *)v173,
    &v146);
  v57 = v169;
  P = (PVOID)v169;
  v140 = v168;
  if ( v52 >= (unsigned __int64)v168 )
  {
    if ( v52 < *((_QWORD *)&v168 + 1) )
    {
      v59 = *((_QWORD *)&v168 + 1);
      v58 = v168;
    }
    else if ( v52 < (unsigned __int64)v169 )
    {
      v58 = *((_QWORD *)&v168 + 1);
      v59 = v169;
    }
    else
    {
      v58 = v169;
      v59 = -1LL;
    }
  }
  else
  {
    v58 = 0LL;
    v59 = v168;
  }
  v60 = *((_QWORD *)&v169 + 1);
  v61 = v52 >> 3;
  if ( (unsigned __int64)(*((_QWORD *)&v169 + 1) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    v61 = *((_QWORD *)&v169 + 1) >> 4;
  if ( v61 <= 0x1400000 )
    v61 = 20971520LL;
  v62 = v61 + v52 - 1;
  if ( v61 == 20971520 )
    v63 = v62 / 0x1400000;
  else
    v63 = v62 / v61;
  v64 = -1LL;
  v66 = v63;
  v65 = v63 * (unsigned __int128)v61;
  v162 = *((_QWORD *)&v65 + 1);
  if ( is_mul_ok(v66, v61) )
    v64 = v65;
  if ( (unsigned __int64)(*((_QWORD *)&v169 + 1) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL && v64 > *((_QWORD *)&v169 + 1) )
  {
    v109 = v61 + *((_QWORD *)&v169 + 1) - 1LL;
    v163 = (v109 / v61 * (unsigned __int128)v61) >> 64;
    v64 = v109 / v61 * v61;
    if ( !is_mul_ok(v109 / v61, v61) )
    {
      v64 = -1LL;
LABEL_235:
      v67 = -1LL;
      goto LABEL_97;
    }
  }
  if ( v64 == -1LL )
    goto LABEL_235;
  v67 = v64 + v61;
  if ( v64 + v61 < v64 )
    goto LABEL_235;
LABEL_97:
  if ( (unsigned __int64)(*((_QWORD *)&v169 + 1) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v64 >= *((_QWORD *)&v169 + 1) )
      v64 = *((_QWORD *)&v169 + 1);
    if ( *((_QWORD *)&v169 + 1) < v67 )
      v67 = *((_QWORD *)&v169 + 1);
  }
  v68 = 2 * v61;
  if ( 2 * v61 >= v64 )
    v68 = v64;
  v69 = v64 - v68;
  if ( v58 <= v69 )
    v58 = v69;
  if ( v52 <= *((_QWORD *)&v169 + 1) && v59 >= v67 )
    v59 = v67;
  v172[0] = v58;
  v172[1] = v59;
  if ( v59 != -1LL )
  {
    v70 = *((_QWORD *)a1 + 123);
    if ( v70 <= v59 )
      v70 = v59;
    *((_QWORD *)a1 + 123) = v70;
  }
  v71 = v146;
  if ( *((_QWORD *)a1 + 88) )
  {
    v120 = (*((_QWORD *)a1 + 83) & 0x200000000000000LL) != 0 && *((struct _HAM_ACTIVITY **)a1 + 127) != v146;
    if ( HampHostIsElasticRecipient(a1) )
    {
      if ( v110 != *((_QWORD *)a1 + 141) )
        v111 = v72;
      v120 = v111;
    }
    if ( *((_QWORD *)a1 + 122) )
      v120 = v72;
  }
  else
  {
    v120 = 0;
    v72 = 1;
  }
  if ( *((_QWORD *)a1 + 113) <= v57 && *((_QWORD *)a1 + 114) <= v60 || (v73 = v72, (*((_BYTE *)a1 + 671) & 1) != 0) )
    v73 = 0;
  v139 = v175;
  *((_QWORD *)a1 + 108) = v175;
  v128 = v174;
  *((_QWORD *)a1 + 109) = v174;
  *((_QWORD *)a1 + 127) = v71;
  v74 = v168;
  v75 = v169;
  *(_OWORD *)((char *)a1 + 888) = v168;
  *(_OWORD *)((char *)a1 + 904) = v75;
  if ( v71 )
    v76 = *((_QWORD *)v71 + 59);
  else
    v76 = v57;
  if ( v76 == *((_QWORD *)a1 + 110) )
  {
    LODWORD(v123) = 0;
  }
  else
  {
    LODWORD(v123) = v72;
    *((_QWORD *)a1 + 110) = v76;
  }
  v77 = *((_QWORD *)a1 + 121);
  v78 = (unsigned __int64 *)((char *)a1 + 952);
  if ( v57 == -1LL || v77 == -1 )
  {
    v79 = (unsigned __int64 *)((char *)a1 + 952);
LABEL_120:
    v80 = -1LL;
    goto LABEL_121;
  }
  v80 = v57 + v77;
  v79 = (unsigned __int64 *)((char *)a1 + 952);
  if ( v80 < v57 )
    goto LABEL_120;
LABEL_121:
  *v79 = v80;
  v81 = *v78;
  v82 = *((_QWORD *)a1 + 122);
  if ( *v78 == -1LL || v82 == -1 || v81 + v82 < v81 )
    *v78 = -1LL;
  else
    *v78 = v81 + v82;
  *(_OWORD *)((char *)a1 + 920) = v74;
  *(_OWORD *)((char *)a1 + 936) = v75;
  v83 = *((_QWORD *)a1 + 118);
  if ( v83 == -1LL || v82 == -1 || v83 + v82 < v83 )
    *((_QWORD *)a1 + 118) = -1LL;
  else
    *((_QWORD *)a1 + 118) = v83 + v82;
  v84 = *((_QWORD *)a1 + 117);
  if ( v84 == -1LL || v82 == -1 || v84 + v82 < v84 )
    *((_QWORD *)a1 + 117) = -1LL;
  else
    *((_QWORD *)a1 + 117) = v84 + v82;
  v85 = *((_QWORD *)a1 + 116);
  if ( v85 == -1LL || v82 == -1 || v85 + v82 < v85 )
    *((_QWORD *)a1 + 116) = -1LL;
  else
    *((_QWORD *)a1 + 116) = v85 + v82;
  v86 = *((_QWORD *)a1 + 115);
  if ( v86 == -1LL || v82 == -1 || v86 + v82 < v86 )
    *((_QWORD *)a1 + 115) = -1LL;
  else
    *((_QWORD *)a1 + 115) = v86 + v82;
  v87 = HampLockTrackerId;
  *((_QWORD *)a1 + 83) &= ~0x20000000000000uLL;
  if ( v87 != -1 )
  {
    v88 = (__int64 *)TlsGetValue(v87);
    v89 = *v88;
    if ( (*v88 & 2) == 0 )
      __int2c();
    v7 = v88[2]-- == 1;
    if ( v7 )
      *v88 = v89 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  v90 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v73 )
  {
    v91 = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 192LL))(
      *((_QWORD *)a1 + 126),
      1LL);
    HampHostAcquireLockExclusiveEx(a1, 0);
    *((_QWORD *)a1 + 83) &= ~0x40000000000000uLL;
    HampHostReleaseLockExclusiveEx(a1, v112);
    RmpSystemResourceTimerSet(a1, *(unsigned int *)(v90 + 980), *((void **)a1 + 126));
    if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 8LL, v113, v114) )
    {
      v148 = v128;
      v149 = v139;
      v152 = *((_QWORD *)a1 - 4);
      v150 = v57;
      v151 = v60;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800DC218,
        (unsigned int)&unk_1800C0FBD,
        v115,
        v116,
        (__int64)&v152,
        (__int64)&v151,
        (__int64)&v150,
        (__int64)&v149,
        (__int64)&v148);
    }
  }
  else
  {
    v91 = 1;
  }
  v92 = v122;
  if ( v122 >= (unsigned __int64)v140 )
  {
    if ( v122 < *((_QWORD *)&v140 + 1) )
    {
      v91 = 2;
    }
    else
    {
      v91 = 4;
      if ( v122 < v57 )
        v91 = 3;
    }
  }
  v93 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v94 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v93) )
      __int2c();
    *v94 |= 1uLL;
    ++v94[1];
    v92 = v122;
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DD4E8 = GetCurrentThreadId();
  if ( v91 >= 4 )
    RmHamHostTryDecommitOffered((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), v92, (unsigned __int64)P);
  if ( (int)RmpActivityHostApplyEnforcementSettings((char *)a1 - 64, (struct _RM_ENFORCEMENT_SETTINGS *)v172, v125[0]) < 0 )
  {
    if ( (*(_DWORD *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                             + 120)
                                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                    + 616) & 1) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    RmpReleaseGlobalLock();
    HampHostQueueTerminateEx(a1, 3LL, 4865LL, 0LL, 0, 0, 0LL, &v132);
    RmpAcquireGlobalLock();
  }
  v95 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v96 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v95) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v96 |= 2uLL;
    ++v96[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  v97 = P;
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  v98 = *((_QWORD *)a1 + 165);
  if ( (v97 != (PVOID)v98 || (_DWORD)v123)
    && (int)ExecutionModel::ResourceManager::CommitMemoryLimitChange(
              *(ExecutionModel::ResourceManager **)(*((_QWORD *)a1 - 2) + 3232LL),
              (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 24),
              v98,
              (unsigned __int64)v97,
              *((_QWORD *)a1 + 110)) >= 0 )
  {
    *((_QWORD *)a1 + 165) = v97;
  }
  v99 = *((unsigned int *)a1 + 332);
  if ( (_DWORD)v99 != v91 )
  {
    if ( (unsigned int)dword_1800DC218 > 4
      && (qword_1800DC228 & 0x40) != 0
      && (qword_1800DC230 & 0x40) == qword_1800DC230 )
    {
      v213 = (char *)&v140 + 8;
      *((_QWORD *)&v140 + 1) = v172[2];
      v211 = &v140;
      v209 = &v139;
      v139 = v122;
      v100 = *((_QWORD *)a1 - 4);
      v207 = &v121;
      v155 = v100;
      LODWORD(v128) = *((_DWORD *)a1 + 140);
      v101 = (const unsigned __int16 *)((char *)a1 + 24);
      v205 = &v155;
      v203 = &v128;
      *(_QWORD *)&v140 = v97;
      v121 = v91;
      v214 = 8LL;
      v212 = 8LL;
      v210 = 8LL;
      v208 = 1LL;
      v206 = 8LL;
      v204 = 4LL;
      if ( a1 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
      {
        v101 = &word_1800B7A9C;
        v102 = 2;
      }
      else
      {
        do
          v7 = v101[++v18] == 0;
        while ( !v7 );
        v102 = 2 * v18 + 2;
      }
      v200 = v101;
      *(_DWORD *)&v141.Level = 4;
      v196.Ptr = (ULONGLONG)off_1800DC220;
      v201 = v102;
      v202 = 0;
      *(_DWORD *)&v141.Id = 184549376;
      v141.Keyword = 64LL;
      v196.Size = *(unsigned __int16 *)off_1800DC220;
      v197 = &unk_1800C1035;
      v199 = 1;
      v196.Reserved = 2;
      v198 = 119;
      LODWORD(v132) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800DC238, &v141, 0LL, 0LL, 9u, &v196);
      v99 = *((unsigned int *)a1 + 332);
    }
    (*(void (__fastcall **)(_QWORD, char *, __int64, _QWORD))(**(_QWORD **)(v90 + 816) + 32LL))(
      *(_QWORD *)(v90 + 816),
      (char *)a1 - 64,
      v99,
      v91);
    *((_DWORD *)a1 + 332) = v91;
  }
  if ( v120 )
  {
    v118 = HampHostCheckEnterDependencyWorker(a1);
    if ( v118 )
    {
      HampHostReleaseLockExclusiveEx(a1, v117);
      RmpReleaseGlobalLock();
      HampDepGroupRunStateChangeWorker(v118);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a1, 0);
    }
  }
  return 1LL;
}
