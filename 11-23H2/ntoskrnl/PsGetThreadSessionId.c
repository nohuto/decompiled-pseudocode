/*
 * XREFs of PsGetThreadSessionId @ 0x140724BE0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionId @ 0x1402A3ED0 (MmGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return MmGetSessionId(*(_QWORD *)(a1 + 544));
}
