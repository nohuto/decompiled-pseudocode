/*
 * XREFs of MiLookupDataTableEntry @ 0x1402136A0
 * Callers:
 *     MmProtectDriverSection @ 0x14036E870 (MmProtectDriverSection.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14039FF1C (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiReplaceImportEntry @ 0x14062C6B0 (MiReplaceImportEntry.c)
 *     MiShowBadMapper @ 0x1406310BC (MiShowBadMapper.c)
 *     MmWriteSystemImageTracepoint @ 0x14064336C (MmWriteSystemImageTracepoint.c)
 *     MiLogPinDriverAddress @ 0x1406ACDB8 (MiLogPinDriverAddress.c)
 *     MmIsDriverVerifyingByAddress @ 0x1406AD520 (MmIsDriverVerifyingByAddress.c)
 *     MmLockPagableDataSection @ 0x1406AD5B0 (MmLockPagableDataSection.c)
 *     MmPageEntireDriver @ 0x140700F50 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x14070106C (MiImagePagable.c)
 *     MmChangeImageProtection @ 0x140723E40 (MmChangeImageProtection.c)
 *     MmBackSystemImageWithPagefile @ 0x140871A9C (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x140A2D430 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140A2D540 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x140A30678 (MmGetSectionRange.c)
 *     MmGetImageRetpolineCodePage @ 0x140A345B0 (MmGetImageRetpolineCodePage.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x140A43EF8 (MiCheckVerifierFunctionsCfgState.c)
 *     MmMarkImageForHiberPhase @ 0x140AACF6C (MmMarkImageForHiberPhase.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE7FB0 (MmApplyVerifierToRunningImage.c)
 *     MmReapplyBootPatchImports @ 0x140B743BC (MmReapplyBootPatchImports.c)
 *     MmDiscardDriverSection @ 0x140B74914 (MmDiscardDriverSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402A7D8C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x1403399A0 (MmLockLoadedModuleListShared.c)
 */

_QWORD *__fastcall MiLookupDataTableEntry(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v5; // rax
  unsigned __int64 v6; // r8
  _QWORD *v7; // rbx
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 17;
  CurrentThread = 0LL;
  if ( a2 == 2 )
  {
    MmLockLoadedModuleListShared(&v9);
  }
  else if ( a2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v5 = (_QWORD *)BugCheckParameter3;
  if ( BugCheckParameter3 )
  {
    do
    {
      v6 = *(v5 - 23);
      if ( a1 > v6 + (unsigned int)(*((_DWORD *)v5 - 42) - 1) )
      {
        v5 = (_QWORD *)v5[1];
      }
      else
      {
        if ( a1 >= v6 )
          break;
        v5 = (_QWORD *)*v5;
      }
    }
    while ( v5 );
  }
  v7 = v5 - 29;
  if ( !v5 )
    v7 = 0LL;
  if ( a2 == 2 )
  {
    MmUnlockLoadedModuleListShared(v9);
  }
  else if ( a2 == 1 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread(CurrentThread);
  }
  return v7;
}
