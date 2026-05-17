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

__int64 __fastcall LdrLoadEnclaveModule(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 *v6; // rdi
  int PendingEnclaveModule; // ebx
  _QWORD *v9; // r14
  _QWORD *i; // rsi
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v13[15]; // [rsp+50h] [rbp-B0h] BYREF
  char v14; // [rsp+CCh] [rbp-34h]
  int v15; // [rsp+D0h] [rbp-30h] BYREF
  __int16 *v16; // [rsp+D8h] [rbp-28h]
  __int16 v17; // [rsp+E0h] [rbp-20h] BYREF

  v5 = LdrpObtainLockedEnclave(a1, 1);
  v6 = v5;
  if ( !v5 )
    return 3221225632LL;
  if ( *((_DWORD *)v5 + 14) == 16 )
  {
    LdrpInitializeDllPath(*(_QWORD *)(a3 + 8), a2, v13);
    if ( v6[11] || (v9 = v6 + 12, (_QWORD *)*v9 != v9) )
    {
      PendingEnclaveModule = -1073741800;
    }
    else
    {
      v15 = 0x1000000;
      v16 = &v17;
      v17 = 0;
      v11 = 0x800000;
      PendingEnclaveModule = LdrpPreprocessDllName((unsigned __int16 *)a3, (unsigned __int16 *)&v15, 0, &v11);
      if ( PendingEnclaveModule >= 0 )
      {
        v12[0] = 0;
        PendingEnclaveModule = LdrpCreatePendingEnclaveModule(
                                 (_DWORD)v6,
                                 (unsigned int)&v15,
                                 v11,
                                 7,
                                 (__int64)v13,
                                 0LL,
                                 0LL,
                                 (__int64)v12);
        if ( PendingEnclaveModule >= 0 )
        {
          for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
          {
            PendingEnclaveModule = LdrpLoadEnclaveModule(i[22]);
            if ( PendingEnclaveModule < 0 )
              goto LABEL_15;
          }
          PendingEnclaveModule = v12[0];
        }
      }
    }
  }
  else
  {
    PendingEnclaveModule = -1073741664;
  }
LABEL_15:
  LdrpCleanupEnclaveLoadState(v6, (unsigned int)PendingEnclaveModule);
  RtlLeaveCriticalSection((__int64)(v6 + 2));
  LdrpDereferenceEnclave(v6);
  if ( v14 )
    RtlReleasePath(v13[0]);
  LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry((unsigned int)PendingEnclaveModule);
  return (unsigned int)PendingEnclaveModule;
}
