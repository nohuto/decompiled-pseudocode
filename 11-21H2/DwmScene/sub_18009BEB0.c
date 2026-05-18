/*
 * XREFs of sub_18009BEB0 @ 0x18009BEB0
 * Callers:
 *     sub_18009BF94 @ 0x18009BF94 (sub_18009BF94.c)
 * Callees:
 *     sub_180017240 @ 0x180017240 (sub_180017240.c)
 *     sub_180020524 @ 0x180020524 (sub_180020524.c)
 *     sub_18004F498 @ 0x18004F498 (sub_18004F498.c)
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 *     sub_18004F8C8 @ 0x18004F8C8 (sub_18004F8C8.c)
 *     sub_18004FA18 @ 0x18004FA18 (sub_18004FA18.c)
 *     sub_18004FCA0 @ 0x18004FCA0 (sub_18004FCA0.c)
 *     sub_18004FD34 @ 0x18004FD34 (sub_18004FD34.c)
 *     sub_18004FFB4 @ 0x18004FFB4 (sub_18004FFB4.c)
 *     sub_180091870 @ 0x180091870 (sub_180091870.c)
 *     sub_18009187C @ 0x18009187C (sub_18009187C.c)
 */

__int64 *__fastcall sub_18009BEB0(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 *v9; // r8

  sub_180017240(a2, a1);
  sub_18004F498(*a1, (__int64)(a5[1] - *a5) >> 1);
  sub_180020524(*v9);
  sub_18004F4AC(*a1);
  sub_18004FCA0(*a1);
  sub_18004FFB4(*a1, -1431655765 * ((a4[1] - *a4) >> 2));
  sub_18009187C(*a4);
  sub_18004FA18(*a1);
  sub_18009187C(*a6);
  sub_18004F8C8(*a1);
  sub_180091870(*a7);
  sub_18004FD34(*a1);
  return a1;
}
