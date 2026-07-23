/*
 * XREFs of MiChargeResident @ 0x1402E4638
 * Callers:
 *     MmCreateKernelStack @ 0x140271930 (MmCreateKernelStack.c)
 *     MiObtainFaultCharges @ 0x140274E40 (MiObtainFaultCharges.c)
 *     MiObtainSystemCharges @ 0x1402E44E0 (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9F08 (MmAdjustWorkingSetSizeEx.c)
 *     MmChargeResources @ 0x140343CE0 (MmChargeResources.c)
 *     MiChargeForWriteInProgressPage @ 0x14034A0B4 (MiChargeForWriteInProgressPage.c)
 *     MmGrowKernelStackEx @ 0x1403614F0 (MmGrowKernelStackEx.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368BF0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmSetHardFaultBehavior @ 0x140368D90 (MmSetHardFaultBehavior.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x1403B62D0 (MmStoreChargeResidentAvailableForRead.c)
 *     MmCreateKernelShadowStack @ 0x14064567C (MmCreateKernelShadowStack.c)
 *     MiGetCrossPartitionCloneCharges @ 0x140664D5C (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x140667F3C (MiCreateLargePfnList.c)
 *     MiGetSubsectionCharges @ 0x14066B6F8 (MiGetSubsectionCharges.c)
 *     MiInsertVadCharges @ 0x1406FAAC0 (MiInsertVadCharges.c)
 *     MiConstructLoaderEntry @ 0x140704B9C (MiConstructLoaderEntry.c)
 *     MmCreateProcessAddressSpace @ 0x140706060 (MmCreateProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x140747B84 (MiCreatePagingFileMap.c)
 *     MiInitializePartialVad @ 0x14076D8DC (MiInitializePartialVad.c)
 *     MiSessionCreate @ 0x1407A91FC (MiSessionCreate.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407A9DB8 (MiInitializeSystemWorkingSetList.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6140 (MiAllocatePerSessionProtos.c)
 *     MmObtainChargesToLockPagedPool @ 0x140860C10 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x140A338F4 (MiChargeLargeProtoSubsection.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402E6508 (MiChargePartitionResidentAvailable.c)
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
