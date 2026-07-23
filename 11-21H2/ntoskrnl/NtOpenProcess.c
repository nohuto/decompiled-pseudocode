/*
 * XREFs of NtOpenProcess @ 0x140727770
 * Callers:
 *     sub_140987E44 @ 0x140987E44 (sub_140987E44.c)
 * Callees:
 *     sub_1407292A0 @ 0x1407292A0 (sub_1407292A0.c)
 */

NTSTATUS __stdcall NtOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  char v5; // [rsp+20h] [rbp-18h]

  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  return sub_1407292A0((_DWORD)ProcessHandle, DesiredAccess, (_DWORD)ObjectAttributes, (_DWORD)ClientId, v5, v5);
}
