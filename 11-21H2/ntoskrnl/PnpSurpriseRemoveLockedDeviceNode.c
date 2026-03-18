/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x14081059C
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140766834 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipRestoreDevNodeState @ 0x14025B96C (PipRestoreDevNodeState.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x1403A0064 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1403A01B0 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1403A15FC (IopDecrementDeviceObjectHandleCount.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PiDmaGuardProcessPostRemove @ 0x1407669D4 (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x140766A5C (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14076BC20 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipClearDevNodeFlags @ 0x14076FBEC (PipClearDevNodeFlags.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1407756F4 (PnpAcquireDependencyRelationsLock.c)
 *     PnpDisableDeviceInterfaces @ 0x140810788 (PnpDisableDeviceInterfaces.c)
 *     PipConvertResolutionsToReservations @ 0x14085CA7C (PipConvertResolutionsToReservations.c)
 */

void __fastcall PnpSurpriseRemoveLockedDeviceNode(ULONG_PTR MaxDataSize, int a2, int a3)
{
  int v3; // esi
  struct _DEVICE_OBJECT *v4; // r12
  int v8; // r14d
  __int64 v9; // rbx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rbp
  void *v18; // rbx
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(MaxDataSize + 300);
  v4 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v8 = 768;
  v19 = 0LL;
  if ( v3 == 784 || v3 == 785 )
  {
    v8 = v3;
    PipRestoreDevNodeState(MaxDataSize);
    v3 = *(_DWORD *)(MaxDataSize + 300);
  }
  *(_WORD *)(MaxDataSize + 466) = 0;
  if ( v3 == 787 && v8 == 784 )
  {
    PipClearDevNodeFlags(MaxDataSize, 16);
    PipSetDevNodeState(MaxDataSize, 789);
    return;
  }
  v9 = *(_QWORD *)(MaxDataSize + 8);
  if ( v9 )
  {
    do
    {
      v16 = *(_DWORD *)(v9 + 396);
      v17 = *(_QWORD *)v9;
      if ( (v16 & 0x10) != 0 )
      {
        v16 &= ~0x10u;
        *(_DWORD *)(v9 + 396) = v16;
      }
      if ( *(_QWORD *)(v9 + 416) || *(_QWORD *)(v9 + 544) || (v16 & 0x40) != 0 )
        IopReleaseDeviceResources(v9, 0);
      PipSetDevNodeState(v9, 789);
      v9 = v17;
    }
    while ( v17 );
  }
  if ( v3 == 780 && (*(_DWORD *)(MaxDataSize + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v4, 1, (ULONG_PTR *)&v19);
    PnpUnlockMountableDevice((__int64)v4);
    PipClearDevNodeFlags(MaxDataSize, 0x1000000);
  }
  v10 = *(_DWORD *)(MaxDataSize + 300);
  if ( v10 < 769 || v10 > 772 && (v10 <= 778 || v10 == 780 || (unsigned int)(v10 - 787) > 3) )
  {
    v11 = IopRemoveDevice(v4, 23);
    PnpDisableDeviceInterfaces(MaxDataSize + 40);
    if ( v11 >= 0 )
      IopReleaseDeviceResources(MaxDataSize, 0);
    v12 = MaxDataSize;
    if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    {
      v13 = 789;
LABEL_13:
      PipSetDevNodeState(v12, v13);
      goto LABEL_14;
    }
    PipSetDevNodeState(MaxDataSize, 787);
    v13 = 784;
    if ( v8 == 784 )
    {
      v12 = MaxDataSize;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( v3 == 780 )
  {
    v18 = (void *)*((_QWORD *)&v19 + 1);
    if ( *((_QWORD *)&v19 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v19 + 1));
      ObfDereferenceObject(v18);
    }
  }
  if ( a2 && (*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(MaxDataSize, a2, a3);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
  {
    PnpAcquireDependencyRelationsLock(1);
    v14 = *(_QWORD *)(MaxDataSize + 32);
    if ( v14 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 80LL);
      if ( v15 )
        PipConvertResolutionsToReservations(v15);
    }
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    PipProcessRebuildPowerRelationsQueue();
  }
  PiDmaGuardProcessPostRemove(MaxDataSize, a2, 0);
}
