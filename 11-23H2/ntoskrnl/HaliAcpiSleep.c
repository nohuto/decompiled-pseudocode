/*
 * XREFs of HaliAcpiSleep @ 0x140528490
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x140362E30 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x1403A1F10 (HalpAcpiPmRegisterRead.c)
 *     VslTerminateSecureServices @ 0x14040FEB8 (VslTerminateSecureServices.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpSaveProcessorState @ 0x14041AE00 (HalpSaveProcessorState.c)
 *     HalpFlushAndWait @ 0x14041AE50 (HalpFlushAndWait.c)
 *     HalpSetupRealModeResume @ 0x14041AE80 (HalpSetupRealModeResume.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HalSetEnvironmentVariableEx @ 0x140504FB0 (HalSetEnvironmentVariableEx.c)
 *     HalReturnToFirmware @ 0x140506EB0 (HalReturnToFirmware.c)
 *     HalpHvEnterSleepState @ 0x14050C3FC (HalpHvEnterSleepState.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x14051C8D4 (HalpCheckWakeupTimeAndAdjust.c)
 *     HalpAcpiPostSleep @ 0x140A96470 (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140A96710 (HalpAcpiPreSleep.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A96BB8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpPostSleepMP @ 0x140A96E18 (HalpPostSleepMP.c)
 *     HalpReenableAcpi @ 0x140A96FCC (HalpReenableAcpi.c)
 *     KeWriteProtectPAT @ 0x140A9FAA0 (KeWriteProtectPAT.c)
 */

__int64 __fastcall HaliAcpiSleep(
        unsigned int a1,
        __int64 (__fastcall *a2)(__int64),
        __int64 a3,
        unsigned int a4,
        volatile signed __int32 *a5)
{
  __int64 v7; // r15
  unsigned int v9; // r12d
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v11; // ebx
  volatile signed __int32 *v12; // rdi
  unsigned int v13; // ebx
  void (*v14)(void); // rax
  __int64 Number; // rax
  unsigned int v16; // r14d
  unsigned int v17; // ebx
  unsigned int v18; // eax
  unsigned __int8 v19; // bp
  unsigned int v20; // ebx
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // ebp
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // esi
  unsigned __int8 v27; // bl
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *SchedulerAssist; // r8
  int v31; // eax
  bool v32; // zf
  _WORD v34[2]; // [rsp+34h] [rbp-64h] BYREF
  _WORD v35[2]; // [rsp+38h] [rbp-60h] BYREF
  _WORD v36[2]; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int16 v37; // [rsp+40h] [rbp-58h] BYREF
  __int64 CurrentIrql; // [rsp+48h] [rbp-50h]
  struct _KPRCB *v39; // [rsp+50h] [rbp-48h]
  int v40; // [rsp+90h] [rbp-8h]
  char v41; // [rsp+A0h] [rbp+8h] BYREF

  v7 = a3;
  v41 = 0;
  v35[0] = 0;
  v36[0] = 0;
  v34[0] = 0;
  v37 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  v12 = a5;
  v40 &= 0x200u;
  v39 = CurrentPrcb;
  _InterlockedDecrement(a5);
  while ( *v12 )
  {
    if ( (++v11 & dword_140C6249C) != 0 || !qword_140C624A0 )
      _mm_pause();
    else
      qword_140C624A0(v11);
  }
  v13 = 0;
  v14 = (void (*)(void))HalpProfileInterface[6];
  if ( v14 )
    v14();
  LODWORD(a3) = KeGetPcr()->Prcb.Number;
  *(_QWORD *)(HalpTimerSavedProcessorCounter + 8 * a3) = __rdtsc();
  if ( qword_140C624A8 )
  {
    if ( !(_DWORD)a3 )
    {
      HalpTimerIsReferenceTimeSaved = 1;
      HalpTimerSavedReferenceTime = qword_140C624A8(&HalpTimerSavedSequenceNumber);
    }
  }
  else
  {
    HalpTimerIsReferenceTimeSaved = 0;
    HalpTimerSavedSequenceNumber = 0;
  }
  HalpTscOnWake = 0LL;
  if ( !KeGetPcr()->Prcb.Number )
    HalpTscRestoreValue = *(_QWORD *)HalpTimerSavedProcessorCounter;
  Number = CurrentPrcb->Number;
  if ( !(_DWORD)Number )
  {
    HalpResumeFromHibernate = 0;
    HalpBarrier = 0;
    HalpAcpiPreSleep(a1);
    if ( byte_140C604D0 )
      HalpAcpiPmRegisterRead(1, 0, (__int64)v36, 2u, 0LL);
    if ( byte_140C60560 )
      HalpAcpiPmRegisterRead(4, 0, (__int64)&v37, 2u, 0LL);
    v16 = a1 >> 12;
    if ( ((a1 >> 12) & 2) != 0 && (unsigned __int8)HalpSetupRealModeResume(HalpLowStub, (int)HalpLowStubPhysicalAddress) )
      goto LABEL_75;
    HalpInterruptProcessorRestarting = 1;
    _InterlockedIncrement(&HalpSaveStateSync);
    while ( HalpSaveStateSync != a4 )
    {
      if ( (++v13 & dword_140C6249C) != 0 || !qword_140C624A0 )
        _mm_pause();
      else
        qword_140C624A0(v13);
    }
    v17 = 0;
    if ( a2 )
    {
      v18 = a2(v7);
      v9 = v18;
      if ( (HalpPlatformFlags & 1) == 0 && v18 == -1073741632 )
      {
        v19 = 1;
        goto LABEL_37;
      }
      if ( v18 )
      {
        if ( v18 == 1073742484 )
          HalpResumeFromHibernate = 1;
        else
          HalpReenableAcpi();
        goto LABEL_75;
      }
    }
    v19 = 0;
LABEL_37:
    _InterlockedIncrement(&HalpFlushBarrier);
    while ( HalpFlushBarrier != a4 )
    {
      if ( (++v17 & dword_140C6249C) != 0 || !qword_140C624A0 )
        _mm_pause();
      else
        qword_140C624A0(v17);
    }
    v20 = 0;
    _InterlockedOr(&HalpFlushBarrier, 0);
    HalpCheckWakeupTimeAndAdjust();
    HalpCheckLowMemoryPreSleep(a1);
    v34[0] = 0x8000;
    if ( PmRegisters[0] )
      HalpAcpiPmRegisterWrite(0, 0, (__int64)v34, 2u, 0LL);
    if ( byte_140C60530 )
      HalpAcpiPmRegisterWrite(3, 0, (__int64)v34, 2u, 0LL);
    v41 = -112;
    if ( (v16 & 0x40) != 0 )
      HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, (__int64)&v41, 1, 1);
    if ( (a1 & 0x1000) != 0 )
    {
      if ( v39->CpuVendor == 1 )
      {
        LOBYTE(v21) = 1;
        KeWriteProtectPAT(v21);
      }
      __wbinvd();
    }
    if ( HalpHvSleepEnlightenedCpuManager )
    {
      v22 = (a1 >> 8) & 0xF;
      if ( v22 == 1 || ((v22 - 2) & 0xFFFFFFFC) == 0 && v22 != 4 )
      {
        v9 = HalpHvEnterSleepState();
LABEL_79:
        v41 = -97;
        if ( (v16 & 0x40) != 0 )
          HalSetEnvironmentVariableEx(
            L"SystemSleepCheckpoint",
            (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
            (__int64)&v41,
            1,
            1);
        HalpSaveStateSync = 0;
        HalpFlushBarrier = 0;
        HalpAcpiPostSleep(a1);
        CurrentPrcb = v39;
        goto LABEL_103;
      }
    }
    if ( (HalpPlatformFlags & 1) == 0 )
      HalReturnToFirmware(v19 + 1);
    if ( (a1 & 0xF00) == 0x400 || (a1 & 0xF00) == 0x500 )
      VslTerminateSecureServices();
    if ( byte_140C604D0 )
    {
      HalpAcpiPmRegisterRead(1, 0, (__int64)v35, 2u, 0LL);
      v35[0] = v35[0] & 0x203 | ((a1 & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(1, 0, (__int64)v35, 2u, 0LL);
    }
    if ( byte_140C60560 )
    {
      HalpAcpiPmRegisterRead(4, 0, (__int64)v35, 2u, 0LL);
      v35[0] = v35[0] & 0x203 | (((a1 >> 4) & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(4, 0, (__int64)v35, 2u, 0LL);
    }
    if ( PmRegisters[0] )
    {
      v23 = byte_140C60530 != 0 ? 3 : 0;
      HalpAcpiPmRegisterRead(0, 0, (__int64)v34, 2u, 0LL);
      while ( (v34[0] & 0x8000) == 0 )
      {
        HalpAcpiPmRegisterRead(v23, 0, (__int64)v34, 2u, 0LL);
        if ( (v34[0] & 0x8000) != 0 )
          break;
        if ( (++v20 & dword_140C6249C) != 0 || !qword_140C624A0 )
          _mm_pause();
        else
          qword_140C624A0(v20);
        HalpAcpiPmRegisterRead(0, 0, (__int64)v34, 2u, 0LL);
      }
    }
LABEL_75:
    if ( byte_140C604D0 )
      HalpAcpiPmRegisterWrite(1, 0, (__int64)v36, 2u, 0LL);
    if ( byte_140C60560 )
      HalpAcpiPmRegisterWrite(4, 0, (__int64)&v37, 2u, 0LL);
    goto LABEL_79;
  }
  if ( (a1 & 0x8000) != 0 )
    v24 = 0LL;
  else
    v24 = HalpHiberProcState + 1472 * Number;
  if ( (unsigned __int8)HalpSaveProcessorState(v24) )
  {
LABEL_102:
    while ( HalpFlushBarrier )
    {
      if ( (++v13 & dword_140C6249C) != 0 || !qword_140C624A0 )
        _mm_pause();
      else
        qword_140C624A0(v13);
    }
    goto LABEL_103;
  }
  _InterlockedIncrement(&HalpSaveStateSync);
  if ( a2 )
  {
    while ( HalpSaveStateSync != a4 )
    {
      if ( (++v13 & dword_140C6249C) != 0 || !qword_140C624A0 )
        _mm_pause();
      else
        qword_140C624A0(v13);
    }
    v9 = a2(v7);
    if ( v9 == 1073742484 )
    {
      v13 = 0;
      goto LABEL_102;
    }
  }
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    LOBYTE(v25) = 1;
    KeWriteProtectPAT(v25);
  }
  HalpFlushAndWait(&HalpFlushBarrier);
LABEL_103:
  v26 = a1 >> 12;
  if ( (v26 & 1) != 0 && (v26 & 0x10) == 0 && CurrentPrcb->CpuVendor == 1 )
  {
    KeWriteProtectPAT(0LL);
    __wbinvd();
  }
  HalpPostSleepMP(a4);
  v27 = CurrentIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v28 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v28 >= 2u )
    {
      v29 = KeGetCurrentPrcb();
      SchedulerAssist = v29->SchedulerAssist;
      v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v32 = (v31 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v31;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick((__int64)v29);
    }
  }
  __writecr8(v27);
  if ( v40 )
    _enable();
  return v9;
}
