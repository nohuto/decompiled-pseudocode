/*
 * XREFs of ExInitializePagedLookasideList @ 0x1406DA090
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B25C04 @ 0x140B25C04 (sub_140B25C04.c)
 *     sub_140B2603C @ 0x140B2603C (sub_140B2603C.c)
 *     sub_140B260DC @ 0x140B260DC (sub_140B260DC.c)
 *     sub_140B26258 @ 0x140B26258 (sub_140B26258.c)
 *     sub_140B30050 @ 0x140B30050 (sub_140B30050.c)
 * Callees:
 *     sub_140251C60 @ 0x140251C60 (sub_140251C60.c)
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
  sub_140251C60((__int64)Lookaside, Allocate, (void (__stdcall *)(PVOID, ULONG))Free, Flags, Size, Tag, Depth, 0);
}
