/*
 * XREFs of PsGetWin32KFilterSet @ 0x14034DEA0
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return LODWORD(KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[20]);
}
