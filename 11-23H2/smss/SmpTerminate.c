/*
 * XREFs of SmpTerminate @ 0x14001AB9C
 * Callers:
 *     wmain @ 0x140001BC0 (wmain.c)
 *     SmpDereferenceKnownSubSys @ 0x140002444 (SmpDereferenceKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x140003AD4 (SmpDestroyControlBlock.c)
 *     SmpInitializeKnownDllsInternal @ 0x140008F50 (SmpInitializeKnownDllsInternal.c)
 *     SmpCreateInitialSession @ 0x140010CC0 (SmpCreateInitialSession.c)
 *     SmpInitializeKnownDllsWorker @ 0x140011BE0 (SmpInitializeKnownDllsWorker.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x140011DE0 (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpUnhandledExceptionFilter @ 0x14001AC44 (SmpUnhandledExceptionFilter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpTerminate(PULONG_PTR Parameters, ULONG UnicodeStringParameterMask, ULONG NumberOfParameters)
{
  NTSTATUS v6; // eax
  ULONG Response[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 OldValue; // [rsp+68h] [rbp+20h] BYREF

  if ( RtlAdjustPrivilege(0x13u, 1u, 1u, &OldValue) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1u, 0, &OldValue);
  v6 = NtRaiseHardError(-1073741286, NumberOfParameters, UnicodeStringParameterMask, Parameters, 6u, Response);
  return NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6);
}
