/*
 * XREFs of PopThermalZoneRemove @ 0x14098B0C0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeDisableTimer2 @ 0x14031D998 (KeDisableTimer2.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140351890 (IoCancelIrp.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140387BCC (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x14058FC80 (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x140594C98 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x140595374 (PopTraceCr3Mitigated.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140595DDC (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140595FB0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x140596138 (PopTraceZoneCr3Mitigated.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x1408025F0 (PopThermalUpdateActiveTimeTracking.c)
 *     PopResetCurrentPolicies @ 0x140825058 (PopResetCurrentPolicies.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14098B070 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopUpdateOverThrottledCount @ 0x14098B2A8 (PopUpdateOverThrottledCount.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PopThermalZoneRemove(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+28h] [rbp-10h]

  *(_BYTE *)(a1 + 66) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 448), Executive, 0, 0, 0LL);
  if ( *(_BYTE *)(a1 + 145) )
  {
    PopThermalUpdatePassiveTimeTracking(a1 + 504, *(_BYTE *)(a1 + 80));
    PopTraceThermalZonePassiveHistogram(a1);
  }
  if ( *(_BYTE *)(a1 + 505) )
  {
    LOBYTE(v2) = *(_BYTE *)(a1 + 69);
    PopThermalUpdateActiveTimeTracking(a1 + 504, v2);
    PopTraceThermalZoneActiveActivity(a1);
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    PopDiagTraceThermalStandbyState(*(_QWORD *)(a1 + 48), 0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    --dword_140C3C834;
    PopTraceZoneCr3Mitigated(dword_140C3C838, a1);
    if ( !dword_140C3C834 )
    {
      PopTraceCr3Mitigated();
      if ( HIBYTE(word_140C3C830) == 1 )
      {
        PopThermalStandbyNotify(0);
        HIBYTE(word_140C3C830) = 0;
      }
    }
    PopReleaseRwLock(&PopSystemThermalInfo);
  }
  if ( *(_BYTE *)(a1 + 73) )
    PopUpdateOverThrottledCount(a1);
  KeDisableTimer2(a1 + 296, 1, 1, 0LL);
  *(_BYTE *)(a1 + 65) |= 0x80u;
  if ( !--PopThermalZoneCount )
  {
    PopAcquirePolicyLock(v3);
    if ( BYTE13(PopCapabilities) )
    {
      BYTE13(PopCapabilities) = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v5, v4, v6, v7, v9, v10);
  }
  PopThermalUpdateTelemetryClientCount(0);
  v8 = *(void **)(a1 + 1048);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
