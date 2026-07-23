/*
 * XREFs of LdrLoadEnclaveModule @ 0x1800D85B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpPreprocessDllName @ 0x18004494C (LdrpPreprocessDllName.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D8738 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D8804 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpDereferenceEnclave @ 0x1800D8A60 (LdrpDereferenceEnclave.c)
 *     LdrpLoadEnclaveModule @ 0x1800D8F64 (LdrpLoadEnclaveModule.c)
 *     LdrpObtainLockedEnclave @ 0x1800D9138 (LdrpObtainLockedEnclave.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800DC408 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 */

NTSTATUS __cdecl LdrLoadEnclaveModule(PVOID BaseAddress, PWSTR DllPath, PUNICODE_STRING DllName)
{
  const WCHAR *v3; // rsi
  __int64 locked; // rax
  __int64 v6; // rdi
  NTSTATUS EnclaveModule; // ebx
  _QWORD *v9; // r14
  _QWORD *i; // rsi
  unsigned int v11; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS v12[3]; // [rsp+44h] [rbp-BCh] BYREF
  PWSTR Path[15]; // [rsp+50h] [rbp-B0h] BYREF
  char v14; // [rsp+CCh] [rbp-34h]
  int v15; // [rsp+D0h] [rbp-30h] BYREF
  __int16 *v16; // [rsp+D8h] [rbp-28h]
  __int16 v17; // [rsp+E0h] [rbp-20h] BYREF

  v3 = DllPath;
  LOBYTE(DllPath) = 1;
  locked = LdrpObtainLockedEnclave(BaseAddress, DllPath);
  v6 = locked;
  if ( !locked )
    return -1073741664;
  if ( *(_DWORD *)(locked + 56) == 16 )
  {
    LdrpInitializeDllPath(DllName->Buffer, v3, (const WCHAR **)Path);
    if ( *(_QWORD *)(v6 + 88) || (v9 = (_QWORD *)(v6 + 96), (_QWORD *)*v9 != v9) )
    {
      EnclaveModule = -1073741800;
    }
    else
    {
      v15 = 0x1000000;
      v16 = &v17;
      v17 = 0;
      v11 = 0x800000;
      EnclaveModule = LdrpPreprocessDllName(&DllName->Length, (unsigned __int16 *)&v15, 0LL, (int *)&v11);
      if ( EnclaveModule >= 0 )
      {
        v12[0] = 0;
        EnclaveModule = LdrpCreatePendingEnclaveModule(v6, &v15, v11, 7LL, Path, 0LL, 0LL, v12);
        if ( EnclaveModule >= 0 )
        {
          for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
          {
            EnclaveModule = LdrpLoadEnclaveModule(i[22]);
            if ( EnclaveModule < 0 )
              goto LABEL_15;
          }
          EnclaveModule = v12[0];
        }
      }
    }
  }
  else
  {
    EnclaveModule = -1073741664;
  }
LABEL_15:
  LdrpCleanupEnclaveLoadState(v6, (unsigned int)EnclaveModule);
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v6 + 16));
  LdrpDereferenceEnclave((PVOID)v6);
  if ( v14 )
    RtlReleasePath(Path[0]);
  LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry((unsigned int)EnclaveModule);
  return EnclaveModule;
}
