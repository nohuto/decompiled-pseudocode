/*
 * XREFs of IoDuplicateDependency @ 0x140942470
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PiListEntryToDependencyEdge @ 0x14055F84C (PiListEntryToDependencyEdge.c)
 *     PiGetDependentList @ 0x14076BBF4 (PiGetDependentList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14076BC20 (PipProcessRebuildPowerRelationsQueue.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1407756F4 (PnpAcquireDependencyRelationsLock.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1408442B0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipQueryBindingResolution @ 0x14084436C (PipQueryBindingResolution.c)
 *     PipCreateDependencyNode @ 0x14084442C (PipCreateDependencyNode.c)
 *     PipDeleteDependencyNode @ 0x14085CA14 (PipDeleteDependencyNode.c)
 *     PipDependencyCopyEdge @ 0x140942A64 (PipDependencyCopyEdge.c)
 */

__int64 __fastcall IoDuplicateDependency(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *BindingResolution; // rax
  __int64 DependencyNode; // rdi
  __int64 *DependentList; // r15
  __int64 *v8; // r14
  __int64 v9; // rax
  int v10; // eax
  _DWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  v2 = 0;
  v13[1] = 0;
  if ( a1 && a2 )
  {
    PnpAcquireDependencyRelationsLock(1);
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL) )
    {
LABEL_4:
      ExReleaseResourceLite(&PiDependencyRelationsLock);
      PpDevNodeUnlockTree(0);
      return v2;
    }
    v13[0] = 0;
    v14 = a2;
    BindingResolution = PipQueryBindingResolution((__int64)v13);
    DependencyNode = (__int64)BindingResolution;
    if ( BindingResolution )
    {
      ++*((_DWORD *)BindingResolution + 22);
    }
    else
    {
      DependencyNode = PipCreateDependencyNode((__int64)v13);
      if ( !DependencyNode )
      {
        v2 = -1073741670;
        goto LABEL_4;
      }
    }
    DependentList = PiGetDependentList(a1);
    v8 = (__int64 *)*DependentList;
    if ( (__int64 *)*DependentList != DependentList )
    {
      while ( 1 )
      {
        v9 = PiListEntryToDependencyEdge((__int64)v8, 1);
        v8 = (__int64 *)*v8;
        v10 = PipDependencyCopyEdge(v9, DependencyNode);
        if ( v10 < 0 )
          break;
        if ( v8 == DependentList )
          goto LABEL_14;
      }
      v2 = v10;
    }
LABEL_14:
    if ( (*(_DWORD *)(DependencyNode + 88))-- == 1 )
      PipDeleteDependencyNode((_QWORD *)DependencyNode);
    PipAddDependentsToRebuildPowerRelationsQueue(a2);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    PipProcessRebuildPowerRelationsQueue();
    return v2;
  }
  return 3221225485LL;
}
