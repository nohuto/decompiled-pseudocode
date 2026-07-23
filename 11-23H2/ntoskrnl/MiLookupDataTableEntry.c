/*
 * XREFs of MiLookupDataTableEntry @ 0x1402136A0
 * Callers:
 *     MmProtectDriverSection @ 0x14036EA10 (MmProtectDriverSection.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403A00FC (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiReplaceImportEntry @ 0x14062CC00 (MiReplaceImportEntry.c)
 *     MiShowBadMapper @ 0x14063160C (MiShowBadMapper.c)
 *     MmWriteSystemImageTracepoint @ 0x1406438BC (MmWriteSystemImageTracepoint.c)
 *     MiLogPinDriverAddress @ 0x1406ACDB8 (MiLogPinDriverAddress.c)
 *     MmIsDriverVerifyingByAddress @ 0x1406AD550 (MmIsDriverVerifyingByAddress.c)
 *     MmLockPagableDataSection @ 0x1406AD5E0 (MmLockPagableDataSection.c)
 *     MmPageEntireDriver @ 0x140701160 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x14070127C (MiImagePagable.c)
 *     MmChangeImageProtection @ 0x140724040 (MmChangeImageProtection.c)
 *     MmBackSystemImageWithPagefile @ 0x140871CDC (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x140A2D6E0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140A2D7F0 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x140A30928 (MmGetSectionRange.c)
 *     MmGetImageRetpolineCodePage @ 0x140A34860 (MmGetImageRetpolineCodePage.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x140A441A8 (MiCheckVerifierFunctionsCfgState.c)
 *     MmMarkImageForHiberPhase @ 0x140AACDDC (MmMarkImageForHiberPhase.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE7FA0 (MmApplyVerifierToRunningImage.c)
 *     MmReapplyBootPatchImports @ 0x140B743BC (MmReapplyBootPatchImports.c)
 *     MmDiscardDriverSection @ 0x140B74914 (MmDiscardDriverSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402A801C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140339C30 (MmLockLoadedModuleListShared.c)
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
