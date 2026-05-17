/*
 * XREFs of LdrInitShimEngineDynamic @ 0x1800DC800
 * Callers:
 *     <none>
 * Callees:
 *     LdrpPinModule @ 0x180032A78 (LdrpPinModule.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpReleaseLoaderLock @ 0x18004F1D0 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18004F230 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     LdrFindEntryForAddress @ 0x180067F70 (LdrFindEntryForAddress.c)
 *     LdrpLoadShimEngine @ 0x180072888 (LdrpLoadShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x180072C90 (LdrpGetShimEngineInterface.c)
 *     LdrpDropLastInProgressCount @ 0x18007D1B4 (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrInitShimEngineDynamic(__int64 a1, __int64 a2)
{
  char v4; // di
  int EntryForAddress; // eax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rcx
  unsigned __int8 ShimEngine; // bl
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
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
    g_pShimEngineModule = a1;
    LdrpGetShimEngineInterface();
  }
  EntryForAddress = LdrFindEntryForAddress(a1, &v12);
  if ( EntryForAddress >= 0 )
  {
    LdrpPinModule(v12, v6, v7, v8);
    ShimEngine = LdrpLoadShimEngine(*(PCWSTR *)(a2 + 8));
  }
  else
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3365,
      (__int64)"LdrInitShimEngineDynamic",
      0,
      "Finding the shim engine entry failed with status 0x%08lx\n",
      EntryForAddress);
    ShimEngine = 0;
  }
  LOBYTE(v9) = -ShimEngine;
  LdrpReleaseLoaderLock(v9, 2, ShimEngine == 0 ? 0xC0000001 : 0);
  if ( !v4 )
    LdrpDropLastInProgressCount();
  return ShimEngine;
}
