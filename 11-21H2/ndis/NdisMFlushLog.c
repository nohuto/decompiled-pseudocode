/*
 * XREFs of NdisMFlushLog @ 0x1C006BC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMFlushLog(NDIS_HANDLE LogHandle)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)LogHandle + 1);
  *((_QWORD *)LogHandle + 4) = 0LL;
  *((_DWORD *)LogHandle + 7) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)LogHandle + 1, v2);
}
