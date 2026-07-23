/*
 * XREFs of TmReferenceEnlistmentKey @ 0x1403D88B0
 * Callers:
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmReferenceEnlistmentKey(PKENLISTMENT Enlistment, PVOID *Key)
{
  return __imp_TmReferenceEnlistmentKey(Enlistment, Key);
}
