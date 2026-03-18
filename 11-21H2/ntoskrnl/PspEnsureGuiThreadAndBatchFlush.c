/*
 * XREFs of PspEnsureGuiThreadAndBatchFlush @ 0x140659774
 * Callers:
 *     PsSyscallProviderDispatch @ 0x1406593C0 (PsSyscallProviderDispatch.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1406BC9D0 (PsConvertToGuiThread.c)
 *     PsInvokeWin32Callout @ 0x1406F83A0 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspEnsureGuiThreadAndBatchFlush(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 120) & 0x200080) == 0 && (int)PsConvertToGuiThread() < 0 )
    return 3221225473LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 240) + 5952LL) )
    PsInvokeWin32Callout(7LL, 0LL, 0LL, 0LL);
  return 0LL;
}
