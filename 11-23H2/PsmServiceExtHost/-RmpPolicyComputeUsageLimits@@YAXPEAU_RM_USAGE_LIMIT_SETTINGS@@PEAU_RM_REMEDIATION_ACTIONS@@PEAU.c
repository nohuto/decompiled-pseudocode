/*
 * XREFs of ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18002B3D0
 * Callers:
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B0EC (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x18002B070 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18002D5E4 (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpPolicyGetCurrentUsageLimits@@YAXPEAU_RM_PARTITION@@PEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180040F24 (-RmpPolicyGetCurrentUsageLimits@@YAXPEAU_RM_PARTITION@@PEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REM.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

void __fastcall RmpPolicyComputeUsageLimits(
        struct _RM_USAGE_LIMIT_SETTINGS *a1,
        struct _RM_REMEDIATION_ACTIONS *a2,
        struct _RM_SYSTEM_MEMORY_METRICS *a3,
        unsigned __int64 a4,
        struct _RM_RESOURCE_USAGE_LIMITS *a5)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int128 v11; // rax
  unsigned __int64 v13; // krB0_8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int128 v17; // rax
  unsigned __int64 v18; // kr00_8
  unsigned __int64 v19; // rdi
  unsigned __int128 v20; // rax
  unsigned __int64 v21; // kr10_8
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // kr20_8
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r8
  unsigned __int128 v27; // rax
  unsigned __int64 v28; // kr30_8
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  unsigned __int128 v31; // rax
  unsigned __int64 v32; // kr40_8
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // kr50_8
  unsigned __int64 v35; // r9
  unsigned __int128 v36; // rax
  unsigned __int64 v37; // kr60_8
  unsigned __int64 v38; // r8
  bool v39; // zf
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // kr70_8
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // kr80_8
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // kr90_8
  __int64 v54; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v55; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v56; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v57; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A0h]
  __int128 *v60; // [rsp+68h] [rbp-98h]
  __int16 v61; // [rsp+70h] [rbp-90h] BYREF
  char *v62; // [rsp+78h] [rbp-88h]
  __int16 v63; // [rsp+80h] [rbp-80h] BYREF
  __int64 v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+98h] [rbp-68h]
  __int128 v67; // [rsp+A0h] [rbp-60h]
  __int128 v68; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v69; // [rsp+C0h] [rbp-40h]
  __int128 v70; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v71; // [rsp+E0h] [rbp-20h]
  __int128 v72; // [rsp+F0h] [rbp-10h]
  __int128 v73; // [rsp+100h] [rbp+0h]
  __int128 v74; // [rsp+110h] [rbp+10h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp+20h] BYREF
  void *v76; // [rsp+130h] [rbp+30h]
  int v77; // [rsp+138h] [rbp+38h]
  int v78; // [rsp+13Ch] [rbp+3Ch]
  unsigned __int64 *v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  __int16 *v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  __int128 *v85; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  __int16 *v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+188h] [rbp+88h]
  char *v89; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]
  unsigned __int64 *v91; // [rsp+1A0h] [rbp+A0h]
  __int64 v92; // [rsp+1A8h] [rbp+A8h]
  __int64 *v93; // [rsp+1B0h] [rbp+B0h]
  __int64 v94; // [rsp+1B8h] [rbp+B8h]

  if ( *(_OWORD *)a5 != __PAIR128__(*((_QWORD *)a3 + 5), a4) )
  {
    v8 = *((_QWORD *)a3 + 5);
    *(_QWORD *)&v68 = 0LL;
    *((_QWORD *)&v70 + 1) = 0LL;
    *((_QWORD *)&v71 + 1) = 0LL;
    *(_QWORD *)&v74 = 0LL;
    v9 = *((unsigned int *)a1 + 5);
    v10 = -1LL;
    v13 = v9;
    v11 = a4 * (unsigned __int128)v9;
    v73 = 0LL;
    v14 = -1LL;
    v57 = *((_QWORD *)&v11 + 1);
    if ( is_mul_ok(a4, v13) )
      v14 = v11;
    *(_QWORD *)&v67 = a4;
    *((_QWORD *)&v67 + 1) = v8;
    v15 = v14 / 0x64;
    if ( v15 >= a4 - *(_QWORD *)a1 )
      v15 = a4 - *(_QWORD *)a1;
    v16 = -1LL;
    v18 = *((unsigned int *)a1 + 11);
    v17 = a4 * (unsigned __int128)*((unsigned int *)a1 + 11);
    v19 = -1LL;
    *(_QWORD *)&v70 = v15;
    v56 = *((_QWORD *)&v17 + 1);
    *((_QWORD *)&v69 + 1) = v15;
    if ( is_mul_ok(a4, v18) )
      v16 = v17;
    v21 = *((unsigned int *)a1 + 3);
    v20 = a4 * (unsigned __int128)*((unsigned int *)a1 + 3);
    *((_QWORD *)&v74 + 1) = v16 / 0x64;
    v55 = *((_QWORD *)&v20 + 1);
    v22 = -1LL;
    if ( is_mul_ok(a4, v21) )
      v19 = v20;
    v23 = *((unsigned int *)a1 + 4);
    v24 = v19 / 0x64;
    v54 = (v8 * (unsigned __int128)*((unsigned int *)a1 + 4)) >> 64;
    if ( is_mul_ok(v8, v23) )
      v22 = v8 * v23;
    v25 = v22 / 0x64;
    if ( v24 >= v25 )
      v24 = v25;
    if ( v15 < v24 )
      v24 = v15;
    v26 = -1LL;
    v28 = *((unsigned int *)a1 + 2);
    v27 = a4 * (unsigned __int128)*((unsigned int *)a1 + 2);
    *(_QWORD *)&v69 = v24;
    v59 = *((_QWORD *)&v27 + 1);
    if ( is_mul_ok(a4, v28) )
      v26 = v27;
    v29 = v26 / 0x64;
    if ( v24 < v29 )
      v29 = v24;
    v30 = -1LL;
    v32 = *((unsigned int *)a1 + 6);
    v31 = v8 * (unsigned __int128)*((unsigned int *)a1 + 6);
    *((_QWORD *)&v68 + 1) = v29;
    v33 = -1LL;
    v64 = *((_QWORD *)&v31 + 1);
    if ( is_mul_ok(v8, v32) )
      v30 = v31;
    v34 = *((unsigned int *)a1 + 7);
    v35 = v30 / 0x64;
    v65 = (v8 * (unsigned __int128)*((unsigned int *)a1 + 7)) >> 64;
    *((_QWORD *)&v71 + 1) = v35;
    if ( is_mul_ok(v8, v34) )
      v33 = v8 * v34;
    *(_QWORD *)&v71 = v35;
    v37 = *((unsigned int *)a1 + 8);
    v36 = v8 * (unsigned __int128)*((unsigned int *)a1 + 8);
    *(_QWORD *)&v72 = v33 / 0x64;
    v38 = -1LL;
    v66 = *((_QWORD *)&v36 + 1);
    if ( is_mul_ok(v8, v37) )
      v38 = v36;
    v39 = *((_DWORD *)a2 + 10) == 0;
    *((_QWORD *)&v72 + 1) = v38 / 0x64;
    if ( v39 )
    {
      v40 = v73;
    }
    else
    {
      v52 = -1LL;
      v53 = *((unsigned int *)a1 + 9);
      v60 = (__int128 *)((a4 * (unsigned __int128)*((unsigned int *)a1 + 9)) >> 64);
      if ( is_mul_ok(a4, v53) )
        v52 = a4 * v53;
      v40 = v52 / 0x64;
      *(_QWORD *)&v73 = v40;
    }
    if ( *((_DWORD *)a2 + 11) )
    {
      v41 = -1LL;
      v42 = *((unsigned int *)a1 + 10);
      v62 = (char *)((v8 * (unsigned __int128)*((unsigned int *)a1 + 10)) >> 64);
      if ( is_mul_ok(v8, v42) )
        v41 = v8 * v42;
      v43 = v41 / 0x64;
      *((_QWORD *)&v73 + 1) = v43;
    }
    else
    {
      v43 = *((_QWORD *)&v73 + 1);
    }
    if ( *((_DWORD *)a1 + 12) )
    {
      v44 = *((unsigned int *)a1 + 12);
      *(_QWORD *)&EventDescriptor.Id = (v8 * (unsigned __int128)*((unsigned int *)a1 + 12)) >> 64;
      if ( is_mul_ok(v8, v44) )
        v10 = v8 * v44;
      *(_QWORD *)&v74 = v10 / 0x64;
    }
    if ( (unsigned int)dword_1800DB1E0 > 4 && (byte_1800DB1F0 & 1) != 0 && (qword_1800DB1F8 & 1) == qword_1800DB1F8 )
    {
      v54 = v43;
      v62 = (char *)&v70 + 8;
      v55 = v40;
      v60 = &v68;
      v63 = 5;
      v93 = &v54;
      v61 = 5;
      v91 = &v55;
      v56 = v8;
      v87 = &v63;
      v57 = a4;
      v89 = (char *)&v70 + 8;
      v83 = &v61;
      v85 = &v68;
      v81 = &v56;
      v79 = &v57;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800DB1E8;
      v94 = 8LL;
      v92 = 8LL;
      v88 = 2LL;
      v90 = 40LL;
      v84 = 2LL;
      v86 = 40LL;
      v82 = 8LL;
      v80 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
      v76 = &unk_1800C5245;
      UserData.Reserved = 2;
      v77 = 164;
      v78 = 1;
      LODWORD(v59) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
    }
    v45 = v68;
    *(_OWORD *)a5 = v67;
    v46 = v69;
    *((_OWORD *)a5 + 1) = v45;
    v47 = v70;
    *((_OWORD *)a5 + 2) = v46;
    v48 = v71;
    *((_OWORD *)a5 + 3) = v47;
    v49 = v72;
    *((_OWORD *)a5 + 4) = v48;
    v50 = v73;
    *((_OWORD *)a5 + 5) = v49;
    v51 = v74;
    *((_OWORD *)a5 + 6) = v50;
    *((_OWORD *)a5 + 7) = v51;
  }
}
