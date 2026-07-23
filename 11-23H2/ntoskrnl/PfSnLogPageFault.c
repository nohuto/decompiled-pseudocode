/*
 * XREFs of PfSnLogPageFault @ 0x1402E27A0
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x140267AF0 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E30E0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x14034605C (MiMakeSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x1406ABDA0 (MiLogRelocationRva.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     PfSnReferenceProcessTrace @ 0x1402E2844 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x140313588 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x1403569FC (PfSnCheckLoggingForThread.c)
 */

void __fastcall PfSnLogPageFault(__int64 a1, int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx

  if ( (a3 & 4) == 0 || !*(_QWORD *)(a1 + 32) )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
    v8 = (struct _EX_RUNDOWN_REF *)v7;
    if ( v7 )
    {
      if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v7, a3) )
        PfSnLogPageFaultCommon((_DWORD)v8, a1, *(_QWORD *)(a1 + 24), a2, a3);
      ExReleaseRundownProtection_0(v8 + 45);
    }
  }
}
