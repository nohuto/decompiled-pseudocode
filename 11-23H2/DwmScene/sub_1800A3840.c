/*
 * XREFs of sub_1800A3840 @ 0x1800A3840
 * Callers:
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 * Callees:
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_1800A1DF4 @ 0x1800A1DF4 (sub_1800A1DF4.c)
 *     sub_1800A2D68 @ 0x1800A2D68 (sub_1800A2D68.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_1800A3840(__int64 a1)
{
  __int64 v2; // rbx
  bool v3; // di

  v2 = a1 + 8;
  sub_18002A570(a1 + 8);
  sub_1800A2D68(a1);
  v3 = 0;
  if ( !sub_1800A1DF4() )
    v3 = !sub_1800A1DF4();
  sub_18002A62C(v2);
  return v3;
}
