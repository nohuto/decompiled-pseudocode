/*
 * XREFs of VfObjectContextInit @ 0x140AC3FB4
 * Callers:
 *     VfInitBootDriversLoaded @ 0x140B577A4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C34B0 (ExInitializeNPagedLookasideListInternal.c)
 */

__int64 VfObjectContextInit()
{
  ExInitializeNPagedLookasideListInternal(
    (__int64)&ViObjectContextTableLookaside,
    0LL,
    (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
    512,
    24,
    1666147926,
    0,
    VfInitializedWithoutReboot);
  return (unsigned int)_InterlockedExchange(&ViObjectContextInitialized, 1);
}
