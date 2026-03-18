/*
 * XREFs of PipFreeGroupTree @ 0x140B6AAD8
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140B3CA80 (IopInitializeSystemDrivers.c)
 *     PipFreeGroupTree @ 0x140B6AAD8 (PipFreeGroupTree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     PipFreeGroupTree @ 0x140B6AAD8 (PipFreeGroupTree.c)
 */

void __fastcall PipFreeGroupTree(_QWORD *a1)
{
  if ( *a1 )
    PipFreeGroupTree();
  if ( a1[2] )
    PipFreeGroupTree();
  if ( a1[1] )
    PipFreeGroupTree();
  ExFreePoolWithTag(a1, 0);
}
