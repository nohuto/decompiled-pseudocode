/*
 * XREFs of MiDeletePageFileMemoryExtents @ 0x140A474C4
 * Callers:
 *     MiDeletePagefile @ 0x140A32AB0 (MiDeletePagefile.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A471A8 (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x1403C3BBC (MiFreeContiguousPages.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePageFileMemoryExtents(_QWORD *P)
{
  MiFreeContiguousPages(P[4], (unsigned int)(*((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1));
  ExFreePoolWithTag(P, 0);
}
