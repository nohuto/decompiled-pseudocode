/*
 * XREFs of RtlReleasePath @ 0x180032D60
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180010E68 (LdrpMapDllSearchPath.c)
 *     LdrpGetDelayloadExportDll @ 0x18001605C (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveProcedureAddress @ 0x180022920 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180023120 (LdrpHandleProtectedDelayload.c)
 *     LdrGetDllHandleEx @ 0x18002A220 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x18002A6D0 (LdrLoadDll.c)
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180079E58 (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x180084FE4 (LdrpInitializeImportRedirection.c)
 *     LdrpLoadWow64 @ 0x180086520 (LdrpLoadWow64.c)
 *     LdrpCorInitialize @ 0x18008E254 (LdrpCorInitialize.c)
 *     LdrLoadEnclaveModule @ 0x1800D8270 (LdrLoadEnclaveModule.c)
 *     LdrpLoadPatchImage @ 0x1800D9DC0 (LdrpLoadPatchImage.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800DCC84 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlReleasePath(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  --*(_QWORD *)(a1 - 48);
  v2 = a1 - 128;
  if ( *(_QWORD *)(a1 - 48) )
    v2 = 0LL;
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v2 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v2);
  return result;
}
