/*
 * XREFs of RtlInitializeHeapManager @ 0x1800B0C34
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18001DA80 (RtlInitializeCriticalSectionEx.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x18002EA94 (RtlpHeapGenerateRandomValue64.c)
 *     RtlIsProcessorFeaturePresent @ 0x180034840 (RtlIsProcessorFeaturePresent.c)
 *     SbSelectProcedure @ 0x18004E920 (SbSelectProcedure.c)
 *     RtlGetSuiteMask @ 0x1800504F0 (RtlGetSuiteMask.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpHpInitializePerfPolicies @ 0x1800B0F0E (RtlpHpInitializePerfPolicies.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800FF8E8 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlpHpOverrideGCInterval @ 0x1800FFC1C (RtlpHpOverrideGCInterval.c)
 *     RtlpGetModifiedProcessCookie @ 0x180114E38 (RtlpGetModifiedProcessCookie.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1801186A4 (RtlpInitializeLowFragHeapManager.c)
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

  memset(&RtlpHpHeapGlobals, 0, 0x40uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  qword_18017AC08 = RtlpHeapGenerateRandomValue64();
  qword_18017AC10 = (__int64)&RtlpHeapFailureInfo;
  v2 = RtlIsProcessorFeaturePresent(0x2Au) == 0;
  v3 = qword_18017AC38;
  if ( !v2 )
    v3 = qword_18017AC38 | 1;
  LODWORD(qword_18017AC38) = v3 | 2;
  v4 = NtCurrentPeb();
  v10 = 0;
  if ( (RtlpLowFragHeapGlobalFlags & 0x10) != 0 || (unsigned int)RtlpHpOptIntoSegmentHeap(a1, &v10) )
  {
    RtlpHpHeapFeatures |= 1u;
    v5 = (void (*)(void))qword_18017B618;
    if ( qword_18017B618
      || (v5 = (void (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 1u),
          (qword_18017B618 = (__int64)v5) != 0) )
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
