/*
 * XREFs of PopPowerButtonWorkCallback @ 0x140599180
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmGetSessionById @ 0x1402C1E00 (MmGetSessionById.c)
 *     KeDisableTimer2 @ 0x14031D998 (KeDisableTimer2.c)
 *     DbgPrintEx @ 0x14032A560 (DbgPrintEx.c)
 *     MmAttachSession @ 0x140355D50 (MmAttachSession.c)
 *     RtlGetActiveConsoleId @ 0x14035E670 (RtlGetActiveConsoleId.c)
 *     KeInitializeIRTimer @ 0x14036EFA8 (KeInitializeIRTimer.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExUuidCreate @ 0x140688920 (ExUuidCreate.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408839B0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopRecordPhysicalPowerButton @ 0x140981350 (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x140990988 (PopDiagTracePowerButtonBugcheck.c)
 *     PopPublishPowerButtonState @ 0x140996C34 (PopPublishPowerButtonState.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140996D38 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopRecordPoBlackboxInformation @ 0x1409A10B4 (PopRecordPoBlackboxInformation.c)
 */

void PopPowerButtonWorkCallback()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v4; // eax
  bool v5; // zf
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int128 v8; // xmm6
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  int v12; // eax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  int v15; // eax
  _DWORD *v16; // r8
  ULONG ActiveConsoleId; // eax
  _KPROCESS *SessionById; // rax
  int v19; // [rsp+58h] [rbp-29h] BYREF
  _BYTE Uuid[24]; // [rsp+60h] [rbp-21h] BYREF
  _OWORD v21[3]; // [rsp+78h] [rbp-9h] BYREF

  v19 = 0;
  memset(v21, 0, sizeof(v21));
  LOBYTE(v0) = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  do
  {
    *(_OWORD *)Uuid = xmmword_140C3A1B8;
    *(_QWORD *)&Uuid[16] = qword_140C3A1C8;
    KxReleaseSpinLock((volatile signed __int64 *)&PopPowerButtonHold);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v0 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v5 = (v4 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v4;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8((unsigned __int8)v0);
    v6 = *(_DWORD *)&Uuid[4];
    v7 = *(_DWORD *)Uuid;
    if ( (dword_140C3A1D0 & 1) != 0 && ((Uuid[0] & 1) == 0 || *(_DWORD *)&Uuid[4] != dword_140C3A1D4) )
    {
      PopRecordPhysicalPowerButton(0LL);
      dword_140C3A1D0 = 0;
      byte_140C3A068 = 0;
      PopPublishPowerButtonState(&dword_140C3A1D0);
      KeDisableTimer2((__int64)&unk_140C3A108, 1, 1, 0LL);
    }
    if ( (v7 & 1) != 0 )
    {
      if ( (dword_140C3A1D0 & 1) == 0 )
      {
        ExUuidCreate((UUID *)&Uuid[8]);
        v8 = *(_OWORD *)&Uuid[8];
        LOBYTE(v9) = 1;
        xmmword_140C3A040 = *(_OWORD *)&Uuid[8];
        PopRecordPhysicalPowerButton(v9);
        v6 = *(_DWORD *)&Uuid[4];
        dword_140C3A1D4 = *(_DWORD *)&Uuid[4];
        xmmword_140C3A1D8 = v8;
        dword_140C3A1E8 = PopQueryPowerButtonBugcheckEnabled();
        v19 = 65544;
        KeInitializeIRTimer(
          (unsigned __int64)&unk_140C3A108,
          (__int64)PopPowerButtonTimerCallback,
          v6,
          (unsigned __int8 *)&v19,
          2);
        KeSetTimer2((__int64)&unk_140C3A108, -10000000LL, 10000000LL, 0LL);
        v7 = *(_DWORD *)Uuid;
      }
      dword_140C3A1D0 = v7;
      PopPublishPowerButtonState(&dword_140C3A1D0);
      v10 = v7 >> 1;
      if ( v7 >> 1 >= 0x1B58 )
      {
        if ( PopAcpiPdttSupportEnabled )
          ((void (__fastcall *)(_QWORD))qword_140C01E08)(0LL);
        PopDiagTracePowerButtonBugcheck(v10);
        PopRecordPoBlackboxInformation();
        if ( dword_140C3A1E8 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          SessionById = (_KPROCESS *)MmGetSessionById(ActiveConsoleId);
          if ( SessionById && (int)MmAttachSession(SessionById, (__int64)v21) < 0 )
            DbgPrintEx(0x92u, 3u, "Unable to attach to active session\n");
          KeBugCheckEx(0x1C8u, (unsigned __int64)v7 >> 1, (ULONG_PTR)&PopPowerButtonTriageBlock, 0LL, 0LL);
        }
      }
      if ( (qword_140C3A084 & 0x100000000LL) != 0 && !dword_140C3A1E8 && v10 == 1000 * (BYTE4(qword_140C3A084) >> 4) )
      {
        v11 = BYTE4(qword_140C3A084) & 4 | ((BYTE4(qword_140C3A084) & 2 | 0x10u) >> 1);
        v12 = DbgkWerCaptureLiveKernelDump(
                (unsigned int)L"PopPowerButton",
                4552,
                v7 >> 1,
                (unsigned int)&PopPowerButtonTriageBlock,
                0LL,
                0LL,
                0LL,
                0LL,
                v11);
        DbgPrintEx(
          0x92u,
          2u,
          "PopPowerButtonWorkCallback: DbgkWerCaptureLiveKernelDump completed with Status: %08x, UserPages:  %08x, Hyperv"
          "isorPages:  %08x\n",
          v12,
          v11 & 1,
          (v11 >> 2) & 1);
      }
    }
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  }
  while ( __PAIR64__(v6, v7) != (_QWORD)xmmword_140C3A1B8 );
  _InterlockedExchange(&dword_140C3A1B0, 0);
  KxReleaseSpinLock((volatile signed __int64 *)&PopPowerButtonHold);
  if ( (_DWORD)KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v13 <= 0xFu && (unsigned __int8)v0 <= 0xFu && v13 >= 2u )
    {
      v14 = KeGetCurrentPrcb();
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
      v16 = v14->SchedulerAssist;
      v5 = (v15 & v16[5]) == 0;
      v16[5] &= v15;
      if ( v5 )
        KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
  }
  __writecr8(v0);
}
