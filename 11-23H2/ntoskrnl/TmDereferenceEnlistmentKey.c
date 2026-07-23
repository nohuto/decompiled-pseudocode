/*
 * XREFs of TmDereferenceEnlistmentKey @ 0x1403D8670
 * Callers:
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmDereferenceEnlistmentKey(PKENLISTMENT Enlistment, PBOOLEAN LastReference)
{
  return __imp_TmDereferenceEnlistmentKey(Enlistment, LastReference);
}
