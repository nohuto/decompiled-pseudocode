/*
 * XREFs of RtlIsCriticalSectionLockedByThread @ 0x18004D120
 * Callers:
 *     RtlSetEnvironmentVar @ 0x18000D0F0 (RtlSetEnvironmentVar.c)
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 *     RtlQueryEnvironmentVariable @ 0x180036CE0 (RtlQueryEnvironmentVariable.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 *     LdrpPrepareModuleForExecution @ 0x18004DB8C (LdrpPrepareModuleForExecution.c)
 *     LdrpAllocateModuleEntry @ 0x18004DF68 (LdrpAllocateModuleEntry.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x180082C4C (TppCallbackCheckThreadBeforeCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlIsCriticalSectionLockedByThread(__int64 a1)
{
  return *(void **)(a1 + 16) == NtCurrentTeb()->ClientId.UniqueThread;
}
