/*
 * XREFs of IopAbortRequest @ 0x1409440E0
 * Callers:
 *     <none>
 * Callees:
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 */

void __fastcall IopAbortRequest(ULONG_PTR *a1)
{
  IopCompleteRequest(a1, (__int64)(a1 + 6), a1 + 7, a1 + 8, a1 + 9);
}
