/*
 * XREFs of sub_1800E2B34 @ 0x1800E2B34
 * Callers:
 *     sub_1800E2380 @ 0x1800E2380 (sub_1800E2380.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180016ED0 @ 0x180016ED0 (sub_180016ED0.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DCD4 @ 0x18001DCD4 (sub_18001DCD4.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18005CA08 @ 0x18005CA08 (sub_18005CA08.c)
 *     sub_18005D5BC @ 0x18005D5BC (sub_18005D5BC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E2B34(_QWORD *a1, int a2, int a3, int a4, int a5)
{
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int128 v24; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v26[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v27[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v28[2]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v29[8]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v30[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v31[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v32[4]; // [rsp+E8h] [rbp-20h] BYREF
  char *v33[3]; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int64 v34; // [rsp+120h] [rbp+18h]

  v7 = 1;
  v8 = 1;
  if ( a2 )
    v8 = a2;
  if ( a3 )
    v7 = a3;
  v24 = 0LL;
  v9 = a1[10];
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 8);
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
      if ( v11 == v10 )
      {
        v12 = a1[9];
        *(_QWORD *)&v24 = v12;
        *((_QWORD *)&v24 + 1) = a1[10];
        goto LABEL_10;
      }
    }
  }
  v12 = v24;
LABEL_10:
  v13 = sub_180016ED0(v12, v27);
  v14 = *v13;
  v15 = v13[1];
  *v13 = 0LL;
  v13[1] = 0LL;
  v25[0] = a1[12];
  a1[12] = v14;
  v25[1] = a1[13];
  a1[13] = v15;
  sub_180010910((__int64)v25);
  sub_180010910((__int64)v27);
  sub_18002B9EC((__int64)a1, (__int64 *)v33);
  if ( !v33[2] )
    sub_180012190((__int64 *)v33, "RenderTargetD3D11", 0x11uLL);
  v16 = a1[12];
  v17 = sub_18001875C(v31, (__int64)v33);
  sub_18002BC44(v16, v17);
  sub_18005CA08(v29, v8, v7, a4, a5 & 0xFFFFFF7C | 3, 0);
  sub_18005D5BC(a1[12], (__int64)v29);
  if ( (a5 & 0x80u) != 0 )
  {
    v18 = a1[14];
    if ( !v18 )
    {
      v19 = sub_180016ED0(v12, v28);
      v20 = *v19;
      v21 = v19[1];
      *v19 = 0LL;
      v19[1] = 0LL;
      v26[0] = a1[14];
      a1[14] = v20;
      v26[1] = a1[15];
      a1[15] = v21;
      sub_180010910((__int64)v26);
      sub_180010910((__int64)v28);
      v18 = a1[14];
    }
    v22 = sub_18001DCD4(v32, v33, " (staging)");
    sub_18002BC44(v18, v22);
    sub_18005CA08(v30, v8, v7, a4, a5 & 0xFFFFFF7C | 0x80, 3);
    sub_18005D5BC(a1[14], (__int64)v30);
  }
  if ( v34 >= 0x10 )
    sub_180010884(v33[0], v34 + 1);
  return sub_180010910((__int64)&v24);
}
