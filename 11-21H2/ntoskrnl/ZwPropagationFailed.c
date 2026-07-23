/*
 * XREFs of ZwPropagationFailed @ 0x14041DFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwPropagationFailed(HANDLE ResourceManagerHandle, ULONG RequestCookie, NTSTATUS PropStatus)
{
  _disable();
  __readeflags();
  return sub_140433F80(ResourceManagerHandle, *(_QWORD *)&RequestCookie);
}
