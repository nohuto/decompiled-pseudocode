/*
 * XREFs of KeQueryRuntimeThread @ 0x140389F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryRuntimeThread(PKTHREAD Thread, PULONG UserTime)
{
  *UserTime = *((_DWORD *)Thread + 183);
  return *((_DWORD *)Thread + 163);
}
