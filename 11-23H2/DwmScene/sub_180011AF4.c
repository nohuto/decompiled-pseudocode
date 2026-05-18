/*
 * XREFs of sub_180011AF4 @ 0x180011AF4
 * Callers:
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

void __noreturn sub_180011AF4()
{
  _QWORD v0[3]; // [rsp+20h] [rbp-18h] BYREF

  v0[1] = "unknown";
  v0[0] = &std::bad_weak_ptr::`vftable';
  sub_180011A5C((const struct stdext::exception *)v0);
}
