/*
 * XREFs of sub_18002B35C @ 0x18002B35C
 * Callers:
 *     sub_18002B730 @ 0x18002B730 (sub_18002B730.c)
 * Callees:
 *     sub_18002A8E4 @ 0x18002A8E4 (sub_18002A8E4.c)
 *     sub_18002A910 @ 0x18002A910 (sub_18002A910.c)
 *     sub_18002B890 @ 0x18002B890 (sub_18002B890.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002B35C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // r9
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+40h] [rbp+8h]

  v7 = (char)a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  v6[0] = a1;
  *a1 = sub_18002A8E4();
  sub_18002A910(a1, a2, v7, v4);
  v6[1] = 0LL;
  sub_18002B890(v6);
  return a1;
}
