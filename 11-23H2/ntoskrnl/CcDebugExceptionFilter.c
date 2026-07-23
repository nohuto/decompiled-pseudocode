/*
 * XREFs of CcDebugExceptionFilter @ 0x14040FCE8
 * Callers:
 *     CcWorkerThread @ 0x140298BD0 (CcWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x140539D8C (CcAsyncLazywriteWorker.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CcDebugExceptionFilter(ULONG_PTR *a1)
{
  KeBugCheckEx(0x34u, 0x51558uLL, *a1, a1[1], *(_QWORD *)(*a1 + 16));
}
