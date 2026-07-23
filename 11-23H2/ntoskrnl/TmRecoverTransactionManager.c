/*
 * XREFs of TmRecoverTransactionManager @ 0x1403D8890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRecoverTransactionManager(PKTM Tm, PLARGE_INTEGER TargetVirtualClock)
{
  return __imp_TmRecoverTransactionManager(Tm, TargetVirtualClock);
}
