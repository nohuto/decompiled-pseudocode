/*
 * XREFs of sub_140B31048 @ 0x140B31048
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void sub_140B31048()
{
  __int64 v0; // rax
  _QWORD v1[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, 0xB8uLL);
  v0 = sub_140317A10(0xFFFFF6FBC0000000uLL);
  if ( v0 >= 0 || (BYTE1(v0) & 1) != (_BYTE)word_140C51864 )
  {
    v1[3] = 0LL;
    LODWORD(v1[1]) = 20;
    sub_14033DBC0(
      0xFFFFF6FBC0000000uLL,
      v0 & 0xFFFFFFFFFFFFFEFFuLL | ((word_140C51864 & 1 | 0xFF80000000000000uLL) << 8));
    sub_1402CF280((__int64)v1, 0xFFFFF78000000000uLL, 1LL, 0);
    sub_14032F1B0((__int64)v1);
  }
}
