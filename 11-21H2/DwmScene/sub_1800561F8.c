/*
 * XREFs of sub_1800561F8 @ 0x1800561F8
 * Callers:
 *     sub_1800375A0 @ 0x1800375A0 (sub_1800375A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD9C @ 0x18001DD9C (sub_18001DD9C.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800545BC @ 0x1800545BC (sub_1800545BC.c)
 *     sub_1800549C0 @ 0x1800549C0 (sub_1800549C0.c)
 *     sub_180058450 @ 0x180058450 (sub_180058450.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800561F8(__int64 a1, char **a2, int a3, __int64 a4)
{
  __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int128 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h]
  char **v22; // [rsp+48h] [rbp-B8h]
  _QWORD v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+60h] [rbp-A0h]
  __int128 v25; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v26[4]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+C8h] [rbp-38h] BYREF

  v22 = a2;
  v21 = a4;
  if ( !a2[2] )
  {
    sub_1800113D0(v26, "ShaderManager::AddShaderProgram() -- shader program cannot be registered with an empty name");
    v14 = sub_1800113D0(
            v27,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003F4DC(v23, (__int64)v14, v15, (__int64)v26, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v23;
  }
  v7 = (__int64 *)(a1 + 18576);
  if ( *(_QWORD *)sub_180058450(a1 + 18576, &v20, a2) != *(_QWORD *)(a1 + 18576) )
  {
    v16 = sub_18001DD9C(v27, "ShaderManager::AddShaderProgram() -- shader program for name '", a2);
    v17 = sub_18001DC84((__int64)v23, v16);
    v18 = sub_1800113D0(
            v26,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v18, v19, v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_QWORD *)a4 == *(_QWORD *)(a4 + 8) && *(_DWORD *)(a4 + 32) == *(_DWORD *)(a4 + 24) )
  {
    sub_1800113D0(
      v27,
      "ShaderManager::AddShaderProgram() -- shader program cannot be registered with zero-length program buffer");
    v12 = sub_1800113D0(
            v26,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v12, v13, (__int64)v27, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = sub_18001D684();
  if ( v8 )
  {
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::ShaderProgram>::`vftable';
    sub_1800545BC((_QWORD *)(v8 + 16), (_QWORD *)a4);
  }
  else
  {
    v9 = 0LL;
  }
  v23[0] = v9 + 16;
  v23[1] = v9;
  v20 = 0LL;
  v24 = a3;
  v25 = 0LL;
  sub_180010910((__int64)&v20);
  sub_1800549C0(v7, (__int64)&v20, a2, v23);
  sub_180010910((__int64)&v25);
  result = sub_180010910((__int64)v23);
  v11 = (unsigned __int64)a2[3];
  if ( v11 >= 0x10 )
    result = sub_180010884(*a2, v11 + 1);
  a2[2] = 0LL;
  a2[3] = (char *)15;
  *(_BYTE *)a2 = 0;
  if ( *(_QWORD *)a4 )
  {
    result = sub_180010884(*(char **)a4, *(_QWORD *)(a4 + 16) - *(_QWORD *)a4);
    *(_QWORD *)a4 = 0LL;
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_QWORD *)(a4 + 16) = 0LL;
  }
  return result;
}
