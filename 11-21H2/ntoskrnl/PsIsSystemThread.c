/*
 * XREFs of PsIsSystemThread @ 0x140239F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (*((_DWORD *)Thread + 29) & 0x400) != 0;
}
