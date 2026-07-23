/*
 * XREFs of PsIsThreadTerminating @ 0x1402949E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *((_DWORD *)Thread + 344) & 1;
}
