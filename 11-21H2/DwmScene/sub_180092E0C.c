/*
 * XREFs of sub_180092E0C @ 0x180092E0C
 * Callers:
 *     sub_180049850 @ 0x180049850 (sub_180049850.c)
 *     sub_18007D97C @ 0x18007D97C (sub_18007D97C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_18002FE80 @ 0x18002FE80 (sub_18002FE80.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800488AC @ 0x1800488AC (sub_1800488AC.c)
 *     sub_180057018 @ 0x180057018 (sub_180057018.c)
 *     sub_1800907CC @ 0x1800907CC (sub_1800907CC.c)
 *     sub_1800908F8 @ 0x1800908F8 (sub_1800908F8.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180092E0C(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rcx
  unsigned __int16 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int16 v17; // r8
  __int64 *v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // r8
  _QWORD v22[4]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v23[4]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v25[32]; // [rsp+B0h] [rbp+27h] BYREF

  if ( !sub_1800908F8(*(_QWORD *)(a1 + 16), a3) )
  {
    v15 = sub_1800488AC(v5 + 16);
    v16 = sub_18002FE80(v15 + 1152);
    v18 = sub_180057018(v16, v23, v17);
    v19 = sub_18001DD3C((__int64)v25, (__int64)"Property does not exist: ", v18);
    v20 = sub_1800113D0(
            v22,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v20, v21, v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = sub_1800907CC(v3, v4);
  if ( *(_DWORD *)(v6 + 36) != 8 )
  {
    sub_1800113D0(v23, "ShaderPropertyBlock::GetTexture() -- Property is not of type Texture");
    v13 = sub_1800113D0(
            v22,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v13, v14, (__int64)v23, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v9 = 5LL * *(unsigned int *)(v6 + 40);
  v10 = *(_QWORD *)(v8 + 56);
  *v7 = 0LL;
  v7[1] = 0LL;
  v11 = *(_QWORD *)(v10 + 8 * v9 + 8);
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  *v7 = *(_QWORD *)(v10 + 8 * v9);
  v7[1] = *(_QWORD *)(v10 + 8 * v9 + 8);
  return v7;
}
