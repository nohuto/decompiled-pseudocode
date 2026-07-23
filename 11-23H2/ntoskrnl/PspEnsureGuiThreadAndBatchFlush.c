/*
 * XREFs of PspEnsureGuiThreadAndBatchFlush @ 0x1409B4DA8
 * Callers:
 *     PsSyscallProviderDispatch @ 0x1409B48A0 (PsSyscallProviderDispatch.c)
 * Callees:
 *     PsInvokeWin32Callout @ 0x1406AF880 (PsInvokeWin32Callout.c)
 *     PsConvertToGuiThread @ 0x1407C6560 (PsConvertToGuiThread.c)
 */

__int64 __fastcall PspEnsureGuiThreadAndBatchFlush(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 120) & 0x200080) == 0 && (int)PsConvertToGuiThread() < 0 )
    return 3221225473LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 240) + 5952LL) )
    PsInvokeWin32Callout(7, 0LL, 0, 0LL);
  return 0LL;
}
