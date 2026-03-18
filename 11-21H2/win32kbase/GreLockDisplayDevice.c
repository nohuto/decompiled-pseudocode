/*
 * XREFs of GreLockDisplayDevice @ 0x1C006FE40
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006FB60 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0074F80 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0075534 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0078988 (DrvNotifyModeChangeStartStop.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0079180 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall GreLockDisplayDevice(__int64 a1)
{
  EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *(_QWORD *)(a1 + 48), 11LL);
}
