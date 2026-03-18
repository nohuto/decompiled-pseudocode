/*
 * XREFs of PnpProcessDependencyRelations @ 0x140767CF8
 * Callers:
 *     PnpProcessRelation @ 0x140767AEC (PnpProcessRelation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PipIsDevNodeDNStarted @ 0x1402DEAB0 (PipIsDevNodeDNStarted.c)
 *     PnpProcessRelation @ 0x140767AEC (PnpProcessRelation.c)
 *     PiGetDependentList @ 0x14076BBF4 (PiGetDependentList.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1407756F4 (PnpAcquireDependencyRelationsLock.c)
 *     PiEnumerateDependentListEntry @ 0x1409426FC (PiEnumerateDependentListEntry.c)
 */

__int64 __fastcall PnpProcessDependencyRelations(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        ULONG_PTR a5)
{
  __int64 v5; // rbx
  int v9; // edi
  _QWORD **DependentList; // rsi
  _QWORD *v11; // rbx
  ULONG_PTR BugCheckParameter3; // rbp
  __int64 v14; // rcx
  int v15; // eax
  bool v16; // zf
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  char v18; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v17 = 0LL;
  v9 = 0;
  PnpAcquireDependencyRelationsLock(0LL);
  DependentList = (_QWORD **)PiGetDependentList(v5);
  v11 = *DependentList;
  if ( *DependentList != DependentList )
  {
    BugCheckParameter3 = a5;
    do
    {
      PiEnumerateDependentListEntry(v11, &v17, &v18);
      v11 = (_QWORD *)*v11;
      if ( v17 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
        v15 = *(_DWORD *)(v14 + 300);
        if ( v15 < 784 || v15 > 785 )
          v16 = !PipIsDevNodeDNStarted(v14);
        else
          v16 = ((*(_DWORD *)(v14 + 304) - 788) & 0xFFFFFFFD) == 0;
        if ( !v16 )
          v9 = PnpProcessRelation(v14, a2, a3, a4, BugCheckParameter3);
        if ( v9 < 0 )
          break;
      }
    }
    while ( v11 != DependentList );
  }
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0LL);
  return (unsigned int)v9;
}
