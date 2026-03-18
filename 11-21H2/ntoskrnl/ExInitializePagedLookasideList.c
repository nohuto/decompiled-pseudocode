/*
 * XREFs of ExInitializePagedLookasideList @ 0x1406DA090
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x140B25C04 (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140B2603C (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140B260DC (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x140B26258 (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x140B30050 (WmipInitializeAllocs.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x140251C60 (ExInitializePagedLookasideListInternal.c)
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
    Allocate,
    (void (__stdcall *)(PVOID, ULONG))Free,
    Flags,
    Size,
    Tag,
    Depth,
    0);
}
