/*
 * XREFs of TmCommitComplete @ 0x1403D83F0
 * Callers:
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmCommitComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmCommitComplete(Enlistment, TmVirtualClock);
}
