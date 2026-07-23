/*
 * XREFs of sub_140819CB8 @ 0x140819CB8
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_1407F32E0 @ 0x1407F32E0 (sub_1407F32E0.c)
 *     sub_1408194D8 @ 0x1408194D8 (sub_1408194D8.c)
 *     sub_1408578E0 @ 0x1408578E0 (sub_1408578E0.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140819D40 @ 0x140819D40 (sub_140819D40.c)
 */

__int64 __fastcall sub_140819CB8(unsigned int a1)
{
  _BYTE v3[96]; // [rsp+40h] [rbp-78h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( !byte_140C5AC3C )
    sub_1402D6B0C((__int64)&unk_140CE2050, 0x16F54A4u, 0, 0, (__int64)&qword_14000EFB0, 1);
  return sub_140819D40(a1);
}
