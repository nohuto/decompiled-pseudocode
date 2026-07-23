/*
 * XREFs of ZwCreateMutant @ 0x14041C7F0
 * Callers:
 *     BcdInitializeBcdSyncMutant @ 0x140B752A8 (BcdInitializeBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
