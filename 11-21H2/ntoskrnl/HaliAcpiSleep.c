/*
 * XREFs of HaliAcpiSleep @ 0x140390D20
 * Callers:
 *     <none>
 * Callees:
 *     KeSweepLocalCaches @ 0x140389F70 (KeSweepLocalCaches.c)
 *     HalpTimerMarkSleep @ 0x14039154C (HalpTimerMarkSleep.c)
 *     HalpAcpiPmRegisterWrite @ 0x1403B2B00 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterAvailable @ 0x1403B2F00 (HalpAcpiPmRegisterAvailable.c)
 *     HalpAcpiPmRegisterRead @ 0x1403B41A0 (HalpAcpiPmRegisterRead.c)
 *     HalpHvIsReferenceTscConfigured @ 0x1403B6968 (HalpHvIsReferenceTscConfigured.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpSaveProcessorState @ 0x14041B470 (HalpSaveProcessorState.c)
 *     HalpFlushAndWait @ 0x14041B4C0 (HalpFlushAndWait.c)
 *     HalpSetupRealModeResume @ 0x14041B4F0 (HalpSetupRealModeResume.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalSetEnvironmentVariableEx @ 0x140508800 (HalSetEnvironmentVariableEx.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     HalpHvEnterSleepState @ 0x14050EE0C (HalpHvEnterSleepState.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x14051F6C4 (HalpCheckWakeupTimeAndAdjust.c)
 *     HalpPostSleepMP @ 0x140A500C0 (HalpPostSleepMP.c)
 *     HalpAcpiPostSleep @ 0x140A50388 (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140A5072C (HalpAcpiPreSleep.c)
 *     HalpReenableAcpi @ 0x140A52FD8 (HalpReenableAcpi.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A62018 (HalpCheckLowMemoryPreSleep.c)
 *     KeWriteProtectPAT @ 0x140A69D80 (KeWriteProtectPAT.c)
 */

__int64 __fastcall HaliAcpiSleep(
        unsigned int a1,
        __int64 (__fastcall *a2)(__int64),
        __int64 a3,
        unsigned int a4,
        volatile signed __int32 *a5)
{
  unsigned int v5; // r12d
  __int64 v6; // r15
  unsigned int v9; // ebp
  char v10; // r13
  volatile signed __int32 *v11; // rdi
  unsigned int v12; // ebx
  void (*v13)(void); // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r9
  struct _KPRCB *v19; // rbx
  __int64 Number; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // edi
  unsigned int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  unsigned int v30; // ebx
  unsigned int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned __int8 v34; // bl
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *SchedulerAssist; // r8
  int v38; // eax
  bool v39; // zf
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  _WORD v47[2]; // [rsp+30h] [rbp-58h] BYREF
  _WORD v48[2]; // [rsp+34h] [rbp-54h] BYREF
  _WORD v49[2]; // [rsp+38h] [rbp-50h] BYREF
  _WORD v50[2]; // [rsp+3Ch] [rbp-4Ch] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-48h]
  __int64 CurrentIrql; // [rsp+48h] [rbp-40h]
  int v53; // [rsp+80h] [rbp-8h]
  char v54; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v55; // [rsp+A8h] [rbp+20h]

  v55 = a4;
  v5 = a4;
  v6 = a3;
  v54 = 0;
  v48[0] = 0;
  v49[0] = 0;
  v47[0] = 0;
  v50[0] = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  _disable();
  v10 = 0;
  v11 = a5;
  v12 = 0;
  v53 &= 0x200u;
  CurrentPrcb = KeGetCurrentPrcb();
  _InterlockedDecrement(a5);
  while ( *v11 )
  {
    if ( (++v12 & dword_140C4C47C) != 0 || !qword_140C4C480 )
      _mm_pause();
    else
      qword_140C4C480(v12, a2, a3);
  }
  v13 = (void (*)(void))HalpProfileInterface[6];
  if ( v13 )
    v13();
  LODWORD(a3) = KeGetPcr()->Prcb.Number;
  *(_QWORD *)(HalpTimerSavedProcessorCounter + 8 * a3) = __rdtsc();
  if ( (unsigned __int8)HalpHvIsReferenceTscConfigured() )
  {
    if ( !(_DWORD)v16 )
    {
      HalpTimerIsReferenceTimeSaved = 1;
      HalpTimerSavedReferenceTime = ((__int64 (__fastcall *)(int *))qword_140C4C488)(&HalpTimerSavedSequenceNumber);
      v17 = 0LL;
    }
  }
  else
  {
    HalpTimerIsReferenceTimeSaved = v17;
    HalpTimerSavedSequenceNumber = v17;
  }
  HalpTimerMarkSleep(v15, v14, v16, v17);
  v19 = CurrentPrcb;
  Number = CurrentPrcb->Number;
  if ( !(_DWORD)Number )
  {
    HalpResumeFromHibernate = v18;
    HalpBarrier = v18;
    HalpAcpiPreSleep(a1);
    if ( (int)HalpAcpiPmRegisterAvailable(1LL) >= 0 )
      HalpAcpiPmRegisterRead(1, 0, (unsigned int)v49, 2, 0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(4LL) >= 0 )
      HalpAcpiPmRegisterRead(4, 0, (unsigned int)v50, 2, 0LL);
    v23 = a1 >> 12;
    if ( ((a1 >> 12) & 2) != 0
      && (unsigned __int8)HalpSetupRealModeResume(HalpLowStub, (unsigned int)HalpLowStubPhysicalAddress) )
    {
      goto LABEL_71;
    }
    HalpInterruptProcessorRestarting = 1;
    _InterlockedAdd(&HalpSaveStateSync, 1u);
    v24 = 0;
    while ( HalpSaveStateSync != v5 )
    {
      if ( (++v24 & dword_140C4C47C) != 0 || !qword_140C4C480 )
        _mm_pause();
      else
        qword_140C4C480(v24, v21, v22);
    }
    if ( a2 )
    {
      v25 = a2(v6);
      v9 = v25;
      if ( (HalpPlatformFlags & 1) != 0 || v25 != -1073741632 )
      {
        if ( v25 )
        {
          if ( v25 == 1073742484 )
            HalpResumeFromHibernate = 1;
          else
            HalpReenableAcpi();
          goto LABEL_71;
        }
      }
      else
      {
        v10 = 1;
      }
    }
    _InterlockedAdd(&HalpFlushBarrier, 1u);
    v26 = 0;
    while ( HalpFlushBarrier != v5 )
    {
      if ( (++v26 & dword_140C4C47C) != 0 || !qword_140C4C480 )
        _mm_pause();
      else
        qword_140C4C480(v26, v21, v22);
    }
    _InterlockedOr(&HalpFlushBarrier, 0);
    HalpCheckWakeupTimeAndAdjust();
    HalpCheckLowMemoryPreSleep(a1);
    v47[0] = 0x8000;
    if ( (int)HalpAcpiPmRegisterAvailable(0LL) >= 0 )
      HalpAcpiPmRegisterWrite(0, 0, (unsigned int)v47, 2, 0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(3LL) >= 0 )
      HalpAcpiPmRegisterWrite(3, 0, (unsigned int)v47, 2, 0LL);
    v54 = -112;
    if ( (v23 & 0x40) != 0 )
      HalSetEnvironmentVariableEx(
        (unsigned int)L"SystemSleepCheckpoint",
        (unsigned int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
        (unsigned int)&v54,
        1,
        1);
    if ( (a1 & 0x1000) != 0 )
    {
      if ( CurrentPrcb->CpuVendor == 1 )
      {
        LOBYTE(v27) = 1;
        KeWriteProtectPAT(v27);
      }
      KeSweepLocalCaches();
    }
    if ( HalpHvSleepEnlightenedCpuManager )
    {
      v28 = (a1 >> 8) & 0xF;
      if ( (unsigned int)(v28 - 1) <= 2 || v28 == 5 )
      {
        v9 = HalpHvEnterSleepState();
LABEL_75:
        v54 = -97;
        if ( (v23 & 0x40) != 0 )
          HalSetEnvironmentVariableEx(
            (unsigned int)L"SystemSleepCheckpoint",
            (unsigned int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
            (unsigned int)&v54,
            1,
            1);
        HalpSaveStateSync = 0;
        HalpFlushBarrier = 0;
        HalpAcpiPostSleep(a1);
        goto LABEL_78;
      }
    }
    if ( (HalpPlatformFlags & 1) == 0 )
    {
      v29 = 2LL;
      if ( !v10 )
        v29 = 1LL;
      HalReturnToFirmware(v29);
    }
    if ( (int)HalpAcpiPmRegisterAvailable(1LL) >= 0 )
    {
      HalpAcpiPmRegisterRead(1, 0, (unsigned int)v48, 2, 0LL);
      v48[0] = v48[0] & 0x203 | ((a1 & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(1, 0, (unsigned int)v48, 2, 0LL);
    }
    if ( (int)HalpAcpiPmRegisterAvailable(4LL) >= 0 )
    {
      HalpAcpiPmRegisterRead(4, 0, (unsigned int)v48, 2, 0LL);
      v48[0] = v48[0] & 0x203 | (((a1 >> 4) & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(4, 0, (unsigned int)v48, 2, 0LL);
    }
    v30 = 0;
    if ( (int)HalpAcpiPmRegisterAvailable(0LL) >= 0 )
    {
      v31 = ((int)HalpAcpiPmRegisterAvailable(3LL) >> 31) & 0xFFFFFFFD;
      HalpAcpiPmRegisterRead(0, 0, (unsigned int)v47, 2, 0LL);
      if ( v47[0] >= 0 )
      {
        do
        {
          HalpAcpiPmRegisterRead(v31 + 3, 0, (unsigned int)v47, 2, 0LL);
          if ( (v47[0] & 0x8000) != 0 )
            break;
          if ( (++v30 & dword_140C4C47C) != 0 || !qword_140C4C480 )
            _mm_pause();
          else
            qword_140C4C480(v30, v32, v33);
          HalpAcpiPmRegisterRead(0, 0, (unsigned int)v47, 2, 0LL);
        }
        while ( (v47[0] & 0x8000) == 0 );
        v5 = v55;
      }
    }
LABEL_71:
    if ( (int)HalpAcpiPmRegisterAvailable(1LL) >= 0 )
      HalpAcpiPmRegisterWrite(1, 0, (unsigned int)v49, 2, 0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(4LL) >= 0 )
      HalpAcpiPmRegisterWrite(4, 0, (unsigned int)v50, 2, 0LL);
    goto LABEL_75;
  }
  v23 = a1 >> 12;
  if ( ((a1 >> 12) & 8) != 0 )
    v41 = v18;
  else
    v41 = HalpHiberProcState + 1472 * Number;
  if ( (unsigned __int8)HalpSaveProcessorState(v41) )
    goto LABEL_110;
  _InterlockedIncrement(&HalpSaveStateSync);
  if ( a2 )
  {
    v45 = 0;
    while ( HalpSaveStateSync != v5 )
    {
      if ( (++v45 & dword_140C4C47C) != 0 || !qword_140C4C480 )
        _mm_pause();
      else
        qword_140C4C480(v45, v42, v44);
    }
    v9 = a2(v6);
    if ( v9 != 1073742484 )
    {
      v19 = CurrentPrcb;
      goto LABEL_107;
    }
LABEL_110:
    v46 = 0;
    while ( HalpFlushBarrier )
    {
      if ( (++v46 & dword_140C4C47C) != 0 || !qword_140C4C480 )
        _mm_pause();
      else
        qword_140C4C480(v46, v42, v44);
    }
LABEL_78:
    v19 = CurrentPrcb;
    goto LABEL_79;
  }
LABEL_107:
  if ( v19->CpuVendor == 1 )
  {
    LOBYTE(v43) = 1;
    KeWriteProtectPAT(v43);
  }
  HalpFlushAndWait(&HalpFlushBarrier);
LABEL_79:
  if ( (v23 & 1) != 0 && (v23 & 0x10) == 0 && v19->CpuVendor == 1 )
  {
    KeWriteProtectPAT(0LL);
    KeSweepLocalCaches();
  }
  HalpPostSleepMP(v5);
  v34 = CurrentIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        SchedulerAssist = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v39 = (v38 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v38;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
  }
  __writecr8(v34);
  if ( v53 )
    _enable();
  return v9;
}
