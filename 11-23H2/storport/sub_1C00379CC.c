/*
 * XREFs of sub_1C00379CC @ 0x1C00379CC
 * Callers:
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00379CC(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rbx

  v1 = (struct _UNICODE_STRING *)(a1 + 5640);
  if ( IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a1 + 32), &stru_1C0089200, 0LL, (PUNICODE_STRING)(a1 + 5640)) >= 0
    && IoSetDeviceInterfaceState(v1, 1u) < 0 )
  {
    RtlFreeUnicodeString(v1);
  }
  return 0LL;
}
