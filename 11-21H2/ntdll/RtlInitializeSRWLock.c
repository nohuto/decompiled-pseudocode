/*
 * XREFs of RtlInitializeSRWLock @ 0x180072630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlInitializeSRWLock(PRTL_SRWLOCK SRWLock)
{
  SRWLock->Value = 0LL;
}
