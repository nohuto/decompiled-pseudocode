/*
 * XREFs of VfAvlInitializeTree @ 0x1405D2180
 * Callers:
 *     ViIovInitialization @ 0x140ADC378 (ViIovInitialization.c)
 *     VfMiscPluginEntry @ 0x140AE06A4 (VfMiscPluginEntry.c)
 * Callees:
 *     VfAvlInitializeTreeEx @ 0x140ABD470 (VfAvlInitializeTreeEx.c)
 */

__int64 __fastcall VfAvlInitializeTree(
        void *a1,
        __int64 a2,
        __int64 a3,
        void (__cdecl *FreeRoutine)(_RTL_AVL_TABLE *, PVOID))
{
  return VfAvlInitializeTreeEx(a1, FreeRoutine);
}
