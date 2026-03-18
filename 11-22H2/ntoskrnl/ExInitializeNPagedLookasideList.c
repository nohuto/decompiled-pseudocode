/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x1403C2C30
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x140859B90 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x14085AB18 (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x140B18C30 (KiFilterFiberContext.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeLargeMcbs @ 0x140B6982C (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140B699BC (FsRtlInitializeFileLocks.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C2C70 (ExInitializeNPagedLookasideListInternal.c)
 */

void __stdcall ExInitializeNPagedLookasideList(
        PNPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializeNPagedLookasideListInternal((_DWORD)Lookaside, (_DWORD)Allocate, (_DWORD)Free, Flags, Size, Tag, Depth, 0);
}
