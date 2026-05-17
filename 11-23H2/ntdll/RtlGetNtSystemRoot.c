/*
 * XREFs of RtlGetNtSystemRoot @ 0x180018810
 * Callers:
 *     LdrpGetModuleName @ 0x180001008 (LdrpGetModuleName.c)
 *     _IsOverlaySupportedPath @ 0x18000B1B4 (_IsOverlaySupportedPath.c)
 *     LdrpApplyFileNameRedirection @ 0x1800198D4 (LdrpApplyFileNameRedirection.c)
 *     LdrpHpatAllocationOptOut @ 0x18002CA50 (LdrpHpatAllocationOptOut.c)
 *     RtlQueryResourcePolicy @ 0x180049CD0 (RtlQueryResourcePolicy.c)
 *     RtlpDiskSpeedInitialize @ 0x18005F8B0 (RtlpDiskSpeedInitialize.c)
 *     LdrpBuildSystem32FileName @ 0x180079A34 (LdrpBuildSystem32FileName.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083BA0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E64B0 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 */

__int64 __fastcall RtlGetNtSystemRoot(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    return (__int64)NtCurrentPeb()->SharedData + 30;
  else
    return 2147352624LL;
}
