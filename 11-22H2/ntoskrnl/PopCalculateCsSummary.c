/*
 * XREFs of PopCalculateCsSummary @ 0x1405913C4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C78A0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmConvertTime @ 0x1402553F0 (PpmConvertTime.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     PopCalculateIdleInformation @ 0x1403C76E0 (PopCalculateIdleInformation.c)
 *     PopGetModernStandbyTransitionReason @ 0x1403C7E5C (PopGetModernStandbyTransitionReason.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1403C7EC4 (PpmGetPlatformSelectionVetoCounts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopCalculateTotalHwDripsResidency @ 0x140591920 (PopCalculateTotalHwDripsResidency.c)
 *     PopBatteryCapacityToRate @ 0x140598C6C (PopBatteryCapacityToRate.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x140598C90 (PopBatteryGetEnergyDrainFromDischage.c)
 *     PopCurrentPowerState @ 0x1407A7258 (PopCurrentPowerState.c)
 *     PopQueryInputSuppressionCount @ 0x1407EB4FC (PopQueryInputSuppressionCount.c)
 *     PopMeasureEnergyChange @ 0x140802EEC (PopMeasureEnergyChange.c)
 *     PopQueryPowerButtonSuppressionCount @ 0x140878E2C (PopQueryPowerButtonSuppressionCount.c)
 */

void __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  LARGE_INTEGER InterruptTimePrecise; // rsi
  unsigned __int64 v5; // r14
  unsigned int EnergyDrainFromDischage; // eax
  __int64 v7; // rax
  int v8; // r13d
  int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r11
  LONGLONG v16; // rsi
  unsigned __int64 v17; // rsi
  unsigned int v18; // r11d
  int v19; // edx
  __int128 v20; // xmm0
  char v21; // al
  char v22; // cl
  char v23; // al
  int v24; // r10d
  __int64 v25; // r11
  __int64 v26; // r9
  char v27; // al
  char v28; // cl
  int v29; // r8d
  KIRQL v30; // al
  unsigned __int64 v31; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  bool v36; // zf
  int v37; // [rsp+20h] [rbp-99h]
  int v38; // [rsp+24h] [rbp-95h]
  char v39; // [rsp+28h] [rbp-91h]
  __int64 v40; // [rsp+30h] [rbp-89h] BYREF
  __int64 v41; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int64 v42; // [rsp+40h] [rbp-79h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-71h] BYREF
  __int64 v44; // [rsp+50h] [rbp-69h]
  __int64 v45; // [rsp+58h] [rbp-61h]
  unsigned __int64 v46; // [rsp+60h] [rbp-59h]
  unsigned __int64 v47; // [rsp+68h] [rbp-51h]
  unsigned __int64 v48; // [rsp+70h] [rbp-49h]
  __int64 v49; // [rsp+78h] [rbp-41h]
  __int128 v50; // [rsp+80h] [rbp-39h] BYREF
  __int128 v51; // [rsp+90h] [rbp-29h] BYREF
  __int128 v52; // [rsp+A0h] [rbp-19h]
  _OWORD v53[6]; // [rsp+B0h] [rbp-9h] BYREF
  int v54; // [rsp+120h] [rbp+67h] BYREF
  int v55; // [rsp+128h] [rbp+6Fh] BYREF
  int v56; // [rsp+130h] [rbp+77h]
  int v57; // [rsp+138h] [rbp+7Fh]

  *(_QWORD *)&v50 = 0LL;
  DWORD2(v50) = 0;
  PerformanceCounter.QuadPart = 0LL;
  memset(v53, 0, 32);
  LOBYTE(v42) = 0;
  v51 = 0LL;
  v52 = 0LL;
  PopCalculateIdleInformation((__int64)&v51);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = (InterruptTimePrecise.QuadPart - qword_140CF7CC8) / 0xAuLL;
  PopCurrentPowerState(v53);
  if ( v5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage((unsigned int)PopCsConsumption, HIDWORD(v53[0]));
    v56 = PopBatteryCapacityToRate(EnergyDrainFromDischage, v5);
  }
  else
  {
    v56 = 0;
  }
  v7 = PopMeasureEnergyChange(&v50, &CsSessionEnergyCounter);
  v8 = HIDWORD(xmmword_140C3D134);
  if ( HIDWORD(xmmword_140C3D134) )
    LODWORD(v7) = (unsigned int)(100 * xmmword_140C3D144) / HIDWORD(xmmword_140C3D134);
  else
    LOBYTE(v7) = 0;
  v9 = 0;
  if ( (xmmword_140C3D134 & 0x40000000) == 0 )
    v9 = xmmword_140C3D144;
  v57 = v7;
  v44 = *((_QWORD *)&v51 + 1) - qword_140CF7CD0;
  v37 = v9;
  v38 = DWORD2(v52) - dword_140CF7CE0;
  v10 = PopCalculateTotalHwDripsResidency(qword_140CF7D58, v52, v5);
  v11 = v5 + qword_140CF7CD8 - v51;
  v49 = v10;
  v12 = _InterlockedExchangeAdd64(&qword_140CF7E00, 0LL);
  if ( v12 )
    v12 = (v12 - qword_140CF7CC8) / 0xA;
  v13 = PpmConvertTime(qword_140CF7D00, PopQpcFrequency, 0xF4240uLL);
  v14 = qword_140CF7D20;
  v45 = v15 - v13;
  v48 = v5 - qword_140CF7D10;
  if ( qword_140CF7D18 )
  {
    if ( qword_140CF7CC8 <= (unsigned __int64)qword_140CF7D18 )
      v16 = InterruptTimePrecise.QuadPart - qword_140CF7D18;
    else
      v16 = InterruptTimePrecise.QuadPart - qword_140CF7CC8;
    v14 = v16 + qword_140CF7D20;
  }
  v17 = v14 / 0xA;
  v46 = PpmConvertTime(qword_140CF7D30, PopQpcFrequency, 0xF4240uLL);
  v47 = PpmConvertTime(qword_140CF7D40, PopQpcFrequency, v18);
  PopGetModernStandbyTransitionReason(0);
  v40 = 0LL;
  v41 = 0LL;
  v39 = byte_140CF7D88;
  PpmGetPlatformSelectionVetoCounts(dword_140CF7E40, &v40, &v41);
  v40 -= qword_140CF7D60;
  v41 -= qword_140CF7D68;
  if ( qword_140CF7CE8 )
    v42 = 100 * qword_140CF7CF0 / (unsigned __int64)qword_140CF7CE8;
  v55 = 0;
  PopQueryInputSuppressionCount(&v55);
  v54 = 0;
  v55 -= dword_140CF7DC0;
  PopQueryPowerButtonSuppressionCount(&v54);
  v19 = v54 - dword_140CF7DC4;
  v20 = v50;
  *(_DWORD *)a1 = v56;
  *(_DWORD *)(a1 + 28) = v37;
  *(_QWORD *)(a1 + 40) = v44;
  *(_DWORD *)(a1 + 56) = v38;
  *(_QWORD *)(a1 + 72) = v45;
  *(_QWORD *)(a1 + 96) = v46;
  *(_QWORD *)(a1 + 104) = v47;
  *(_QWORD *)(a1 + 80) = v48;
  *(_QWORD *)(a1 + 128) = v49;
  *(_BYTE *)(a1 + 160) = v42;
  v21 = 2 * v57;
  *(_DWORD *)(a1 + 24) = v8;
  v22 = v21 ^ v39 & 1;
  *(_QWORD *)(a1 + 32) = v5;
  v23 = *(_BYTE *)(a1 + 125);
  *(_BYTE *)(a1 + 124) = v22;
  *(_OWORD *)(a1 + 8) = v20;
  *(_QWORD *)(a1 + 48) = v11;
  *(_QWORD *)(a1 + 64) = v12;
  *(_QWORD *)(a1 + 88) = v17;
  *(_DWORD *)(a1 + 116) = v24;
  *(_DWORD *)(a1 + 120) = a2;
  *(_QWORD *)(a1 + 136) = v25;
  *(_QWORD *)(a1 + 144) = v26;
  v54 = v19;
  v27 = *(_BYTE *)(a1 + 125) ^ (byte_140CF7D89 ^ v23) & 1;
  *(_BYTE *)(a1 + 125) = v27;
  v28 = v27 ^ (byte_140CF7D89 ^ v27) & 2;
  *(_BYTE *)(a1 + 125) = v28;
  *(_BYTE *)(a1 + 125) = v28 ^ (byte_140CF7D89 ^ v28) & 4;
  *(_DWORD *)(a1 + 164) = dword_140CF7D70;
  *(_DWORD *)(a1 + 168) = dword_140CF7D74;
  *(_BYTE *)(a1 + 172) = byte_140CF7D78;
  *(_DWORD *)(a1 + 176) = dword_140CF7D7C;
  *(_DWORD *)(a1 + 180) = dword_140CF7D80;
  *(_DWORD *)(a1 + 184) = dword_140CF7D84;
  *(_DWORD *)(a1 + 188) = dword_140CF7D8C;
  *(_DWORD *)(a1 + 192) = dword_140CF7D90;
  *(_BYTE *)(a1 + 196) = byte_140CF7D94;
  *(_DWORD *)(a1 + 200) = HIDWORD(v53[0]);
  *(_DWORD *)(a1 + 204) = DWORD2(v53[0]);
  *(_BYTE *)(a1 + 212) = byte_140CF7D9C;
  *(_BYTE *)(a1 + 213) = byte_140CF7D9D;
  *(_DWORD *)(a1 + 216) = dword_140CF7DA0;
  *(_DWORD *)(a1 + 220) = dword_140CF7DA4;
  *(_DWORD *)(a1 + 228) = v29;
  *(_DWORD *)(a1 + 328) = v19;
  *(_QWORD *)(a1 + 232) = qword_140CF7D48;
  *(_QWORD *)(a1 + 240) = qword_140CF7D50;
  *(_DWORD *)(a1 + 224) = dword_140CF7DC8;
  v30 = KeAcquireSpinLockRaiseToDpc(&qword_140C3C9F8);
  *(_QWORD *)(a1 + 256) = qword_140C3C9E8;
  *(_QWORD *)(a1 + 248) = qword_140C3C9F0;
  *(_QWORD *)(a1 + 264) = PopDisplayOnPerformance;
  v31 = v30;
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C3C9F8);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v31 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
      v36 = (v35 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v35;
      if ( v36 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v31);
}
