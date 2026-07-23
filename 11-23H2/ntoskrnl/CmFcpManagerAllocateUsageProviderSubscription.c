/*
 * XREFs of CmFcpManagerAllocateUsageProviderSubscription @ 0x14067FB9C
 * Callers:
 *     CmFcManagerRegisterFeatureUsageProvider @ 0x14067F798 (CmFcManagerRegisterFeatureUsageProvider.c)
 * Callees:
 *     CmFcpInitializeFeatureUsageProviderSubscription @ 0x14067FAA8 (CmFcpInitializeFeatureUsageProviderSubscription.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

int *__fastcall CmFcpManagerAllocateUsageProviderSubscription(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int32 v5; // eax
  int *Pool2; // rbx

  if ( byte_140C14132 )
  {
    Pool2 = (int *)ExAllocatePool2(64LL, 120LL, 1665559875LL);
    if ( !Pool2 )
      return Pool2;
LABEL_6:
    CmFcpInitializeFeatureUsageProviderSubscription((__int64)Pool2, a2, a2, a3);
    return Pool2;
  }
  v5 = _InterlockedIncrement(&dword_140C144D0);
  if ( v5 <= 3 )
  {
    Pool2 = &dword_140C14368[30 * v5 - 30];
    goto LABEL_6;
  }
  return 0LL;
}
