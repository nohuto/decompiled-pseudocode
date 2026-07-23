/*
 * XREFs of AlpcRegisterCompletionListWorkerThread @ 0x180080A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl AlpcRegisterCompletionListWorkerThread(PVOID CompletionList)
{
  signed __int64 v1; // r8

  while ( HIWORD(*((_QWORD *)CompletionList + 8)) != 0xFFFFLL )
  {
    v1 = *((_QWORD *)CompletionList + 8);
    if ( v1 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)CompletionList + 8,
                 v1 & 0xFFFFFFFFFFFFLL | ((v1 & 0xFFFF000000000000uLL) + 0x1000000000000LL),
                 v1) )
      return 1;
  }
  return 0;
}
