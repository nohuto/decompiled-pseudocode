/*
 * XREFs of ?AllocatePteOwnerData@VIDMM_GLOBAL@@QEAAPEAUVIDMM_PTE_OWNER_DATA@@XZ @ 0x1C002FE18
 * Callers:
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1C00B27D4 (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 * Callees:
 *     <none>
 */

struct VIDMM_PTE_OWNER_DATA *__fastcall VIDMM_GLOBAL::AllocatePteOwnerData(VIDMM_GLOBAL *this)
{
  return (struct VIDMM_PTE_OWNER_DATA *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 40256));
}
