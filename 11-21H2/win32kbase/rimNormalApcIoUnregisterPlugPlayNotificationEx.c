/*
 * XREFs of rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C0049690
 * Callers:
 *     <none>
 * Callees:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C004949C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 */

LONG_PTR __fastcall rimNormalApcIoUnregisterPlugPlayNotificationEx(__int64 a1)
{
  return rimApcIoUnregisterPlugPlayNotificationExWorker((_QWORD *)(a1 - 88));
}
