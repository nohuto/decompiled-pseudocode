/*
 * XREFs of sub_1C0037944 @ 0x1C0037944
 * Callers:
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 * Callees:
 *     sub_1C003EBBC @ 0x1C003EBBC (sub_1C003EBBC.c)
 */

__int64 __fastcall sub_1C0037944(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rdi
  NTSTATUS v3; // ebx

  v1 = (struct _UNICODE_STRING *)(a1 + 5944);
  v3 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a1 + 32), &stru_1C0088E58, 0LL, (PUNICODE_STRING)(a1 + 5944));
  if ( v3 >= 0 )
  {
    v3 = IoSetDeviceInterfaceState(v1, 1u);
    if ( v3 < 0 )
      RtlFreeUnicodeString(v1);
  }
  sub_1C003EBBC(a1, (unsigned int)v3);
  return (unsigned int)v3;
}
