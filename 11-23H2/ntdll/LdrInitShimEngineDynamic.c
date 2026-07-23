/*
 * XREFs of LdrInitShimEngineDynamic @ 0x1800DC930
 * Callers:
 *     <none>
 * Callees:
 *     LdrFindEntryForAddress @ 0x180008A90 (LdrFindEntryForAddress.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpDrainWorkQueue @ 0x18002A48C (LdrpDrainWorkQueue.c)
 *     LdrpReleaseLoaderLock @ 0x180050FC4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180051228 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x180052174 (LdrpDropLastInProgressCount.c)
 *     LdrpPinModule @ 0x180079978 (LdrpPinModule.c)
 *     LdrpGetShimEngineInterface @ 0x180079AA8 (LdrpGetShimEngineInterface.c)
 *     LdrpLoadShimEngine @ 0x180079E58 (LdrpLoadShimEngine.c)
 */

__int64 __fastcall LdrInitShimEngineDynamic(PVOID DllHandle, __int64 a2)
{
  char v4; // di
  NTSTATUS EntryForAddress; // eax
  __int64 v6; // rcx
  unsigned __int8 ShimEngine; // bl
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+50h] [rbp+18h] BYREF

  Entry = 0LL;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    LdrpDrainWorkQueue(0);
  }
  LdrpAcquireLoaderLock();
  if ( !g_pShimEngineModule )
  {
    g_pShimEngineModule = DllHandle;
    LdrpGetShimEngineInterface();
  }
  EntryForAddress = LdrFindEntryForAddress(DllHandle, &Entry);
  if ( EntryForAddress >= 0 )
  {
    LdrpPinModule((__int64)Entry);
    ShimEngine = LdrpLoadShimEngine(*(PCWSTR *)(a2 + 8));
  }
  else
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3381,
      (__int64)"LdrInitShimEngineDynamic",
      0,
      "Finding the shim engine entry failed with status 0x%08lx\n",
      EntryForAddress);
    ShimEngine = 0;
  }
  LOBYTE(v6) = -ShimEngine;
  LdrpReleaseLoaderLock(v6, 2, ShimEngine == 0 ? 0xC0000001 : 0);
  if ( !v4 )
    LdrpDropLastInProgressCount();
  return ShimEngine;
}
