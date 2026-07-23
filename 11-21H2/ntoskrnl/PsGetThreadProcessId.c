/*
 * XREFs of PsGetThreadProcessId @ 0x1402485D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadProcessId(PETHREAD Thread)
{
  return (HANDLE)*((_QWORD *)Thread + 153);
}
