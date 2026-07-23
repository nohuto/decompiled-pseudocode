/*
 * XREFs of CmFcpInitializeFeatureUsageProviderSubscription @ 0x14067FAA8
 * Callers:
 *     CmFcpManagerAllocateUsageProviderSubscription @ 0x14067FB9C (CmFcpManagerAllocateUsageProviderSubscription.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     MmIsSessionAddress @ 0x1402BCA70 (MmIsSessionAddress.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 *__fastcall CmFcpInitializeFeatureUsageProviderSubscription(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *result; // rax

  memset((void *)a1, 0, 0x78uLL);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 32) = CmpWorkItemWrapper;
  *(_QWORD *)(a1 + 64) = CmFcpFeatureUsageProviderSubscriptionWrapper;
  *(_QWORD *)(a1 + 40) = a1 + 16;
  *(_DWORD *)(a1 + 60) = 4;
  *(_QWORD *)(a1 + 72) = a4;
  if ( MmIsSessionAddress(a3) )
  {
    *(_DWORD *)(a1 + 96) |= 1u;
    *(_DWORD *)(a1 + 100) = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  *(_QWORD *)(a1 + 112) = 0LL;
  result = CmFcSystemManager;
  *(_QWORD *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 88) = CmFcSystemManager;
  return result;
}
