/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x140284790
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14020ABD4 (MiCountSystemImageCommitment.c)
 *     MiProbeLockFrame @ 0x1402364E0 (MiProbeLockFrame.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 *     MiGetPhysicalAddress @ 0x14028BE00 (MiGetPhysicalAddress.c)
 *     MiMappingHasIoReferences @ 0x140335AA0 (MiMappingHasIoReferences.c)
 *     MmUnmapIoSpace @ 0x140335B30 (MmUnmapIoSpace.c)
 *     MiMappingHasIoTracker @ 0x140335C44 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x140335CBC (MiZeroAndFlushPtes.c)
 *     MmProtectDriverSection @ 0x14036E220 (MmProtectDriverSection.c)
 *     MiDbgReleaseAddress @ 0x14038A450 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x14038A514 (MiDbgWriteCheck.c)
 *     MiPfnRangeIsZero @ 0x14038D604 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038DB24 (MiDemoteValidLargePageOneLevel.c)
 *     MmSetPageProtection @ 0x1403C2610 (MmSetPageProtection.c)
 *     MmProtectMdlSystemAddress @ 0x14061EE40 (MmProtectMdlSystemAddress.c)
 *     MiReplaceImportEntry @ 0x14062C720 (MiReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x14062F8D4 (MiAddTriageDumpPtes.c)
 *     MiUpdateForkMaps @ 0x1406654A0 (MiUpdateForkMaps.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MmLockPagableDataSection @ 0x1406AD5B0 (MmLockPagableDataSection.c)
 *     MmPageEntireDriver @ 0x140701000 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x14070111C (MiImagePagable.c)
 *     MiFreeDriverInitialization @ 0x140703584 (MiFreeDriverInitialization.c)
 *     MiDisablePagingOfDriver @ 0x14070362C (MiDisablePagingOfDriver.c)
 *     MiFreeInitializationCode @ 0x140703BAC (MiFreeInitializationCode.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MiHandleDriverNonPagedSections @ 0x140705BF8 (MiHandleDriverNonPagedSections.c)
 *     MmChangeImageProtection @ 0x140723EB0 (MmChangeImageProtection.c)
 *     MiProtectSystemImage @ 0x14081F240 (MiProtectSystemImage.c)
 *     MiInitializeShadowPageTable @ 0x140820480 (MiInitializeShadowPageTable.c)
 *     MiUnlockDriverCode @ 0x140852220 (MiUnlockDriverCode.c)
 *     MiBackSystemImageWithPagefile @ 0x140871FC8 (MiBackSystemImageWithPagefile.c)
 *     MiPrepareDriverPatchState @ 0x140A2B694 (MiPrepareDriverPatchState.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A350D8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiCheckLargePageOk @ 0x140B47240 (MiCheckLargePageOk.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140B4750C (MiInitializeBootLoadedDriverPfns.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140B49058 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiApplyFunctionOverrideToBootDrivers @ 0x140B491C0 (MiApplyFunctionOverrideToBootDrivers.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B493C4 (MiApplyBootLoadedDriversFixups.c)
 *     MiInitializeDriverImages @ 0x140B497A0 (MiInitializeDriverImages.c)
 *     MiHandleBootImage @ 0x140B4A1A8 (MiHandleBootImage.c)
 *     MiFreeBootDriverPages @ 0x140B4A754 (MiFreeBootDriverPages.c)
 *     MiInitializeDriverPtes @ 0x140B60F90 (MiInitializeDriverPtes.c)
 *     MiInitializeNonPagedPool @ 0x140B6156C (MiInitializeNonPagedPool.c)
 *     MmDiscardDriverSection @ 0x140B756B4 (MmDiscardDriverSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PHYSICAL_ADDRESS(unsigned __int64 a1)
{
  unsigned int v1; // r10d
  __int64 v2; // rdx
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rax
  char v8; // r9
  __int64 v9; // [rsp+0h] [rbp-30h]
  unsigned __int64 v10; // [rsp+8h] [rbp-28h]
  unsigned __int64 v11; // [rsp+10h] [rbp-20h]
  unsigned __int64 v12; // [rsp+18h] [rbp-18h]
  __int64 v13; // [rsp+20h] [rbp-10h]

  v1 = 4;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4LL;
  while ( 1 )
  {
    v3 = *(&v9 + v2--);
    --v1;
    v4 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL
      && v3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v4 & 1) == 0 )
        return 0LL;
      if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v7 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
          v8 = v4 | 0x20;
          if ( (v7 & 0x20) == 0 )
            v8 = v4;
          LOBYTE(v4) = v8;
          if ( (v7 & 0x42) != 0 )
            LOBYTE(v4) = v8 | 0x42;
        }
      }
    }
    if ( (v4 & 1) == 0 )
      return 0LL;
    if ( (v4 & 0x80u) != 0LL )
      break;
    if ( v2 == 1 )
      return 0LL;
  }
  return v1;
}
