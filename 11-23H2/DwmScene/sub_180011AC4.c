/*
 * XREFs of sub_180011AC4 @ 0x180011AC4
 * Callers:
 *     sub_18001092C @ 0x18001092C (sub_18001092C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_18001217C @ 0x18001217C (sub_18001217C.c)
 *     sub_180017028 @ 0x180017028 (sub_180017028.c)
 *     sub_180017058 @ 0x180017058 (sub_180017058.c)
 *     sub_18001E9F4 @ 0x18001E9F4 (sub_18001E9F4.c)
 *     sub_180024E60 @ 0x180024E60 (sub_180024E60.c)
 *     sub_180027C54 @ 0x180027C54 (sub_180027C54.c)
 *     sub_180029054 @ 0x180029054 (sub_180029054.c)
 *     sub_18002AF84 @ 0x18002AF84 (sub_18002AF84.c)
 *     sub_18002AFB0 @ 0x18002AFB0 (sub_18002AFB0.c)
 *     sub_18002F250 @ 0x18002F250 (sub_18002F250.c)
 *     sub_180070668 @ 0x180070668 (sub_180070668.c)
 *     sub_180085DE8 @ 0x180085DE8 (sub_180085DE8.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_180011AC4()
{
  _QWORD v0[3]; // [rsp+20h] [rbp-18h] BYREF

  v0[1] = "bad array new length";
  v0[0] = &stdext::bad_array_new_length::`vftable';
  sub_180011A5C((const struct stdext::exception *)v0);
}
