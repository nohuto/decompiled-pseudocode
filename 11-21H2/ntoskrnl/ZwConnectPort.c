/*
 * XREFs of ZwConnectPort @ 0x14041CBA0
 * Callers:
 *     sub_14061E0F0 @ 0x14061E0F0 (sub_14061E0F0.c)
 *     sub_14083B480 @ 0x14083B480 (sub_14083B480.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, PortName);
}
