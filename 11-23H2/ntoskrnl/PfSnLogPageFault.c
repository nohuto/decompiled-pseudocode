/*
 * XREFs of PfSnLogPageFault @ 0x1402E2510
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x140267860 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E2E50 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x140345DCC (MiMakeSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x1406ABDA0 (MiLogRelocationRva.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 *     PfSnReferenceProcessTrace @ 0x1402E25B4 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x1403132F8 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x14035685C (PfSnCheckLoggingForThread.c)
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
