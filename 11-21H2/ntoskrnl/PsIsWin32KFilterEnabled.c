/*
 * XREFs of PsIsWin32KFilterEnabled @ 0x140240E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterEnabled()
{
  return (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2512LL) & 0x4000) != 0;
}
