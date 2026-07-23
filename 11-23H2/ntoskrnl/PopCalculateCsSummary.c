/*
 * XREFs of PopCalculateCsSummary @ 0x140591824
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C80E0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmConvertTime @ 0x1402555D0 (PpmConvertTime.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     PopCalculateIdleInformation @ 0x1403C7F20 (PopCalculateIdleInformation.c)
 *     PopGetModernStandbyTransitionReason @ 0x1403C869C (PopGetModernStandbyTransitionReason.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1403C8704 (PpmGetPlatformSelectionVetoCounts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PopCalculateTotalHwDripsResidency @ 0x140591D80 (PopCalculateTotalHwDripsResidency.c)
 *     PopBatteryCapacityToRate @ 0x1405990CC (PopBatteryCapacityToRate.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x1405990F0 (PopBatteryGetEnergyDrainFromDischage.c)
 *     PopCurrentPowerState @ 0x1407A6F38 (PopCurrentPowerState.c)
 *     PopQueryInputSuppressionCount @ 0x1407EB24C (PopQueryInputSuppressionCount.c)
 *     PopMeasureEnergyChange @ 0x140859848 (PopMeasureEnergyChange.c)
 *     PopQueryPowerButtonSuppressionCount @ 0x140878B9C (PopQueryPowerButtonSuppressionCount.c)
 */

__int64 __fastcall PopCalculateCsSummary(__int64 a1, int a2)
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
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v35; // zf
  int v36; // [rsp+20h] [rbp-99h]
  int v37; // [rsp+24h] [rbp-95h]
  char v38; // [rsp+28h] [rbp-91h]
  __int64 v39; // [rsp+30h] [rbp-89h] BYREF
  __int64 v40; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-79h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-71h] BYREF
  __int64 v43; // [rsp+50h] [rbp-69h]
  __int64 v44; // [rsp+58h] [rbp-61h]
  unsigned __int64 v45; // [rsp+60h] [rbp-59h]
  unsigned __int64 v46; // [rsp+68h] [rbp-51h]
  unsigned __int64 v47; // [rsp+70h] [rbp-49h]
  __int64 v48; // [rsp+78h] [rbp-41h]
  __int128 v49; // [rsp+80h] [rbp-39h] BYREF
  __int128 v50; // [rsp+90h] [rbp-29h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-19h]
  _OWORD v52[6]; // [rsp+B0h] [rbp-9h] BYREF
  int v53; // [rsp+120h] [rbp+67h] BYREF
  int v54; // [rsp+128h] [rbp+6Fh] BYREF
  int v55; // [rsp+130h] [rbp+77h]
  int v56; // [rsp+138h] [rbp+7Fh]

  *(_QWORD *)&v49 = 0LL;
  DWORD2(v49) = 0;
  PerformanceCounter.QuadPart = 0LL;
  memset(v52, 0, 32);
  LOBYTE(v41) = 0;
  v50 = 0LL;
  v51 = 0LL;
  PopCalculateIdleInformation((__int64)&v50);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = (InterruptTimePrecise.QuadPart - qword_140CF7C08) / 0xAuLL;
  PopCurrentPowerState(v52);
  if ( v5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage((unsigned int)PopCsConsumption, HIDWORD(v52[0]));
    v55 = PopBatteryCapacityToRate(EnergyDrainFromDischage, v5);
  }
  else
  {
    v55 = 0;
  }
  v7 = PopMeasureEnergyChange(&v49, &CsSessionEnergyCounter);
  v8 = HIDWORD(xmmword_140C3D094);
  if ( HIDWORD(xmmword_140C3D094) )
    LODWORD(v7) = (unsigned int)(100 * xmmword_140C3D0A4) / HIDWORD(xmmword_140C3D094);
  else
    LOBYTE(v7) = 0;
  v9 = 0;
  if ( (xmmword_140C3D094 & 0x40000000) == 0 )
    v9 = xmmword_140C3D0A4;
  v56 = v7;
  v43 = *((_QWORD *)&v50 + 1) - qword_140CF7C10;
  v36 = v9;
  v37 = DWORD2(v51) - dword_140CF7C20;
  v10 = PopCalculateTotalHwDripsResidency(qword_140CF7C98, v51, v5);
  v11 = v5 + qword_140CF7C18 - v50;
  v48 = v10;
  v12 = _InterlockedExchangeAdd64(&qword_140CF7D40, 0LL);
  if ( v12 )
    v12 = (v12 - qword_140CF7C08) / 0xA;
  v13 = PpmConvertTime(qword_140CF7C40, PopQpcFrequency, 0xF4240uLL);
  v14 = qword_140CF7C60;
  v44 = v15 - v13;
  v47 = v5 - qword_140CF7C50;
  if ( qword_140CF7C58 )
  {
    if ( qword_140CF7C08 <= (unsigned __int64)qword_140CF7C58 )
      v16 = InterruptTimePrecise.QuadPart - qword_140CF7C58;
    else
      v16 = InterruptTimePrecise.QuadPart - qword_140CF7C08;
    v14 = v16 + qword_140CF7C60;
  }
  v17 = v14 / 0xA;
  v45 = PpmConvertTime(qword_140CF7C70, PopQpcFrequency, 0xF4240uLL);
  v46 = PpmConvertTime(qword_140CF7C80, PopQpcFrequency, v18);
  PopGetModernStandbyTransitionReason(0);
  v39 = 0LL;
  v40 = 0LL;
  v38 = byte_140CF7CC8;
  PpmGetPlatformSelectionVetoCounts(dword_140CF7D80, &v39, &v40);
  v39 -= qword_140CF7CA0;
  v40 -= qword_140CF7CA8;
  if ( qword_140CF7C28 )
    v41 = 100 * qword_140CF7C30 / (unsigned __int64)qword_140CF7C28;
  v54 = 0;
  PopQueryInputSuppressionCount(&v54);
  v53 = 0;
  v54 -= dword_140CF7D00;
  PopQueryPowerButtonSuppressionCount(&v53);
  v19 = v53 - dword_140CF7D04;
  v20 = v49;
  *(_DWORD *)a1 = v55;
  *(_DWORD *)(a1 + 28) = v36;
  *(_QWORD *)(a1 + 40) = v43;
  *(_DWORD *)(a1 + 56) = v37;
  *(_QWORD *)(a1 + 72) = v44;
  *(_QWORD *)(a1 + 96) = v45;
  *(_QWORD *)(a1 + 104) = v46;
  *(_QWORD *)(a1 + 80) = v47;
  *(_QWORD *)(a1 + 128) = v48;
  *(_BYTE *)(a1 + 160) = v41;
  v21 = 2 * v56;
  *(_DWORD *)(a1 + 24) = v8;
  v22 = v21 ^ v38 & 1;
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
  v53 = v19;
  v27 = *(_BYTE *)(a1 + 125) ^ (byte_140CF7CC9 ^ v23) & 1;
  *(_BYTE *)(a1 + 125) = v27;
  v28 = v27 ^ (byte_140CF7CC9 ^ v27) & 2;
  *(_BYTE *)(a1 + 125) = v28;
  *(_BYTE *)(a1 + 125) = v28 ^ (byte_140CF7CC9 ^ v28) & 4;
  *(_DWORD *)(a1 + 164) = dword_140CF7CB0;
  *(_DWORD *)(a1 + 168) = dword_140CF7CB4;
  *(_BYTE *)(a1 + 172) = byte_140CF7CB8;
  *(_DWORD *)(a1 + 176) = dword_140CF7CBC;
  *(_DWORD *)(a1 + 180) = dword_140CF7CC0;
  *(_DWORD *)(a1 + 184) = dword_140CF7CC4;
  *(_DWORD *)(a1 + 188) = dword_140CF7CCC;
  *(_DWORD *)(a1 + 192) = dword_140CF7CD0;
  *(_BYTE *)(a1 + 196) = byte_140CF7CD4;
  *(_DWORD *)(a1 + 200) = HIDWORD(v52[0]);
  *(_DWORD *)(a1 + 204) = DWORD2(v52[0]);
  *(_BYTE *)(a1 + 212) = byte_140CF7CDC;
  *(_BYTE *)(a1 + 213) = byte_140CF7CDD;
  *(_DWORD *)(a1 + 216) = dword_140CF7CE0;
  *(_DWORD *)(a1 + 220) = dword_140CF7CE4;
  *(_DWORD *)(a1 + 228) = v29;
  *(_DWORD *)(a1 + 328) = v19;
  *(_QWORD *)(a1 + 232) = qword_140CF7C88;
  *(_QWORD *)(a1 + 240) = qword_140CF7C90;
  *(_DWORD *)(a1 + 224) = dword_140CF7D08;
  v30 = KeAcquireSpinLockRaiseToDpc(&qword_140C3C938);
  *(_QWORD *)(a1 + 256) = qword_140C3C928;
  *(_QWORD *)(a1 + 248) = qword_140C3C930;
  *(_QWORD *)(a1 + 264) = PopDisplayOnPerformance;
  v31 = v30;
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140C3C938);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v31 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
      v35 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v35 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v31);
  return result;
}
