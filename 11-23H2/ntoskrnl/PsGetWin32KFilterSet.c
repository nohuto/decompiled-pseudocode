/*
 * XREFs of PsGetWin32KFilterSet @ 0x14034E040
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return LODWORD(KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[20]);
}
