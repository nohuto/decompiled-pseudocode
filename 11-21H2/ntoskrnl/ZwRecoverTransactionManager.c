/*
 * XREFs of ZwRecoverTransactionManager @ 0x14041E600
 * Callers:
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(TransactionManagerHandle, v1);
}
