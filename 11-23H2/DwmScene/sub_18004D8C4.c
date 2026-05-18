/*
 * XREFs of sub_18004D8C4 @ 0x18004D8C4
 * Callers:
 *     sub_18004EA28 @ 0x18004EA28 (sub_18004EA28.c)
 *     sub_18004FBD8 @ 0x18004FBD8 (sub_18004FBD8.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_18005FB48 @ 0x18005FB48 (sub_18005FB48.c)
 *     sub_18005FCC0 @ 0x18005FCC0 (sub_18005FCC0.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_18007C338 @ 0x18007C338 (sub_18007C338.c)
 *     sub_18007CD0C @ 0x18007CD0C (sub_18007CD0C.c)
 *     sub_18007D310 @ 0x18007D310 (sub_18007D310.c)
 *     sub_18007D430 @ 0x18007D430 (sub_18007D430.c)
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 *     sub_18008D684 @ 0x18008D684 (sub_18008D684.c)
 *     sub_180098B8C @ 0x180098B8C (sub_180098B8C.c)
 * Callees:
 *     sub_18004DA34 @ 0x18004DA34 (sub_18004DA34.c)
 */

__int64 __fastcall sub_18004D8C4(void **a1, __int64 a2)
{
  sub_18004DA34(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_1800100E8(*a1, 0x40uLL);
}
