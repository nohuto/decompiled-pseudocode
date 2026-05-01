/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180074ADC
 * Callers:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012B04 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     SdbShouldBlockPackageLaunch @ 0x1800336CC (SdbShouldBlockPackageLaunch.c)
 *     ?HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@PEAXPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@KKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E0F4 (-HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLB.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x180092A30 (SdbpGetPathAppPatchPreRS3.c)
 *     AslStringDuplicate @ 0x180099128 (AslStringDuplicate.c)
 *     AslpFileQueryVersionString @ 0x18009CFB8 (AslpFileQueryVersionString.c)
 *     AslPathCombine @ 0x18009DD0C (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x18009DEE8 (AslPathToSystemPathBuf.c)
 *     AslPathWildcardFindFirst @ 0x18009DFEC (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A04F4 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A062C (AslEnvGetSystem32DirPathBuf.c)
 *     AslpEnvResolveVars @ 0x1800A097C (AslpEnvResolveVars.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x180002328 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCopyW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
    return RtlStringCopyWorkerW(a1, a2, (__int64)a3, (__int64)a3);
  result = 3221225485LL;
  if ( a2 )
    *a1 = 0;
  return result;
}
