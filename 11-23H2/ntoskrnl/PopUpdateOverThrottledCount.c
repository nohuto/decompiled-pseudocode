/*
 * XREFs of PopUpdateOverThrottledCount @ 0x14098B3F8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403A1A34 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x14098B210 (PopThermalZoneRemove.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x1405950DC (PopDiagTraceThermalOverthrottleState.c)
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
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  Buffer = 0;
  PopDiagTraceThermalOverthrottleState(v2, a2);
  PopAcquirePolicyLock(v4);
  if ( a2 )
  {
    if ( ++dword_140C3C788 == 1 )
    {
      Buffer = 1;
LABEL_5:
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_OVERTHROTTLE, &Buffer, 4u, 0LL, 0LL, 0, 0);
    }
  }
  else if ( !--dword_140C3C788 )
  {
    goto LABEL_5;
  }
  return PopReleasePolicyLock(v6, v5, v7, v8, v10, v11);
}
