/*
 * XREFs of PopThermalZoneRemove @ 0x14098B010
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeDisableTimer2 @ 0x14031DB78 (KeDisableTimer2.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140351E90 (IoCancelIrp.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140389E70 (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x14058FBF0 (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x140594C08 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x1405952E4 (PopTraceCr3Mitigated.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140595D4C (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140595F20 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405960A8 (PopTraceZoneCr3Mitigated.c)
 *     PopResetCurrentPolicies @ 0x1408240F8 (PopResetCurrentPolicies.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140848090 (PopThermalUpdateActiveTimeTracking.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14098AFC0 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopUpdateOverThrottledCount @ 0x14098B1F8 (PopUpdateOverThrottledCount.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PopThermalZoneRemove(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  void *v7; // rcx

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
    --dword_140C3C6F4;
    PopTraceZoneCr3Mitigated(dword_140C3C6F8, a1);
    if ( !dword_140C3C6F4 )
    {
      PopTraceCr3Mitigated();
      if ( HIBYTE(word_140C3C6F0) == 1 )
      {
        PopThermalStandbyNotify(0);
        HIBYTE(word_140C3C6F0) = 0;
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
    PopReleasePolicyLock(v5, v4, v6);
  }
  PopThermalUpdateTelemetryClientCount(0);
  v7 = *(void **)(a1 + 1048);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
