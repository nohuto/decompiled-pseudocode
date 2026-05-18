/*
 * XREFs of sub_1800C8780 @ 0x1800C8780
 * Callers:
 *     sub_1800C91A0 @ 0x1800C91A0 (sub_1800C91A0.c)
 *     sub_1800D9000 @ 0x1800D9000 (sub_1800D9000.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 *__fastcall sub_1800C8780(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  v6 = v4;
  sub_18000E72C(&v6);
  return a1;
}
