/*
 * XREFs of MmIsDriverVerifyingByAddress @ 0x1406AD520
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402136C0 (MiLookupDataTableEntry.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 */

LOGICAL __stdcall MmIsDriverVerifyingByAddress(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rdi
  LOGICAL v3; // ebx
  _QWORD *v4; // rax

  if ( (VfRuleClasses & 0x400000) != 0 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v3 = 1;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0);
  if ( !v4 || (v4[13] & 0x2000000) == 0 )
    v3 = 0;
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
