/*
 * XREFs of sub_18004B580 @ 0x18004B580
 * Callers:
 *     sub_18004B4F0 @ 0x18004B4F0 (sub_18004B4F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_18001402C @ 0x18001402C (sub_18001402C.c)
 *     sub_18004A620 @ 0x18004A620 (sub_18004A620.c)
 *     sub_18004ACFC @ 0x18004ACFC (sub_18004ACFC.c)
 *     sub_18004AF90 @ 0x18004AF90 (sub_18004AF90.c)
 *     sub_180081340 @ 0x180081340 (sub_180081340.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18004B580(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+38h] [rbp-61h] BYREF
  __int64 v19; // [rsp+40h] [rbp-59h]
  _QWORD *v20; // [rsp+48h] [rbp-51h]
  _QWORD v21[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v22[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v20 = a2;
  v6 = sub_18001246C(&v18, a2);
  sub_180081340(a1, v6);
  sub_18001402C(&v18, a2);
  if ( (*a3 & 8) != 0 )
  {
    sub_180010DD0(
      v22,
      (__int64)"MeshInstance::CloneInternal() -- material cloning not yet supported (reserved for future use)");
    v7 = sub_180010DD0(
           v21,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\meshinstance.cpp");
    sub_18004ACFC(pExceptionObject, (__int64)v7, v8, (__int64)v22);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  v9 = v18;
  if ( v18 + 104 != a1 + 104 )
    sub_18004A620((_QWORD *)(v18 + 104), *(_QWORD *)(a1 + 104), *(_QWORD *)(a1 + 112));
  if ( (*a3 & 4) != 0 )
  {
    sub_180010DD0(
      v21,
      (__int64)"MeshInstance::CloneInternal() -- mesh cloning not yet supported (reserved for future use)");
    v10 = sub_180010DD0(
            v22,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\meshinstance.cpp");
    sub_18004ACFC(pExceptionObject, (__int64)v10, v11, (__int64)v21);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  sub_1800124F8((__int64 *)(v9 + 88), (_QWORD *)(a1 + 88));
  if ( (*a3 & 0x10) != 0 )
  {
    sub_180010DD0(
      v21,
      (__int64)"MeshInstance::CloneInternal() -- skinning controller cloning not yet supported (reserved for future use)");
    v12 = sub_180010DD0(
            v22,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\meshinstance.cpp");
    sub_18004ACFC(pExceptionObject, (__int64)v12, v13, (__int64)v21);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  sub_18004AF90((__int64 *)(v9 + 136), (_QWORD *)(a1 + 136));
  if ( (*a3 & 0x20) != 0 )
  {
    sub_180010DD0(
      v21,
      (__int64)"MeshInstance::CloneInternal() -- morph controller cloning not yet supported (reserved for future use)");
    v14 = sub_180010DD0(
            v22,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\meshinstance.cpp");
    sub_18004ACFC(pExceptionObject, (__int64)v14, v15, (__int64)v21);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  sub_18004AF90((__int64 *)(v9 + 152), (_QWORD *)(a1 + 152));
  *(_BYTE *)(v9 + 168) = *(_BYTE *)(a1 + 168);
  *(_DWORD *)(v9 + 172) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(v9 + 176) = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(v9 + 180) = *(_DWORD *)(a1 + 180);
  result = *(unsigned int *)(a1 + 184);
  *(_DWORD *)(v9 + 184) = result;
  if ( v19 )
    result = sub_180010530(v19);
  v17 = a2[1];
  if ( v17 )
    return sub_180010530(v17);
  return result;
}
