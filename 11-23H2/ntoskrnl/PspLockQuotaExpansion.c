/*
 * XREFs of PspLockQuotaExpansion @ 0x1402084CC
 * Callers:
 *     PspReturnResourceQuota @ 0x140208380 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x140208400 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1403AEAB4 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x1405A40A8 (PspExpandLimit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall PspLockQuotaExpansion(__int64 a1, KIRQL *a2)
{
  KIRQL result; // al
  struct _KTHREAD *CurrentThread; // rax

  if ( *(_DWORD *)a1 )
  {
    result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
    *a2 = result;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    *a2 = 0;
    --CurrentThread->SpecialApcDisable;
    return ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  }
  return result;
}
