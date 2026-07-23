/*
 * XREFs of sub_1405A29F8 @ 0x1405A29F8
 * Callers:
 *     sub_1405A1D20 @ 0x1405A1D20 (sub_1405A1D20.c)
 *     sub_1405A216C @ 0x1405A216C (sub_1405A216C.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_14080C400 @ 0x14080C400 (sub_14080C400.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405A29F8(_QWORD *P)
{
  __int64 v2; // rcx

  v2 = P[15];
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
    {
      MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
      v2 = P[15];
    }
    IoFreeMdl((PMDL)v2);
  }
  sub_14080C400(P + 2);
  ExFreePoolWithTag(P, 0);
}
