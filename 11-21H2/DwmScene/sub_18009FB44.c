/*
 * XREFs of sub_18009FB44 @ 0x18009FB44
 * Callers:
 *     sub_180070790 @ 0x180070790 (sub_180070790.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001DA38 @ 0x18001DA38 (sub_18001DA38.c)
 *     sub_1800588A4 @ 0x1800588A4 (sub_1800588A4.c)
 *     sub_180058E60 @ 0x180058E60 (sub_180058E60.c)
 *     sub_18009F3E0 @ 0x18009F3E0 (sub_18009F3E0.c)
 *     sub_18009FCC0 @ 0x18009FCC0 (sub_18009FCC0.c)
 *     sub_18009FF18 @ 0x18009FF18 (sub_18009FF18.c)
 *     sub_1800A0210 @ 0x1800A0210 (sub_1800A0210.c)
 *     sub_1800A068C @ 0x1800A068C (sub_1800A068C.c)
 *     sub_1800A0C74 @ 0x1800A0C74 (sub_1800A0C74.c)
 *     sub_1800A0D7C @ 0x1800A0D7C (sub_1800A0D7C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18009FB44(__int64 *a1, char *a2, size_t a3, _QWORD *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v12; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h]
  int v14; // [rsp+40h] [rbp-C0h]
  _BYTE v15[240]; // [rsp+50h] [rbp-B0h] BYREF
  char *v16[3]; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v17; // [rsp+158h] [rbp+58h]

  v16[2] = 0LL;
  v17 = 15LL;
  LOBYTE(v16[0]) = 0;
  if ( a2 != &a2[a3] )
    sub_180012190((__int64 *)v16, a2, a3);
  sub_1800588A4((__int64)v15, v16);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  if ( sub_18001DA38(a4, &qword_1801F67F8) )
    sub_18009FF18(v6, v16, &v11);
  if ( sub_18001DA38(a4, &qword_1801F6778) )
    sub_18009FCC0(v7, v15, &v11);
  if ( sub_18001DA38(a4, &qword_1801F6798) )
    sub_1800A0210(v8, v15, &v11);
  if ( sub_18001DA38(a4, &qword_1801F67B8) )
    sub_1800A068C(v9, v15, &v11);
  sub_1800A0D7C(a1, v11, &v12);
  sub_1800A0C74(a1);
  sub_18009F3E0(a1);
  if ( (_QWORD)v12 )
    sub_180010884((char *)v12, (v13 - v12) & 0xFFFFFFFFFFFFFFF0uLL);
  result = sub_180058E60((__int64)v15);
  if ( v17 >= 0x10 )
    return sub_180010884(v16[0], v17 + 1);
  return result;
}
