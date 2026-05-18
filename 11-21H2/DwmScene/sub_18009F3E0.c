/*
 * XREFs of sub_18009F3E0 @ 0x18009F3E0
 * Callers:
 *     sub_18009F81C @ 0x18009F81C (sub_18009F81C.c)
 *     sub_18009FB44 @ 0x18009FB44 (sub_18009FB44.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180017558 @ 0x180017558 (sub_180017558.c)
 *     sub_180020518 @ 0x180020518 (sub_180020518.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     sub_1800510D0 @ 0x1800510D0 (sub_1800510D0.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18009F3E0(__int64 *a1)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  unsigned int v16; // r8d
  __int64 result; // rax
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD v20[2]; // [rsp+58h] [rbp-B0h] BYREF
  char *v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h]
  __int64 v23; // [rsp+78h] [rbp-90h]
  __int64 v24[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v25[4]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v26[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v27[4]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v28[4]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+100h] [rbp-8h] BYREF

  v2 = sub_18008E70C((__int64)a1);
  sub_180039EBC(v2, &v21);
  v3 = (__int64 *)v21;
  v4 = v22;
  while ( v3 != (__int64 *)v4 )
  {
    v5 = v3[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = v3[1];
    }
    v24[0] = *v3;
    v24[1] = v5;
    if ( (unsigned int)sub_180028544(v24[0])
      && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 1LL) )
    {
      v7 = a1[18];
      if ( !v7 || ((v7 - 1) & v7) != 0 )
      {
        sub_1800113D0(
          v28,
          "ColorTransform::CreateResources() -- volume texture must be power of two below feature level 10.0");
        v18 = sub_1800113D0(
                v27,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\co"
                "lortransform.cpp");
        sub_1800510D0(pExceptionObject, (__int64)v18, v19, (__int64)v28);
        throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
      }
    }
    sub_180010910((__int64)v24);
    v3 += 2;
  }
  v9 = (__int64 *)sub_18008E70C((__int64)a1);
  v10 = sub_180017558(v9, v26);
  v11 = *v10;
  v12 = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  v20[0] = a1[12];
  a1[12] = v11;
  v20[1] = a1[13];
  a1[13] = v12;
  sub_180010910((__int64)v20);
  sub_180010910((__int64)v26);
  v13 = a1[12];
  v25[2] = 0LL;
  v25[3] = 15LL;
  LOBYTE(v25[0]) = 0;
  sub_180012190(v25, "ColorTransform", 0xEuLL);
  sub_18002BC44(v13, v25);
  v14 = sub_180020518(a1[14]);
  result = sub_18005D70C(a1[12], v15, v15, v15, 16, 0, 1, v14, v16, 0LL);
  if ( v21 )
  {
    sub_1800126E8((__int64)v21, v22);
    return sub_180010884(v21, (v23 - (_QWORD)v21) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return result;
}
