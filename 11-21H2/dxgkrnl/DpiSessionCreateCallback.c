/*
 * XREFs of DpiSessionCreateCallback @ 0x1C0160D20
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C0160C10 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     DpiFdoStartAdapterThread @ 0x1C01F4EF0 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0219C24 (DpiLdaValidateSystemChainStatus.c)
 */

__int64 DpiSessionCreateCallback()
{
  unsigned int v0; // ebx
  NTSTATUS v2; // eax

  v0 = 0;
  if ( !_InterlockedCompareExchange(&dword_1C01304A0, 1, 0) )
  {
    v2 = KeWaitForSingleObject(&stru_1C01304E8, Executive, 0, 0, 0LL);
    v0 = v2;
    if ( v2 )
    {
      WdLogSingleEntry1(2LL, v2);
      v0 = 0;
    }
    DpiFdoStartAdapterThread(0LL);
    DpiLdaValidateSystemChainStatus();
    _InterlockedExchange(&dword_1C01304A0, 2);
  }
  return v0;
}
