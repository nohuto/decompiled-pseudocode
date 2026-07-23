/*
 * XREFs of PopCheckShutdownMarker @ 0x140B37D6C
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReadRegKeyValue @ 0x140383B68 (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041AD60 (ZwQuerySystemInformation.c)
 *     ZwQuerySystemInformationEx @ 0x14041D420 (ZwQuerySystemInformationEx.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406874D0 (ExGetFirmwareEnvironmentVariable.c)
 *     PopRecordSleepCheckpointSource @ 0x140801A44 (PopRecordSleepCheckpointSource.c)
 *     RtlGetSystemBootStatusEx @ 0x140803040 (RtlGetSystemBootStatusEx.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140803070 (RtlCheckSystemBootStatusIntegrity.c)
 *     PopRecordSleepCheckpoint @ 0x1409814C0 (PopRecordSleepCheckpoint.c)
 *     PopClearSystemSleepCheckpoint @ 0x140996E2C (PopClearSystemSleepCheckpoint.c)
 *     PopDiagTraceDirtyTransition @ 0x140B36190 (PopDiagTraceDirtyTransition.c)
 *     PopDiagTraceInvalidBootStat @ 0x140B9746C (PopDiagTraceInvalidBootStat.c)
 */

char __fastcall PopCheckShutdownMarker(__int64 a1)
{
  __int64 v1; // rax
  char v3; // dl
  NTSTATUS SystemBootStatus; // eax
  char v5; // cl
  char result; // al
  char v7; // bl
  __int64 v8; // rcx
  __int64 v9; // rcx
  int *v10; // r9
  __int64 v11; // r10
  WNF_STATE_NAME *v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // r9
  char v16; // [rsp+48h] [rbp-C0h] BYREF
  char v17; // [rsp+49h] [rbp-BFh] BYREF
  bool v18; // [rsp+4Ah] [rbp-BEh] BYREF
  int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  int v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+54h] [rbp-B4h] BYREF
  int v22; // [rsp+58h] [rbp-B0h] BYREF
  int v23; // [rsp+5Ch] [rbp-ACh] BYREF
  int v24; // [rsp+60h] [rbp-A8h] BYREF
  int Buffer; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  WNF_STATE_NAME StateName[3]; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+88h] [rbp-80h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  int *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  int *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  __int128 *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  int *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  int *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  int *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  int *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  char *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  bool *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  int v49; // [rsp+148h] [rbp+40h] BYREF
  __int128 *v50; // [rsp+150h] [rbp+48h]
  int v51; // [rsp+158h] [rbp+50h]
  int v52; // [rsp+160h] [rbp+58h]
  __int128 *v53; // [rsp+168h] [rbp+60h]
  int v54; // [rsp+170h] [rbp+68h]
  int v55; // [rsp+178h] [rbp+70h]
  __int128 *v56; // [rsp+180h] [rbp+78h]
  int v57; // [rsp+188h] [rbp+80h]
  int v58; // [rsp+190h] [rbp+88h]
  int *v59; // [rsp+198h] [rbp+90h]
  int v60; // [rsp+1A0h] [rbp+98h]

  v1 = *(_QWORD *)(a1 + 240);
  v16 = 0;
  *(_OWORD *)StateName[1].Data = 0LL;
  v3 = *(_BYTE *)(v1 + 132);
  v49 = 14;
  v50 = &PopBsdPhysicalPowerButtonInfo;
  v51 = 64;
  v53 = &PopBsdPowerTransition;
  PopDirtyTransitionDiagInfo = v3 & 1;
  v56 = &PopBsdPowerTransitionExtension;
  v59 = &dword_140D16BCC;
  v52 = 7;
  v54 = 32;
  v55 = 16;
  v57 = 32;
  v58 = 11;
  v60 = 4;
  RtlCheckSystemBootStatusIntegrity((__int64)&byte_140D16BC1);
  SystemBootStatus = RtlGetSystemBootStatusEx((__int64)&v49, 4u, &StateName[1]);
  if ( SystemBootStatus < 0 )
  {
    v10 = &v49;
    v11 = 4LL;
    v12 = &StateName[1];
    do
    {
      if ( !v12->Data[0] )
        dword_140D16BC4 |= 1 << *(_BYTE *)v10;
      v12 = (WNF_STATE_NAME *)((char *)v12 + 4);
      v10 += 6;
      --v11;
    }
    while ( v11 );
    LOBYTE(v10) = byte_140D16BC1;
    PopDiagTraceInvalidBootStat(MEMORY[0x7FFE02C4], (unsigned int)dword_140D16BC4, (unsigned int)SystemBootStatus, v10);
  }
  PopBsdPhysicalPowerButtonInfoAtBoot = PopBsdPhysicalPowerButtonInfo;
  xmmword_140C6AE90 = xmmword_140C6AFC0;
  xmmword_140C6AEA0 = xmmword_140C6AFD0;
  xmmword_140C6AEB0 = xmmword_140C6AFE0;
  if ( _mm_srli_si128((__m128i)PopBsdPhysicalPowerButtonInfo, 8).m128i_u32[0]
    && (unsigned int)dword_140C03950 > 5
    && tlgKeywordOn((__int64)&dword_140C03950, 0x200000000000LL) )
  {
    v20 = v13;
    v19 = WORD2(v13);
    v22 = v13;
    v31 = &v19;
    v33 = &v20;
    v35 = &xmmword_140C6AEA0;
    v21 = WORD6(xmmword_140C6AEA0);
    v37 = &v21;
    v39 = &v22;
    v23 = HIWORD(xmmword_140C6AEA0);
    v41 = &v23;
    v24 = BYTE6(v13);
    v43 = &v24;
    v15 = HIBYTE(v13);
    v29 = v14;
    v17 = v15 & 1;
    v18 = (v15 & 2) != 0;
    v45 = &v17;
    v30 = 8LL;
    v47 = &v18;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 8LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 1LL;
    v48 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C03950,
      (unsigned __int8 *)byte_14002D96D,
      0LL,
      0LL,
      0xCu,
      &v28);
  }
  PopBsdPowerTransitionAtBoot = PopBsdPowerTransition;
  xmmword_140C6AEF0 = xmmword_140C6A850;
  PopBsdPowerTransitionOnDisk = PopBsdPowerTransition;
  xmmword_140C6AFA0 = xmmword_140C6A850;
  PopBsdPhysicalPowerButtonInfoOnDisk = PopBsdPhysicalPowerButtonInfo;
  xmmword_140C6AF40 = xmmword_140C6AFC0;
  xmmword_140C6AF50 = xmmword_140C6AFD0;
  xmmword_140C6AF60 = xmmword_140C6AFE0;
  PopBsdPowerTransitionExtensionAtBoot = PopBsdPowerTransitionExtension;
  xmmword_140C6AED0 = xmmword_140CF7C90;
  PopBsdPowerTransitionExtensionOnDisk = PopBsdPowerTransitionExtension;
  xmmword_140C6AF80 = xmmword_140CF7C90;
  if ( (qword_140C31AF8 & 4) != 0 )
    BYTE8(PopBsdPowerTransitionAtBoot) &= ~1u;
  if ( (PopSimulate & 0x200) != 0 )
    BYTE8(PopBsdPowerTransitionAtBoot) |= 1u;
  v5 = BYTE14(PopBsdPowerTransitionAtBoot) & 0xDF;
  BYTE14(PopBsdPowerTransitionAtBoot) &= ~0x20u;
  if ( DWORD2(PopBsdPhysicalPowerButtonInfoAtBoot) && (HIBYTE(PopBsdPhysicalPowerButtonInfoAtBoot) & 4) != 0 )
  {
    BYTE14(PopBsdPowerTransitionAtBoot) = v5 | 0x20;
    *(_QWORD *)&PopBsdPowerTransitionAtBoot = PopBsdPhysicalPowerButtonInfoAtBoot;
  }
  PopAutoChkCausedReboot = (BYTE14(PopBsdPowerTransition) & 0x10) != 0;
  StateName[0] = (WNF_STATE_NAME)WNF_PO_PREVIOUS_SHUTDOWN_STATE;
  Buffer = BYTE8(PopBsdPowerTransitionAtBoot) & 1;
  result = ZwUpdateWnfStateData(StateName, &Buffer, 4u, 0LL, 0LL, 0, 0);
  if ( (PopSimulate & 0x400) != 0 )
  {
    WORD6(PopBsdPowerTransitionAtBoot) = 1;
    result = BYTE8(PopBsdPowerTransitionAtBoot) & 0xF | 0x50;
    BYTE8(PopBsdPowerTransitionAtBoot) = result;
  }
  if ( (PopSimulate & 0x20000000) != 0 )
  {
    BYTE8(PopBsdPowerTransitionAtBoot) |= 2u;
    *((_QWORD *)&xmmword_140C6AED0 + 1) = 1LL;
  }
  if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) != 0 )
  {
    LODWORD(v26) = 1;
    if ( (int)ExGetFirmwareEnvironmentVariable(
                (__int64)L"*,",
                (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
                (int)&v16,
                (int)&v26,
                0LL) >= 0 )
    {
      v7 = v16;
      BYTE2(PopBsdPowerTransitionExtensionAtBoot) = v16;
      BYTE1(PopBsdPowerTransitionExtensionAtBoot) = BYTE1(PopBsdPowerTransitionExtensionAtBoot) & 0xF3 | 4;
      PopRecordSleepCheckpoint(v16);
      PopRecordSleepCheckpointSource(1);
      PopClearSystemSleepCheckpoint(1);
    }
    else
    {
      v7 = BYTE2(PopBsdPowerTransitionExtensionAtBoot);
      BYTE1(PopBsdPowerTransitionExtensionAtBoot) = BYTE1(PopBsdPowerTransitionExtensionAtBoot) & 0xF3 | 8;
      PopRecordSleepCheckpointSource(2);
    }
    v8 = *(_QWORD *)(a1 + 240);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 280);
      if ( v9 )
      {
        dword_140D16BD0 = *(_DWORD *)(v9 + 56);
        qword_140D16BD8 = *(_QWORD *)(v9 + 64);
        qword_140D16BE0 = *(_QWORD *)(v9 + 72);
        qword_140D16BE8 = *(_QWORD *)(v9 + 80);
        qword_140D16BF0 = *(_QWORD *)(v9 + 88);
      }
    }
    dword_140D16C48 = 0;
    PopReadRegKeyValue(
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl",
      L"CrashDumpEnabled",
      4uLL,
      4,
      &dword_140D16C48);
    dword_140D16C4C = 0;
    PopReadRegKeyValue(
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl",
      L"FilterPages",
      4uLL,
      4,
      &dword_140D16C4C);
    if ( (int)PopReadRegKeyValue(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump",
                L"Info",
                0x30uLL,
                0,
                &dword_140D16C50) >= 0
      && !dword_140D16BD0
      && dword_140D16C58 )
    {
      dword_140D16BD0 = dword_140D16C58;
      qword_140D16BD8 = qword_140D16C60;
      dword_140D16BF8 = 1;
    }
    dword_140D16BC8 = MEMORY[0x7FFE02C4];
    byte_140D16C10 = v7;
    qword_140D16C18 = (__int64)&PopBsdPhysicalPowerButtonInfoAtBoot;
    qword_140D16C00 = (__int64)&PopBsdPowerTransitionAtBoot;
    qword_140D16C08 = (__int64)&PopBsdPowerTransitionExtensionAtBoot;
    dword_140D16C20 = ExBootAppErrorDiagCode;
    dword_140D16C24 = ExBootAppFailureStatus;
    ZwQuerySystemInformation(SystemBootEnvironmentInformation, &unk_140D16C28, 0x20u, 0LL);
    dword_140D16C88 = 7;
    qword_140D16C90 = (__int64)&PopFirmwareResetReason;
    if ( ZwQuerySystemInformationEx(SystemWatchdogTimerInformation, &dword_140D16C88, 4u, &dword_140D16C88, 8u, 0LL) >= 0 )
    {
      dword_140D16C80 = dword_140D16C8C;
      if ( dword_140D16C8C )
      {
        dword_140D16C88 = 8;
        if ( ZwQuerySystemInformationEx(SystemWatchdogTimerInformation, &dword_140D16C88, 4u, &dword_140D16C88, 8u, 0LL) >= 0 )
          dword_140D16C84 = dword_140D16C8C;
      }
    }
    return PopDiagTraceDirtyTransition();
  }
  return result;
}
