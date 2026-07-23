/*
 * XREFs of LdrProtectMrdata @ 0x18001C904
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x18003449C (RtlInsertInvertedFunctionTable.c)
 *     LdrpGetShimEngineInterface @ 0x180072C90 (LdrpGetShimEngineInterface.c)
 *     RtlDeleteFunctionTable @ 0x1800775B0 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180077780 (RtlAddFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800779E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180077F10 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x1800781D0 (RtlAddGrowableFunctionTable.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x18007A58C (RtlxRemoveInvertedFunctionTable.c)
 *     RtlpCallVectoredHandlers @ 0x18007C918 (RtlpCallVectoredHandlers.c)
 *     RtlInitializeHistoryTable @ 0x1800809AC (RtlInitializeHistoryTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180087700 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180087D70 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180088BC0 (RtlpRemoveVectoredHandler.c)
 *     LdrpLoadWow64 @ 0x180089F1C (LdrpLoadWow64.c)
 *     RtlInitializeNtUserPfn @ 0x180093590 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x1800936B0 (RtlResetNtUserPfn.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD1F0 (LdrpInitializeExceptionTable.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD27C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrpChangeMrdataProtection @ 0x18001C980 (LdrpChangeMrdataProtection.c)
 */

void __fastcall LdrProtectMrdata(int a1)
{
  int ScpCfgCheckESFunction; // edi

  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  ScpCfgCheckESFunction = LdrSystemDllInitBlock.ScpCfgCheckESFunction;
  if ( !a1 )
  {
    if ( !LODWORD(LdrSystemDllInitBlock.ScpCfgCheckESFunction) )
    {
      LdrpChangeMrdataProtection(4LL);
LABEL_5:
      LODWORD(LdrSystemDllInitBlock.ScpCfgCheckESFunction) = ScpCfgCheckESFunction + 1;
      goto LABEL_6;
    }
    if ( LODWORD(LdrSystemDllInitBlock.ScpCfgCheckESFunction) != -1 )
      goto LABEL_5;
LABEL_10:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  if ( !LODWORD(LdrSystemDllInitBlock.ScpCfgCheckESFunction) )
    goto LABEL_10;
  --LODWORD(LdrSystemDllInitBlock.ScpCfgCheckESFunction);
  if ( ScpCfgCheckESFunction == 1 )
    LdrpChangeMrdataProtection(2LL);
LABEL_6:
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
