/*
 * XREFs of PopFxUpdateVetoMaskWork @ 0x140985F50
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     PoFxActivateDevice @ 0x140322C44 (PoFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x140322F7C (PoFxIdleDevice.c)
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 *     PopFxReleaseDevice @ 0x140462D9C (PopFxReleaseDevice.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x14059FE64 (PopPepUpdateDripsDeviceVetoMask.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

signed __int32 __fastcall PopFxUpdateVetoMaskWork(__int64 P)
{
  __int64 v1; // rbp
  __int64 *v3; // rax
  __int64 v4; // rdi

  v1 = *(_QWORD *)(P + 16);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
  if ( byte_140C3ED58 )
  {
    v3 = (__int64 *)qword_140C3ED50;
    if ( *(__int64 **)qword_140C3ED50 != &qword_140C3ED48 )
      __fastfail(3u);
    *(_QWORD *)P = &qword_140C3ED48;
    *(_QWORD *)(P + 8) = v3;
    *v3 = P;
    qword_140C3ED50 = P;
  }
  else
  {
    ++dword_140C3ED5C;
    KeResetEvent(&stru_140C3ED60);
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
    v4 = *(_QWORD *)(*(_QWORD *)(v1 + 48) + 32LL);
    PoFxActivateDevice(v4);
    PopPepUpdateDripsDeviceVetoMask(v1, *(_DWORD *)(P + 24));
    PoFxIdleDevice(v4);
    PopFxReleaseDevice(v1);
    ExFreePoolWithTag((PVOID)P, 0x4D584650u);
    ZwUpdateWnfStateData((__int64)&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_UPDATED, 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    if ( !--dword_140C3ED5C )
      KeSetEvent(&stru_140C3ED60, 0, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
  return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
}
