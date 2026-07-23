/*
 * XREFs of PopBatteryApplyCompositeState @ 0x140870950
 * Callers:
 *     PopBatteryWorker @ 0x140870230 (PopBatteryWorker.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DbgPrintEx @ 0x14032A560 (DbgPrintEx.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopSetNotificationWork @ 0x14032C950 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x14032C984 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x14032C9D8 (PopCheckForWork.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 *     PopInitilizeAcDcSettings @ 0x140383A54 (PopInitilizeAcDcSettings.c)
 *     _tlgCreate1Sz_char @ 0x1403C3CBC (_tlgCreate1Sz_char.c)
 *     PopUpdateAcDcState @ 0x1403C3CE8 (PopUpdateAcDcState.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1403C3D2C (PopBatteryTraceSystemBatteryStatus.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     PopTracePowerReconfig @ 0x140595600 (PopTracePowerReconfig.c)
 *     PopSqmAddToStream @ 0x1405A2200 (PopSqmAddToStream.c)
 *     PopSqmCreateDwordStreamEntry @ 0x1405A23B0 (PopSqmCreateDwordStreamEntry.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7A80 (PopSetPowerSettingValueAcDc.c)
 *     PopBatteryUpdateAlarms @ 0x140824E30 (PopBatteryUpdateAlarms.c)
 *     PopInitSIdle @ 0x140825874 (PopInitSIdle.c)
 *     PopBatteryCheckTrigger @ 0x140870C00 (PopBatteryCheckTrigger.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140870C30 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopEsQueueStateEvaluation @ 0x140870CF0 (PopEsQueueStateEvaluation.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140870D58 (PopBatteryCheckCompositeCapacity.c)
 *     PopAccountCbEnergyChange @ 0x140870DF8 (PopAccountCbEnergyChange.c)
 *     PopRecordAcDcState @ 0x14098127C (PopRecordAcDcState.c)
 *     PopExecutePowerAction @ 0x1409898A4 (PopExecutePowerAction.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x14098CA24 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x14098CD70 (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x14098CEA4 (PopDiagTraceBatteryTriggerMet.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x1409950E8 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopBatteryTracePercentageRemaining @ 0x1409958BC (PopBatteryTracePercentageRemaining.c)
 *     PopRecalculateCBTriggerLevels @ 0x1409960BC (PopRecalculateCBTriggerLevels.c)
 *     PpmProfileAcDcUpdate @ 0x14099D62C (PpmProfileAcDcUpdate.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopBatteryApplyCompositeState(int *a1, int a2)
{
  int v2; // eax
  unsigned int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i v13; // xmm1
  int v14; // ecx
  unsigned int v15; // edi
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // ebx
  __int64 v19; // r14
  __int64 v20; // r15
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  char *v25; // rdx
  unsigned int v26; // r12d
  __int64 v27; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  int v33; // ecx
  char *v34; // rcx
  char *v35; // rdx
  unsigned int v36; // ecx
  const CHAR *v37; // rdx
  unsigned int v38; // r8d
  unsigned __int8 v39; // r9
  unsigned __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  void *ExplicitScope; // [rsp+20h] [rbp-69h]
  void *ExplicitScopea; // [rsp+20h] [rbp-69h]
  void *ExplicitScopeb; // [rsp+20h] [rbp-69h]
  WNF_CHANGE_STAMP MatchingChangeStamp[2]; // [rsp+28h] [rbp-61h]
  WNF_CHANGE_STAMP MatchingChangeStampa[2]; // [rsp+28h] [rbp-61h]
  char v50; // [rsp+40h] [rbp-49h]
  unsigned int v51; // [rsp+44h] [rbp-45h] BYREF
  unsigned int v52; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v53; // [rsp+4Ch] [rbp-3Dh] BYREF
  int Buffer; // [rsp+50h] [rbp-39h] BYREF
  int v55; // [rsp+54h] [rbp-35h]
  char *v56; // [rsp+58h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+60h] [rbp-29h] BYREF
  int v58[4]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v59[2]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int *v60; // [rsp+90h] [rbp+7h] BYREF
  __int64 v61; // [rsp+98h] [rbp+Fh]

  v2 = *a1;
  v53 = 0;
  Buffer = 0;
  v50 = 0;
  v55 = v2 & 1;
  v5 = !(v2 & 1);
  v52 = v5;
  PopAcquirePolicyLock((_DWORD)a1);
  if ( PopUpdateAcDcState(v5) )
  {
    PopBatteryUpdateAlarms(1, 0LL);
    PopSetNotificationWork(4u, v29, v30, v31);
    PopRecordAcDcState(v5);
    PopInitSIdle(2u);
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    if ( v5 == 1 )
      PopMaxChargeRate = 0LL;
    v50 = 1;
  }
  if ( byte_140C3D0F8 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4u, &dword_140C3D0F4);
    v32 = qword_140C3D100;
    v9 = &qword_140C3D100;
    v8 = 0LL;
    v6 = 0LL;
    while ( (__int64 *)v32 != &qword_140C3D100 )
    {
      v33 = *(_DWORD *)(v32 + 104);
      if ( v33 == 2 )
      {
        v6 = (unsigned int)(v6 + 1);
      }
      else if ( v33 == 4 )
      {
        v8 = (unsigned int)(v8 + 1);
      }
      v32 = *(_QWORD *)v32;
    }
    v7 = (unsigned int)dword_140C3D0F4;
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_140C3D0F4 )
    {
      PopCachedValidBatteryCount = dword_140C3D0F4;
      PopDiagTraceBatteryCountChange((unsigned int)dword_140C3D0F4, v6, v8, &qword_140C3D100);
    }
    v50 = 1;
  }
  PopReleasePolicyLock(v7, v6, v8, v9, ExplicitScope, *(_QWORD *)MatchingChangeStamp);
  PopBatteryCheckCompositeCapacity(a1, v5, &v53);
  if ( ((unk_140C3D120 ^ *(_BYTE *)a1) & 0xF) != 0 || byte_140C3D0F8 )
  {
    PopSetNotificationWork(8u, v10, v11, v12);
    byte_140C3D0F8 = 0;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C3D2B8);
  v13 = *(__m128i *)a1;
  HIDWORD(qword_140C3D12C) = a2;
  MatchingChangeStampa[0] = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  LODWORD(ExplicitScopea) = v13.m128i_i32[1];
  unk_140C3D120 = v13;
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
    (unsigned int)_mm_cvtsi128_si32(v13),
    ExplicitScopea);
  xmmword_140C3D2C8 = 0LL;
  BYTE7(xmmword_140C3D2C8) = dword_140C3D158;
  xmmword_140C3D2D8 = 0LL;
  LOBYTE(xmmword_140C3D2C8) = unk_140C3D120 & 1;
  if ( dword_140C3D0F4 )
  {
    BYTE1(xmmword_140C3D2C8) = 1;
    BYTE2(xmmword_140C3D2C8) = (unk_140C3D120 & 4) != 0;
    DWORD2(xmmword_140C3D2C8) = HIDWORD(qword_140C3D140);
    HIDWORD(xmmword_140C3D2C8) = unk_140C3D124;
    *(_QWORD *)&xmmword_140C3D2D8 = qword_140C3D12C;
    *((_QWORD *)&xmmword_140C3D2D8 + 1) = unk_140C3D148;
    BYTE3(xmmword_140C3D2C8) = byte_140C3D288 != 0 || (unk_140C3D120 & 2) != 0;
  }
  PopAccountCbEnergyChange();
  PopBatteryTraceSystemBatteryStatus(0);
  PopReleaseRwLock((__int64 *)&xmmword_140C3D2B8);
  if ( HIDWORD(qword_140C3D140) )
    PopRecalculateCBTriggerLevels();
  if ( qword_140C3D140
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_140C3D228, 1LL)
    && (dword_140C3D22C[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock(v14);
  v51 = 0;
  v15 = 0;
  LODWORD(v16) = 0;
  v17 = 0;
  v18 = dword_140C3D0F4 != 0 ? 3 : 0;
  do
  {
    v19 = v17;
    v20 = 6LL * v17;
    v56 = (char *)&unk_140C3D228 + 24 * (unsigned int)v16;
    v21 = dword_140C3D22C[v20];
    if ( (unsigned __int8)PopBatteryCheckTrigger(v56) )
    {
      if ( PopBatteryCachedFlags[v19] != v21 )
      {
        v34 = v56;
        v35 = (char *)PopPolicy + v20 * 4 + 96;
        PopBatteryCachedFlags[v19] = v21;
        PopDiagTraceBatteryAlarmStatus(v34, v35, &v51);
        v15 = v51;
        v23 = 3LL * v51;
        if ( dword_140C3D22C[6 * v51] == 128 )
        {
          PopDiagTraceBatteryTriggerMet((char *)&unk_140C3D228 + 24 * v51, (char *)PopPolicy + 24 * v51 + 96, &v51);
          v15 = v51;
        }
      }
      if ( !byte_140C3D220 )
        PopExecutePowerAction(
          (unsigned int)&unk_140C3D228 + 24 * v15,
          8,
          (_DWORD)PopPolicy + 104 + 24 * v15,
          *((_DWORD *)PopPolicy + 6 * v15 + 29),
          1);
      if ( v18 == 3 )
      {
        if ( v15 )
        {
          if ( v15 == 1 )
            v18 = 2;
        }
        else
        {
          v18 = 1;
        }
      }
    }
    else
    {
      PopBatteryCachedFlags[v19] = -1;
      v25 = v56;
      dword_140C3D22C[v20] = v21 & 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v51, v25);
      v15 = v51;
    }
    v51 = ++v15;
    v17 = v15;
    v16 = v15;
  }
  while ( v15 < 4 );
  v26 = v52;
  if ( dword_140C3D15C != v18 )
  {
    Buffer = v18;
    ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LEVEL, &Buffer, 4u, 0LL, 0LL, 0, 0);
    v36 = dword_140C03950;
    if ( (unsigned int)dword_140C03950 > 5 )
    {
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          v37 = "PoBatteryLevelCritical";
        }
        else if ( v18 == 2 )
        {
          v37 = "PoBatteryLevelLow";
        }
        else
        {
          v37 = "PoBatteryLevelNormal";
        }
      }
      else
      {
        v37 = "PoBatteryLevelUnknown";
      }
      tlgCreate1Sz_char((__int64)v59, v37);
      v52 = v38;
      v60 = &v52;
      v61 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03950,
        (unsigned __int8 *)byte_140031350,
        0LL,
        0LL,
        4u,
        &v57);
      v36 = dword_140C03950;
    }
    if ( (unsigned int)(v18 - 1) <= 1 != (unsigned int)(dword_140C3D15C - 1) <= 1
      && v36 > 5
      && tlgKeywordOn((__int64)&dword_140C03950, 0x400000000000LL) )
    {
      v52 = v39;
      v59[1] = 4LL;
      v59[0] = &v52;
      v51 = v18;
      v60 = &v51;
      v61 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03950,
        (unsigned __int8 *)&dword_140031394,
        0LL,
        0LL,
        4u,
        &v57);
    }
    dword_140C3D15C = v18;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE10(PopBsdPowerTransition) = BYTE10(PopBsdPowerTransition) & 0x3F | ((_BYTE)v18 << 6);
    PopBsdHandleRequest(1u);
    PopReleaseRwLock(&PopBsdUpdateLock);
  }
  if ( v50 )
    PopTracePowerReconfig();
  PopReleasePolicyLock(v16, v22, v23, v24, ExplicitScopeb, *(_QWORD *)MatchingChangeStampa);
  if ( v53 )
  {
    v51 = (dword_140C3D28C + 500) / 0x3E8u;
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, &v51);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    HIBYTE(PopBsdPowerTransition) ^= (HIBYTE(PopBsdPowerTransition) ^ v51) & 0x7F;
    PopBsdHandleRequest(1u);
    PopReleaseRwLock(&PopBsdUpdateLock);
    LODWORD(v40) = 0;
    v41 = MEMORY[0xFFFFF78000000008];
    if ( dword_140C3D28C != -1 )
      v40 = (MEMORY[0xFFFFF78000000008] - qword_140C3D290 + 5000) / 0x2710uLL;
    if ( PopPlatformAoAc )
    {
      PopSqmCreateDwordStreamEntry(&v57, v51);
      PopSqmCreateDwordStreamEntry(v58, v53);
      PopSqmCreateDwordStreamEntry(v59, v55);
      PopSqmCreateDwordStreamEntry(&v60, v40);
      PopSqmAddToStream(v43, v42, v44, (__int64)&v57);
    }
    PopBatteryTracePercentageRemaining(v51, v53, v26, (unsigned int)v40);
    qword_140C3D290 = v41;
  }
  LOBYTE(v27) = v50;
  return PopEsQueueStateEvaluation(v27);
}
