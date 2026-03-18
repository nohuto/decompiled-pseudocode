/*
 * XREFs of ACPIThermalWorker @ 0x1C00959C0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     AMLIFreeDataBuffs @ 0x1C001C758 (AMLIFreeDataBuffs.c)
 *     ACPIThermalLoop @ 0x1C00209C0 (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x1C002129C (WPP_RECORDER_SF_ddqssdddd.c)
 *     WPP_RECORDER_SF_Dddqssdddd @ 0x1C0021420 (WPP_RECORDER_SF_Dddqssdddd.c)
 *     WPP_RECORDER_SF_Dqssdddd @ 0x1C0021818 (WPP_RECORDER_SF_Dqssdddd.c)
 *     ACPIThermalUpdateConstraints @ 0x1C0021984 (ACPIThermalUpdateConstraints.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     ACPIThermalStopZoneWorker @ 0x1C006109C (ACPIThermalStopZoneWorker.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0090340 (ACPIAmliEvaluateDsm.c)
 *     ACPIThermalBuildConstraints @ 0x1C00956BC (ACPIThermalBuildConstraints.c)
 *     ACPIThermalGetParameter @ 0x1C00966CC (ACPIThermalGetParameter.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C0096764 (ACPIThermalGetOverrideHandle.c)
 *     ACPIThermalCheckPolicySupport @ 0x1C00A19BC (ACPIThermalCheckPolicySupport.c)
 *     ACPIThermalCheckNativeTemperatureSupport @ 0x1C00A1AE8 (ACPIThermalCheckNativeTemperatureSupport.c)
 *     ACPIThermalReadTemperature @ 0x1C00B4F68 (ACPIThermalReadTemperature.c)
 */

LONG __fastcall ACPIThermalWorker(__int64 a1, int a2)
{
  int v2; // r12d
  LONG result; // eax
  __int64 v5; // rdi
  __int64 *v6; // r14
  __int64 v7; // r13
  union _LARGE_INTEGER v8; // rax
  void *v9; // r15
  void *v10; // rsi
  __int64 v11; // rax
  void *v12; // r15
  void *v13; // rsi
  __int64 v14; // rax
  int v15; // eax
  void *v16; // r15
  void *v17; // rsi
  __int64 v18; // rax
  union _LARGE_INTEGER v19; // r13
  __int64 v20; // r12
  __int64 v21; // rsi
  int Parameter; // eax
  unsigned __int64 v23; // rsi
  union _LARGE_INTEGER v24; // r13
  void *v25; // r15
  void *v26; // rsi
  __int64 v27; // rax
  int v28; // eax
  unsigned __int64 v29; // rsi
  void *v30; // r15
  void *v31; // rsi
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // esi
  __int64 *v35; // rax
  volatile signed __int32 *v36; // r15
  __int64 *v37; // rax
  volatile signed __int32 *v38; // rsi
  __int64 *v39; // rax
  volatile signed __int32 *v40; // rsi
  _WORD *v41; // rcx
  _WORD *v42; // rax
  __int64 v43; // r9
  __int16 v44; // dx
  __int64 *v45; // rcx
  __int64 *v46; // rcx
  int Timeout; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  union _LARGE_INTEGER Time; // [rsp+88h] [rbp-78h] BYREF
  union _LARGE_INTEGER v50; // [rsp+90h] [rbp-70h]
  unsigned int v51; // [rsp+98h] [rbp-68h] BYREF
  int v52; // [rsp+9Ch] [rbp-64h]
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-58h] BYREF
  int v55; // [rsp+B0h] [rbp-50h]
  __int64 OverrideHandle; // [rsp+B8h] [rbp-48h]
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp-40h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v59; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v60; // [rsp+F0h] [rbp-10h]
  __int128 v61; // [rsp+100h] [rbp+0h]
  _DWORD v62[10]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v63[10]; // [rsp+138h] [rbp+38h] BYREF

  v52 = a2;
  Interval.QuadPart = 0LL;
  *(_QWORD *)&v61 = 0LL;
  DWORD2(v61) = 0;
  P = 0LL;
  v2 = a2;
  v51 = 0;
  v54 = 0LL;
  v48 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  result = MEMORY[0xFFFFF78000000008];
  v50.QuadPart = MEMORY[0xFFFFF78000000008];
  if ( (a2 & 0x2000) != 0 )
    result = ACPIThermalStopZoneWorker(a1);
  if ( (*(_DWORD *)(a1 + 192) & 0x8000000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 200);
    v6 = *(__int64 **)(a1 + 760);
    v55 = v2 & 0x202;
    if ( (v2 & 0x202) != 0 )
      IoCancelIrp(*(PIRP *)(v5 + 208));
    if ( (v2 & 0x10) == 0 )
      goto LABEL_7;
    qmemcpy(v62, "_AL0_AL1_AL2_AL3_AL4_AL5_AL6_AL7_AL8_AL9", sizeof(v62));
    *(_BYTE *)(v5 + 273) = (int)ACPIThermalCheckPolicySupport(a1) >= 0;
    v33 = ACPIThermalCheckNativeTemperatureSupport(a1);
    *(_DWORD *)(v5 + 100) = 1;
    v34 = 0;
    *(_BYTE *)(v5 + 274) = v33 >= 0;
    do
    {
      v35 = AMLIGetNamedChild(v6, v62[v34]);
      v36 = (volatile signed __int32 *)v35;
      if ( !v35 )
        break;
      ACPIThermalBuildConstraints(v35, a1, 0, v34);
      AMLIDereferenceHandleEx(v36);
      ++v34;
    }
    while ( v34 < 0xA );
    v37 = AMLIGetNamedChild(v6, 1280528479);
    v2 = v52;
    v38 = (volatile signed __int32 *)v37;
    if ( v37 )
    {
      ACPIThermalBuildConstraints(v37, a1, 1, 1u);
      AMLIDereferenceHandleEx(v38);
      *(_BYTE *)(v5 + 33) = 1;
    }
    v39 = AMLIGetNamedChild(v6, 1146770527);
    v40 = (volatile signed __int32 *)v39;
    if ( v39 )
    {
      ACPIThermalBuildConstraints(v39, a1, 1, 0);
      AMLIDereferenceHandleEx(v40);
      *(_BYTE *)(v5 + 33) = 1;
    }
    *(_QWORD *)(v5 + 120) = AMLIGetNamedChild(v6, 1230259295);
    if ( (int)ACPIGet(a1, 1381258079, 402718728, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v51) < 0 )
      goto LABEL_7;
    if ( v51 <= 2 || (v51 & 1) != 0 )
      goto LABEL_85;
    v41 = P;
    if ( *((_WORD *)P + ((unsigned __int64)v51 >> 1) - 1) )
      goto LABEL_86;
    *(_OWORD *)(v5 + 304) = 0LL;
    if ( !v41 )
      goto LABEL_84;
    v42 = v41;
    v43 = 0x7FFFLL;
    do
    {
      if ( !*v42 )
        break;
      ++v42;
      --v43;
    }
    while ( v43 );
    if ( v43 )
    {
      if ( v5 == -304 )
        goto LABEL_85;
      v44 = 2 * (0x7FFF - v43);
      *(_QWORD *)(v5 + 312) = v41;
      *(_WORD *)(v5 + 304) = v44;
      *(_WORD *)(v5 + 306) = v44 + 2;
    }
    if ( v43 )
    {
LABEL_84:
      v41 = 0LL;
      P = 0LL;
      goto LABEL_86;
    }
LABEL_85:
    v41 = P;
LABEL_86:
    if ( v41 )
      ExFreePoolWithTag(v41, 0);
LABEL_7:
    if ( (v2 & 0x101) != 0 )
      ACPIThermalUpdateConstraints(a1);
    if ( (v2 & 4) != 0 )
    {
      qmemcpy(v63, "_AC0_AC1_AC2_AC3_AC4_AC5_AC6_AC7_AC8_AC9", sizeof(v63));
      OverrideHandle = ACPIThermalGetOverrideHandle(a1);
      v7 = OverrideHandle;
      ACPIThermalGetParameter(a1, OverrideHandle, 826496095LL, &v48);
      v8 = v50;
      *(_DWORD *)(v5 + 4) = v48;
      Time = v8;
      v9 = &unk_1C006FB8B;
      v10 = &unk_1C006FB8B;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      v11 = *(_QWORD *)(a1 + 8);
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v9 = *(void **)(a1 + 608);
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = *(void **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)TimeFields.Minute,
          (unsigned int)TimeFields.Hour,
          0x17u,
          Timeout,
          *(_DWORD *)(v5 + 4),
          a1,
          (__int64)v9,
          (__int64)v10);
      ACPIThermalGetParameter(a1, v7, 843273311LL, &v48);
      *(_DWORD *)(v5 + 8) = v48;
      Time = v50;
      v12 = &unk_1C006FB8B;
      v13 = &unk_1C006FB8B;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      v14 = *(_QWORD *)(a1 + 8);
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v12 = *(void **)(a1 + 608);
        if ( (v14 & 0x400000000000LL) != 0 )
          v13 = *(void **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)TimeFields.Minute,
          (unsigned int)TimeFields.Hour,
          0x18u,
          Timeout,
          *(_DWORD *)(v5 + 8),
          a1,
          (__int64)v12,
          (__int64)v13);
      ACPIThermalGetParameter(a1, v7, 1448300639LL, &v48);
      *(_DWORD *)(v5 + 20) = v48;
      Time = v50;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 20) / 0xAu,
          (unsigned int)TimeFields.Minute,
          0x19u,
          Timeout);
      ACPIThermalGetParameter(a1, v7, 1414677343LL, &v48);
      *(_DWORD *)(v5 + 28) = v48;
      Time = v50;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 28) / 0xAu,
          (unsigned int)TimeFields.Minute,
          0x1Au,
          Timeout);
      if ( (int)ACPIThermalGetParameter(a1, v7, 1346786399LL, &v48) < 0
        && (int)ACPIThermalGetParameter(a1, v7, 1347638367LL, &v48) >= 0 )
      {
        v15 = 100 * v48;
        v48 *= 100LL;
      }
      else
      {
        v15 = v48;
      }
      *(_DWORD *)(v5 + 12) = v15;
      Time = v50;
      v16 = &unk_1C006FB8B;
      v17 = &unk_1C006FB8B;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      v18 = *(_QWORD *)(a1 + 8);
      if ( (v18 & 0x200000000000LL) != 0 )
      {
        v16 = *(void **)(a1 + 608);
        if ( (v18 & 0x400000000000LL) != 0 )
          v17 = *(void **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)TimeFields.Minute,
          (unsigned int)TimeFields.Hour,
          0x1Bu,
          Timeout,
          *(_DWORD *)(v5 + 12),
          a1,
          (__int64)v16,
          (__int64)v17);
      ACPIThermalGetParameter(a1, v7, 861029215LL, &v48);
      *(_DWORD *)(v5 + 24) = v48;
      Time = v50;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 24) / 0xAu,
          (unsigned int)TimeFields.Minute,
          0x1Cu,
          Timeout);
      ACPIThermalGetParameter(a1, v7, 1414482015LL, &v48);
      *(_DWORD *)(v5 + 76) = v48;
      Time = v50;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 76) / 0xAu,
          (unsigned int)TimeFields.Minute,
          0x1Du,
          Timeout);
      ACPIThermalGetParameter(a1, v7, 1414811231LL, &v48);
      v19 = v50;
      *(_DWORD *)(v5 + 104) = v48;
      TimeFields = 0LL;
      Time = v19;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 104) / 0xAu,
          (unsigned int)TimeFields.Minute,
          0x1Eu,
          Timeout);
      v20 = OverrideHandle;
      v21 = 0LL;
      do
      {
        if ( (int)ACPIThermalGetParameter(a1, v20, (unsigned int)v63[v21], &v48) < 0 )
          break;
        *(_DWORD *)(v5 + 4 * v21 + 36) = v48;
        Time = v50;
        TimeFields = 0LL;
        RtlTimeToTimeFields(&Time, &TimeFields);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dddqssdddd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *(_DWORD *)(v5 + 4 * v21 + 36) / 0xAu,
            (unsigned int)TimeFields.Minute,
            (unsigned int)TimeFields.Hour,
            Timeout);
        v21 = (unsigned int)(v21 + 1);
      }
      while ( (unsigned int)v21 < 0xA );
      *(_BYTE *)(v5 + 32) = v21;
      Parameter = ACPIThermalGetParameter(a1, v20, 1280593247LL, &v48);
      v2 = v52;
      if ( Parameter < 0
        && (*(_DWORD *)(v5 + 128) & 2) != 0
        && (v45 = *(__int64 **)(a1 + 760),
            v59 = 0LL,
            v60 = 0LL,
            v61 = 0LL,
            TimeFields = (struct _TIME_FIELDS)THRM_EXTENSIONS_DSM_UUID,
            (int)ACPIAmliEvaluateDsm(v45, (__int64)&TimeFields, 0, 1u, &v59, &v54) >= 0) )
      {
        if ( *(_WORD *)(v54 + 2) == 1 )
          v23 = *(unsigned int *)(v54 + 16);
        else
          v23 = v48;
        AMLIFreeDataBuffs(v54);
      }
      else
      {
        v23 = v48;
      }
      v24 = v50;
      Time = v50;
      v25 = &unk_1C006FB8B;
      if ( v23 > 0x64 )
        LODWORD(v23) = 100;
      *(_DWORD *)(v5 + 80) = v23;
      v26 = &unk_1C006FB8B;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      v27 = *(_QWORD *)(a1 + 8);
      if ( (v27 & 0x200000000000LL) != 0 )
      {
        v25 = *(void **)(a1 + 608);
        if ( (v27 & 0x400000000000LL) != 0 )
          v26 = *(void **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)TimeFields.Minute,
          (unsigned int)TimeFields.Hour,
          0x20u,
          Timeout,
          *(_DWORD *)(v5 + 80),
          a1,
          (__int64)v25,
          (__int64)v26);
      v28 = *(_DWORD *)(v5 + 128);
      v29 = 0LL;
      v48 = 0LL;
      if ( (v28 & 8) != 0 )
      {
        v46 = *(__int64 **)(a1 + 760);
        v59 = 0LL;
        v60 = 0LL;
        v61 = 0LL;
        TimeFields = (struct _TIME_FIELDS)THRM_EXTENSIONS_DSM_UUID;
        if ( (int)ACPIAmliEvaluateDsm(v46, (__int64)&TimeFields, 0, 3u, &v59, &v54) >= 0 )
        {
          if ( *(_WORD *)(v54 + 2) == 1 )
            v29 = *(unsigned int *)(v54 + 16);
          AMLIFreeDataBuffs(v54);
          if ( v29 > 0x64 )
            v29 = 100LL;
          v48 = v29;
        }
      }
      *(_DWORD *)(v5 + 84) = v29;
      Time = v24;
      v30 = &unk_1C006FB8B;
      TimeFields = 0LL;
      v31 = &unk_1C006FB8B;
      RtlTimeToTimeFields(&Time, &TimeFields);
      v32 = *(_QWORD *)(a1 + 8);
      if ( (v32 & 0x200000000000LL) != 0 )
      {
        v30 = *(void **)(a1 + 608);
        if ( (v32 & 0x400000000000LL) != 0 )
          v31 = *(void **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)TimeFields.Minute,
          (unsigned int)TimeFields.Hour,
          0x21u,
          Timeout,
          *(_DWORD *)(v5 + 84),
          a1,
          (__int64)v30,
          (__int64)v31);
      ACPIThermalGetParameter(a1, OverrideHandle, 1348097119LL, &v48);
      *(_DWORD *)(v5 + 88) = v48;
      Time = v24;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 88) / 0xAu,
          (unsigned int)TimeFields.Minute,
          0x22u,
          Timeout);
    }
    if ( v55 )
    {
      if ( *(_BYTE *)(v5 + 272) )
      {
        Interval.QuadPart = -10000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      KeWaitForSingleObject((PVOID)(v5 + 248), Executive, 0, 0, 0LL);
      ACPIThermalLoop(a1, 0x4000000LL);
      if ( (v2 & 2) != 0 )
        ACPIThermalReadTemperature(a1, 1LL);
      if ( (v2 & 0x200) != 0 )
        ACPIThermalReadTemperature(a1, 0LL);
    }
    return ACPIThermalLoop(a1, (v2 & 0xFFFFFDFD) != 0 ? 1073742338 : 0x40000000);
  }
  return result;
}
