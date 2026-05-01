/*
 * XREFs of ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18001B960
 * Callers:
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E63C (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180018FC0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x18001B570 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001BE00 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180047680 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x1800480BC (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall RmpPolicyComputeUsageLimits(
        struct _RM_USAGE_LIMIT_SETTINGS *a1,
        struct _RM_REMEDIATION_ACTIONS *a2,
        struct _RM_SYSTEM_MEMORY_METRICS *a3,
        unsigned __int64 a4,
        struct _RM_RESOURCE_USAGE_LIMITS *a5)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int128 v16; // rax
  unsigned __int64 v17; // kr10_8
  unsigned __int64 v18; // rsi
  unsigned __int128 v19; // rax
  unsigned __int64 v20; // kr20_8
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // kr30_8
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r8
  unsigned __int128 v26; // rax
  unsigned __int64 v27; // kr40_8
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r9
  unsigned __int128 v30; // rax
  unsigned __int64 v31; // kr50_8
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // kr60_8
  unsigned __int64 v34; // r9
  unsigned __int128 v35; // rax
  unsigned __int64 v36; // kr70_8
  unsigned __int64 v37; // r8
  bool v38; // zf
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // kr80_8
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // kr90_8
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // krA0_8
  __int64 v53; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v54; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v55; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A0h]
  __int128 *v59; // [rsp+68h] [rbp-98h]
  __int16 v60; // [rsp+70h] [rbp-90h] BYREF
  char *v61; // [rsp+78h] [rbp-88h]
  __int16 v62; // [rsp+80h] [rbp-80h] BYREF
  __int64 v63; // [rsp+88h] [rbp-78h]
  __int64 v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  __int128 v66; // [rsp+A0h] [rbp-60h]
  __int128 v67; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v68; // [rsp+C0h] [rbp-40h]
  __int128 v69; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v70; // [rsp+E0h] [rbp-20h]
  __int128 v71; // [rsp+F0h] [rbp-10h]
  __int128 v72; // [rsp+100h] [rbp+0h]
  __int128 v73; // [rsp+110h] [rbp+10h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp+20h] BYREF
  void *v75; // [rsp+130h] [rbp+30h]
  int v76; // [rsp+138h] [rbp+38h]
  int v77; // [rsp+13Ch] [rbp+3Ch]
  unsigned __int64 *v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v80; // [rsp+150h] [rbp+50h]
  __int64 v81; // [rsp+158h] [rbp+58h]
  __int16 *v82; // [rsp+160h] [rbp+60h]
  __int64 v83; // [rsp+168h] [rbp+68h]
  __int128 *v84; // [rsp+170h] [rbp+70h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  __int16 *v86; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+188h] [rbp+88h]
  char *v88; // [rsp+190h] [rbp+90h]
  __int64 v89; // [rsp+198h] [rbp+98h]
  unsigned __int64 *v90; // [rsp+1A0h] [rbp+A0h]
  __int64 v91; // [rsp+1A8h] [rbp+A8h]
  __int64 *v92; // [rsp+1B0h] [rbp+B0h]
  __int64 v93; // [rsp+1B8h] [rbp+B8h]

  if ( *(_OWORD *)a5 != __PAIR128__(*((_QWORD *)a3 + 5), a4) )
  {
    *(_QWORD *)&v67 = 0LL;
    *((_QWORD *)&v69 + 1) = 0LL;
    *((_QWORD *)&v70 + 1) = 0LL;
    *(_QWORD *)&v73 = 0LL;
    v8 = *((unsigned int *)a1 + 5);
    v9 = -1LL;
    v11 = v8;
    v10 = a4 * (unsigned __int128)v8;
    v72 = 0LL;
    v12 = -1LL;
    v13 = *((_QWORD *)a3 + 5);
    if ( is_mul_ok(a4, v11) )
      v12 = v10;
    v56 = *((_QWORD *)&v10 + 1);
    *(_QWORD *)&v66 = a4;
    *((_QWORD *)&v66 + 1) = v13;
    v14 = v12 / 0x64;
    if ( v14 >= a4 - *(_QWORD *)a1 )
      v14 = a4 - *(_QWORD *)a1;
    v15 = -1LL;
    v17 = *((unsigned int *)a1 + 11);
    v16 = a4 * (unsigned __int128)*((unsigned int *)a1 + 11);
    v18 = -1LL;
    *(_QWORD *)&v69 = v14;
    v55 = *((_QWORD *)&v16 + 1);
    *((_QWORD *)&v68 + 1) = v14;
    if ( is_mul_ok(a4, v17) )
      v15 = v16;
    v20 = *((unsigned int *)a1 + 3);
    v19 = a4 * (unsigned __int128)*((unsigned int *)a1 + 3);
    *((_QWORD *)&v73 + 1) = v15 / 0x64;
    v54 = *((_QWORD *)&v19 + 1);
    v21 = -1LL;
    if ( is_mul_ok(a4, v20) )
      v21 = v19;
    v22 = *((unsigned int *)a1 + 4);
    v23 = v21 / 0x64;
    v53 = (v13 * (unsigned __int128)*((unsigned int *)a1 + 4)) >> 64;
    if ( is_mul_ok(v13, v22) )
      v18 = v13 * v22;
    v24 = v18 / 0x64;
    if ( v23 < v24 )
      v24 = v23;
    if ( v14 < v24 )
      v24 = v14;
    v25 = -1LL;
    v27 = *((unsigned int *)a1 + 2);
    v26 = a4 * (unsigned __int128)*((unsigned int *)a1 + 2);
    *(_QWORD *)&v68 = v24;
    v58 = *((_QWORD *)&v26 + 1);
    if ( is_mul_ok(a4, v27) )
      v25 = v26;
    v28 = v25 / 0x64;
    if ( v24 < v28 )
      v28 = v24;
    v29 = -1LL;
    v31 = *((unsigned int *)a1 + 6);
    v30 = v13 * (unsigned __int128)*((unsigned int *)a1 + 6);
    *((_QWORD *)&v67 + 1) = v28;
    v32 = -1LL;
    v63 = *((_QWORD *)&v30 + 1);
    if ( is_mul_ok(v13, v31) )
      v29 = v30;
    v33 = *((unsigned int *)a1 + 7);
    v34 = v29 / 0x64;
    v64 = (v13 * (unsigned __int128)*((unsigned int *)a1 + 7)) >> 64;
    *((_QWORD *)&v70 + 1) = v34;
    if ( is_mul_ok(v13, v33) )
      v32 = v13 * v33;
    *(_QWORD *)&v70 = v34;
    v36 = *((unsigned int *)a1 + 8);
    v35 = v13 * (unsigned __int128)*((unsigned int *)a1 + 8);
    *(_QWORD *)&v71 = v32 / 0x64;
    v37 = -1LL;
    v65 = *((_QWORD *)&v35 + 1);
    if ( is_mul_ok(v13, v36) )
      v37 = v35;
    v38 = *((_DWORD *)a2 + 10) == 0;
    *((_QWORD *)&v71 + 1) = v37 / 0x64;
    if ( v38 )
    {
      v39 = v72;
    }
    else
    {
      v51 = -1LL;
      v52 = *((unsigned int *)a1 + 9);
      v59 = (__int128 *)((a4 * (unsigned __int128)*((unsigned int *)a1 + 9)) >> 64);
      if ( is_mul_ok(a4, v52) )
        v51 = a4 * v52;
      v39 = v51 / 0x64;
      *(_QWORD *)&v72 = v39;
    }
    if ( *((_DWORD *)a2 + 11) )
    {
      v40 = -1LL;
      v41 = *((unsigned int *)a1 + 10);
      v61 = (char *)((v13 * (unsigned __int128)*((unsigned int *)a1 + 10)) >> 64);
      if ( is_mul_ok(v13, v41) )
        v40 = v13 * v41;
      v42 = v40 / 0x64;
      *((_QWORD *)&v72 + 1) = v42;
    }
    else
    {
      v42 = *((_QWORD *)&v72 + 1);
    }
    if ( *((_DWORD *)a1 + 12) )
    {
      v43 = *((unsigned int *)a1 + 12);
      *(_QWORD *)&EventDescriptor.Id = (v13 * (unsigned __int128)*((unsigned int *)a1 + 12)) >> 64;
      if ( is_mul_ok(v13, v43) )
        v9 = v13 * v43;
      *(_QWORD *)&v73 = v9 / 0x64;
    }
    if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
    {
      v53 = v42;
      v61 = (char *)&v69 + 8;
      v54 = v39;
      v59 = &v67;
      v62 = 5;
      v92 = &v53;
      v60 = 5;
      v90 = &v54;
      v55 = v13;
      v86 = &v62;
      v56 = a4;
      v88 = (char *)&v69 + 8;
      v82 = &v60;
      v84 = &v67;
      v80 = &v55;
      v78 = &v56;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800DC1E8;
      v93 = 8LL;
      v91 = 8LL;
      v87 = 2LL;
      v89 = 40LL;
      v83 = 2LL;
      v85 = 40LL;
      v81 = 8LL;
      v79 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
      v75 = &unk_1800C4781;
      UserData.Reserved = 2;
      v76 = 164;
      v77 = 1;
      LODWORD(v58) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
    }
    v44 = v67;
    *(_OWORD *)a5 = v66;
    v45 = v68;
    *((_OWORD *)a5 + 1) = v44;
    v46 = v69;
    *((_OWORD *)a5 + 2) = v45;
    v47 = v70;
    *((_OWORD *)a5 + 3) = v46;
    v48 = v71;
    *((_OWORD *)a5 + 4) = v47;
    v49 = v72;
    *((_OWORD *)a5 + 5) = v48;
    v50 = v73;
    *((_OWORD *)a5 + 6) = v49;
    *((_OWORD *)a5 + 7) = v50;
  }
}
