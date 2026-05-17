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

__int64 __fastcall LdrLoadEnclaveModule(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 locked; // rax
  __int64 v6; // rdi
  int PendingEnclaveModule; // ebx
  _QWORD *v9; // r14
  _QWORD *i; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v16[15]; // [rsp+50h] [rbp-B0h] BYREF
  char v17; // [rsp+CCh] [rbp-34h]
  int v18; // [rsp+D0h] [rbp-30h] BYREF
  __int16 *v19; // [rsp+D8h] [rbp-28h]
  __int16 v20; // [rsp+E0h] [rbp-20h] BYREF

  v3 = a2;
  LOBYTE(a2) = 1;
  locked = LdrpObtainLockedEnclave(a1, a2);
  v6 = locked;
  if ( !locked )
    return 3221225632LL;
  if ( *(_DWORD *)(locked + 56) == 16 )
  {
    LdrpInitializeDllPath(*(void **)(a3 + 8), v3, v16);
    if ( *(_QWORD *)(v6 + 88) || (v9 = (_QWORD *)(v6 + 96), (_QWORD *)*v9 != v9) )
    {
      PendingEnclaveModule = -1073741800;
    }
    else
    {
      v18 = 0x1000000;
      v19 = &v20;
      v20 = 0;
      v14 = 0x800000;
      PendingEnclaveModule = LdrpPreprocessDllName((unsigned __int16 *)a3, (unsigned __int16 *)&v18, 0LL, &v14);
      if ( PendingEnclaveModule >= 0 )
      {
        v15[0] = 0;
        PendingEnclaveModule = LdrpCreatePendingEnclaveModule(
                                 v6,
                                 (unsigned int)&v18,
                                 v14,
                                 7,
                                 (__int64)v16,
                                 0LL,
                                 0LL,
                                 (__int64)v15);
        if ( PendingEnclaveModule >= 0 )
        {
          for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
          {
            PendingEnclaveModule = LdrpLoadEnclaveModule(i[22]);
            if ( PendingEnclaveModule < 0 )
              goto LABEL_15;
          }
          PendingEnclaveModule = v15[0];
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
  RtlLeaveCriticalSection(v6 + 16);
  LdrpDereferenceEnclave(v6);
  if ( v17 )
    RtlReleasePath(v16[0], v11, v12, v13);
  LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry((unsigned int)PendingEnclaveModule);
  return (unsigned int)PendingEnclaveModule;
}
