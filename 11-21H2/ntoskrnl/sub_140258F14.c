/*
 * XREFs of sub_140258F14 @ 0x140258F14
 * Callers:
 *     MmIsFileSectionActive @ 0x140258E40 (MmIsFileSectionActive.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140258F14(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 3) != 0
      || *(_QWORD *)(a1 + 112) > 1uLL && (*(_DWORD *)(a1 + 56) & 0x28) != 8
      || *(_QWORD *)(a1 + 48);
}
