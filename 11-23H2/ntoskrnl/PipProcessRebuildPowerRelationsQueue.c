/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x14079C534
 * Callers:
 *     IoResolveDependency @ 0x140398320 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14078E64C (PnpDeleteAllDependencyRelations.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14079C400 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882D28 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoDuplicateDependency @ 0x140954370 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x1409544A0 (IoSetDependency.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     PiGetProviderList @ 0x1406C9900 (PiGetProviderList.c)
 *     PpDevNodeUnlockTree @ 0x1406C992C (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9988 (PnpAcquireDependencyRelationsLock.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x14079C710 (PipIsDeviceReadyForPowerRelations.c)
 *     PiEnumerateProviderListEntry @ 0x140838648 (PiEnumerateProviderListEntry.c)
 *     PiQueryPowerRelations @ 0x14086EDB4 (PiQueryPowerRelations.c)
 *     PipDeleteDependencyNode @ 0x1409547D8 (PipDeleteDependencyNode.c)
 */

void PipProcessRebuildPowerRelationsQueue()
{
  __int64 *v0; // rbx
  __int64 *v1; // rdi
  __int64 *v2; // r11
  _QWORD *v3; // rbp
  _QWORD *v4; // r11
  __int64 *ProviderList; // r14
  __int64 *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rcx
  bool v9; // zf
  __int64 v10; // rdx
  __int64 **v11; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  ExAcquireFastMutex(&PnpRebuildPowerRelationsQueueLock);
  PnpAcquireDependencyRelationsLock(1);
LABEL_2:
  v0 = (__int64 *)PiRebuildPowerRelationsQueue;
  while ( 1 )
  {
    if ( v0 == &PiRebuildPowerRelationsQueue )
      goto LABEL_4;
    v1 = v0 - 9;
    v2 = v0;
    v3 = (_QWORD *)*(v0 - 3);
    v0 = (__int64 *)*v0;
    if ( !v3 )
      break;
    if ( (unsigned __int8)PipIsDeviceReadyForPowerRelations(v3) )
    {
      v12 = 0LL;
      ProviderList = PiGetProviderList((__int64)v3);
      v6 = (__int64 *)*ProviderList;
      if ( (__int64 *)*ProviderList == ProviderList )
      {
LABEL_10:
        v7 = *v4;
        if ( *(_QWORD **)(*v4 + 8LL) != v4 )
          goto LABEL_15;
        v8 = (_QWORD *)v4[1];
        if ( (_QWORD *)*v8 != v4 )
          goto LABEL_15;
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        v4[1] = v4;
        *v4 = v4;
        v9 = (*((_DWORD *)v1 + 22))-- == 1;
        if ( v9 )
          PipDeleteDependencyNode(v1);
        ExReleaseResourceLite(&PiDependencyRelationsLock);
        PpDevNodeUnlockTree(0);
        LOBYTE(v10) = 1;
        PiQueryPowerRelations(*(_QWORD *)(v3[39] + 40LL), v10);
        ObfDereferenceObjectWithTag(v3, 0x44706E50u);
        PnpAcquireDependencyRelationsLock(1);
        goto LABEL_2;
      }
      while ( 1 )
      {
        PiEnumerateProviderListEntry(v6, &v12, 0LL);
        if ( !(unsigned __int8)PipIsDeviceReadyForPowerRelations(v12) )
          break;
        v6 = (__int64 *)*v6;
        if ( v6 == ProviderList )
          goto LABEL_10;
      }
    }
  }
  if ( (__int64 *)v0[1] != v2 || (v11 = (__int64 **)v2[1], *v11 != v2) )
LABEL_15:
    __fastfail(3u);
  *v11 = v0;
  v0[1] = (__int64)v11;
  v2[1] = (__int64)v2;
  *v2 = (__int64)v2;
  v9 = (*((_DWORD *)v1 + 22))-- == 1;
  if ( v9 )
    PipDeleteDependencyNode(v1);
LABEL_4:
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  ExReleaseFastMutex(&PnpRebuildPowerRelationsQueueLock);
}
