/*
 * XREFs of sub_180073F6C @ 0x180073F6C
 * Callers:
 *     sub_180073ED8 @ 0x180073ED8 (sub_180073ED8.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18002AFB0 @ 0x18002AFB0 (sub_18002AFB0.c)
 *     sub_18002AFDC @ 0x18002AFDC (sub_18002AFDC.c)
 *     sub_18002D438 @ 0x18002D438 (sub_18002D438.c)
 *     sub_180074020 @ 0x180074020 (sub_180074020.c)
 */

__int64 __fastcall sub_180073F6C(__int64 *a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rbx

  v1 = 0x86BCA1AF286BCA1BuLL * ((a1[1] - *a1) >> 3);
  v3 = sub_18002D438(a1, 0xF0uLL);
  v4 = sub_18002AFB0(v3);
  v5 = sub_18001090C(v4);
  sub_180074020((void *)(v5 + 152 * v1));
  sub_18002AFDC(*a1, a1[1], v5);
  return sub_18002D480((__int64)a1, v5, 240LL, v3);
}
