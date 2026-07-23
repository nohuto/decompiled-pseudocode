/*
 * XREFs of ObSetSecurityObjectByPointer @ 0x140724D30
 * Callers:
 *     sub_14041A13C @ 0x14041A13C (sub_14041A13C.c)
 *     NtSetSecurityObject @ 0x1406B57C0 (NtSetSecurityObject.c)
 *     sub_1406BCE90 @ 0x1406BCE90 (sub_1406BCE90.c)
 *     sub_1406E32E4 @ 0x1406E32E4 (sub_1406E32E4.c)
 *     sub_140724550 @ 0x140724550 (sub_140724550.c)
 *     IoCreateDeviceSecure @ 0x1407435E0 (IoCreateDeviceSecure.c)
 *     sub_14085B100 @ 0x14085B100 (sub_14085B100.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall ObSetSecurityObjectByPointer(__int64 a1)
{
  return sub_14042A5E0(a1, 0LL);
}
