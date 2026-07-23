/*
 * XREFs of PsGetProcessCreateTimeQuadPart @ 0x140239F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONGLONG __stdcall PsGetProcessCreateTimeQuadPart(PEPROCESS Process)
{
  return *((_QWORD *)Process + 141);
}
