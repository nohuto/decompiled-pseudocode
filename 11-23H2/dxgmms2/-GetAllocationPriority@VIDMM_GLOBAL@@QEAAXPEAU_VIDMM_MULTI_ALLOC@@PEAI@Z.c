/*
 * XREFs of ?GetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C00E38AC
 * Callers:
 *     VidMmGetAllocationPriority @ 0x1C0018A20 (VidMmGetAllocationPriority.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::GetAllocationPriority(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int *a3)
{
  *a3 = *(_DWORD *)(**(_QWORD **)a2 + 400LL);
}
