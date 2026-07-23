/*
 * XREFs of NtQuerySystemInformation @ 0x140726800
 * Callers:
 *     HalpTimerConfigureQpcBypass @ 0x1403B2A74 (HalpTimerConfigureQpcBypass.c)
 *     AlpcpInitSystem @ 0x14085AB18 (AlpcpInitSystem.c)
 * Callees:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 */

NTSTATUS __cdecl NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  __int16 *v6; // rdx
  bool v8; // zf
  __int64 v9; // r8
  __int32 v11; // ecx
  __int32 v12; // ecx
  __int32 v13; // ecx
  __int32 v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int16 Group; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  Group = 0;
  if ( SystemInformationClass > SystemProcessorCycleTimeInformation )
  {
    v11 = SystemInformationClass - 121;
    if ( !v11 )
      return -1073741821;
    v12 = v11 - 20;
    if ( v12 )
    {
      v13 = v12 - 39;
      if ( !v13 )
        return -1073741821;
      v14 = v13 - 30;
      if ( !v14 )
        return -1073741821;
      v15 = v14 - 1;
      if ( !v15 )
        return -1073741821;
      v16 = v15 - 11;
      if ( !v16 )
        return -1073741821;
      v17 = v16 - 9;
      if ( !v17 )
        return -1073741821;
      v8 = v17 == 7;
      goto LABEL_11;
    }
    goto LABEL_22;
  }
  switch ( SystemInformationClass )
  {
    case SystemProcessorCycleTimeInformation:
    case SystemProcessorPerformanceInformation:
    case SystemInterruptInformation:
    case SystemProcessorIdleInformation:
    case SystemProcessorPowerInformation:
      goto LABEL_22;
    case SystemLogicalProcessorInformation:
LABEL_23:
      v9 = 2LL;
      v6 = &Group;
      return ExpQuerySystemInformation(
               (unsigned int)SystemInformationClass,
               v6,
               v9,
               SystemInformation,
               SystemInformationLength,
               ReturnLength);
    case SystemProcessorIdleCycleTimeInformation:
    case SystemProcessorPerformanceDistribution:
LABEL_22:
      Group = KeGetCurrentPrcb()->Group;
      goto LABEL_23;
  }
  v8 = SystemInformationClass == SystemLogicalProcessorAndGroupInformation;
LABEL_11:
  if ( !v8 )
  {
    v9 = 0LL;
    return ExpQuerySystemInformation(
             (unsigned int)SystemInformationClass,
             v6,
             v9,
             SystemInformation,
             SystemInformationLength,
             ReturnLength);
  }
  return -1073741821;
}
