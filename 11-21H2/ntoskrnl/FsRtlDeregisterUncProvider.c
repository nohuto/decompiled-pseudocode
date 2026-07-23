/*
 * XREFs of FsRtlDeregisterUncProvider @ 0x14092E1B0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 */

void __stdcall FsRtlDeregisterUncProvider(HANDLE Handle)
{
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL && ZwClose(Handle) >= 0 )
  {
    KeWaitForSingleObject(&stru_140C48B40, Executive, 0, 0, 0LL);
    --dword_140D3B1D4;
    KeReleaseSemaphore(&stru_140C48B40, 0, 1, 0);
  }
}
