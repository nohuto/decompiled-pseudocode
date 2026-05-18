/*
 * XREFs of sub_180095A64 @ 0x180095A64
 * Callers:
 *     sub_1800688C8 @ 0x1800688C8 (sub_1800688C8.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008BE10 @ 0x18008BE10 (sub_18008BE10.c)
 *     sub_18008C410 @ 0x18008C410 (sub_18008C410.c)
 *     sub_180095990 @ 0x180095990 (sub_180095990.c)
 *     sub_180095EA0 @ 0x180095EA0 (sub_180095EA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DCD4 @ 0x18001DCD4 (sub_18001DCD4.c)
 *     sub_18001FEAC @ 0x18001FEAC (sub_18001FEAC.c)
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 *     sub_180056E08 @ 0x180056E08 (sub_180056E08.c)
 *     sub_180057EE4 @ 0x180057EE4 (sub_180057EE4.c)
 *     sub_180057F88 @ 0x180057F88 (sub_180057F88.c)
 *     sub_18006958C @ 0x18006958C (sub_18006958C.c)
 *     sub_1800695C8 @ 0x1800695C8 (sub_1800695C8.c)
 *     sub_18009587C @ 0x18009587C (sub_18009587C.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_180095A64(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  int v10; // eax
  __int64 *v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 *v13; // rax
  void *v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 result; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24[4]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 **v25[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26[4]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+78h] [rbp-88h] BYREF
  __int128 v28; // [rsp+88h] [rbp-78h]
  char *v29[3]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+B0h] [rbp-50h]
  char *v31[3]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+D0h] [rbp-30h]
  char *v33[3]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v34; // [rsp+F0h] [rbp-10h]
  char *Src[3]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v36; // [rsp+110h] [rbp+10h]
  char *v37[3]; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v38; // [rsp+130h] [rbp+30h]
  char *v39[3]; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v40; // [rsp+150h] [rbp+50h]

  v26[2] = a2;
  v26[3] = a4;
  if ( !*(_QWORD *)(a2 + 16) )
  {
    sub_18001875C((__int64 *)&v27, a1[2] + 496LL);
    if ( (__int128 *)a2 == &v27 )
    {
      v9 = *((_QWORD *)&v28 + 1);
    }
    else
    {
      v8 = *(_QWORD *)(a2 + 24);
      if ( v8 >= 0x10 )
        sub_180010884(*(char **)a2, v8 + 1);
      *(_OWORD *)a2 = v27;
      *(_OWORD *)(a2 + 16) = v28;
      v9 = 15LL;
      LOBYTE(v27) = 0;
    }
    if ( v9 >= 0x10 )
      sub_180010884((char *)v27, v9 + 1);
  }
  if ( !*(_QWORD *)(a4 + 16) )
  {
    v10 = sub_1800695C8(a1[2]);
    v11 = sub_180057EE4((__int64 *)v37, v10);
    if ( (__int64 *)a4 != v11 )
    {
      v12 = *(_QWORD *)(a4 + 24);
      if ( v12 >= 0x10 )
        sub_180010884(*(char **)a4, v12 + 1);
      *(_QWORD *)(a4 + 16) = 0LL;
      *(_QWORD *)(a4 + 24) = 15LL;
      *(_BYTE *)a4 = 0;
      *(_OWORD *)a4 = *(_OWORD *)v11;
      *(_OWORD *)(a4 + 16) = *((_OWORD *)v11 + 1);
      v11[2] = 0LL;
      v11[3] = 15LL;
      *(_BYTE *)v11 = 0;
    }
    if ( v38 >= 0x10 )
      sub_180010884(v37[0], v38 + 1);
  }
  sub_18006958C(a1[2], v26);
  sub_180056E08(v26[0], v25, a3);
  sub_180057F88((__int64 *)Src, v25);
  v13 = sub_18001DCD4((__int64 *)v33, (_QWORD *)a2, "/");
  v14 = (void *)sub_18001FEAC((__int64)v31, (__int64)v13, (_QWORD *)a4);
  v15 = sub_18001DC84((__int64)v29, v14);
  sub_18001FEAC((__int64)&v27, v15, Src);
  if ( v30 >= 0x10 )
    sub_180010884(v29[0], v30 + 1);
  v29[2] = 0LL;
  v30 = 15LL;
  LOBYTE(v29[0]) = 0;
  if ( v32 >= 0x10 )
    sub_180010884(v31[0], v32 + 1);
  v31[2] = 0LL;
  v32 = 15LL;
  LOBYTE(v31[0]) = 0;
  if ( v34 >= 0x10 )
    sub_180010884(v33[0], v34 + 1);
  v33[2] = 0LL;
  v34 = 15LL;
  LOBYTE(v33[0]) = 0;
  sub_18001DCD4((__int64 *)v37, &v27, "/Vertex");
  sub_18001DCD4((__int64 *)v39, &v27, "/Pixel");
  sub_18001DCD4((__int64 *)v29, &v27, "/Geometry");
  sub_18001DCD4((__int64 *)v31, &v27, "/Domain");
  sub_18001DCD4((__int64 *)v33, &v27, "/Hull");
  v16 = sub_18001875C(v24, (__int64)v37);
  sub_18009587C(a1, 1, (__int64)v16);
  v17 = sub_18001875C(v24, (__int64)v39);
  sub_18009587C(a1, 5, (__int64)v17);
  v18 = sub_18001875C(v24, (__int64)v29);
  sub_18009587C(a1, 4, (__int64)v18);
  v19 = sub_18001875C(v24, (__int64)v31);
  sub_18009587C(a1, 3, (__int64)v19);
  v20 = sub_18001875C(v24, (__int64)v33);
  sub_18009587C(a1, 2, (__int64)v20);
  if ( v34 >= 0x10 )
    sub_180010884(v33[0], v34 + 1);
  if ( v32 >= 0x10 )
    sub_180010884(v31[0], v32 + 1);
  if ( v30 >= 0x10 )
    sub_180010884(v29[0], v30 + 1);
  if ( v40 >= 0x10 )
    sub_180010884(v39[0], v40 + 1);
  if ( v38 >= 0x10 )
    sub_180010884(v37[0], v38 + 1);
  if ( *((_QWORD *)&v28 + 1) >= 0x10uLL )
    sub_180010884((char *)v27, *((_QWORD *)&v28 + 1) + 1LL);
  if ( v36 >= 0x10 )
    sub_180010884(Src[0], v36 + 1);
  Src[2] = 0LL;
  v36 = 15LL;
  LOBYTE(Src[0]) = 0;
  sub_18005470C((__int64 *)v25, (__int64)v25);
  result = sub_180010910((__int64)v26);
  v22 = *(_QWORD *)(a2 + 24);
  if ( v22 >= 0x10 )
    result = sub_180010884(*(char **)a2, v22 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  v23 = *(_QWORD *)(a4 + 24);
  if ( v23 >= 0x10 )
    result = sub_180010884(*(char **)a4, v23 + 1);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 24) = 15LL;
  *(_BYTE *)a4 = 0;
  return result;
}
