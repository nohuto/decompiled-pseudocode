/*
 * XREFs of sub_180045178 @ 0x180045178
 * Callers:
 *     sub_1800157A0 @ 0x1800157A0 (sub_1800157A0.c)
 *     sub_180019460 @ 0x180019460 (sub_180019460.c)
 *     sub_1800400C8 @ 0x1800400C8 (sub_1800400C8.c)
 *     sub_180045304 @ 0x180045304 (sub_180045304.c)
 *     sub_18006FE60 @ 0x18006FE60 (sub_18006FE60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180045044 @ 0x180045044 (sub_180045044.c)
 *     sub_1800462CC @ 0x1800462CC (sub_1800462CC.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180045178(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // r14d
  _QWORD *v8; // r9
  __int64 v9; // rcx
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int128 v15; // [rsp+30h] [rbp-89h] BYREF
  __int128 v16; // [rsp+40h] [rbp-79h] BYREF
  _QWORD *v17; // [rsp+50h] [rbp-69h]
  __int128 v18; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v19[4]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v20[4]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B0h] [rbp-9h] BYREF

  v5 = a3;
  v17 = a4;
  if ( !a3 )
  {
    sub_1800113D0(v20, "Scene::AddNode() -- Unique ID zero is reserved for root-level layer nodes.");
    v13 = sub_1800113D0(
            v19,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v13, v14, (__int64)v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( sub_1800122B0(a4) )
  {
    sub_1800113D0(v19, "Scene::AddNode() -- A non-null parent must be specified.");
    v11 = sub_1800113D0(
            v20,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v11, v12, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v16 = 0LL;
  v9 = v8[1];
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = v8[1];
  }
  *(_QWORD *)&v16 = *v8;
  *((_QWORD *)&v16 + 1) = v9;
  sub_1800462CC(a1, &v18, &v16);
  v15 = 0LL;
  if ( *((_QWORD *)&v18 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL));
  v15 = v18;
  sub_180045044(a1, a2, v5, *(_QWORD *)(*a4 + 368LL), &v15);
  sub_180010910((__int64)&v18);
  sub_180010910((__int64)a4);
  return a2;
}
