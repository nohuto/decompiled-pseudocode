/*
 * XREFs of RtlGetNtSystemRoot @ 0x180018A20
 * Callers:
 *     LdrpGetModuleName @ 0x180001008 (LdrpGetModuleName.c)
 *     _IsOverlaySupportedPath @ 0x18000B3D4 (_IsOverlaySupportedPath.c)
 *     LdrpApplyFileNameRedirection @ 0x180019AE4 (LdrpApplyFileNameRedirection.c)
 *     LdrpHpatAllocationOptOut @ 0x18002CC20 (LdrpHpatAllocationOptOut.c)
 *     RtlQueryResourcePolicy @ 0x180049E30 (RtlQueryResourcePolicy.c)
 *     RtlpDiskSpeedInitialize @ 0x180062740 (RtlpDiskSpeedInitialize.c)
 *     LdrpBuildSystem32FileName @ 0x1800793C4 (LdrpBuildSystem32FileName.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083530 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E5180 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return (PWSTR)((char *)NtCurrentPeb()->SharedData + 30);
  else
    return (PWSTR)2147352624;
}
