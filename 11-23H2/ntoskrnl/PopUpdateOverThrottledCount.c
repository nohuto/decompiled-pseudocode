/*
 * XREFs of PopUpdateOverThrottledCount @ 0x14098B1F8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403A1854 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x14098B010 (PopThermalZoneRemove.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x140594BEC (PopDiagTraceThermalOverthrottleState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateOverThrottledCount(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rcx
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v9 = 0;
  PopDiagTraceThermalOverthrottleState(v2, a2);
  PopAcquirePolicyLock(v4);
  if ( a2 )
  {
    if ( ++dword_140C3C708 == 1 )
    {
      v9 = 1;
LABEL_5:
      ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_OVERTHROTTLE, (__int64)&v9);
    }
  }
  else if ( !--dword_140C3C708 )
  {
    goto LABEL_5;
  }
  return PopReleasePolicyLock(v6, v5, v7);
}
