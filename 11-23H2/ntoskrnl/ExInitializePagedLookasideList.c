/*
 * XREFs of ExInitializePagedLookasideList @ 0x1407D6F10
 * Callers:
 *     WmipInitializeAllocs @ 0x140B38A8C (WmipInitializeAllocs.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x140B68494 (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140B688D0 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeTunnels @ 0x140B68970 (FsRtlInitializeTunnels.c)
 *     FsRtlInitializeFileLocks @ 0x140B68A60 (FsRtlInitializeFileLocks.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x140361A50 (ExInitializePagedLookasideListInternal.c)
 */

void __stdcall ExInitializePagedLookasideList(
        PPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializePagedLookasideListInternal(
    (__int64)Lookaside,
    (PVOID (__fastcall *)(int, SIZE_T, ULONG))Allocate,
    Free,
    Flags,
    Size,
    Tag,
    Depth,
    0);
}
