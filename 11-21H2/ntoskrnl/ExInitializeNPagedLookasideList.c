/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x140250C10
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14085B6D0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     sub_14085C5A8 @ 0x14085C5A8 (sub_14085C5A8.c)
 *     sub_140AD6B90 @ 0x140AD6B90 (sub_140AD6B90.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B2603C @ 0x140B2603C (sub_140B2603C.c)
 *     sub_140B260DC @ 0x140B260DC (sub_140B260DC.c)
 * Callees:
 *     sub_140250C50 @ 0x140250C50 (sub_140250C50.c)
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
  sub_140250C50((_DWORD)Lookaside, (_DWORD)Allocate, (_DWORD)Free, Flags, Size, Tag, Depth, 0);
}
