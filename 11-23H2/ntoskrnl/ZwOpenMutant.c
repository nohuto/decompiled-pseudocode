/*
 * XREFs of ZwOpenMutant @ 0x14041D690
 * Callers:
 *     BiGetCurrentBcdMutantHandle @ 0x140805964 (BiGetCurrentBcdMutantHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenMutant(PHANDLE MutantHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
