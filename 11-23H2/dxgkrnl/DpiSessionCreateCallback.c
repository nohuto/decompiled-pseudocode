/*
 * XREFs of DpiSessionCreateCallback @ 0x1C01EAE28
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C01EAD20 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     DpiFdoStartAdapterThread @ 0x1C0218580 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0225820 (DpiLdaValidateSystemChainStatus.c)
 */

__int64 DpiSessionCreateCallback()
{
  unsigned int v0; // ebx
  NTSTATUS v2; // eax

  v0 = 0;
  if ( !_InterlockedCompareExchange(&dword_1C01404A0, 1, 0) )
  {
    v2 = KeWaitForSingleObject(&stru_1C01404E8, Executive, 0, 0, 0LL);
    v0 = v2;
    if ( v2 )
    {
      WdLogSingleEntry1(2LL, v2);
      v0 = 0;
    }
    DpiFdoStartAdapterThread(0LL);
    DpiLdaValidateSystemChainStatus();
    _InterlockedExchange(&dword_1C01404A0, 2);
  }
  return v0;
}
