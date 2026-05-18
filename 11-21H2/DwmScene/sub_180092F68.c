/*
 * XREFs of sub_180092F68 @ 0x180092F68
 * Callers:
 *     sub_180091F90 @ 0x180091F90 (sub_180091F90.c)
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

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180092F68(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // rax
  __int64 v6; // r9
  int v7; // r10d
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int16 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD v20[4]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v21[4]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v23[32]; // [rsp+B0h] [rbp+27h] BYREF

  if ( !sub_1800908F8(*(_QWORD *)(a1 + 16), a2) )
  {
    v11 = sub_1800488AC(v4 + 16);
    v12 = sub_18002FE80(v11 + 1152);
    v14 = sub_180057018(v12, v21, v13);
    v15 = sub_18001DD3C((__int64)v23, (__int64)"Property not found in block: ", v14);
    v16 = sub_1800113D0(
            v20,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v16, v17, v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v5 = (_DWORD *)sub_1800907CC(v2, v3);
  if ( v5[9] != v7 )
  {
    sub_1800113D0(v21, "Property is not of type the correct type");
    v18 = sub_1800113D0(
            v20,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v18, v19, (__int64)v21, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( v5[12] == 2 )
  {
    sub_1800113D0(v20, "Property is imported so cannot be modified");
    v9 = sub_1800113D0(
           v21,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertyblock.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v9, v10, (__int64)v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v6 + 32) + 4LL * (unsigned int)v5[10];
}
