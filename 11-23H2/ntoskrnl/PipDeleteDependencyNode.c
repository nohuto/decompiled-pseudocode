/*
 * XREFs of PipDeleteDependencyNode @ 0x1409545D8
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C344 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipSetDependency @ 0x140837D44 (PipSetDependency.c)
 *     PipCreateDependencyNode @ 0x140837FA0 (PipCreateDependencyNode.c)
 *     PipDereferenceDependencyNode @ 0x140838090 (PipDereferenceDependencyNode.c)
 *     IoDuplicateDependency @ 0x140954170 (IoDuplicateDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x140954410 (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x140954718 (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x14095489C (PipMergeDependencyNodes.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x140954914 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     PipDeleteBindingIds @ 0x140954594 (PipDeleteBindingIds.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PipDeleteDependencyNode(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  _QWORD **v4; // rdx
  PVOID *v5; // rcx

  PipDeleteBindingIds((__int64)P);
  v2 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P
    || (v3 = (PVOID *)P[1], *v3 != P)
    || (*v3 = v2, v2[1] = v3, v4 = (_QWORD **)P[9], v4[1] != P + 9)
    || (v5 = (PVOID *)P[10], *v5 != P + 9) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  v4[1] = v5;
  ExFreePoolWithTag(P, 0x53706E50u);
}
