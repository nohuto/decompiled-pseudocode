/*
 * XREFs of sub_1800878E8 @ 0x1800878E8
 * Callers:
 *     sub_180060458 @ 0x180060458 (sub_180060458.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_18007F820 @ 0x18007F820 (sub_18007F820.c)
 *     sub_18008784C @ 0x18008784C (sub_18008784C.c)
 *     sub_180087BD0 @ 0x180087BD0 (sub_180087BD0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180017C00 @ 0x180017C00 (sub_180017C00.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C680 @ 0x18001C680 (sub_18001C680.c)
 *     sub_18001E8C0 @ 0x18001E8C0 (sub_18001E8C0.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18004D8C4 @ 0x18004D8C4 (sub_18004D8C4.c)
 *     sub_18004FD30 @ 0x18004FD30 (sub_18004FD30.c)
 *     sub_180050884 @ 0x180050884 (sub_180050884.c)
 *     sub_1800508F0 @ 0x1800508F0 (sub_1800508F0.c)
 *     sub_180060D9C @ 0x180060D9C (sub_180060D9C.c)
 *     sub_180060DC4 @ 0x180060DC4 (sub_180060DC4.c)
 *     sub_180087790 @ 0x180087790 (sub_180087790.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_1800878E8(_QWORD *a1, _OWORD *a2, __int64 a3, _OWORD *a4)
{
  __int64 *v8; // rsi
  int v9; // eax
  _QWORD *v10; // rax
  char *v11; // rax
  _QWORD *v12; // rax
  void **v13; // rax
  void **v14; // rax
  void **v15; // rax
  void **v16; // rax
  void **v17; // rax
  void **v18; // rax
  _QWORD v20[4]; // [rsp+28h] [rbp-D8h] BYREF
  void *v21[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h]
  _OWORD *v24; // [rsp+68h] [rbp-98h]
  _OWORD *v25; // [rsp+70h] [rbp-90h]
  _QWORD v26[4]; // [rsp+78h] [rbp-88h] BYREF
  char v27[32]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v28[4]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v29[4]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v30[4]; // [rsp+F8h] [rbp-8h] BYREF
  char v31[32]; // [rsp+118h] [rbp+18h] BYREF
  void *Src[4]; // [rsp+138h] [rbp+38h] BYREF

  v24 = a2;
  v25 = a4;
  v8 = a1 + 2;
  if ( sub_18001F84C((__int64)a2) )
  {
    sub_180017648(v26, *v8 + 496);
    sub_180017C00(a2, (__int64)v26);
    sub_180011B24((__int64)v26);
  }
  if ( sub_18001F84C((__int64)a4) )
  {
    v9 = sub_180060DC4(*v8);
    v10 = sub_180050884(v30, v9);
    sub_180017C00(a4, (__int64)v10);
    sub_180011B24((__int64)v30);
  }
  sub_180060D9C(*v8, &v22);
  sub_18004FD30(v22, (__int64 *)v21, a3);
  sub_1800508F0(Src, (__int64 **)v21);
  v11 = sub_18001C680(v27, a2, "/");
  v12 = sub_18001E8C0(v28, (void **)v11, a4);
  v13 = (void **)sub_18001C61C(v29, v12, (__int64)"/");
  sub_18001E8C0(v26, v13, Src);
  sub_180011B24((__int64)v29);
  sub_180011B24((__int64)v28);
  sub_180011B24((__int64)v27);
  sub_18001C680((char *)v30, v26, "/Vertex");
  sub_18001C680((char *)v29, v26, "/Pixel");
  sub_18001C680((char *)v28, v26, "/Geometry");
  sub_18001C680(v27, v26, "/Domain");
  sub_18001C680(v31, v26, "/Hull");
  v14 = (void **)sub_180017648(v20, (__int64)v30);
  sub_180087790(a1, 1, v14);
  v15 = (void **)sub_180017648(v20, (__int64)v29);
  sub_180087790(a1, 5, v15);
  v16 = (void **)sub_180017648(v20, (__int64)v28);
  sub_180087790(a1, 4, v16);
  v17 = (void **)sub_180017648(v20, (__int64)v27);
  sub_180087790(a1, 3, v17);
  v18 = (void **)sub_180017648(v20, (__int64)v31);
  sub_180087790(a1, 2, v18);
  sub_180011B24((__int64)v31);
  sub_180011B24((__int64)v27);
  sub_180011B24((__int64)v28);
  sub_180011B24((__int64)v29);
  sub_180011B24((__int64)v30);
  sub_180011B24((__int64)v26);
  sub_180011B24((__int64)Src);
  sub_18004D8C4(v21, (__int64)v21);
  if ( v23 )
    sub_180010530(v23);
  sub_180011B24((__int64)a2);
  return sub_180011B24((__int64)a4);
}
