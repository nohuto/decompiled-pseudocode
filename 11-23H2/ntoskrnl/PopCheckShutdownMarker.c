/*
 * XREFs of PopCheckShutdownMarker @ 0x140B6E32C
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReadRegKeyValue @ 0x140384968 (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041B420 (ZwQuerySystemInformation.c)
 *     ZwQuerySystemInformationEx @ 0x14041DAE0 (ZwQuerySystemInformationEx.c)
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406874D0 (ExGetFirmwareEnvironmentVariable.c)
 *     PopRecordSleepCheckpointSource @ 0x140801394 (PopRecordSleepCheckpointSource.c)
 *     RtlGetSystemBootStatusEx @ 0x14085C270 (RtlGetSystemBootStatusEx.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x14085C2A0 (RtlCheckSystemBootStatusIntegrity.c)
 *     PopRecordSleepCheckpoint @ 0x140981410 (PopRecordSleepCheckpoint.c)
 *     PopClearSystemSleepCheckpoint @ 0x140996D7C (PopClearSystemSleepCheckpoint.c)
 *     PopDiagTraceDirtyTransition @ 0x140B35190 (PopDiagTraceDirtyTransition.c)
 *     PopDiagTraceInvalidBootStat @ 0x140B9646C (PopDiagTraceInvalidBootStat.c)
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
  _DWORD *v12; // r8
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
  int v25; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v27[3]; // [rsp+70h] [rbp-98h] BYREF
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
  *(_OWORD *)&v27[1] = 0LL;
  v3 = *(_BYTE *)(v1 + 132);
  v49 = 14;
  v50 = &PopBsdPhysicalPowerButtonInfo;
  v51 = 64;
  v53 = &PopBsdPowerTransition;
  PopDirtyTransitionDiagInfo = v3 & 1;
  v56 = &PopBsdPowerTransitionExtension;
  v59 = &dword_140D16B0C;
  v52 = 7;
  v54 = 32;
  v55 = 16;
  v57 = 32;
  v58 = 11;
  v60 = 4;
  RtlCheckSystemBootStatusIntegrity((__int64)&byte_140D16B01);
  SystemBootStatus = RtlGetSystemBootStatusEx((__int64)&v49, 4u, &v27[1]);
  if ( SystemBootStatus < 0 )
  {
    v10 = &v49;
    v11 = 4LL;
    v12 = &v27[1];
    do
    {
      if ( !*v12 )
        dword_140D16B04 |= 1 << *(_BYTE *)v10;
      ++v12;
      v10 += 6;
      --v11;
    }
    while ( v11 );
    LOBYTE(v10) = byte_140D16B01;
    PopDiagTraceInvalidBootStat(MEMORY[0x7FFE02C4], (unsigned int)dword_140D16B04, (unsigned int)SystemBootStatus, v10);
  }
  PopBsdPhysicalPowerButtonInfoAtBoot = PopBsdPhysicalPowerButtonInfo;
  xmmword_140C6AE30 = xmmword_140C6AEA0;
  xmmword_140C6AE40 = xmmword_140C6AEB0;
  xmmword_140C6AE50 = xmmword_140C6AEC0;
  if ( _mm_srli_si128((__m128i)PopBsdPhysicalPowerButtonInfo, 8).m128i_u32[0]
    && (unsigned int)dword_140C03950 > 5
    && tlgKeywordOn((__int64)&dword_140C03950, 0x200000000000LL) )
  {
    v20 = v13;
    v19 = WORD2(v13);
    v22 = v13;
    v31 = &v19;
    v33 = &v20;
    v35 = &xmmword_140C6AE40;
    v21 = WORD6(xmmword_140C6AE40);
    v37 = &v21;
    v39 = &v22;
    v23 = HIWORD(xmmword_140C6AE40);
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
      (unsigned __int8 *)byte_14002D9ED,
      0LL,
      0LL,
      0xCu,
      &v28);
  }
  PopBsdPowerTransitionAtBoot = PopBsdPowerTransition;
  xmmword_140C6AD90 = xmmword_140C6A750;
  PopBsdPowerTransitionOnDisk = PopBsdPowerTransition;
  xmmword_140C6AE10 = xmmword_140C6A750;
  PopBsdPhysicalPowerButtonInfoOnDisk = PopBsdPhysicalPowerButtonInfo;
  xmmword_140C6ADB0 = xmmword_140C6AEA0;
  xmmword_140C6ADC0 = xmmword_140C6AEB0;
  xmmword_140C6ADD0 = xmmword_140C6AEC0;
  PopBsdPowerTransitionExtensionAtBoot = PopBsdPowerTransitionExtension;
  xmmword_140C6AE70 = xmmword_140CF7BD0;
  PopBsdPowerTransitionExtensionOnDisk = PopBsdPowerTransitionExtension;
  xmmword_140C6ADF0 = xmmword_140CF7BD0;
  if ( (qword_140C31B18 & 4) != 0 )
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
  v27[0] = WNF_PO_PREVIOUS_SHUTDOWN_STATE;
  v25 = BYTE8(PopBsdPowerTransitionAtBoot) & 1;
  result = ZwUpdateWnfStateData((__int64)v27, (__int64)&v25);
  if ( (PopSimulate & 0x400) != 0 )
  {
    WORD6(PopBsdPowerTransitionAtBoot) = 1;
    result = BYTE8(PopBsdPowerTransitionAtBoot) & 0xF | 0x50;
    BYTE8(PopBsdPowerTransitionAtBoot) = result;
  }
  if ( (PopSimulate & 0x20000000) != 0 )
  {
    BYTE8(PopBsdPowerTransitionAtBoot) |= 2u;
    *((_QWORD *)&xmmword_140C6AE70 + 1) = 1LL;
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
        dword_140D16B10 = *(_DWORD *)(v9 + 56);
        qword_140D16B18 = *(_QWORD *)(v9 + 64);
        qword_140D16B20 = *(_QWORD *)(v9 + 72);
        qword_140D16B28 = *(_QWORD *)(v9 + 80);
        qword_140D16B30 = *(_QWORD *)(v9 + 88);
      }
    }
    dword_140D16B88 = 0;
    PopReadRegKeyValue(
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl",
      L"CrashDumpEnabled",
      4uLL,
      4,
      &dword_140D16B88);
    dword_140D16B8C = 0;
    PopReadRegKeyValue(
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl",
      L"FilterPages",
      4uLL,
      4,
      &dword_140D16B8C);
    if ( (int)PopReadRegKeyValue(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump",
                L"Info",
                0x30uLL,
                0,
                &dword_140D16B90) >= 0
      && !dword_140D16B10
      && dword_140D16B98 )
    {
      dword_140D16B10 = dword_140D16B98;
      qword_140D16B18 = qword_140D16BA0;
      dword_140D16B38 = 1;
    }
    dword_140D16B08 = MEMORY[0x7FFE02C4];
    byte_140D16B50 = v7;
    qword_140D16B58 = (__int64)&PopBsdPhysicalPowerButtonInfoAtBoot;
    qword_140D16B40 = (__int64)&PopBsdPowerTransitionAtBoot;
    qword_140D16B48 = (__int64)&PopBsdPowerTransitionExtensionAtBoot;
    dword_140D16B60 = ExBootAppErrorDiagCode;
    dword_140D16B64 = ExBootAppFailureStatus;
    ZwQuerySystemInformation(90LL, (__int64)&unk_140D16B68);
    dword_140D16BC8 = 7;
    qword_140D16BD0 = (__int64)&PopFirmwareResetReason;
    if ( (int)ZwQuerySystemInformationEx(72LL, (__int64)&dword_140D16BC8) >= 0 )
    {
      dword_140D16BC0 = dword_140D16BCC;
      if ( dword_140D16BCC )
      {
        dword_140D16BC8 = 8;
        if ( (int)ZwQuerySystemInformationEx(72LL, (__int64)&dword_140D16BC8) >= 0 )
          dword_140D16BC4 = dword_140D16BCC;
      }
    }
    return PopDiagTraceDirtyTransition();
  }
  return result;
}
