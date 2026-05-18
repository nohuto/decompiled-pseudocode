/*
 * XREFs of sub_1800CBFA8 @ 0x1800CBFA8
 * Callers:
 *     sub_1800CB9B0 @ 0x1800CB9B0 (sub_1800CB9B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180015EE4 @ 0x180015EE4 (sub_180015EE4.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C680 @ 0x18001C680 (sub_18001C680.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180055408 @ 0x180055408 (sub_180055408.c)
 *     sub_180055D7C @ 0x180055D7C (sub_180055D7C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CBFA8(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v7; // r14d
  int v8; // r15d
  __int64 *v9; // rax
  __int64 *v10; // r12
  __int64 v11; // rbx
  void **v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rbx
  char *v15; // rax
  __int64 result; // rax
  __int64 v17; // [rsp+38h] [rbp-71h] BYREF
  __int64 v18; // [rsp+40h] [rbp-69h]
  __int64 v19; // [rsp+58h] [rbp-51h] BYREF
  __int64 v20; // [rsp+60h] [rbp-49h]
  _QWORD v21[4]; // [rsp+68h] [rbp-41h] BYREF
  _DWORD v22[8]; // [rsp+88h] [rbp-21h] BYREF
  void *v23[4]; // [rsp+A8h] [rbp-1h] BYREF

  v7 = 1;
  v8 = 1;
  if ( a2 )
    v8 = a2;
  if ( a3 )
    v7 = a3;
  sub_180011C50(a1 + 72, &v19);
  v9 = sub_180015EE4(v19, &v17);
  v10 = (__int64 *)(a1 + 96);
  sub_180011020((_QWORD *)(a1 + 96), v9);
  if ( v18 )
    sub_180010530(v18);
  sub_18002963C(a1, v23);
  if ( sub_18001F84C((__int64)v23) )
    sub_180011BA0(v23, "RenderTargetD3D11", 0x11uLL);
  v11 = *v10;
  v12 = (void **)sub_180017648(v21, (__int64)v23);
  sub_180029824(v11, v12);
  sub_180055408(v22, v8, v7, a4, a5 & 0xFFFFFF7C | 3, 0);
  sub_180055D7C(*v10, (__int64)v22);
  if ( (a5 & 0x80u) != 0 )
  {
    if ( !*(_QWORD *)(a1 + 112) )
    {
      v13 = sub_180015EE4(v19, &v17);
      sub_180011020((_QWORD *)(a1 + 112), v13);
      if ( v18 )
        sub_180010530(v18);
    }
    v14 = *(_QWORD *)(a1 + 112);
    v15 = sub_18001C680((char *)&v17, v23, " (staging)");
    sub_180029824(v14, (void **)v15);
    sub_180055408(v21, v8, v7, a4, a5 & 0xFFFFFF7C | 0x80, 3);
    sub_180055D7C(*(_QWORD *)(a1 + 112), (__int64)v21);
  }
  result = sub_180011B24((__int64)v23);
  if ( v20 )
    return sub_180010530(v20);
  return result;
}
