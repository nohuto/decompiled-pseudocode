/*
 * XREFs of sub_180097934 @ 0x180097934
 * Callers:
 *     sub_180071D50 @ 0x180071D50 (sub_180071D50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_18002534C @ 0x18002534C (sub_18002534C.c)
 *     sub_18005938C @ 0x18005938C (sub_18005938C.c)
 *     sub_180059EA8 @ 0x180059EA8 (sub_180059EA8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180097934(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int128 v6; // [rsp+30h] [rbp-50h] BYREF
  __int64 v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h] BYREF
  void *v9; // [rsp+58h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-20h]

  v7 = a1;
  v3 = sub_18001246C(&v8, a2);
  sub_18005938C(a1, (__int64)v3);
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingCamera::`vftable';
  v4 = sub_18002534C(&v9);
  v6 = 0LL;
  v6 = *(_OWORD *)v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  sub_180059EA8((__int64 *)a1, 0LL, 0LL, &v6, 0LL);
  if ( v10 )
    sub_180010530(v10);
  sub_180010DD0(&v9, (__int64)"ImageProcessingCamera");
  sub_1800134DC((void **)(a1 + 24), &v9);
  sub_180011B24((__int64)&v9);
  return a1;
}
