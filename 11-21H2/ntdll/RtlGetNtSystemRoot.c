/*
 * XREFs of RtlGetNtSystemRoot @ 0x1800509E0
 * Callers:
 *     LdrpGetModuleName @ 0x180001008 (LdrpGetModuleName.c)
 *     RtlpDiskSpeedInitialize @ 0x18000AFE0 (RtlpDiskSpeedInitialize.c)
 *     LdrpApplyFileNameRedirection @ 0x180044B54 (LdrpApplyFileNameRedirection.c)
 *     _IsOverlaySupportedPath @ 0x18005093C (_IsOverlaySupportedPath.c)
 *     RtlQueryResourcePolicy @ 0x1800533F0 (RtlQueryResourcePolicy.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180062EC0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     LdrpBuildSystem32FileName @ 0x1800731B8 (LdrpBuildSystem32FileName.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E630C (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return (PWSTR)((char *)NtCurrentPeb()->SharedData + 30);
  else
    return (PWSTR)2147352624;
}
