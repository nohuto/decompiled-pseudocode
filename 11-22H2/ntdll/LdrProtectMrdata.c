/*
 * XREFs of LdrProtectMrdata @ 0x180032FA0
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x18002C31C (RtlInsertInvertedFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180071CC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180072210 (RtlAddGrowableFunctionTable.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x1800736E4 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlpCallVectoredHandlers @ 0x1800779F8 (RtlpCallVectoredHandlers.c)
 *     LdrpGetShimEngineInterface @ 0x180079438 (LdrpGetShimEngineInterface.c)
 *     RtlInitializeHistoryTable @ 0x18007BB84 (RtlInitializeHistoryTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081A04 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180082860 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180084410 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x1800854A0 (RtlpRemoveVectoredHandler.c)
 *     LdrpLoadWow64 @ 0x180085D20 (LdrpLoadWow64.c)
 *     RtlDeleteFunctionTable @ 0x18008C490 (RtlDeleteFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18008C840 (RtlInstallFunctionTableCallback.c)
 *     RtlInitializeNtUserPfn @ 0x18008E4E0 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x18008E600 (RtlResetNtUserPfn.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD970 (LdrpInitializeExceptionTable.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 *     RtlAddFunctionTable @ 0x1800EB1E0 (RtlAddFunctionTable.c)
 * Callees:
 *     LdrpChangeMrdataProtection @ 0x180032F34 (LdrpChangeMrdataProtection.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
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
      LdrpChangeMrdataProtection(4u);
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
    LdrpChangeMrdataProtection(2u);
LABEL_6:
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
