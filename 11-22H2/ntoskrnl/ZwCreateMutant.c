/*
 * XREFs of ZwCreateMutant @ 0x14041BDA0
 * Callers:
 *     BcdInitializeBcdSyncMutant @ 0x140B76138 (BcdInitializeBcdSyncMutant.c)
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
