/*
 * XREFs of sub_18004093C @ 0x18004093C
 * Callers:
 *     sub_180041440 @ 0x180041440 (sub_180041440.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18002E0A8 @ 0x18002E0A8 (sub_18002E0A8.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18003D424 @ 0x18003D424 (sub_18003D424.c)
 *     sub_18003D4BC @ 0x18003D4BC (sub_18003D4BC.c)
 *     sub_18003F260 @ 0x18003F260 (sub_18003F260.c)
 *     sub_18003F9C4 @ 0x18003F9C4 (sub_18003F9C4.c)
 *     sub_180040BB8 @ 0x180040BB8 (sub_180040BB8.c)
 *     sub_1800410C0 @ 0x1800410C0 (sub_1800410C0.c)
 *     sub_1800419A0 @ 0x1800419A0 (sub_1800419A0.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall sub_18004093C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  bool v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 *v15; // rax
  _QWORD *v16; // rax
  _QWORD v18[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+40h] [rbp-C0h]
  _QWORD *v20; // [rsp+48h] [rbp-B8h]
  _QWORD *v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h]
  void *v24[4]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v25[4]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v27[4]; // [rsp+F0h] [rbp-10h] BYREF

  v20 = a2;
  v21 = a3;
  v19 = 0;
  sub_18002A404(a1 + 16);
  v6 = sub_180012440(v24, (__int64)a3);
  v7 = (_QWORD *)sub_1800410C0(a1, &v22, v6);
  v8 = sub_180011DE0(v7);
  if ( v23 )
    sub_180010530(v23);
  if ( v8 )
  {
    v9 = sub_18002E0A8(v25, a3);
    v10 = sub_18001C6E8(&v22, (__int64)"Scene::CreateLayer() - a layer with ID ", v9);
    v11 = sub_18001C61C(v27, v10, (__int64)" already exists");
    v12 = sub_180010DD0(
            v24,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v12, v13, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180040BB8(a1, &v22, &unk_180108C00);
  v14 = sub_18002E0A8(v25, a3);
  sub_18001C6E8(v24, (__int64)"LayerRoot:", v14);
  sub_180011B24((__int64)v25);
  sub_18003D4BC(v22, v24);
  sub_18003F9C4(a2, (__int64)a3, (__int64)&v22);
  v19 = 1;
  sub_18003F260((__int64 *)(a1 + 88), (__int64)v18, (__int64)a3, a2);
  v15 = sub_18001246C(v18, a2);
  sub_18003D424(v22, v15);
  v16 = sub_18001246C(v18, &v22);
  sub_1800419A0(a1, v16);
  sub_180011B24((__int64)v24);
  if ( v23 )
    sub_180010530(v23);
  sub_180013348((__int64)a3);
  return a2;
}
