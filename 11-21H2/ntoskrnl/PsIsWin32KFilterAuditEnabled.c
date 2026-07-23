/*
 * XREFs of PsIsWin32KFilterAuditEnabled @ 0x14024AFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterAuditEnabled()
{
  return (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2512LL) & 0x8000) != 0;
}
