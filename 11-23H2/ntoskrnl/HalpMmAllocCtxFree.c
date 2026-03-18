/*
 * XREFs of HalpMmAllocCtxFree @ 0x1403A56C0
 * Callers:
 *     HalpAcpiCacheTable @ 0x14037DFA0 (HalpAcpiCacheTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x14037FEA8 (HalpIommuCreateDmarPageTable.c)
 *     IommupCreateDeviceId @ 0x1403905C4 (IommupCreateDeviceId.c)
 *     HalpDmaAllocateDomain @ 0x1403906A0 (HalpDmaAllocateDomain.c)
 *     HalpIommuFreeDeviceId @ 0x140390DA8 (HalpIommuFreeDeviceId.c)
 *     HalpIommuCloneDeviceId @ 0x1403913E8 (HalpIommuCloneDeviceId.c)
 *     HalpIommuGetHardwareDomain @ 0x1403A964C (HalpIommuGetHardwareDomain.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403AEEB0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     IommupGetSystemContext @ 0x1403B0808 (IommupGetSystemContext.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x1403B6B60 (HalpAcpiPopulateTableCacheWork.c)
 *     HalpDmaAllocateMapRegisters @ 0x14045BF9E (HalpDmaAllocateMapRegisters.c)
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x14045F060 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140506F60 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x140507660 (HalpFreePmcCounterSet.c)
 *     IommupPasidDeviceCreate @ 0x14050E6E8 (IommupPasidDeviceCreate.c)
 *     IommupPasidDeviceDelete @ 0x14050E7F4 (IommupPasidDeviceDelete.c)
 *     HalFreeCommonBufferVector @ 0x14050F000 (HalFreeCommonBufferVector.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050F470 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1405107E8 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpDmaFreeChildAdapter @ 0x140511170 (HalpDmaFreeChildAdapter.c)
 *     HalpDmaDereferenceDomainObject @ 0x1405127A8 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x1405128F8 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpIommuBlockDevice @ 0x140517830 (HalpIommuBlockDevice.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x140517938 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x140517AEC (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuFreeDmaDomain @ 0x140518130 (HalpIommuFreeDmaDomain.c)
 *     HalpIommuUnblockDevice @ 0x1405187A0 (HalpIommuUnblockDevice.c)
 *     HalpNumaAddRangeProximity @ 0x14051ADF0 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x14051C8F0 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x14051CD7C (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x14051E050 (EmonReleaseProfileResources.c)
 *     EmonRemoveProfileSource @ 0x14051E3F0 (EmonRemoveProfileSource.c)
 *     ExtEnvFreeMemory @ 0x14051F5AC (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14051F5EC (ExtEnvFreePhysicalMemory.c)
 *     IommuDisableDevicePasid @ 0x140522070 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x140522460 (IommuEnableDevicePasid.c)
 *     IommuFreeLibraryContext @ 0x140522EB8 (IommuFreeLibraryContext.c)
 *     IommuGetLibraryContext @ 0x140522F60 (IommuGetLibraryContext.c)
 *     IommupFreeSystemContext @ 0x140523AC4 (IommupFreeSystemContext.c)
 *     IommupMapDeviceInternal @ 0x140523B68 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140523F28 (IommupUnmapDeviceInternal.c)
 *     IommuDomainAttachDevice @ 0x140525680 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x140525B90 (IommuDomainDetachDevice.c)
 *     IommuDomainDetachDeviceEx @ 0x140525D50 (IommuDomainDetachDeviceEx.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x140525E60 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuReserveLogicalAddressRange @ 0x1405264F0 (IommuReserveLogicalAddressRange.c)
 *     IommuUnregisterInterfaceStateChangeCallback @ 0x1405269B0 (IommuUnregisterInterfaceStateChangeCallback.c)
 *     HalpIommuCleanupPageTable @ 0x140526CC4 (HalpIommuCleanupPageTable.c)
 *     Amd64AddProfileSource @ 0x140528820 (Amd64AddProfileSource.c)
 *     Amd64InitializeUncoreStatus @ 0x1405299D8 (Amd64InitializeUncoreStatus.c)
 *     Amd64RemoveProfileSource @ 0x140529E90 (Amd64RemoveProfileSource.c)
 *     HalpBuddyAllocatorCleanUp @ 0x1405323F0 (HalpBuddyAllocatorCleanUp.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x14053242C (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x1405325D8 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorSplitNode @ 0x140532908 (HalpBuddyAllocatorSplitNode.c)
 *     HalpIommuCreateDevice @ 0x140829048 (HalpIommuCreateDevice.c)
 *     HalpAcpiDetectPiix4Work @ 0x140834A50 (HalpAcpiDetectPiix4Work.c)
 *     HalpIommuDeleteDevice @ 0x140933A2C (HalpIommuDeleteDevice.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140933F50 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140934238 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpMceInitializeErrorPacket @ 0x140A8AADC (HalpMceInitializeErrorPacket.c)
 *     HalpMapCR3Ex @ 0x140A90E10 (HalpMapCR3Ex.c)
 *     HalpBuildResumeStructures @ 0x140A95EF8 (HalpBuildResumeStructures.c)
 *     HalpFreeResumeStructures @ 0x140A95F74 (HalpFreeResumeStructures.c)
 *     HalpFreeNvsBuffers @ 0x140A96E84 (HalpFreeNvsBuffers.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B6072C (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140B60870 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140B608F8 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140B609CC (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140B60AF0 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B91018 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140B910EC (HalpDmaFreeTranslationBuffer.c)
 * Callees:
 *     RtlClearBits @ 0x14022DA00 (RtlClearBits.c)
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x140505654 (HalpMmAllocCtxBufferCleanup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpMmAllocCtxFree(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 i; // rbx
  ULONG v5; // r8d
  __int64 v6; // rsi
  unsigned int *v7; // rdi
  __int64 v8; // rcx
  __int64 *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  int *v14; // rdx
  int v15; // r10d
  int *v16; // r8
  bool j; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C63DD0);
  if ( (a2 & 0xFFF) == 0 )
  {
    for ( i = HalpNPPoolAllocCtx; (__int64 *)i != &HalpNPPoolAllocCtx; i = *(_QWORD *)i )
    {
      if ( a2 == *(_QWORD *)(i + 16) )
      {
        v5 = *(_DWORD *)(i + 28);
        LODWORD(v6) = 0;
        *(_DWORD *)(i + 28) = 0;
        goto LABEL_3;
      }
    }
  }
  i = *(_QWORD *)(a2 - 16);
  v5 = *(_DWORD *)(a2 - 8);
  v6 = (a2 - 16 - *(_QWORD *)(i + 16)) / 16;
LABEL_3:
  v7 = (unsigned int *)(i + 32);
  RtlClearBits((PRTL_BITMAP)(i + 32), v6, v5);
  *(_DWORD *)(i + 24) = v6;
  v8 = *(_QWORD *)i;
  v9 = *(__int64 **)(i + 8);
  if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v9 != i )
    goto LABEL_36;
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  v10 = *v7;
  if ( !*v7 )
    goto LABEL_9;
  if ( v10 > 1 )
  {
    v14 = *(int **)(i + 40);
    v15 = *v14;
    v16 = &v14[(unsigned __int64)(v10 - 1) >> 5];
    if ( v14 == v16 )
    {
      if ( (v15 & (0xFFFFFFFF >> (32 - v10))) == 0 )
        goto LABEL_11;
    }
    else
    {
      for ( j = v15 == 0; ; j = *v14 == 0 )
      {
        if ( !j )
          goto LABEL_9;
        if ( ++v14 == v16 )
          break;
      }
      if ( ((0xFFFFFFFF >> ~(v10 - 1)) & *v14) == 0 )
        goto LABEL_11;
    }
LABEL_9:
    v11 = HalpNPPoolAllocCtx;
    if ( *(__int64 **)(HalpNPPoolAllocCtx + 8) == &HalpNPPoolAllocCtx )
    {
      *(_QWORD *)i = HalpNPPoolAllocCtx;
      *(_QWORD *)(i + 8) = &HalpNPPoolAllocCtx;
      *(_QWORD *)(v11 + 8) = i;
      HalpNPPoolAllocCtx = i;
      i = 0LL;
      goto LABEL_11;
    }
LABEL_36:
    __fastfail(3u);
  }
  if ( v10 != 1 || _bittest(*(const signed __int32 **)(i + 40), 0) )
    goto LABEL_9;
LABEL_11:
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140C63DD0);
  v13 = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = (unsigned int)(v3 + 1);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      j = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( j )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( i )
    return HalpMmAllocCtxBufferCleanup(v13, i);
  return result;
}
