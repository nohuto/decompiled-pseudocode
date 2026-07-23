/*
 * XREFs of LdrpInitializeImportRedirection @ 0x1800847E4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLoadDll @ 0x18001927C (LdrpLoadDll.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     LdrpInitializeDllPath @ 0x18002B234 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180032EC0 (RtlReleasePath.c)
 *     LdrpReleaseLoaderLock @ 0x180051124 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180051388 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x1800522D4 (LdrpDropLastInProgressCount.c)
 *     LdrpInitializeGraphRecurse @ 0x18006D42C (LdrpInitializeGraphRecurse.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800DBF94 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpBuildImportRedirection @ 0x1800DF990 (LdrpBuildImportRedirection.c)
 */

__int64 LdrpInitializeImportRedirection()
{
  int Dll; // ebx
  _UNICODE_STRING *p_RedirectionDllName; // rdi
  int v3; // eax
  __int64 v4; // rcx
  _BYTE v5[8]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v6; // [rsp+40h] [rbp-41h] BYREF
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
    LdrpInitializeDllPath(0LL, 0LL, (__int64 *)Path);
    Dll = LdrpLoadDll((__int64)p_RedirectionDllName, (int)Path, 16777217, (__int64)&v6);
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
        Dll = LdrpInitializeGraphRecurse(*(__int64 **)(v6 + 152), 0LL, v5);
        LdrpReleaseLoaderLock(v4, 2, Dll);
        LdrpDropLastInProgressCount();
        if ( Dll >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v6 + 152) + 24LL) = -1;
          *(_WORD *)(**(_QWORD **)(v6 + 152) - 52LL) = -1;
          LdrpLogImportRedirectionTelemetry(v6);
          LdrpRedirectionModule = v6;
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
