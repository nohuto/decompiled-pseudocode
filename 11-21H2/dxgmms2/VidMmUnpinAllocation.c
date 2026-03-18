/*
 * XREFs of VidMmUnpinAllocation @ 0x1C001C210
 * Callers:
 *     <none>
 * Callees:
 *     ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00AB3B0 (-UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

void __fastcall VidMmUnpinAllocation(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  VIDMM_GLOBAL::UnpinAllocation(a1, a2);
}
