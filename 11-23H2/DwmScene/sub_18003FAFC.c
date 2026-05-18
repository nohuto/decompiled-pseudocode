/*
 * XREFs of sub_18003FAFC @ 0x18003FAFC
 * Callers:
 *     sub_18003F260 @ 0x18003F260 (sub_18003F260.c)
 *     sub_18003F644 @ 0x18003F644 (sub_18003F644.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003FAFC(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  a1[1] = sub_18001C190();
  return a1;
}
