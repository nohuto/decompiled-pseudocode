/*
 * XREFs of sub_1C00378CC @ 0x1C00378CC
 * Callers:
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 * Callees:
 *     sub_1C00352F0 @ 0x1C00352F0 (sub_1C00352F0.c)
 */

__int64 __fastcall sub_1C00378CC(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rbx

  v1 = (struct _UNICODE_STRING *)(a1 + 1912);
  if ( IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a1 + 32), &stru_1C00898B8, 0LL, (PUNICODE_STRING)(a1 + 1912)) >= 0
    && IoSetDeviceInterfaceState(v1, 1u) < 0 )
  {
    RtlFreeUnicodeString(v1);
  }
  sub_1C00352F0(a1);
  return 0LL;
}
