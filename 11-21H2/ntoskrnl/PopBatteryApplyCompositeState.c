/*
 * XREFs of PopBatteryApplyCompositeState @ 0x1407EE90C
 * Callers:
 *     PopBatteryWorker @ 0x1407EDFC0 (PopBatteryWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     PopSetNotificationWork @ 0x1402D6220 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x1402D6254 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1402D62A8 (PopCheckForWork.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403697C8 (PopBsdHandleRequest.c)
 *     _tlgCreate1Sz_char @ 0x1403699D0 (_tlgCreate1Sz_char.c)
 *     PopUpdateAcDcState @ 0x1403699FC (PopUpdateAcDcState.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140369AC4 (PopBatteryTraceSystemBatteryStatus.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     PopInitilizeAcDcSettings @ 0x1403C0FF4 (PopInitilizeAcDcSettings.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     PopTracePowerReconfig @ 0x1405D3EA0 (PopTracePowerReconfig.c)
 *     PopSqmAddToStream @ 0x1405DF088 (PopSqmAddToStream.c)
 *     PopSqmCreateDwordStreamEntry @ 0x1405DF230 (PopSqmCreateDwordStreamEntry.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407525EC (PopSetPowerSettingValueAcDc.c)
 *     PopBatteryCheckCompositeCapacity @ 0x1407EE6D0 (PopBatteryCheckCompositeCapacity.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x1407EEBA8 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckTrigger @ 0x1407EEC68 (PopBatteryCheckTrigger.c)
 *     PopEsQueueStateEvaluation @ 0x1407EEF7C (PopEsQueueStateEvaluation.c)
 *     PopAccountCbEnergyChange @ 0x1407EEFE4 (PopAccountCbEnergyChange.c)
 *     PopExecutePowerAction @ 0x1407FEC6C (PopExecutePowerAction.c)
 *     PopInitSIdle @ 0x140819CB8 (PopInitSIdle.c)
 *     PopBatteryUpdateAlarms @ 0x1408556F0 (PopBatteryUpdateAlarms.c)
 *     PopRecordAcDcState @ 0x1409899DC (PopRecordAcDcState.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1409910B0 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x1409913FC (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x140991530 (PopDiagTraceBatteryTriggerMet.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x140994918 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopBatteryTracePercentageRemaining @ 0x14099510C (PopBatteryTracePercentageRemaining.c)
 *     PopRecalculateCBTriggerLevels @ 0x140995690 (PopRecalculateCBTriggerLevels.c)
 *     PpmProfileAcDcUpdate @ 0x14099DAA8 (PpmProfileAcDcUpdate.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopBatteryApplyCompositeState(int *a1, int a2)
{
  int v2; // eax
  BOOL v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __m128i v8; // xmm1
  int v9; // edx
  __int64 v10; // r9
  int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // eax
  int v14; // ebx
  __int64 v15; // r14
  __int64 v16; // rsi
  char *v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // ecx
  int v29; // eax
  char *v30; // rdx
  unsigned int v31; // ecx
  const CHAR *v32; // rdx
  unsigned int v33; // r8d
  unsigned __int8 v34; // r9
  unsigned __int64 v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // [rsp+20h] [rbp-69h]
  int v41; // [rsp+28h] [rbp-61h]
  int v42; // [rsp+30h] [rbp-59h]
  char v43; // [rsp+40h] [rbp-49h]
  unsigned int v44; // [rsp+44h] [rbp-45h] BYREF
  unsigned int v45; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v46; // [rsp+4Ch] [rbp-3Dh] BYREF
  int v47; // [rsp+50h] [rbp-39h] BYREF
  int v48; // [rsp+54h] [rbp-35h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+60h] [rbp-29h] BYREF
  int v50[4]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v51[2]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int *v52; // [rsp+90h] [rbp+7h] BYREF
  __int64 v53; // [rsp+98h] [rbp+Fh]

  v2 = *a1;
  v46 = 0;
  v47 = 0;
  v43 = 0;
  v48 = v2 & 1;
  v5 = !(v2 & 1);
  v45 = v5;
  PopAcquirePolicyLock((_DWORD)a1);
  if ( PopUpdateAcDcState(v5) )
  {
    LOBYTE(v7) = 1;
    PopBatteryUpdateAlarms(v7, 0LL);
    PopSetNotificationWork(4u);
    PopRecordAcDcState(v5);
    PopInitSIdle(2LL);
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    if ( v5 )
      PopMaxChargeRate = 0LL;
    v43 = 1;
  }
  if ( byte_140C229B8 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4u, &dword_140C229B4);
    v26 = qword_140C229C0;
    v27 = 0LL;
    v6 = 0LL;
    while ( (__int64 *)v26 != &qword_140C229C0 )
    {
      v28 = *(_DWORD *)(v26 + 104);
      if ( v28 == 2 )
      {
        v6 = (unsigned int)(v6 + 1);
      }
      else if ( v28 == 4 )
      {
        v27 = (unsigned int)(v27 + 1);
      }
      v26 = *(_QWORD *)v26;
    }
    v7 = (unsigned int)dword_140C229B4;
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_140C229B4 )
    {
      PopCachedValidBatteryCount = dword_140C229B4;
      PopDiagTraceBatteryCountChange((unsigned int)dword_140C229B4, v6, v27, &qword_140C229C0);
    }
    v43 = 1;
  }
  PopReleasePolicyLock(v7, v6);
  PopBatteryCheckCompositeCapacity(a1, v5, &v46);
  if ( ((unk_140C229E0 ^ *(_BYTE *)a1) & 0xF) != 0 || byte_140C229B8 )
  {
    PopSetNotificationWork(8u);
    byte_140C229B8 = 0;
  }
  v8 = *(__m128i *)a1;
  v9 = 0;
  HIDWORD(qword_140C229EC) = a2;
  v10 = (unsigned int)_mm_cvtsi128_si32(v8);
  if ( a2 != -1 )
    v9 = a2;
  unk_140C229E0 = v8;
  DbgPrintEx(
    0x92u,
    3u,
    "\n"
    "Composite Status\n"
    "|-- PowerState = 0x%08x\n"
    "|-- Capacity   = %u\n"
    "|-- Voltage    = %u\n"
    "|-- Rate       = %d\n"
    "|-- Est Time   = %u\n",
    v10,
    v8.m128i_i32[1],
    _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)),
    _mm_srli_si128(v8, 8).m128i_i32[1],
    v9);
  if ( HIDWORD(qword_140C22A00) )
    PopRecalculateCBTriggerLevels();
  PopBatteryTraceSystemBatteryStatus(0);
  if ( qword_140C22A00
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_140C22AC8, 1LL)
    && (dword_140C22ACC[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock(v11);
  v44 = 0;
  v12 = 0;
  v13 = 0;
  v14 = dword_140C229B4 != 0 ? 3 : 0;
  do
  {
    v15 = v13;
    v16 = 3LL * v13;
    v17 = (char *)&unk_140C22AC8 + 24 * v13;
    if ( (unsigned __int8)PopBatteryCheckTrigger(v17) )
    {
      v29 = dword_140C22ACC[2 * v16];
      if ( PopBatteryCachedFlags[v15] != v29 )
      {
        v30 = (char *)PopPolicy + 96;
        PopBatteryCachedFlags[v15] = v29;
        PopDiagTraceBatteryAlarmStatus(v17, &v30[8 * v16], &v44);
        v12 = v44;
        if ( dword_140C22ACC[6 * v44] == 128 )
        {
          PopDiagTraceBatteryTriggerMet(0x140000000LL + 24LL * v44 + 12724936, (char *)PopPolicy + 24 * v44 + 96, &v44);
          v12 = v44;
        }
      }
      if ( !byte_140C22AC0 )
        PopExecutePowerAction(
          0x140000000LL + 24LL * v12 + 12724936,
          8,
          (_DWORD)PopPolicy + 104 + 24 * v12,
          *((_DWORD *)PopPolicy + 6 * v12 + 29),
          1);
      if ( v14 == 3 )
      {
        if ( v12 )
        {
          if ( v12 == 1 )
            v14 = 2;
        }
        else
        {
          v14 = 1;
        }
      }
    }
    else
    {
      PopBatteryCachedFlags[v15] = -1;
      dword_140C22ACC[2 * v16] &= 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v44, v17);
      v12 = v44;
    }
    ++v12;
    v19 = 0x140000000uLL;
    v44 = v12;
    v13 = v12;
  }
  while ( v12 < 4 );
  v20 = v45;
  if ( dword_140C22A1C != v14 )
  {
    v47 = v14;
    v42 = 0;
    v41 = 0;
    v40 = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_CHARGE_LEVEL, (__int64)&v47);
    v31 = dword_140C03A00;
    if ( (unsigned int)dword_140C03A00 > 5 )
    {
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v32 = "PoBatteryLevelCritical";
        }
        else if ( v14 == 2 )
        {
          v32 = "PoBatteryLevelLow";
        }
        else
        {
          v32 = "PoBatteryLevelNormal";
        }
      }
      else
      {
        v32 = "PoBatteryLevelUnknown";
      }
      tlgCreate1Sz_char((__int64)v51, v32);
      v45 = v33;
      v52 = &v45;
      v53 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03A00,
        (unsigned __int8 *)byte_14003133D,
        0LL,
        0LL,
        4u,
        &v49);
      v31 = dword_140C03A00;
    }
    if ( (unsigned int)(v14 - 1) <= 1 != (unsigned int)(dword_140C22A1C - 1) <= 1
      && v31 > 5
      && tlgKeywordOn((__int64)&dword_140C03A00, 0x400000000000LL) )
    {
      v45 = v34;
      v51[1] = 4LL;
      v51[0] = &v45;
      v44 = v14;
      v52 = &v44;
      v53 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03A00,
        (unsigned __int8 *)byte_140031381,
        0LL,
        0LL,
        4u,
        &v49);
    }
    dword_140C22A1C = v14;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE10(PopBsdPowerTransition) = BYTE10(PopBsdPowerTransition) & 0x3F | ((_BYTE)v14 << 6);
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
  if ( v43 )
    PopTracePowerReconfig();
  PopReleasePolicyLock(v19, v18);
  PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C22B70);
  LOBYTE(v23) = unk_140C229E0;
  xmmword_140C22B80 = 0LL;
  BYTE7(xmmword_140C22B80) = dword_140C22A18;
  xmmword_140C22B90 = 0LL;
  LOBYTE(xmmword_140C22B80) = unk_140C229E0 & 1;
  if ( dword_140C229B4 )
  {
    BYTE1(xmmword_140C22B80) = 1;
    BYTE2(xmmword_140C22B80) = (unk_140C229E0 & 4) != 0;
    LOBYTE(v23) = byte_140C22B28 != 0 || (unk_140C229E0 & 2) != 0;
    DWORD2(xmmword_140C22B80) = HIDWORD(qword_140C22A00);
    HIDWORD(xmmword_140C22B80) = unk_140C229E4;
    *(_QWORD *)&xmmword_140C22B90 = qword_140C229EC;
    *((_QWORD *)&xmmword_140C22B90 + 1) = unk_140C22A08;
    BYTE3(xmmword_140C22B80) = v23;
  }
  PopAccountCbEnergyChange(v23, v21, v22);
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C22B70);
  if ( v46 )
  {
    v44 = (dword_140C22B2C + 500) / 0x3E8u;
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, &v44);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    HIBYTE(PopBsdPowerTransition) ^= (HIBYTE(PopBsdPowerTransition) ^ v44) & 0x7F;
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    LODWORD(v35) = 0;
    v36 = MEMORY[0xFFFFF78000000008];
    if ( dword_140C22B2C != -1 )
      v35 = (MEMORY[0xFFFFF78000000008] - qword_140C22B30 + 5000) / 0x2710uLL;
    if ( PopPlatformAoAc )
    {
      PopSqmCreateDwordStreamEntry(&v49, v44);
      PopSqmCreateDwordStreamEntry(v50, v46);
      PopSqmCreateDwordStreamEntry(v51, v48);
      PopSqmCreateDwordStreamEntry(&v52, v35);
      PopSqmAddToStream(v38, v37, v39, (__int64)&v49);
    }
    PopBatteryTracePercentageRemaining(v44, v46, v20, (unsigned int)v35, v40, v41, v42);
    qword_140C22B30 = v36;
  }
  LOBYTE(v24) = v43;
  return PopEsQueueStateEvaluation(v24);
}
