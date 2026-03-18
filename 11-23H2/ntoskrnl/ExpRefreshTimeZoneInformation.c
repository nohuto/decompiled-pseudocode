/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x14083EB98
 * Callers:
 *     ExpRefreshSystemTime @ 0x14083EAF4 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140853714 (ExpReadLeapSecondData.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F80B8 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1409F8290 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140AAAC64 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetTimerEx @ 0x140252820 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140252AA0 (KeCancelTimer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140289F90 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140297694 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CC90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CCB0 (PsAttachSiloToCurrentThread.c)
 *     ExLocalTimeToSystemTime @ 0x14033B2A0 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x14033B350 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14033B6B0 (RtlTimeToTimeFields.c)
 *     RtlSetSystemGlobalData @ 0x14035C020 (RtlSetSystemGlobalData.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435A00 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x1406C53D0 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1406C61C0 (RtlpGetRegistryHandle.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1407F7AA4 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCutoverTimeToSystemTime @ 0x14083F068 (RtlCutoverTimeToSystemTime.c)
 *     RtlSetActiveTimeBias @ 0x14083F1E4 (RtlSetActiveTimeBias.c)
 *     ExpWriteTimeZoneBias @ 0x14083F28C (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x14083F2CC (ExpWriteTimeZoneBiasStartEnd.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14083F318 (RtlpCheckDynamicTimeZoneInformation.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x14083F5E8 (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x14083F774 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14083F980 (RtlpUpdateDynamicTimeZones.c)
 *     ExpInitializeTimeZoneInformation @ 0x14083FCD0 (ExpInitializeTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BD7CC (RtlpSetTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneBiasChange @ 0x1409E5D4C (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1409F7C70 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x1409F7E4C (ExpLogRefreshTimeZoneInformationQueryFail.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1409F7F58 (ExpReadSiloTimeZoneMarker.c)
 */

char __fastcall ExpRefreshTimeZoneInformation(char a1)
{
  struct _LIST_ENTRY *v2; // rdi
  char v3; // r12
  char v4; // r13
  __int64 CurrentServerSilo; // rax
  void *v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rdx
  int TimeZoneInformationWorker; // ebx
  __int64 v10; // rsi
  LARGE_INTEGER v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  LARGE_INTEGER v14; // rdi
  char v15; // al
  __int64 v16; // rdx
  int v17; // ecx
  LARGE_INTEGER v18; // rbx
  int v19; // ecx
  _QWORD *v20; // r15
  int v21; // eax
  __int64 v22; // rdx
  _OWORD *v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int16 Year; // di
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // edx
  __int16 v32; // bx
  int v33; // r9d
  char SiloTimeZoneMarker; // al
  _OWORD *v36; // rcx
  _OWORD *v37; // rax
  __int128 v38; // xmm1
  int v39; // r9d
  int v40; // ecx
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER v43; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v44; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v46; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v48; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER v49; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v50; // [rsp+90h] [rbp-78h] BYREF
  TIME_FIELDS TimeFields; // [rsp+98h] [rbp-70h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD Buf2[54]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR v54[264]; // [rsp+268h] [rbp+160h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  v48.QuadPart = 0LL;
  v2 = 0LL;
  v49.QuadPart = 0LL;
  v43.QuadPart = 0LL;
  v3 = 1;
  v46 = 0LL;
  TimeFields = 0LL;
  v4 = 0;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v7 = *((_QWORD *)PsGetServerSiloGlobals(CurrentServerSilo) + 157);
  if ( *(_QWORD *)(v7 + 592) )
    v3 = 0;
  else
    ExpInitializeTimeZoneInformation(v6);
  if ( a1 )
  {
    if ( !(unsigned __int8)ExpReadSiloTimeZoneMarker() )
      v2 = PsAttachSiloToCurrentThread(0LL);
    TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
    if ( v2 )
      PsDetachSiloFromCurrentThread(v2);
  }
  else if ( !PsIsCurrentThreadInServerSilo()
         || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v36 = Buf2, SiloTimeZoneMarker) )
  {
    TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
  }
  else
  {
    v37 = (_OWORD *)v7;
    v8 = 3LL;
    do
    {
      *v36 = *v37;
      v36[1] = v37[1];
      v36[2] = v37[2];
      v36[3] = v37[3];
      v36[4] = v37[4];
      v36[5] = v37[5];
      v36[6] = v37[6];
      v36 += 8;
      v38 = v37[7];
      v37 += 8;
      *(v36 - 1) = v38;
      --v8;
    }
    while ( v8 );
    TimeZoneInformationWorker = 0;
    *v36 = *v37;
    v36[1] = v37[1];
    v36[2] = v37[2];
  }
  if ( TimeZoneInformationWorker < 0 )
  {
    LOBYTE(v8) = v3;
    ++*(_DWORD *)(v7 + 1000);
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)TimeZoneInformationWorker, v8);
    v39 = 0;
    v40 = 1;
LABEL_49:
    EtwTraceTimeZoneInformationRefresh(v40, *(_DWORD *)(v7 + 436), *(_DWORD *)(v7 + 432), v39, v3);
    return 0;
  }
  v10 = MEMORY[0xFFFFF78000000014];
  v11.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v7 + 440);
  Time = v11;
  if ( !BYTE4(Buf2[53]) )
  {
    if ( WORD2(Buf2[21]) )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(Buf2) )
      {
        v4 = 1;
LABEL_56:
        RtlpSetTimeZoneInformationWorker(Buf2);
        goto LABEL_12;
      }
    }
  }
  if ( v3
    && (int)RtlGetPersistedStateLocation(
              L"TimeZoneInformationSettings",
              L"TargetNtPath",
              0LL,
              0,
              v54,
              0x208u,
              (unsigned int *)&v52) >= 0 )
  {
    Handle = 0LL;
    if ( (unsigned int)RtlpGetRegistryHandle(0, v54, 0, &Handle) == -1073741772 )
      v4 = 1;
    if ( Handle )
      ZwClose(Handle);
    if ( v4 )
      goto LABEL_56;
  }
LABEL_12:
  v12 = Buf2[0];
  v44.QuadPart = -1LL;
  v50.QuadPart = -1LL;
  LODWORD(v45) = Buf2[0];
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer((PKTIMER)(v7 + 512));
    v20 = (_QWORD *)(v7 + 432);
    *(_DWORD *)(v7 + 432) = 0;
    v18.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    goto LABEL_24;
  }
  if ( !(unsigned __int8)RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &v48, &Time) )
  {
    ++*(_DWORD *)(v7 + 1000);
    LOBYTE(v13) = v3;
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v13, &v44, 2LL);
    LOBYTE(v39) = v4;
    v40 = 2;
    goto LABEL_49;
  }
  v14 = v48;
  v44 = v48;
  v15 = RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v49, &Time);
  v17 = 0;
  if ( !v15 )
  {
    ++*(_DWORD *)(v7 + 1000);
    ExpSystemIsInCmosMode = 1;
    LOBYTE(v16) = v3;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v16, &v44, 3LL);
    LOBYTE(v39) = v4;
    v40 = 3;
    goto LABEL_49;
  }
  v50 = v49;
  if ( v11.QuadPart < v14.QuadPart || v11.QuadPart < v49.QuadPart )
  {
    if ( v49.QuadPart >= v14.QuadPart )
    {
      if ( v11.QuadPart < v14.QuadPart || v11.QuadPart >= v49.QuadPart )
      {
        v18 = v14;
        LocalTime = v14;
        v20 = (_QWORD *)(v7 + 432);
        *(_DWORD *)(v7 + 432) = 2;
        goto LABEL_22;
      }
      v18 = v49;
      LocalTime = v49;
      *(_DWORD *)(v7 + 432) = 1;
      v20 = (_QWORD *)(v7 + 432);
LABEL_64:
      v21 = HIDWORD(Buf2[10]);
      goto LABEL_23;
    }
    if ( v11.QuadPart < v49.QuadPart || v11.QuadPart >= v14.QuadPart )
    {
      v18 = v49;
      LocalTime = v49;
      v19 = 1;
    }
    else
    {
      v18 = v14;
      v19 = 2;
      LocalTime = v14;
    }
  }
  else
  {
    LocalTime.QuadPart = 0LL;
    v18.QuadPart = 0LL;
    LOBYTE(v17) = v14.QuadPart <= v49.QuadPart;
    v19 = v17 + 1;
  }
  v20 = (_QWORD *)(v7 + 432);
  *(_DWORD *)(v7 + 432) = v19;
  if ( v19 != 2 )
    goto LABEL_64;
LABEL_22:
  v21 = Buf2[21];
LABEL_23:
  v12 = v21 + v45;
LABEL_24:
  if ( *(_DWORD *)(v7 + 436) != v12 )
  {
    v46 = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData((__int64)&WNF_SEB_TIME_ZONE_CHANGE, (__int64)&v46);
    EtwTraceTimeZoneBiasChange(v12, *(unsigned int *)(v7 + 436));
  }
  v22 = 3LL;
  *(_DWORD *)(v7 + 436) = v12;
  v23 = Buf2;
  *(_QWORD *)(v7 + 440) = 10000000LL * (int)(60 * v12);
  v24 = (_OWORD *)v7;
  do
  {
    *v24 = *v23;
    v24[1] = v23[1];
    v24[2] = v23[2];
    v24[3] = v23[3];
    v24[4] = v23[4];
    v24[5] = v23[5];
    v24[6] = v23[6];
    v24 += 8;
    v25 = v23[7];
    v23 += 8;
    *(v24 - 1) = v25;
    --v22;
  }
  while ( v22 );
  v26 = *v23;
  ExpSystemIsInCmosMode = 0;
  *v24 = v26;
  v24[1] = v23[1];
  v24[2] = v23[2];
  RtlSetSystemGlobalData(6, v20, 4);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v18.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v7 + 992));
    KiSetTimerEx(v7 + 512, *(_QWORD *)(v7 + 992), 0, 0, v7 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v7 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v7 + 944), &v43);
  ExLocalTimeToSystemTime(&v43, (PLARGE_INTEGER)(v7 + 936));
  KiSetTimerEx(v7 + 672, *(_QWORD *)(v7 + 936), 0, 0, v7 + 608);
  *(_WORD *)(v7 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v7 + 968), &v43);
  ExLocalTimeToSystemTime(&v43, (PLARGE_INTEGER)(v7 + 960));
  KiSetTimerEx(v7 + 832, *(_QWORD *)(v7 + 960), 0, 0, v7 + 768);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  ExpWriteTimeZoneBias(v7 + 440, 1LL, v28, v29);
  if ( LocalTime.QuadPart )
    v30 = *(_QWORD *)(v7 + 992);
  else
    v30 = *(_QWORD *)(v7 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v10, v30);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v7 + 436));
  v32 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v7 + 984) )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      *(_WORD *)(v7 + 984) = v32;
  }
  LOBYTE(v31) = v3;
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v31,
    (unsigned int)&v44,
    (unsigned int)&v50,
    (__int64)&LocalTime);
  LOBYTE(v33) = v4;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v7 + 436), *(_DWORD *)v20, v33, v3);
  return 1;
}
