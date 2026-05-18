/*
 * XREFs of sub_180046DF4 @ 0x180046DF4
 * Callers:
 *     sub_180013140 @ 0x180013140 (sub_180013140.c)
 *     sub_180015B40 @ 0x180015B40 (sub_180015B40.c)
 *     sub_180015E00 @ 0x180015E00 (sub_180015E00.c)
 *     sub_18004725C @ 0x18004725C (sub_18004725C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_18003070C @ 0x18003070C (sub_18003070C.c)
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 *     sub_1800462CC @ 0x1800462CC (sub_1800462CC.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180046DF4(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r14
  _QWORD *v7; // rax
  bool v8; // bl
  __int64 v9; // rdx
  volatile __int32 *v10; // rax
  __int32 v11; // r8d
  int v12; // eax
  _DWORD *v13; // rdx
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // r8
  unsigned int v21; // [rsp+38h] [rbp-81h] BYREF
  __int64 *v22; // [rsp+40h] [rbp-79h] BYREF
  __int128 v23; // [rsp+48h] [rbp-71h] BYREF
  __int64 v24[2]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v25[2]; // [rsp+68h] [rbp-51h] BYREF
  _OWORD v26[2]; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v27[4]; // [rsp+98h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp-1h] BYREF

  v22 = a2;
  if ( sub_1800122B0(a2) )
  {
    sub_1800113D0(v27, "Scene::RemoveNode() - node must not be null");
    v17 = sub_1800113D0(
            v26,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v17, v18, (__int64)v27, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v23 = 0LL;
  v5 = v4[1];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = v4[1];
  }
  *(_QWORD *)&v23 = *v4;
  *((_QWORD *)&v23 + 1) = v5;
  sub_1800462CC(a1, v24, (__int64 *)&v23);
  if ( sub_1800122B0(v24) )
  {
    sub_1800113D0(v26, "Scene::RemoveNode() - node is not in any layer");
    v19 = sub_1800113D0(
            v27,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v19, v20, (__int64)v26, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = v24[0];
  v7 = sub_1800465B0(v24[0], v25);
  v8 = sub_180016240(a2, v7);
  sub_180010910((__int64)v25);
  if ( v8 )
  {
    sub_1800113D0(
      v26,
      "Scene::RemoveNode() - the root node of a layer is for internal use by the system and must not be removed");
    v15 = sub_1800113D0(
            v27,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v15, v16, (__int64)v26, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18002C7C4(a1 + 16);
  v21 = 1;
  sub_180030724(&v21);
  v10 = (volatile __int32 *)sub_18001DE70(v9);
  while ( _InterlockedExchange(v10, v11) )
    ;
  v26[0] = 0LL;
  sub_1800424DC(*a2, v26);
  LODWORD(v22) = 0;
  sub_18003070C(v6 + 76);
  v12 = sub_180030718((unsigned int *)&v22);
  *v13 = v12;
  sub_180010910((__int64)v24);
  return sub_180010910((__int64)a2);
}
