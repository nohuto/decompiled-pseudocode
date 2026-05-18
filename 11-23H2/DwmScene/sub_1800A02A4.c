/*
 * XREFs of sub_1800A02A4 @ 0x1800A02A4
 * Callers:
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 * Callees:
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_180057460 @ 0x180057460 (sub_180057460.c)
 *     sub_1800A0204 @ 0x1800A0204 (sub_1800A0204.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A02A4(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h]

  if ( !sub_180057460(a1 + 8) )
    return 0LL;
  v10 = a1;
  sub_18002A570(a1);
  v9 = 0LL;
  v4 = sub_180011CA0(v7);
  v8 = 1;
  sub_1800A0204((__int64 *)(a1 + 32), &v8, a2, v4, &v9);
  v5 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 3);
  sub_18002A62C(a1);
  return v5 - 1;
}
