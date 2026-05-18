/*
 * XREFs of sub_1800457FC @ 0x1800457FC
 * Callers:
 *     sub_1800465F0 @ 0x1800465F0 (sub_1800465F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_1800306A0 @ 0x1800306A0 (sub_1800306A0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800423FC @ 0x1800423FC (sub_1800423FC.c)
 *     sub_1800424AC @ 0x1800424AC (sub_1800424AC.c)
 *     sub_18004420C @ 0x18004420C (sub_18004420C.c)
 *     sub_180044348 @ 0x180044348 (sub_180044348.c)
 *     sub_180045AA4 @ 0x180045AA4 (sub_180045AA4.c)
 *     sub_18004614C @ 0x18004614C (sub_18004614C.c)
 *     sub_180046C14 @ 0x180046C14 (sub_180046C14.c)
 */

// Hidden C++ exception states: #wind=10
_QWORD *__fastcall sub_1800457FC(__int64 a1, _QWORD *a2, char *a3)
{
  __int64 *v6; // rax
  _QWORD *v7; // rax
  bool v8; // bl
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 *v15; // rax
  void *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int128 v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+40h] [rbp-C0h]
  __int128 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v24; // [rsp+70h] [rbp-90h]
  _BYTE v25[16]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v26[5]; // [rsp+88h] [rbp-78h] BYREF
  char *v27[3]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+C8h] [rbp-38h]
  char *v29[3]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v30; // [rsp+E8h] [rbp-18h]
  _BYTE v31[32]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+110h] [rbp+10h] BYREF

  v24 = a2;
  v26[4] = (__int64)a3;
  v21 = 0;
  sub_18002C7C4(a1 + 16);
  v6 = sub_1800129F4(v26, (__int64)a3);
  v7 = (_QWORD *)sub_18004614C(a1, v25, v6);
  v8 = sub_1800122C0(v7);
  sub_180010910((__int64)v25);
  if ( v8 )
  {
    v15 = sub_1800306A0((__int64 *)v29, a3);
    v16 = (void *)sub_18001DD3C((__int64)v27, (__int64)"Scene::CreateLayer() - a layer with ID ", v15);
    v17 = sub_18001DC84((__int64)v31, v16);
    v18 = sub_1800113D0(
            v26,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v18, v19, v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180045AA4(a1, &v22, &unk_18012ABB0);
  v9 = sub_1800306A0((__int64 *)v27, a3);
  sub_18001DD3C((__int64)v29, (__int64)"LayerRoot:", v9);
  if ( v28 >= 0x10 )
    sub_180010884(v27[0], v28 + 1);
  v27[2] = 0LL;
  v28 = 15LL;
  LOBYTE(v27[0]) = 0;
  sub_1800424AC(v22, (__int64 *)v29);
  v10 = sub_18001D684();
  v11 = v10;
  *(_QWORD *)&v20 = v10;
  if ( v10 )
  {
    *(_OWORD *)v10 = 0LL;
    *(_DWORD *)(v10 + 8) = 1;
    *(_DWORD *)(v10 + 12) = 1;
    *(_QWORD *)v10 = &std::_Ref_count_obj2<Spectre::Engine::SceneLayer>::`vftable';
    sub_18004420C(v10 + 16, (__int64)a3, (__int64)&v22);
  }
  else
  {
    v11 = 0LL;
  }
  *a2 = v11 + 16;
  a2[1] = v11;
  v21 = 3;
  sub_180044348((__int64 *)(a1 + 88), (__int64)v31, a3, a2);
  v23 = 0LL;
  v12 = a2[1];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = a2[1];
  }
  *(_QWORD *)&v23 = *a2;
  *((_QWORD *)&v23 + 1) = v12;
  sub_1800423FC(v22, (__int64 *)&v23);
  v20 = 0LL;
  if ( *((_QWORD *)&v22 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v22 + 1) + 8LL));
  v20 = v22;
  sub_180046C14(a1, &v20);
  if ( v30 >= 0x10 )
    sub_180010884(v29[0], v30 + 1);
  sub_180010910((__int64)&v22);
  v13 = *((_QWORD *)a3 + 3);
  if ( v13 >= 8 )
    sub_180010884(*(char **)a3, 2 * v13 + 2);
  *((_QWORD *)a3 + 2) = 0LL;
  *((_QWORD *)a3 + 3) = 7LL;
  *(_WORD *)a3 = 0;
  return a2;
}
