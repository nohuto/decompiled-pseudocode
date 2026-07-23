/*
 * XREFs of LdrpInitializeImportRedirection @ 0x1800888BC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpLoadDll @ 0x180044E5C (LdrpLoadDll.c)
 *     LdrpReleaseLoaderLock @ 0x18004F1D0 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18004F230 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     LdrpInitializeGraphRecurse @ 0x18007322C (LdrpInitializeGraphRecurse.c)
 *     LdrpDropLastInProgressCount @ 0x18007D1B4 (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800DBA74 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpBuildImportRedirection @ 0x1800E118C (LdrpBuildImportRedirection.c)
 */

__int64 LdrpInitializeImportRedirection()
{
  int Dll; // ebx
  _UNICODE_STRING *p_RedirectionDllName; // rdi
  int v3; // eax
  __int64 v4; // rcx
  _BYTE v5[8]; // [rsp+38h] [rbp-49h] BYREF
  __int64 **v6; // [rsp+40h] [rbp-41h] BYREF
  PWSTR Path[15]; // [rsp+48h] [rbp-39h] BYREF
  char v8; // [rsp+C4h] [rbp+43h]

  Dll = 0;
  p_RedirectionDllName = &NtCurrentPeb()->ProcessParameters->RedirectionDllName;
  if ( p_RedirectionDllName->Length )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrredirect.c",
      558,
      (__int64)"LdrpInitializeImportRedirection",
      2u,
      "Loading import redirection DLL: '%wZ'\n",
      p_RedirectionDllName);
    LdrpInitializeDllPath(0LL, 0LL, (const WCHAR **)Path);
    Dll = LdrpLoadDll(&p_RedirectionDllName->Length, (int)Path, 16777217, (PVOID *)&v6);
    if ( v8 )
      RtlReleasePath(Path[0]);
    if ( Dll >= 0 )
    {
      v3 = LdrpBuildImportRedirection(v6);
      Dll = v3;
      if ( v3 >= 0 )
      {
        LdrpDrainWorkQueue(0);
        LdrpAcquireLoaderLock();
        v5[0] = 0;
        Dll = LdrpInitializeGraphRecurse(v6[19], 0LL, v5);
        LdrpReleaseLoaderLock(v4, 2, Dll);
        LdrpDropLastInProgressCount();
        if ( Dll >= 0 )
        {
          *((_DWORD *)v6[19] + 6) = -1;
          *(_WORD *)(*v6[19] - 52) = -1;
          LdrpLogImportRedirectionTelemetry(v6);
          LdrpRedirectionModule = (__int64)v6;
        }
      }
      else
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrredirect.c",
          585,
          (__int64)"LdrpInitializeImportRedirection",
          0,
          "Unable to build import redirection Table, Status = 0x%x\n",
          v3);
      }
    }
  }
  return (unsigned int)Dll;
}
