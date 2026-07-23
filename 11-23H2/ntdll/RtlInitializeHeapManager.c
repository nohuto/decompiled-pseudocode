/*
 * XREFs of RtlInitializeHeapManager @ 0x1800B0588
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x18002C130 (RtlIsProcessorFeaturePresent.c)
 *     SbSelectProcedure @ 0x18002F1C0 (SbSelectProcedure.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x1800455D0 (RtlpHeapGenerateRandomValue64.c)
 *     RtlGetSuiteMask @ 0x18004A400 (RtlGetSuiteMask.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005CDF0 (RtlInitializeCriticalSectionEx.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpHpInitializePerfPolicies @ 0x1800B0978 (RtlpHpInitializePerfPolicies.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800B0FC8 (RtlpGetModifiedProcessCookie.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800B1180 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x180100924 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlpHpOverrideGCInterval @ 0x180100C58 (RtlpHpOverrideGCInterval.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlInitializeHeapManager(__int64 a1)
{
  bool v2; // zf
  int v3; // eax
  struct _PEB *v4; // rdi
  void (*v5)(void); // rax
  int v6; // eax
  int v7; // ecx
  char v8; // al
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  memset_thunk_772440563353939046(&RtlpHpHeapGlobals, 0, 0x40uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  qword_180187F48 = RtlpHeapGenerateRandomValue64();
  qword_180187F50 = (__int64)&RtlpHeapFailureInfo;
  v2 = RtlIsProcessorFeaturePresent(0x2Au) == 0;
  v3 = qword_180187F78;
  if ( !v2 )
    v3 = qword_180187F78 | 1;
  LODWORD(qword_180187F78) = v3 | 2;
  v4 = NtCurrentPeb();
  v10 = 0;
  if ( (RtlpLowFragHeapGlobalFlags & 0x10) != 0 || (unsigned int)RtlpHpOptIntoSegmentHeap(a1, &v10) )
  {
    RtlpHpHeapFeatures |= 1u;
    v5 = (void (*)(void))qword_180188988;
    if ( qword_180188988
      || (v5 = (void (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 1u),
          (qword_180188988 = (__int64)v5) != 0) )
    {
      v5();
    }
  }
  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
  {
    RtlpHpGCInterval.QuadPart = -10000000LL;
    RtlpHpOverrideGCInterval(a1);
  }
  RtlpHpInitializePerfPolicies(v10);
  if ( (RtlpLowFragHeapGlobalFlags & 8) != 0 )
    RtlpHpHeapFeatures &= ~1u;
  RtlpDisableBreakOnFailureCookie = RtlpGetModifiedProcessCookie();
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100000) != 0 )
  {
    v6 = RtlpHeapErrorHandlerThreshold;
    if ( RtlpHeapErrorHandlerThreshold <= 1 )
      v6 = 2;
    v7 = 0;
    RtlpHeapErrorHandlerThreshold = v6;
  }
  else
  {
    v7 = RtlpDisableBreakOnFailureCookie;
  }
  v8 = RtlpDisableHeapLookaside & 1;
  v4->MaximumNumberOfHeaps = 16;
  v4->NumberOfHeaps = 0;
  RtlpDisableBreakOnFailureCookie = v8 != 0 ? v7 : 0;
  v4->ProcessHeaps = (void **)&RtlpProcessHeapsListBuffer;
  RtlInitializeCriticalSectionEx(&RtlpProcessHeapsListLock, 0, 0x10000000u);
  RtlpHeapKey = RtlpHeapGenerateRandomValue64();
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 4u;
    RtlpLargestLfhBlock = 1024LL;
  }
  RtlpInitializeLowFragHeapManager();
  return RtlHpInitializeHeapManager();
}
