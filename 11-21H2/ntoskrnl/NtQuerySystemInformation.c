/*
 * XREFs of NtQuerySystemInformation @ 0x14073D860
 * Callers:
 *     sub_1403BAA84 @ 0x1403BAA84 (sub_1403BAA84.c)
 *     sub_14085C5A8 @ 0x14085C5A8 (sub_14085C5A8.c)
 * Callees:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 */

NTSTATUS __cdecl NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  __int16 *v4; // r10
  unsigned int v6; // r8d
  __int16 v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v8 = 0;
  if ( (SystemInformationClass >= SystemProcessorIdleCycleTimeInformation
     || SystemInformationClass < SystemWow64SharedInformationObsolete)
    && (SystemInformationClass < SystemSupportedProcessorArchitectures
     || SystemInformationClass >= SystemFeatureConfigurationInformation) )
  {
    switch ( SystemInformationClass )
    {
      case SystemProcessorPerformanceInformation:
      case SystemInterruptInformation:
      case SystemProcessorIdleInformation:
      case SystemProcessorPowerInformation:
      case SystemProcessorIdleCycleTimeInformation:
      case SystemProcessorPerformanceDistribution:
      case SystemProcessorCycleTimeInformation:
      case SystemProcessorPerformanceInformationEx:
        v8 = *((unsigned __int8 *)KeGetCurrentPrcb() + 208);
        goto LABEL_10;
      case SystemLogicalProcessorInformation:
LABEL_10:
        v4 = &v8;
        v6 = 2;
        return sub_14073B5A0(
                 SystemInformationClass,
                 v4,
                 v6,
                 (unsigned __int64)SystemInformation,
                 SystemInformationLength,
                 ReturnLength);
      case SystemLogicalProcessorAndGroupInformation:
      case SystemNodeDistanceInformation:
      case SystemInterruptSteeringInformation:
      case SystemFeatureConfigurationInformation:
      case SystemFeatureConfigurationSectionInformation:
      case SystemBuildVersionInformation:
      case SystemSingleProcessorRelationshipInformation:
        return -1073741821;
      default:
        break;
    }
  }
  v6 = 0;
  return sub_14073B5A0(
           SystemInformationClass,
           v4,
           v6,
           (unsigned __int64)SystemInformation,
           SystemInformationLength,
           ReturnLength);
}
