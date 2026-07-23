/*
 * XREFs of RtlFlsAlloc @ 0x180074810
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFlsAlloc @ 0x180074830 (RtlpFlsAlloc.c)
 */

NTSTATUS __cdecl RtlFlsAlloc(PFLS_CALLBACK_FUNCTION Callback, PULONG FlsIndex)
{
  __int64 v2; // r9

  return RtlpFlsAlloc((_DWORD)Callback, (_DWORD)FlsIndex, (_DWORD)Callback, v2);
}
