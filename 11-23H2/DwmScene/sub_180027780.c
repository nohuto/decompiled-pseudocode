/*
 * XREFs of sub_180027780 @ 0x180027780
 * Callers:
 *     sub_180027A40 @ 0x180027A40 (sub_180027A40.c)
 *     sub_180027B00 @ 0x180027B00 (sub_180027B00.c)
 * Callees:
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180025948 @ 0x180025948 (sub_180025948.c)
 *     sub_180027A84 @ 0x180027A84 (sub_180027A84.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall __noreturn sub_180027780(unsigned int a1)
{
  __int128 v1; // xmm6
  __int128 v2; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v3[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v4[16]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v5[4]; // [rsp+60h] [rbp-48h] BYREF

  v1 = *(_OWORD *)sub_180027A84(v4, a1);
  sub_180010DD0(v5, (__int64)&unk_180106082);
  v2 = v1;
  sub_180025948((__int64)v3, &v2, (__int64)v5);
  sub_180011B24((__int64)v5);
  v3[0] = &std::system_error::`vftable';
  sub_180011A5C((const struct stdext::exception *)v3);
}
