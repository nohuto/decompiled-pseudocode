/*
 * XREFs of VfPendingStartLogging @ 0x140AD1BB8
 * Callers:
 *     IovpCallDriver1 @ 0x140ACC190 (IovpCallDriver1.c)
 *     IovpCompleteRequest1 @ 0x140ACC9EC (IovpCompleteRequest1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfPendingStartLogging(__int64 a1)
{
  _QWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  if ( !VfForcedPendingLog )
    return 0LL;
  result = (_QWORD *)(VfForcedPendingLog
                    + ((unsigned __int64)(_InterlockedIncrement(&VfForcedPendingIrps) & (unsigned int)(VfForcedPendingLogLength - 1)) << 9));
  *result = a1;
  CurrentThread = KeGetCurrentThread();
  result[2] = 0LL;
  result[1] = CurrentThread;
  return result;
}
