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

__int64 __fastcall RtlGetNtSystemRoot(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    return (__int64)NtCurrentPeb()->SharedData + 30;
  else
    return 2147352624LL;
}
