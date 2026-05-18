/*
 * XREFs of sub_1800908D4 @ 0x1800908D4
 * Callers:
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 * Callees:
 *     sub_1800904AC @ 0x1800904AC (sub_1800904AC.c)
 */

__int64 __fastcall sub_1800908D4(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v3; // ax
  __int64 v4; // r8

  v3 = sub_1800904AC(a1, a2);
  return sub_1800908F8(a1, v3, v4);
}
