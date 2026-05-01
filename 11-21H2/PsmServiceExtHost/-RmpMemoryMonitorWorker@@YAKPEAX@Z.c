/*
 * XREFs of ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180047680
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x18001B570 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18001B960 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x1800480BC (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180048154 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18008CD4C (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@PEAPEAK@Z @ 0x18008CFD4 (-RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@PEAPEAK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@333AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x18009091C (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgWriteTemplat.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180090B00 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x180090E74 (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800915A8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 */

__int64 __fastcall RmpMemoryMonitorWorker(__int64 *Parameter)
{
  unsigned int *v2; // rsi
  DWORD TickCount; // eax
  __int64 v4; // rdx
  int v5; // r14d
  unsigned __int8 v6; // r12
  int v7; // ebx
  DWORD v8; // edi
  unsigned int v9; // r9d
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  void *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  void *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  void *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  void *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  void *v25; // rdx
  __int64 v26; // r8
  DWORD v27; // eax
  int v28; // edx
  int i; // eax
  int v30; // edi
  int v31; // eax
  unsigned __int8 v32; // bl
  int v33; // eax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  int v36; // ebx
  DWORD v37; // edi
  __int64 v38; // r15
  __int64 v39; // r14
  __int64 v40; // rcx
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rbx
  __int64 PageCount64; // rax
  __m128i v44; // xmm1
  __int128 v45; // xmm0
  unsigned __int64 v46; // rbx
  __int64 v47; // rbx
  DWORD v48; // esi
  _QWORD *Value; // rdi
  int v50; // eax
  __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 v53; // rcx
  bool v54; // zf
  DWORD v55; // edi
  _QWORD *v56; // rbx
  __int64 v57; // rdx
  int v58; // eax
  int v59; // ecx
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 *v63; // rax
  __int64 v64; // rcx
  int v65; // ecx
  int v66; // r8d
  int v67; // r9d
  unsigned __int64 v68; // xmm1_8
  int v69; // ebx
  DWORD v70; // edi
  int v71; // edi
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int8 v74; // al
  struct _RM_PARTITION *v75; // rbx
  char v77; // [rsp+60h] [rbp-A0h] BYREF
  char v78; // [rsp+61h] [rbp-9Fh] BYREF
  char v79; // [rsp+62h] [rbp-9Eh] BYREF
  char v80; // [rsp+63h] [rbp-9Dh] BYREF
  int v81; // [rsp+64h] [rbp-9Ch]
  unsigned int *v82; // [rsp+68h] [rbp-98h] BYREF
  int v83; // [rsp+70h] [rbp-90h] BYREF
  int v84; // [rsp+74h] [rbp-8Ch] BYREF
  int v85; // [rsp+78h] [rbp-88h] BYREF
  int v86; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v87; // [rsp+80h] [rbp-80h]
  unsigned __int64 v88; // [rsp+88h] [rbp-78h] BYREF
  __int64 v89; // [rsp+90h] [rbp-70h] BYREF
  __int64 v90; // [rsp+98h] [rbp-68h] BYREF
  __int64 v91; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v92; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v93; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR v95; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int8 v96; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int8 v97; // [rsp+D9h] [rbp-27h]
  __int64 v98; // [rsp+E0h] [rbp-20h]
  __int64 v99; // [rsp+E8h] [rbp-18h]
  _DWORD *v100; // [rsp+F0h] [rbp-10h]
  __int16 v101; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v102[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v103; // [rsp+110h] [rbp+10h]
  __int128 v104; // [rsp+120h] [rbp+20h]
  __int64 v105; // [rsp+130h] [rbp+30h]
  unsigned __int64 v106; // [rsp+138h] [rbp+38h]
  __int128 v107; // [rsp+140h] [rbp+40h]
  __int128 v108; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v109; // [rsp+160h] [rbp+60h]
  __int128 v110; // [rsp+170h] [rbp+70h] BYREF
  __int128 v111; // [rsp+180h] [rbp+80h]
  __int128 v112; // [rsp+190h] [rbp+90h]
  __m128i v113; // [rsp+1A0h] [rbp+A0h]
  __int128 v114; // [rsp+1B0h] [rbp+B0h]
  _BYTE v115[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v116; // [rsp+1C4h] [rbp+C4h]
  __int64 v117; // [rsp+1D8h] [rbp+D8h]
  __int64 v118; // [rsp+1E0h] [rbp+E0h]
  __int64 v119; // [rsp+1F0h] [rbp+F0h]
  __int64 v120; // [rsp+200h] [rbp+100h]
  __int64 v121; // [rsp+208h] [rbp+108h]
  char v122[64]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v123; // [rsp+258h] [rbp+158h]
  __int64 v124; // [rsp+260h] [rbp+160h]
  __int64 v125; // [rsp+268h] [rbp+168h]
  __int64 v126; // [rsp+270h] [rbp+170h]
  __int64 v127; // [rsp+278h] [rbp+178h]
  __int64 v128; // [rsp+280h] [rbp+180h]
  __int64 v129; // [rsp+288h] [rbp+188h]
  __int64 v130; // [rsp+290h] [rbp+190h]
  __int64 v131; // [rsp+298h] [rbp+198h]
  _OWORD v132[5]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _QWORD v133[13]; // [rsp+300h] [rbp+200h] BYREF
  unsigned __int64 v134; // [rsp+368h] [rbp+268h]
  char v135[144]; // [rsp+380h] [rbp+280h] BYREF
  _DWORD v136[8]; // [rsp+410h] [rbp+310h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v137; // [rsp+430h] [rbp+330h] BYREF
  void *v138; // [rsp+440h] [rbp+340h]
  int v139; // [rsp+448h] [rbp+348h]
  int v140; // [rsp+44Ch] [rbp+34Ch]
  int *v141; // [rsp+450h] [rbp+350h]
  __int64 v142; // [rsp+458h] [rbp+358h]
  int *v143; // [rsp+460h] [rbp+360h]
  __int64 v144; // [rsp+468h] [rbp+368h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+470h] [rbp+370h] BYREF
  void *v146; // [rsp+480h] [rbp+380h]
  int v147; // [rsp+488h] [rbp+388h]
  int v148; // [rsp+48Ch] [rbp+38Ch]
  __int16 *v149; // [rsp+490h] [rbp+390h]
  __int64 v150; // [rsp+498h] [rbp+398h]
  _DWORD *v151; // [rsp+4A0h] [rbp+3A0h]
  int v152; // [rsp+4A8h] [rbp+3A8h]
  int v153; // [rsp+4ACh] [rbp+3ACh]
  int *v154; // [rsp+4B0h] [rbp+3B0h]
  __int64 v155; // [rsp+4B8h] [rbp+3B8h]
  HANDLE Handles[6]; // [rsp+4C0h] [rbp+3C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v157; // [rsp+4F0h] [rbp+3F0h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v135);
  v82 = (unsigned int *)(*(_QWORD *)(*Parameter + 24) + 400LL);
  v2 = v82;
  TickCount = GetTickCount();
  *((_DWORD *)Parameter + 20) = TickCount;
  *((_DWORD *)Parameter + 22) = TickCount;
  RmpAcquireGlobalLock();
  LOBYTE(v4) = 4;
  RmpMemoryMonitorSetTimerIfEnabled(Parameter, v4);
  RmpReleaseGlobalLock();
  RmpPolicyPrepareToCheckMetrics(
    (struct _RM_PARTITION *)*Parameter,
    (struct _RM_POLICY *)v2,
    (struct _RM_RESOURCE_USAGE_LIMITS *)v133,
    0LL);
  v5 = v81;
  v6 = 0;
  while ( 1 )
  {
    v7 = 7;
    if ( v6 >= 4u )
      v7 = 39;
    v8 = 0;
    if ( WaitForSingleObjectEx((HANDLE)Parameter[1], 0, 0) )
      *((_DWORD *)Parameter + 23) &= ~1u;
    v9 = 0;
    v10 = 1;
    do
    {
      if ( (v10 & v7) != 0 && (v9 || (*((_BYTE *)Parameter + 92) & 1) == 0) )
      {
        v11 = v8++;
        v136[v11] = v9;
        Handles[v11] = (HANDLE)Parameter[v9 + 1];
      }
      if ( (__ROL4__(v10, 1) & v7) != 0 )
      {
        v12 = v9 + 1;
        v13 = (void *)Parameter[v12 + 1];
        v14 = v8++;
        v136[v14] = v12;
        Handles[v14] = v13;
      }
      if ( (__ROL4__(v10, 2) & v7) != 0 )
      {
        v15 = v9 + 2;
        v16 = (void *)Parameter[v15 + 1];
        v17 = v8++;
        v136[v17] = v15;
        Handles[v17] = v16;
      }
      if ( (__ROL4__(v10, 3) & v7) != 0 )
      {
        v18 = v9 + 3;
        v19 = (void *)Parameter[v18 + 1];
        v20 = v8++;
        v136[v20] = v18;
        Handles[v20] = v19;
      }
      if ( (__ROL4__(v10, 4) & v7) != 0 )
      {
        v21 = v9 + 4;
        v22 = (void *)Parameter[v21 + 1];
        v23 = v8++;
        v136[v23] = v21;
        Handles[v23] = v22;
      }
      if ( (__ROL4__(v10, 5) & v7) != 0 )
      {
        v24 = v9 + 5;
        v25 = (void *)Parameter[v24 + 1];
        v26 = v8++;
        v136[v26] = v24;
        Handles[v26] = v25;
      }
      v9 += 6;
      v10 = __ROL4__(v10, 6);
    }
    while ( v9 < 6 );
    if ( (unsigned int)dword_1800DC1E0 > 5 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
    {
      v83 = -1;
      v100 = v136;
      v154 = &v83;
      v101 = v8;
      v152 = 4 * (unsigned __int16)v8;
      *(_DWORD *)&EventDescriptor.Level = 261;
      UserData.Ptr = (ULONGLONG)off_1800DC1E8;
      v149 = &v101;
      v151 = v136;
      v155 = 4LL;
      v150 = 2LL;
      v153 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
      v146 = &unk_1800C5422;
      UserData.Reserved = 2;
      v147 = 51;
      v148 = 1;
      v87 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
    v27 = WaitForMultipleObjectsEx(v8, Handles, 0, 0xFFFFFFFF, 0);
    if ( v27 >= 0x40 )
    {
      if ( v27 == 258 )
      {
        v28 = 258;
      }
      else
      {
        v5 = v136[0];
        v28 = 0;
        v81 = v136[0];
      }
    }
    else
    {
      v28 = 0;
      v5 = v136[v27];
      v81 = v5;
      if ( !v5 )
        *((_DWORD *)Parameter + 23) |= 1u;
    }
    if ( (unsigned int)dword_1800DC1E0 > 5 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
    {
      v85 = v28;
      v143 = &v84;
      v84 = v5;
      v141 = &v85;
      *(_DWORD *)&v95.Level = 517;
      v137.Ptr = (ULONGLONG)off_1800DC1E8;
      v144 = 4LL;
      v142 = 4LL;
      *(_DWORD *)&v95.Id = 184549376;
      v95.Keyword = 1LL;
      v137.Size = *(unsigned __int16 *)off_1800DC1E8;
      v138 = &unk_1800C56FE;
      v137.Reserved = 2;
      v139 = 57;
      v140 = 1;
      v87 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &v95, 0LL, 0LL, 4u, &v137);
    }
    if ( v5 == 2 )
      break;
    for ( i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(Parameter, v133, (unsigned __int64)&v96);
          i != 4;
          i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(Parameter, v133, (unsigned __int64)&v96) )
    {
      if ( i == 3 )
        break;
      v30 = 0;
      if ( i == 2 )
        goto LABEL_32;
    }
    v30 = i;
LABEL_32:
    v6 = v97;
    switch ( v97 )
    {
      case 0u:
        goto LABEL_33;
      case 1u:
        v31 = 1;
        break;
      case 2u:
        v31 = 2;
        break;
      case 3u:
        v31 = 3;
        break;
      case 4u:
        v31 = 4;
        break;
      default:
LABEL_33:
        v31 = 0;
        break;
    }
    v32 = v96;
    LODWORD(v108) = v31;
    switch ( v96 )
    {
      case 0u:
        goto LABEL_35;
      case 1u:
        v33 = 1;
        break;
      case 2u:
        v33 = 2;
        break;
      case 3u:
        v33 = 3;
        break;
      case 4u:
        v33 = 4;
        break;
      default:
LABEL_35:
        v33 = 0;
        break;
    }
    DWORD1(v108) = v33;
    v34 = Parameter[12];
    *((_QWORD *)&v108 + 1) = (v98 + 0x7FFFFFF) & 0xFFFFFFFFF8000000uLL;
    v109 = (v99 + 0x7FFFFFF) & 0xFFFFFFFFF8000000uLL;
    v35 = v34 - v108;
    if ( !v35 )
    {
      v35 = Parameter[13] - ((v98 + 0x7FFFFFF) & 0xFFFFFFFFF8000000uLL);
      if ( !v35 )
        v35 = Parameter[14] - ((v99 + 0x7FFFFFF) & 0xFFFFFFFFF8000000uLL);
    }
    if ( v35 )
    {
      RtlPublishWnfStateData(WNF_RM_MEMORY_MONITOR_USAGE_METRICS, 0LL, &v108, 24LL, 0LL);
      if ( (unsigned int)dword_1800DC1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
      {
        v88 = v109;
        v89 = Parameter[14];
        v90 = *((_QWORD *)&v108 + 1);
        v91 = Parameter[13];
        v77 = BYTE4(v108);
        v78 = *((_BYTE *)Parameter + 100);
        v79 = v108;
        v80 = *((_BYTE *)Parameter + 96);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v65,
          (unsigned int)&unk_1800C5B74,
          v66,
          v67,
          (__int64)&v80,
          (__int64)&v79,
          (__int64)&v78,
          (__int64)&v77,
          (__int64)&v91,
          (__int64)&v90,
          (__int64)&v89,
          (__int64)&v88);
      }
      v68 = v109;
      *((_OWORD *)Parameter + 6) = v108;
      Parameter[14] = v68;
    }
    if ( v6 <= v32 )
      v6 = v32;
    if ( v30 == 4 )
      break;
    if ( v5 != 1 && v30 == 3 && (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DC1E0,
        (unsigned __int8 *)dword_1800C59FF,
        0LL,
        0LL,
        2u,
        &v157);
    if ( v2[24] )
    {
      v69 = *((_DWORD *)Parameter + 20);
      v70 = *((_DWORD *)Parameter + 19);
      if ( GetTickCount() - v69 >= v70 )
      {
        RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
          (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
          (struct _RM_RESOURCE_USAGE_LIMITS *)v133);
        *((_DWORD *)Parameter + 20) = GetTickCount();
      }
    }
    if ( v2[25] )
    {
      v36 = *((_DWORD *)Parameter + 22);
      v37 = *((_DWORD *)Parameter + 21);
      if ( GetTickCount() - v36 >= v37 )
      {
        v38 = *Parameter;
        v39 = *(_QWORD *)(*Parameter + 24);
        memset_0(v133, 0, 0x80uLL);
        memset_0(v115, 0, 0xF0uLL);
        v40 = *(_QWORD *)(v38 + 32);
        v116 = -1LL;
        NtManagePartition(v40, 0LL, 0LL, v115, 240);
        v41 = RmpPageSize * v131;
        v42 = RmpPageSize * v119;
        *(_QWORD *)&v112 = 0LL;
        *((_QWORD *)&v114 + 1) = 0LL;
        *((_QWORD *)&v110 + 1) = RmpPageSize * v118;
        *(_QWORD *)&v110 = RmpPageSize * v131;
        *((_QWORD *)&v111 + 1) = RmpPageSize * v118 - RmpPageSize * v117;
        *(_QWORD *)&v111 = RmpPageSize * v117;
        *((_QWORD *)&v112 + 1) = RmpPageSize * v119;
        PageCount64 = SwGetPageCount64(v122, 0LL, 5LL);
        v113.m128i_i64[0] = RmpPageSize * (PageCount64 + v120 + v121);
        v113.m128i_i64[1] = v42 - v113.m128i_i64[0];
        *(_QWORD *)&v114 = v123 + v124 + v125 + v126 + v127 + v128 + v129 + v130;
        RmpPolicyComputeUsageLimits(
          (struct _RM_USAGE_LIMIT_SETTINGS *)(v39 + 400),
          (struct _RM_REMEDIATION_ACTIONS *)(v39 + 456),
          (struct _RM_SYSTEM_MEMORY_METRICS *)&v110,
          v41,
          (struct _RM_RESOURCE_USAGE_LIMITS *)v133);
        v132[1] = v111;
        v44 = v113;
        v132[0] = v110;
        v45 = v112;
        *(_WORD *)(v38 + 204) = 0;
        v132[3] = v44;
        v132[2] = v45;
        v46 = _mm_srli_si128(v44, 8).m128i_u64[0];
        v132[4] = v114;
        if ( v46 > v134 )
        {
          v102[0] = 0LL;
          v103 = 0LL;
          v104 = 0LL;
          v107 = 0LL;
          v102[1] = 0LL;
          v105 = 0LL;
          v106 = v134;
          v71 = RmpMemoryMonitorEmptyWorkingSets(Parameter, v132, v102, 6LL);
          if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
          {
            v92 = v46;
            v86 = v71;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (int)&dword_1800DC1E0,
              (int)&unk_1800C590F,
              v72,
              v73,
              (__int64)&v86,
              (__int64)&v92);
          }
          if ( !v71 )
            *((_DWORD *)Parameter + 22) = GetTickCount();
        }
        v5 = v81;
      }
    }
    v47 = *(_QWORD *)(*(_QWORD *)(*Parameter + 24) + 3232LL);
    if ( v47 )
    {
      v48 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v48) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800DD4E8 = GetCurrentThreadId();
      v50 = *(_DWORD *)(v47 + 160);
      if ( (v50 & 3) == 0 )
      {
        v51 = *(_QWORD *)(v47 + 144);
        *(_DWORD *)(v47 + 160) = v50 | 1;
        TpPostWork(v51);
      }
      dword_1800DD4E8 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v52 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v53 = *v52;
        if ( (*v52 & 1) == 0 )
          __int2c();
        v54 = v52[1]-- == 1;
        if ( v54 )
          *v52 = v53 & 0xFFFFFFFFFFFFFFFEuLL;
      }
    }
    if ( v5 != 1 )
    {
      v74 = RmpMemoryMonitorCheckEvent((void *)Parameter[2]);
      v2 = v82;
      if ( !v74 )
        continue;
    }
    v55 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v56 = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v55) )
        __int2c();
      *v56 |= 1uLL;
      ++v56[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    dword_1800DD4E8 = GetCurrentThreadId();
    v57 = *(_QWORD *)(*Parameter + 24);
    v58 = *(_DWORD *)(v57 + 656);
    if ( (v58 & 1) == 0 )
    {
      v59 = 2;
      if ( (v58 & 2) == 0 )
        v59 = 1;
      if ( (*(_BYTE *)(v57 + 3224) & 1) == 0 )
      {
        if ( v59 == 1 )
          v60 = 0xFFFFFFFFLL;
        else
          v60 = 1000LL;
        if ( v6 )
          v61 = -10000000LL;
        else
          v61 = -50000000LL;
        v62 = Parameter[8];
        v93 = v61;
        TpSetTimer(v62, &v93, 0LL, v60);
      }
    }
    dword_1800DD4E8 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    v2 = v82;
    if ( HampLockTrackerId != -1 )
    {
      v63 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v64 = *v63;
      if ( (*v63 & 1) == 0 )
        __int2c();
      v54 = v63[1]-- == 1;
      if ( v54 )
        *v63 = v64 & 0xFFFFFFFFFFFFFFFEuLL;
    }
  }
  TpSetTimer(Parameter[8], 0LL, 0LL, 0LL);
  TpWaitForTimer(Parameter[8], 1LL);
  v75 = (struct _RM_PARTITION *)*Parameter;
  RmpPartitionTableRemovePartition(
    (struct _RM_PARTITION_TABLE *)(*(_QWORD *)(*Parameter + 24) + 312LL),
    (struct _RM_PARTITION *)*Parameter,
    &v82);
  RmpPartitionCleanup(v75);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v75);
  CempLockTrackerClearForThread(HampLockTrackerId);
  _InterlockedDecrement((volatile signed __int32 *)v82);
  RtlWakeAddressAll(v82);
  return 0LL;
}
