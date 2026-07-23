/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x1403C3470
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x140858D60 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x14085A588 (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x140B17C30 (KiFilterFiberContext.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeLargeMcbs @ 0x140B688D0 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140B68A60 (FsRtlInitializeFileLocks.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C34B0 (ExInitializeNPagedLookasideListInternal.c)
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
