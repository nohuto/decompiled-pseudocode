/*
 * XREFs of NtUserCreateEmptyCursorObject @ 0x1C009B520
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserCreateEmptyCursorObject(int a1)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  PERESOURCE *v10; // rax
  __int64 *ThreadWin32Thread; // rax

  EnterCrit(0LL, 0LL);
  LOBYTE(v2) = 3;
  v3 = 0LL;
  v6 = HMAllocObject(gptiCurrent, 0LL, v2);
  if ( v6 )
  {
    if ( !a1 || (CurrentProcess = PsGetCurrentProcess(v5, v4, v7), v5 = gpepCSRSS, CurrentProcess != gpepCSRSS) )
    {
      v10 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v5, v4, v7, v8);
      if ( !ExIsResourceAcquiredSharedLite(*v10) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v3 = *ThreadWin32Thread;
      if ( (*(_DWORD *)(v3 + 1272) & 0x8000000) != 0 )
        v3 = *(_QWORD *)(v3 + 1520);
      v3 = *(_QWORD *)(v3 + 424);
    }
    *(_QWORD *)(v6 + 24) = v3;
    v3 = *(_QWORD *)v6;
    *(_DWORD *)(v6 + 80) = 2048;
    *(_QWORD *)(v6 + 48) = v6;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v3;
}
