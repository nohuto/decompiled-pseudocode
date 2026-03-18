/*
 * XREFs of Feature_FsctlProcessMitigation__private_IsEnabledNoReporting @ 0x14040FD50
 * Callers:
 *     PspApplyMitigationOptions @ 0x1406B3700 (PspApplyMitigationOptions.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     IoInitSystem @ 0x140B5D6A0 (IoInitSystem.c)
 * Callees:
 *     Feature_FsctlProcessMitigation__private_IsEnabledFallback @ 0x14040FD34 (Feature_FsctlProcessMitigation__private_IsEnabledFallback.c)
 */

__int64 Feature_FsctlProcessMitigation__private_IsEnabledNoReporting()
{
  if ( (Feature_FsctlProcessMitigation__private_featureState & 2) != 0 )
    return Feature_FsctlProcessMitigation__private_featureState & 1;
  else
    return Feature_FsctlProcessMitigation__private_IsEnabledFallback(
             (unsigned int)Feature_FsctlProcessMitigation__private_featureState,
             0);
}
