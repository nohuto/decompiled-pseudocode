/*
 * XREFs of LdrLoadEnclaveModule @ 0x1800D88C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpPreprocessDllName @ 0x1800198C0 (LdrpPreprocessDllName.c)
 *     LdrpObtainLockedEnclave @ 0x1800220FC (LdrpObtainLockedEnclave.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     LdrpInitializeDllPath @ 0x18002B234 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180032EC0 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D8A48 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D8B14 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpDereferenceEnclave @ 0x1800D8D70 (LdrpDereferenceEnclave.c)
 *     LdrpLoadEnclaveModule @ 0x1800D91B0 (LdrpLoadEnclaveModule.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800DC928 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 */

NTSTATUS __cdecl LdrLoadEnclaveModule(PVOID BaseAddress, PWSTR DllPath, PUNICODE_STRING DllName)
{
  __int64 *v5; // rax
  __int64 *v6; // rdi
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

  v5 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 1);
  v6 = v5;
  if ( !v5 )
    return -1073741664;
  if ( *((_DWORD *)v5 + 14) == 16 )
  {
    LdrpInitializeDllPath((__int64)DllName->Buffer, (__int64)DllPath, (__int64 *)Path);
    if ( v6[11] || (v9 = v6 + 12, (_QWORD *)*v9 != v9) )
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
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v6 + 2));
  LdrpDereferenceEnclave(v6);
  if ( v14 )
    RtlReleasePath(Path[0]);
  LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry((unsigned int)EnclaveModule);
  return EnclaveModule;
}
