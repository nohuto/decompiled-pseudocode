/*
 * XREFs of RtlReleasePath @ 0x180032EC0
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180011078 (LdrpMapDllSearchPath.c)
 *     LdrpGetDelayloadExportDll @ 0x18001626C (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveProcedureAddress @ 0x180022A3C (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180023220 (LdrpHandleProtectedDelayload.c)
 *     LdrGetDllHandleEx @ 0x18002A3F0 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x18002A8A0 (LdrLoadDll.c)
 *     LdrpInitShimEngine @ 0x180079158 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800797E8 (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x1800847E4 (LdrpInitializeImportRedirection.c)
 *     LdrpLoadWow64 @ 0x180085D20 (LdrpLoadWow64.c)
 *     LdrpCorInitialize @ 0x18008DA54 (LdrpCorInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrLoadEnclaveModule @ 0x1800D88C0 (LdrLoadEnclaveModule.c)
 *     LdrpLoadPatchImage @ 0x1800DA410 (LdrpLoadPatchImage.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800DD2D4 (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

void __cdecl RtlReleasePath(PWSTR Path)
{
  PWSTR v2; // rdi

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  --*((_QWORD *)Path - 6);
  v2 = Path - 64;
  if ( *((_QWORD *)Path - 6) )
    v2 = 0LL;
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
}
