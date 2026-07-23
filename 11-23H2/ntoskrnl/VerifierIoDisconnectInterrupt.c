/*
 * XREFs of VerifierIoDisconnectInterrupt @ 0x140AE4910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall VerifierIoDisconnectInterrupt(__int64 a1)
{
  void *v1; // rbx

  v1 = 0LL;
  if ( (VfRuleClasses & 0x800) != 0 && ViCtxInitializedIsrStateBlocks )
    v1 = *(void **)(a1 + 48);
  ((void (*)(void))pXdvIoDisconnectInterrupt)();
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
