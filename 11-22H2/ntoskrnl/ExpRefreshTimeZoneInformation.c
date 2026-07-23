/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x140840928
 * Callers:
 *     ExpRefreshSystemTime @ 0x140840884 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140854624 (ExpReadLeapSecondData.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8168 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1409F8340 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140AAAD24 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140252980 (KeCancelTimer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140297574 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CAB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CAD0 (PsAttachSiloToCurrentThread.c)
 *     ExLocalTimeToSystemTime @ 0x14033B0A0 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x14033B150 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14033B4B0 (RtlTimeToTimeFields.c)
 *     RtlSetSystemGlobalData @ 0x14035B9D0 (RtlSetSystemGlobalData.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x1406C5480 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1406C6270 (RtlpGetRegistryHandle.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1407F8114 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCutoverTimeToSystemTime @ 0x140840DF8 (RtlCutoverTimeToSystemTime.c)
 *     RtlSetActiveTimeBias @ 0x140840F74 (RtlSetActiveTimeBias.c)
 *     ExpWriteTimeZoneBias @ 0x14084101C (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x14084105C (ExpWriteTimeZoneBiasStartEnd.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1408410A8 (RtlpCheckDynamicTimeZoneInformation.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x140841378 (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x140841504 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140841710 (RtlpUpdateDynamicTimeZones.c)
 *     ExpInitializeTimeZoneInformation @ 0x140841A60 (ExpInitializeTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BD87C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneBiasChange @ 0x1409E5DFC (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1409F7D20 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x1409F7EFC (ExpLogRefreshTimeZoneInformationQueryFail.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1409F8008 (ExpReadSiloTimeZoneMarker.c)
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
  BOOLEAN v10; // r9
  __int64 v11; // rsi
  LARGE_INTEGER v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rdx
  BOOLEAN v15; // r9
  LARGE_INTEGER v16; // rdi
  BOOLEAN v17; // al
  __int64 v18; // rdx
  int v19; // ecx
  LARGE_INTEGER v20; // rbx
  int v21; // ecx
  _DWORD *v22; // r15
  int v23; // eax
  __int64 v24; // rdx
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int16 Year; // di
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
  unsigned __int64 Buffer; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER v49; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v50; // [rsp+90h] [rbp-78h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+98h] [rbp-70h] BYREF
  ULONG BufferLengthOut[4]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD Buf2[54]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR TargetPath[264]; // [rsp+268h] [rbp+160h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  SystemTime.QuadPart = 0LL;
  v2 = 0LL;
  v49.QuadPart = 0LL;
  v43.QuadPart = 0LL;
  v3 = 1;
  Buffer = 0LL;
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
  v11 = MEMORY[0xFFFFF78000000014];
  v12.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v7 + 440);
  Time = v12;
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
    && RtlGetPersistedStateLocation(
         L"TimeZoneInformationSettings",
         L"TargetNtPath",
         0LL,
         LocationTypeRegistry,
         TargetPath,
         0x208u,
         BufferLengthOut) >= 0 )
  {
    Handle = 0LL;
    if ( (unsigned int)RtlpGetRegistryHandle(0, TargetPath, 0, &Handle) == -1073741772 )
      v4 = 1;
    if ( Handle )
      ZwClose(Handle);
    if ( v4 )
      goto LABEL_56;
  }
LABEL_12:
  v13 = Buf2[0];
  v44.QuadPart = -1LL;
  v50.QuadPart = -1LL;
  LODWORD(v45) = Buf2[0];
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer((PKTIMER)(v7 + 512));
    v22 = (_DWORD *)(v7 + 432);
    *(_DWORD *)(v7 + 432) = 0;
    v20.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    goto LABEL_24;
  }
  if ( !RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &SystemTime, &Time, v10) )
  {
    ++*(_DWORD *)(v7 + 1000);
    LOBYTE(v14) = v3;
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v14, &v44, 2LL);
    LOBYTE(v39) = v4;
    v40 = 2;
    goto LABEL_49;
  }
  v16 = SystemTime;
  v44 = SystemTime;
  v17 = RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v49, &Time, v15);
  v19 = 0;
  if ( !v17 )
  {
    ++*(_DWORD *)(v7 + 1000);
    ExpSystemIsInCmosMode = 1;
    LOBYTE(v18) = v3;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v18, &v44, 3LL);
    LOBYTE(v39) = v4;
    v40 = 3;
    goto LABEL_49;
  }
  v50 = v49;
  if ( v12.QuadPart < v16.QuadPart || v12.QuadPart < v49.QuadPart )
  {
    if ( v49.QuadPart >= v16.QuadPart )
    {
      if ( v12.QuadPart < v16.QuadPart || v12.QuadPart >= v49.QuadPart )
      {
        v20 = v16;
        LocalTime = v16;
        v22 = (_DWORD *)(v7 + 432);
        *(_DWORD *)(v7 + 432) = 2;
        goto LABEL_22;
      }
      v20 = v49;
      LocalTime = v49;
      *(_DWORD *)(v7 + 432) = 1;
      v22 = (_DWORD *)(v7 + 432);
LABEL_64:
      v23 = HIDWORD(Buf2[10]);
      goto LABEL_23;
    }
    if ( v12.QuadPart < v49.QuadPart || v12.QuadPart >= v16.QuadPart )
    {
      v20 = v49;
      LocalTime = v49;
      v21 = 1;
    }
    else
    {
      v20 = v16;
      v21 = 2;
      LocalTime = v16;
    }
  }
  else
  {
    LocalTime.QuadPart = 0LL;
    v20.QuadPart = 0LL;
    LOBYTE(v19) = v16.QuadPart <= v49.QuadPart;
    v21 = v19 + 1;
  }
  v22 = (_DWORD *)(v7 + 432);
  *(_DWORD *)(v7 + 432) = v21;
  if ( v21 != 2 )
    goto LABEL_64;
LABEL_22:
  v23 = Buf2[21];
LABEL_23:
  v13 = v23 + v45;
LABEL_24:
  if ( *(_DWORD *)(v7 + 436) != v13 )
  {
    Buffer = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, &Buffer, 8u, 0LL, 0LL, 0, 0);
    EtwTraceTimeZoneBiasChange(v13, *(unsigned int *)(v7 + 436));
  }
  v24 = 3LL;
  *(_DWORD *)(v7 + 436) = v13;
  v25 = Buf2;
  *(_QWORD *)(v7 + 440) = 10000000LL * (int)(60 * v13);
  v26 = (_OWORD *)v7;
  do
  {
    *v26 = *v25;
    v26[1] = v25[1];
    v26[2] = v25[2];
    v26[3] = v25[3];
    v26[4] = v25[4];
    v26[5] = v25[5];
    v26[6] = v25[6];
    v26 += 8;
    v27 = v25[7];
    v25 += 8;
    *(v26 - 1) = v27;
    --v24;
  }
  while ( v24 );
  v28 = *v25;
  ExpSystemIsInCmosMode = 0;
  *v26 = v28;
  v26[1] = v25[1];
  v26[2] = v25[2];
  RtlSetSystemGlobalData(GlobalDataIdTimeZoneId, v22, 4u);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v20.QuadPart )
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
  ExpWriteTimeZoneBias(v7 + 440);
  if ( LocalTime.QuadPart )
    v30 = *(_QWORD *)(v7 + 992);
  else
    v30 = *(_QWORD *)(v7 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v11, v30);
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
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v7 + 436), *v22, v33, v3);
  return 1;
}
