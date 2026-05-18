/*
 * XREFs of sub_1800412EC @ 0x1800412EC
 * Callers:
 *     sub_180012AA0 @ 0x180012AA0 (sub_180012AA0.c)
 *     sub_180015190 @ 0x180015190 (sub_180015190.c)
 *     sub_180018250 @ 0x180018250 (sub_180018250.c)
 *     sub_18001C00C @ 0x18001C00C (sub_18001C00C.c)
 *     sub_18004051C @ 0x18004051C (sub_18004051C.c)
 *     sub_180066720 @ 0x180066720 (sub_180066720.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 *     sub_18002E0A8 @ 0x18002E0A8 (sub_18002E0A8.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_1800410C0 @ 0x1800410C0 (sub_1800410C0.c)
 *     sub_180041410 @ 0x180041410 (sub_180041410.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800412EC(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h]
  _QWORD v15[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v16[5]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v18[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v19[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v20[4]; // [rsp+110h] [rbp+10h] BYREF

  v16[4] = a3;
  sub_18002A37C(a1 + 16);
  v6 = sub_180012440(v15, (__int64)a3);
  sub_1800410C0(a1, &v13, (__int64)v6);
  if ( sub_180011DD0(&v13) )
  {
    v7 = sub_18002E0A8(v18, a3);
    v8 = sub_18001C6E8(v19, (__int64)"Scene::GetRootNode() - layer ", v7);
    v9 = sub_18001C61C(v20, v8, (__int64)" not found");
    v10 = sub_180010DD0(
            v16,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v10, v11, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180041410(v13, a2);
  if ( v14 )
    sub_180010530(v14);
  sub_180013348((__int64)a3);
  return a2;
}
