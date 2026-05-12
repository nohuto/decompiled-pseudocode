/*
 * XREFs of sub_1C0037A30 @ 0x1C0037A30
 * Callers:
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1C0037A30(__int64 a1)
{
  NTSTATUS v1; // ebx
  struct _UNICODE_STRING *v2; // rdi
  NTSTATUS result; // eax

  v1 = 0;
  if ( *(_DWORD *)(a1 + 5488) )
  {
    v2 = (struct _UNICODE_STRING *)(a1 + 5472);
    result = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a1 + 32), &stru_1C00898C8, 0LL, (PUNICODE_STRING)(a1 + 5472));
    if ( result < 0 )
      return result;
    v1 = IoSetDeviceInterfaceState(v2, 1u);
    if ( v1 < 0 )
      RtlFreeUnicodeString(v2);
  }
  return v1;
}
