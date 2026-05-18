/*
 * XREFs of sub_180084A30 @ 0x180084A30
 * Callers:
 *     sub_1800441A0 @ 0x1800441A0 (sub_1800441A0.c)
 *     sub_18004B180 @ 0x18004B180 (sub_18004B180.c)
 *     sub_180084738 @ 0x180084738 (sub_180084738.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180082FBC @ 0x180082FBC (sub_180082FBC.c)
 *     sub_180083CD0 @ 0x180083CD0 (sub_180083CD0.c)
 *     sub_180083CF0 @ 0x180083CF0 (sub_180083CF0.c)
 *     sub_180084204 @ 0x180084204 (sub_180084204.c)
 *     sub_180084C14 @ 0x180084C14 (sub_180084C14.c)
 *     sub_180084D80 @ 0x180084D80 (sub_180084D80.c)
 *     sub_180085110 @ 0x180085110 (sub_180085110.c)
 *     sub_18008511C @ 0x18008511C (sub_18008511C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180084A30(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 *v8; // r14
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int8 (__fastcall *v23)(__int64, __int64, __int64, __int64, __int64); // r11
  _QWORD *v24; // rax
  __int64 v25; // r8
  unsigned int v26; // [rsp+30h] [rbp-69h] BYREF
  __int64 v27; // [rsp+38h] [rbp-61h] BYREF
  __int64 v28; // [rsp+40h] [rbp-59h]
  __int64 *v29; // [rsp+48h] [rbp-51h]
  _QWORD v30[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v31[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v29 = a2;
  result = sub_180026650(*a2);
  if ( !(_DWORD)result || (result = a1[5], a1[4] == result) )
  {
    v7 = *(_QWORD *)(v5 + 8);
  }
  else
  {
    sub_18002A404(v6 + 24);
    v8 = a1 + 16;
    if ( sub_180011DD0(a1 + 16) )
    {
      v9 = sub_180026618(*a2);
      v10 = sub_180083CD0(v9, &v27);
      v11 = *v10;
      v12 = v10[1];
      *v10 = 0LL;
      v10[1] = 0LL;
      *v8 = v11;
      v13 = a1[17];
      a1[17] = v12;
      if ( v13 )
        sub_180010530(v13);
      if ( v28 )
        sub_180010530(v28);
    }
    v14 = (unsigned int)sub_180026650(*a2);
    result = sub_180084D80(*v8, v14);
    if ( !(_BYTE)result )
    {
      sub_180083CF0(*a2, &v27);
      v15 = v27;
      sub_180082FBC(a1[2]);
      v16 = sub_18008511C(a1);
      v20 = sub_180085110(v18, v17, v16, v19);
      if ( !v23(v15, v20, v22, 2LL, v21) )
      {
        sub_180010DD0(v31, (__int64)"ShaderPropertyBlock::AttachDevice() -- failed to create constant buffer");
        v24 = sub_180010DD0(
                v30,
                (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\shaderpropertyblock.cpp");
        sub_18003AF58(pExceptionObject, (__int64)v24, v25, (__int64)v31, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      sub_180084C14(*v8, &v27);
      v26 = v14;
      result = sub_180084204(a1 + 11, (__int64)v30, &v26);
      *(_DWORD *)(*(_QWORD *)result + 32LL) = 0;
      if ( v28 )
        result = sub_180010530(v28);
    }
    v7 = a2[1];
  }
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
