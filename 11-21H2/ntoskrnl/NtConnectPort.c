/*
 * XREFs of NtConnectPort @ 0x1406640A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140664220 @ 0x140664220 (sub_140664220.c)
 */

NTSTATUS __cdecl NtConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  return sub_140664220(
           (int)PortHandle,
           (int)PortName,
           (int)SecurityQos,
           (int)ClientView,
           0LL,
           (__int64)ServerView,
           (__int64)MaxMessageLength,
           (__int64)ConnectionInformation,
           (__int64)ConnectionInformationLength);
}
