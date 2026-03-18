/*
 * XREFs of PopUpdateOverThrottledCount @ 0x140990924
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403D33C4 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x140990740 (PopThermalZoneRemove.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x1405D36A4 (PopDiagTraceThermalOverthrottleState.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateOverThrottledCount(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rcx
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v8 = 0;
  PopDiagTraceThermalOverthrottleState(v2, a2);
  PopAcquirePolicyLock(v4);
  if ( a2 )
  {
    if ( ++dword_140C22088 == 1 )
    {
      v8 = 1;
LABEL_5:
      ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_OVERTHROTTLE, (__int64)&v8);
    }
  }
  else if ( !--dword_140C22088 )
  {
    goto LABEL_5;
  }
  return PopReleasePolicyLock(v6, v5);
}
