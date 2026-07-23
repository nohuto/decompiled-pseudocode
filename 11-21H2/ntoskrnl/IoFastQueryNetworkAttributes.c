/*
 * XREFs of IoFastQueryNetworkAttributes @ 0x1409363D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140936A54 @ 0x140936A54 (sub_140936A54.c)
 */

BOOLEAN __stdcall IoFastQueryNetworkAttributes(
        POBJECT_ATTRIBUTES ObjectAttributes,
        ACCESS_MASK DesiredAccess,
        ULONG OpenOptions,
        PIO_STATUS_BLOCK IoStatus,
        PFILE_NETWORK_OPEN_INFORMATION Buffer)
{
  ULONG v5; // r10d

  v5 = OpenOptions;
  LOBYTE(OpenOptions) = *((_BYTE *)KeGetCurrentThread() + 562);
  return sub_140936A54(ObjectAttributes, DesiredAccess, OpenOptions, v5, IoStatus, Buffer);
}
