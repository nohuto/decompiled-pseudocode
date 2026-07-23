/*
 * XREFs of PsGetWin32KFilterSet @ 0x140233410
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return *(unsigned int *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2408LL);
}
