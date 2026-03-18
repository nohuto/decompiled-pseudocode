/*
 * XREFs of MiDeletePageFileMemoryExtents @ 0x140A47214
 * Callers:
 *     MiDeletePagefile @ 0x140A32800 (MiDeletePagefile.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A46EF8 (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x1403C39DC (MiFreeContiguousPages.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePageFileMemoryExtents(_QWORD *P)
{
  MiFreeContiguousPages(P[4], (unsigned int)(*((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1));
  ExFreePoolWithTag(P, 0);
}
