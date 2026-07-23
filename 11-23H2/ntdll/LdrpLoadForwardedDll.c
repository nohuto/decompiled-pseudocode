/*
 * XREFs of LdrpLoadForwardedDll @ 0x180018DF0
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18001605C (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveProcedureAddress @ 0x180022920 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180023120 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180018FD4 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpPreprocessDllName @ 0x1800196B0 (LdrpPreprocessDllName.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026AE0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028AE0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadForwardedDll(__int64 a1, int a2, __int64 a3, _QWORD *a4, int a5, __int64 a6)
{
  int appended; // [rsp+50h] [rbp-2C8h] BYREF
  int v11; // [rsp+54h] [rbp-2C4h] BYREF
  __int64 v12; // [rsp+60h] [rbp-2B8h] BYREF
  int v13; // [rsp+68h] [rbp-2B0h]
  __int128 v14; // [rsp+70h] [rbp-2A8h]
  __int128 v15; // [rsp+80h] [rbp-298h]
  __int128 v16; // [rsp+90h] [rbp-288h]
  __int64 v17; // [rsp+A0h] [rbp-278h]
  int v18; // [rsp+B0h] [rbp-268h] BYREF
  _WORD *v19; // [rsp+B8h] [rbp-260h]
  _WORD v20[128]; // [rsp+C0h] [rbp-258h] BYREF
  int v21; // [rsp+1C0h] [rbp-158h] BYREF
  _WORD *v22; // [rsp+1C8h] [rbp-150h]
  _WORD v23[128]; // [rsp+1D0h] [rbp-148h] BYREF

  v22 = v23;
  v21 = 0x1000000;
  v23[0] = 0;
  v19 = v20;
  v18 = 0x1000000;
  v20[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer(&v18, a1);
  if ( appended >= 0 )
  {
    v12 = 72LL;
    v13 = 1;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    RtlActivateActivationContextUnsafeFast(&v12, a4[17]);
    v11 = 0;
    appended = LdrpPreprocessDllName(&v18, &v21, a4, &v11);
    if ( appended >= 0 )
      LdrpLoadDllInternal((int)&v21, a2, v11, a5, a4, a3, a6, (__int64)&appended, 0LL);
    RtlDeactivateActivationContextUnsafeFast(&v12);
  }
  if ( v20 != v19 )
    NtdllpFreeStringRoutine(v19);
  v19 = v20;
  v18 = 0x1000000;
  v20[0] = 0;
  if ( v23 != v22 )
    NtdllpFreeStringRoutine(v22);
  return (unsigned int)appended;
}
