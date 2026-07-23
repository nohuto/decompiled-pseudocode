/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x14083EE98
 * Callers:
 *     ExpRefreshSystemTime @ 0x14083EDF4 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140853A14 (ExpReadLeapSecondData.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8348 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1409F8520 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140AAAAD4 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140252B60 (KeCancelTimer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CF20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CF40 (PsAttachSiloToCurrentThread.c)
 *     ExLocalTimeToSystemTime @ 0x14033B530 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x14033B5E0 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14033B940 (RtlTimeToTimeFields.c)
 *     RtlSetSystemGlobalData @ 0x14035C1C0 (RtlSetSystemGlobalData.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x1406C5400 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1406C61F0 (RtlpGetRegistryHandle.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1407F7D74 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCutoverTimeToSystemTime @ 0x14083F368 (RtlCutoverTimeToSystemTime.c)
 *     RtlSetActiveTimeBias @ 0x14083F4E4 (RtlSetActiveTimeBias.c)
 *     ExpWriteTimeZoneBias @ 0x14083F58C (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x14083F5CC (ExpWriteTimeZoneBiasStartEnd.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14083F618 (RtlpCheckDynamicTimeZoneInformation.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x14083F8E8 (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x14083FA74 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14083FC80 (RtlpUpdateDynamicTimeZones.c)
 *     ExpInitializeTimeZoneInformation @ 0x14083FFD0 (ExpInitializeTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BD9CC (RtlpSetTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneBiasChange @ 0x1409E5FDC (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1409F7F00 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x1409F80DC (ExpLogRefreshTimeZoneInformationQueryFail.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1409F81E8 (ExpReadSiloTimeZoneMarker.c)
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
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  int v33; // edx
  __int16 v34; // bx
  int v35; // r9d
  char SiloTimeZoneMarker; // al
  _OWORD *v38; // rcx
  _OWORD *v39; // rax
  __int128 v40; // xmm1
  int v41; // r9d
  int v42; // ecx
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER v45; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v46; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h]
  unsigned __int64 Buffer; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER v51; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v52; // [rsp+90h] [rbp-78h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+98h] [rbp-70h] BYREF
  ULONG BufferLengthOut[4]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD Buf2[54]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR TargetPath[264]; // [rsp+268h] [rbp+160h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  SystemTime.QuadPart = 0LL;
  v2 = 0LL;
  v51.QuadPart = 0LL;
  v45.QuadPart = 0LL;
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
         || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v38 = Buf2, SiloTimeZoneMarker) )
  {
    TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
  }
  else
  {
    v39 = (_OWORD *)v7;
    v8 = 3LL;
    do
    {
      *v38 = *v39;
      v38[1] = v39[1];
      v38[2] = v39[2];
      v38[3] = v39[3];
      v38[4] = v39[4];
      v38[5] = v39[5];
      v38[6] = v39[6];
      v38 += 8;
      v40 = v39[7];
      v39 += 8;
      *(v38 - 1) = v40;
      --v8;
    }
    while ( v8 );
    TimeZoneInformationWorker = 0;
    *v38 = *v39;
    v38[1] = v39[1];
    v38[2] = v39[2];
  }
  if ( TimeZoneInformationWorker < 0 )
  {
    LOBYTE(v8) = v3;
    ++*(_DWORD *)(v7 + 1000);
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)TimeZoneInformationWorker, v8);
    v41 = 0;
    v42 = 1;
LABEL_49:
    EtwTraceTimeZoneInformationRefresh(v42, *(_DWORD *)(v7 + 436), *(_DWORD *)(v7 + 432), v41, v3);
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
  v46.QuadPart = -1LL;
  v52.QuadPart = -1LL;
  LODWORD(v47) = Buf2[0];
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
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v14, &v46, 2LL);
    LOBYTE(v41) = v4;
    v42 = 2;
    goto LABEL_49;
  }
  v16 = SystemTime;
  v46 = SystemTime;
  v17 = RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v51, &Time, v15);
  v19 = 0;
  if ( !v17 )
  {
    ++*(_DWORD *)(v7 + 1000);
    ExpSystemIsInCmosMode = 1;
    LOBYTE(v18) = v3;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v18, &v46, 3LL);
    LOBYTE(v41) = v4;
    v42 = 3;
    goto LABEL_49;
  }
  v52 = v51;
  if ( v12.QuadPart < v16.QuadPart || v12.QuadPart < v51.QuadPart )
  {
    if ( v51.QuadPart >= v16.QuadPart )
    {
      if ( v12.QuadPart < v16.QuadPart || v12.QuadPart >= v51.QuadPart )
      {
        v20 = v16;
        LocalTime = v16;
        v22 = (_DWORD *)(v7 + 432);
        *(_DWORD *)(v7 + 432) = 2;
        goto LABEL_22;
      }
      v20 = v51;
      LocalTime = v51;
      *(_DWORD *)(v7 + 432) = 1;
      v22 = (_DWORD *)(v7 + 432);
LABEL_64:
      v23 = HIDWORD(Buf2[10]);
      goto LABEL_23;
    }
    if ( v12.QuadPart < v51.QuadPart || v12.QuadPart >= v16.QuadPart )
    {
      v20 = v51;
      LocalTime = v51;
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
    LOBYTE(v19) = v16.QuadPart <= v51.QuadPart;
    v21 = v19 + 1;
  }
  v22 = (_DWORD *)(v7 + 432);
  *(_DWORD *)(v7 + 432) = v21;
  if ( v21 != 2 )
    goto LABEL_64;
LABEL_22:
  v23 = Buf2[21];
LABEL_23:
  v13 = v23 + v47;
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
  RtlTimeFieldsToTime((PTIME_FIELDS)(v7 + 944), &v45);
  ExLocalTimeToSystemTime(&v45, (PLARGE_INTEGER)(v7 + 936));
  KiSetTimerEx(v7 + 672, *(_QWORD *)(v7 + 936), 0, 0, v7 + 608);
  *(_WORD *)(v7 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v7 + 968), &v45);
  ExLocalTimeToSystemTime(&v45, (PLARGE_INTEGER)(v7 + 960));
  KiSetTimerEx(v7 + 832, *(_QWORD *)(v7 + 960), 0, 0, v7 + 768);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  ExpWriteTimeZoneBias(v7 + 440, 1LL, v30, v31);
  if ( LocalTime.QuadPart )
    v32 = *(_QWORD *)(v7 + 992);
  else
    v32 = *(_QWORD *)(v7 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v11, v32);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v7 + 436));
  v34 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v7 + 984) )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      *(_WORD *)(v7 + 984) = v34;
  }
  LOBYTE(v33) = v3;
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v33,
    (unsigned int)&v46,
    (unsigned int)&v52,
    (__int64)&LocalTime);
  LOBYTE(v35) = v4;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v7 + 436), *v22, v35, v3);
  return 1;
}
