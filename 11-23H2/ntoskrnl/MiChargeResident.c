/*
 * XREFs of MiChargeResident @ 0x1402E43A8
 * Callers:
 *     MmCreateKernelStack @ 0x1402716A0 (MmCreateKernelStack.c)
 *     MiObtainFaultCharges @ 0x140274BB0 (MiObtainFaultCharges.c)
 *     MiObtainSystemCharges @ 0x1402E4250 (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9C78 (MmAdjustWorkingSetSizeEx.c)
 *     MmChargeResources @ 0x140343A50 (MmChargeResources.c)
 *     MiChargeForWriteInProgressPage @ 0x140349F1C (MiChargeForWriteInProgressPage.c)
 *     MmGrowKernelStackEx @ 0x140361350 (MmGrowKernelStackEx.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368A50 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmSetHardFaultBehavior @ 0x140368BF0 (MmSetHardFaultBehavior.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x1403B60F0 (MmStoreChargeResidentAvailableForRead.c)
 *     MmCreateKernelShadowStack @ 0x14064512C (MmCreateKernelShadowStack.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14066480C (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x1406679EC (MiCreateLargePfnList.c)
 *     MiGetSubsectionCharges @ 0x14066B1A8 (MiGetSubsectionCharges.c)
 *     MiInsertVadCharges @ 0x1406FA8B0 (MiInsertVadCharges.c)
 *     MiConstructLoaderEntry @ 0x14070498C (MiConstructLoaderEntry.c)
 *     MmCreateProcessAddressSpace @ 0x140705E50 (MmCreateProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x140747994 (MiCreatePagingFileMap.c)
 *     MiInitializePartialVad @ 0x14076D6EC (MiInitializePartialVad.c)
 *     MiSessionCreate @ 0x1407A900C (MiSessionCreate.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407A9BC8 (MiInitializeSystemWorkingSetList.c)
 *     MiAllocatePerSessionProtos @ 0x1407B5E60 (MiAllocatePerSessionProtos.c)
 *     MmObtainChargesToLockPagedPool @ 0x1408609D0 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x140A33644 (MiChargeLargeProtoSubsection.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402E6278 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeResident(void *a1, unsigned __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r11
  unsigned __int64 CachedResidentAvailable; // r10
  bool v5; // zf
  unsigned __int32 v6; // eax

  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && (_DWORD)CachedResidentAvailable != -1 )
    {
      v6 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
             CachedResidentAvailable - a2,
             CachedResidentAvailable);
      v5 = (_DWORD)CachedResidentAvailable == v6;
      CachedResidentAvailable = v6;
      if ( v5 )
        return 1LL;
    }
  }
  return MiChargePartitionResidentAvailable(a1, a2, a3);
}
