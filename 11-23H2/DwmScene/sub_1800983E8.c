/*
 * XREFs of sub_1800983E8 @ 0x1800983E8
 * Callers:
 *     sub_18009A430 @ 0x18009A430 (sub_18009A430.c)
 * Callees:
 *     sub_180098640 @ 0x180098640 (sub_180098640.c)
 *     sub_180098A10 @ 0x180098A10 (sub_180098A10.c)
 *     sub_18009B720 @ 0x18009B720 (sub_18009B720.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800983E8(_QWORD *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    sub_18009B720();
    v7 = a1;
    a1[1] = sub_180098640(*a3, *a4, *a1, a1);
    v7 = 0LL;
    sub_180098A10(&v7);
  }
}
