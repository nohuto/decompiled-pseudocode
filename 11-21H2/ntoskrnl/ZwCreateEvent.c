/*
 * XREFs of ZwCreateEvent @ 0x14041C060
 * Callers:
 *     sub_14061E550 @ 0x14061E550 (sub_14061E550.c)
 *     IoCreateNotificationEvent @ 0x1406EAB50 (IoCreateNotificationEvent.c)
 *     sub_14071489C @ 0x14071489C (sub_14071489C.c)
 *     sub_1408268AC @ 0x1408268AC (sub_1408268AC.c)
 *     sub_14082BE90 @ 0x14082BE90 (sub_14082BE90.c)
 *     sub_14082EA28 @ 0x14082EA28 (sub_14082EA28.c)
 *     sub_140847FF0 @ 0x140847FF0 (sub_140847FF0.c)
 *     sub_14084ED68 @ 0x14084ED68 (sub_14084ED68.c)
 *     sub_14085075C @ 0x14085075C (sub_14085075C.c)
 *     sub_1408615B8 @ 0x1408615B8 (sub_1408615B8.c)
 *     sub_1408624E8 @ 0x1408624E8 (sub_1408624E8.c)
 *     IoCreateSynchronizationEvent @ 0x140936240 (IoCreateSynchronizationEvent.c)
 *     sub_1409AC388 @ 0x1409AC388 (sub_1409AC388.c)
 *     sub_140A047F0 @ 0x140A047F0 (sub_140A047F0.c)
 *     sub_140A05110 @ 0x140A05110 (sub_140A05110.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return sub_140433F80(EventHandle, *(_QWORD *)&DesiredAccess);
}
