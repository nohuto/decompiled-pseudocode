/*
 * XREFs of RtlReleasePath @ 0x18001CC00
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18003523C (LdrpGetDelayloadExportDll.c)
 *     LdrLoadDll @ 0x18003AE00 (LdrLoadDll.c)
 *     LdrpResolveProcedureAddress @ 0x18003B748 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x18003BF80 (LdrpHandleProtectedDelayload.c)
 *     LdrGetDllHandleEx @ 0x180042DE0 (LdrGetDllHandleEx.c)
 *     LdrpMapDllSearchPath @ 0x180051844 (LdrpMapDllSearchPath.c)
 *     LdrpInitShimEngine @ 0x1800726D8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180072888 (LdrpLoadShimEngine.c)
 *     LdrpCorInitialize @ 0x180072FF8 (LdrpCorInitialize.c)
 *     LdrpInitializeImportRedirection @ 0x1800888BC (LdrpInitializeImportRedirection.c)
 *     LdrpLoadWow64 @ 0x180089F1C (LdrpLoadWow64.c)
 *     LdrLoadEnclaveModule @ 0x1800D85B0 (LdrLoadEnclaveModule.c)
 *     LdrpLoadPatchImage @ 0x1800DA320 (LdrpLoadPatchImage.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800DCB54 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

signed __int64 __fastcall RtlReleasePath(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rdi
  signed __int64 result; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, a2, a3, a4);
  --*(_QWORD *)(a1 - 48);
  v5 = a1 - 128;
  if ( *(_QWORD *)(a1 - 48) )
    v5 = 0LL;
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v5 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
  return result;
}
