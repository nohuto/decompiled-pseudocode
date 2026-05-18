/*
 * XREFs of sub_18008F6BC @ 0x18008F6BC
 * Callers:
 *     sub_18004C088 @ 0x18004C088 (sub_18004C088.c)
 *     sub_18004C5C4 @ 0x18004C5C4 (sub_18004C5C4.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD9C @ 0x18001DD9C (sub_18001DD9C.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800560A0 @ 0x1800560A0 (sub_1800560A0.c)
 *     sub_18008E9B8 @ 0x18008E9B8 (sub_18008E9B8.c)
 *     sub_18008EE60 @ 0x18008EE60 (sub_18008EE60.c)
 *     sub_18008F14C @ 0x18008F14C (sub_18008F14C.c)
 *     sub_18009010C @ 0x18009010C (sub_18009010C.c)
 *     sub_1800908F8 @ 0x1800908F8 (sub_1800908F8.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18008F6BC(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 *v8; // r14
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  char *v17; // rax
  _QWORD *v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 *v27; // rax
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // r8
  unsigned __int16 v36; // [rsp+38h] [rbp-C8h]
  _QWORD v38[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39[4]; // [rsp+60h] [rbp-A0h] BYREF
  char *v40[3]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp-68h]
  unsigned __int16 v42; // [rsp+A0h] [rbp-60h]
  unsigned int v43; // [rsp+A4h] [rbp-5Ch]
  int v44; // [rsp+A8h] [rbp-58h]
  unsigned int v45; // [rsp+ACh] [rbp-54h]
  int v46; // [rsp+B0h] [rbp-50h]
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_1800113D0(
      v38,
      "ShaderPropertyLayout::AddArrayProperty() -- properties can only be added during declaration phase before EndDeclaration()");
    v21 = sub_1800113D0(
            v39,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(v40, (__int64)v21, v22, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v40;
  }
  if ( !a2[2] )
  {
    sub_1800113D0(v39, "ShaderPropertyLayout::AddArrayProperty() -- property cannot have an empty name");
    v23 = sub_1800113D0(
            v38,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(v40, (__int64)v23, v24, (__int64)v39, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v40;
  }
  v8 = (__int64 *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56) == 28672LL )
  {
    sub_1800113D0(
      v39,
      "ShaderPropertyLayout::AddArrayProperty() -- property block already has maximum number of properties");
    v25 = sub_1800113D0(
            v38,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(v40, (__int64)v25, v26, (__int64)v39, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v40;
  }
  v36 = sub_1800560A0(*(_QWORD *)(a1 + 1152), a2);
  if ( (unsigned __int8)sub_1800908F8(a1, v36, v9) )
  {
    v27 = sub_18001DD9C(v39, "ShaderPropertyLayout::AddArrayProperty() -- variable '", a2);
    v28 = sub_18001DC84((__int64)v40, v27);
    v29 = sub_1800113D0(
            v38,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v29, v30, v28, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( ((a3 - 5) & 0xFFFFFFFD) != 0 )
  {
    sub_1800113D0(
      v39,
      "ShaderPropertyLayout::AddArrayProperty() -- Only Vector4 and Matrix arrays are currently supported");
    v31 = sub_1800113D0(
            v38,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v31, v32, (__int64)v39, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v10 = 1;
  if ( a4 <= 1 )
  {
    sub_1800113D0(
      v39,
      "ShaderPropertyLayout::AddArrayProperty() -- Array size must be more than 1. For arrays of size 1 use AddProperty instead");
    v33 = sub_1800113D0(
            v38,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v33, v34, (__int64)v39, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18009010C();
  v11 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
  if ( a3 > 2 )
  {
    switch ( a3 )
    {
      case 3u:
        v10 = 2;
        break;
      case 4u:
        v10 = 3;
        break;
      case 5u:
      case 6u:
        v10 = 4;
        break;
      case 7u:
        v10 = 16;
        break;
      default:
        v10 = 0;
        break;
    }
  }
  v12 = (unsigned int)v11 + v10 * a4;
  if ( (unsigned int)v12 > 0x4064 )
  {
    sub_1800113D0(v39, "ShaderPropertyLayout::AddArrayProperty() -- Array extends property block past maximum capacity");
    v19 = sub_1800113D0(
            v38,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v19, v20, (__int64)v39, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18001875C((__int64 *)v40, (__int64)a2);
  v42 = v36;
  v43 = a3;
  v44 = v11;
  v45 = a4;
  v46 = 0;
  v13 = v8[1];
  v14 = 0x6DB6DB6DB6DB6DB7LL * ((v13 - *v8) >> 3);
  if ( v13 == *(_QWORD *)(a1 + 72) )
  {
    sub_18008E9B8(v8, v8[1], (__int64)v40);
  }
  else
  {
    sub_18001875C((__int64 *)v8[1], (__int64)v40);
    *(_WORD *)(v13 + 32) = v42;
    *(_DWORD *)(v13 + 36) = v43;
    *(_DWORD *)(v13 + 40) = v44;
    *(_DWORD *)(v13 + 44) = v45;
    *(_DWORD *)(v13 + 48) = v46;
    v8[1] += 56LL;
  }
  *(_WORD *)(a1 + 2LL * v36 + 128) = v14;
  v15 = *(_QWORD *)(a1 + 80);
  v16 = (*(_QWORD *)(a1 + 88) - v15) >> 2;
  if ( (unsigned int)v12 >= v16 )
  {
    if ( (unsigned int)v12 <= v16 )
      goto LABEL_29;
    if ( (unsigned int)v12 > (unsigned __int64)((*(_QWORD *)(a1 + 96) - v15) >> 2) )
    {
      sub_18008EE60((__int64 *)(a1 + 80), (unsigned int)v12);
      goto LABEL_29;
    }
    v17 = sub_18008F14C(*(char **)(a1 + 88), (unsigned int)v12 - v16);
  }
  else
  {
    v17 = (char *)(v15 + 4 * v12);
  }
  *(_QWORD *)(a1 + 88) = v17;
LABEL_29:
  if ( v41 >= 0x10 )
    sub_180010884(v40[0], v41 + 1);
  return v36;
}
