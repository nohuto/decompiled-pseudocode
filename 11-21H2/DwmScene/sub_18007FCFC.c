/*
 * XREFs of sub_18007FCFC @ 0x18007FCFC
 * Callers:
 *     sub_18002D020 @ 0x18002D020 (sub_18002D020.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18007FC68 @ 0x18007FC68 (sub_18007FC68.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall sub_18007FCFC(void *a1)
{
  memset(a1, 0, 0xC8uLL);
  sub_18007FC68((__int64)a1);
  sub_18007FC68((__int64)a1 + 200);
  return a1;
}
