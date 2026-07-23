/*
 * XREFs of ZwCreateKeyedEvent @ 0x14041BD40
 * Callers:
 *     ExpKeyedEventInitialization @ 0x140B6ECCC (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateKeyedEvent(
        PHANDLE KeyedEventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyedEventHandle);
}
