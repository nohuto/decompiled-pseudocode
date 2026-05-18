/*
 * XREFs of sub_18003FF34 @ 0x18003FF34
 * Callers:
 *     sub_18004003C @ 0x18004003C (sub_18004003C.c)
 *     sub_18005FD9C @ 0x18005FD9C (sub_18005FD9C.c)
 *     sub_180064130 @ 0x180064130 (sub_180064130.c)
 *     sub_180064190 @ 0x180064190 (sub_180064190.c)
 * Callees:
 *     sub_18003F3D4 @ 0x18003F3D4 (sub_18003F3D4.c)
 */

__int64 __fastcall sub_18003FF34(void **a1)
{
  sub_18003F3D4((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_1800100E8(*a1, 0x38uLL);
}
