/*
 * XREFs of VfAvlInitializeTree @ 0x1405D1CA0
 * Callers:
 *     ViIovInitialization @ 0x140ADD358 (ViIovInitialization.c)
 *     VfMiscPluginEntry @ 0x140AE1684 (VfMiscPluginEntry.c)
 * Callees:
 *     VfAvlInitializeTreeEx @ 0x140ABE450 (VfAvlInitializeTreeEx.c)
 */

__int64 __fastcall VfAvlInitializeTree(
        void *a1,
        __int64 a2,
        __int64 a3,
        void (__cdecl *FreeRoutine)(_RTL_AVL_TABLE *, PVOID))
{
  return VfAvlInitializeTreeEx(a1, FreeRoutine);
}
