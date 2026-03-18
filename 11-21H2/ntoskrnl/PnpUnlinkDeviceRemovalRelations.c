/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x140766258
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     PipRemoveDevicesInRelationList @ 0x14080ED34 (PipRemoveDevicesInRelationList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x140810C28 (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PpDevNodeRemoveFromTree @ 0x1403A6700 (PpDevNodeRemoveFromTree.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1403A6C78 (PnpSetDeviceInstanceRemovalEvent.c)
 *     IopEnumerateRelations @ 0x1407667B0 (IopEnumerateRelations.c)
 *     IopIsDescendantNode @ 0x1407668C8 (IopIsDescendantNode.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140768024 (PnpCleanupDeviceRegistryValues.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140772044 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     IopRemoveCurrentRelationFromList @ 0x1409583B0 (IopRemoveCurrentRelationFromList.c)
 */

__int64 __fastcall PnpUnlinkDeviceRemovalRelations(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r14
  char v6; // bl
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+98h] [rbp+38h] BYREF
  char v13; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+48h] BYREF

  Object = 0LL;
  v10 = 0LL;
  P = 0LL;
  PpDevNodeLockTree(4LL);
  if ( a2 && *(_BYTE *)(a2 + 8) )
  {
    v14 = 1LL;
    while ( (unsigned __int8)IopEnumerateRelations(
                               a2,
                               (unsigned int)&v14,
                               (unsigned int)&Object,
                               (unsigned int)&v13,
                               0LL) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
      IopIsDescendantNode(a2);
      if ( (unsigned int)(*(_DWORD *)(v9 + 300) - 789) <= 1 )
      {
        CurrentThread = KeGetCurrentThread();
        v5 = *(_QWORD *)(v9 + 16);
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PnpCleanupDeviceRegistryValues(v9 + 40);
        v6 = PpDevNodeRemoveFromTree((_QWORD *)v9);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        if ( v6 )
        {
          v7 = *(_QWORD *)(v9 + 48) == 0LL;
          *(_QWORD *)(v9 + 648) = v5;
          if ( !v7 )
          {
            PiPnpRtlBeginOperation(&P);
            v10 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              PiPnpRtlCtx,
              *(_QWORD *)(v9 + 48),
              1,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)&v10,
              8,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(v9 + 48), 1LL);
            PnpSetDeviceInstanceRemovalEvent(v9);
            if ( P )
            {
              PiPnpRtlEndOperation(P);
              P = 0LL;
            }
          }
          if ( *(_DWORD *)(v9 + 300) == 790 )
            IopRemoveCurrentRelationFromList(a2, Object, &v14);
          ObfDereferenceObject(Object);
        }
      }
    }
  }
  return PpDevNodeUnlockTree(4LL);
}
