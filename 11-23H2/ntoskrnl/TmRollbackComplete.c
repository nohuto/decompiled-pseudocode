/*
 * XREFs of TmRollbackComplete @ 0x1403D8910
 * Callers:
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRollbackComplete(Enlistment, TmVirtualClock);
}
