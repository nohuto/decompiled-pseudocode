/*
 * XREFs of ZwPropagationComplete @ 0x14041DF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwPropagationComplete(
        HANDLE ResourceManagerHandle,
        ULONG RequestCookie,
        ULONG BufferLength,
        PVOID Buffer)
{
  _disable();
  __readeflags();
  return sub_140433F80(ResourceManagerHandle, *(_QWORD *)&RequestCookie);
}
