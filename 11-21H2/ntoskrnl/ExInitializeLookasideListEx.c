/*
 * XREFs of ExInitializeLookasideListEx @ 0x1402A0360
 * Callers:
 *     sub_140831BF4 @ 0x140831BF4 (sub_140831BF4.c)
 * Callees:
 *     sub_1402A03B0 @ 0x1402A03B0 (sub_1402A03B0.c)
 */

NTSTATUS __stdcall ExInitializeLookasideListEx(
        PLOOKASIDE_LIST_EX Lookaside,
        PALLOCATE_FUNCTION_EX Allocate,
        PFREE_FUNCTION_EX Free,
        POOL_TYPE PoolType,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  return sub_1402A03B0(&Lookaside->L.ListHead, Flags, Size, Tag, Depth, 0);
}
