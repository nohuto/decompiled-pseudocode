/*
 * XREFs of sub_18009341C @ 0x18009341C
 * Callers:
 *     sub_180049DE0 @ 0x180049DE0 (sub_180049DE0.c)
 *     sub_1800933B8 @ 0x1800933B8 (sub_1800933B8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_18002FE80 @ 0x18002FE80 (sub_18002FE80.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800488AC @ 0x1800488AC (sub_1800488AC.c)
 *     sub_180057018 @ 0x180057018 (sub_180057018.c)
 *     sub_1800907CC @ 0x1800907CC (sub_1800907CC.c)
 *     sub_1800908F8 @ 0x1800908F8 (sub_1800908F8.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18009341C(__int64 a1, unsigned __int16 a2, __int64 *a3)
{
  __int64 v4; // rcx
  unsigned __int16 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int16 v18; // r8
  __int64 *v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // r8
  _QWORD v25[3]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v26[4]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v27[4]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+88h] [rbp-11h] BYREF
  _BYTE v29[32]; // [rsp+C0h] [rbp+27h] BYREF

  v25[2] = a3;
  if ( !sub_1800908F8(*(_QWORD *)(a1 + 16), a2) )
  {
    v16 = sub_1800488AC(v6 + 16);
    v17 = sub_18002FE80(v16 + 1152);
    v19 = sub_180057018(v17, v27, v18);
    v20 = sub_18001DD3C((__int64)v29, (__int64)"Property does not exist: ", v19);
    v21 = sub_1800113D0(
            v26,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v21, v22, v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = (_DWORD *)sub_1800907CC(v4, v5);
  if ( v7[9] != 8 )
  {
    sub_1800113D0(v27, "ShaderPropertyBlock::SetTexture() -- Property is not of type Texture");
    v23 = sub_1800113D0(
            v26,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v23, v24, (__int64)v27, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( v7[12] == 2 )
  {
    sub_1800113D0(v26, "ShaderPropertyBlock::SetTexture() -- Cannot set the value of an imported property");
    v14 = sub_1800113D0(
            v27,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v14, v15, (__int64)v26, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v9 = 5LL * (unsigned int)v7[10];
  v10 = *(_QWORD *)(v8 + 56);
  v11 = *a3;
  v12 = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v25[0] = *(_QWORD *)(v10 + 8 * v9);
  *(_QWORD *)(v10 + 8 * v9) = v11;
  v25[1] = *(_QWORD *)(v10 + 8 * v9 + 8);
  *(_QWORD *)(v10 + 8 * v9 + 8) = v12;
  sub_180010910((__int64)v25);
  return sub_180010910((__int64)a3);
}
