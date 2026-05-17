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
  int v0; // ebx
  _UNICODE_STRING *p_RedirectionDllName; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  _BYTE v8[8]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v9; // [rsp+40h] [rbp-41h] BYREF
  __int64 v10[15]; // [rsp+48h] [rbp-39h] BYREF
  char v11; // [rsp+C4h] [rbp+43h]

  v0 = 0;
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
    LdrpInitializeDllPath(0LL, 0LL, v10);
    v0 = LdrpLoadDll(&p_RedirectionDllName->Length, (int)v10, 0x1000001u, &v9);
    if ( v11 )
      RtlReleasePath(v10[0], v3, v4, v5);
    if ( v0 >= 0 )
    {
      v6 = LdrpBuildImportRedirection(v9);
      v0 = v6;
      if ( v6 >= 0 )
      {
        LdrpDrainWorkQueue(0);
        LdrpAcquireLoaderLock();
        v8[0] = 0;
        v0 = LdrpInitializeGraphRecurse(*(__int64 **)(v9 + 152), 0LL, v8);
        LdrpReleaseLoaderLock(v7, 2, v0);
        LdrpDropLastInProgressCount();
        if ( v0 >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v9 + 152) + 24LL) = -1;
          *(_WORD *)(**(_QWORD **)(v9 + 152) - 52LL) = -1;
          LdrpLogImportRedirectionTelemetry(v9);
          LdrpRedirectionModule = v9;
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
          v6);
      }
    }
  }
  return (unsigned int)v0;
}
