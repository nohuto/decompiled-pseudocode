/*
 * XREFs of sub_1800403BC @ 0x1800403BC
 * Callers:
 *     sub_180014CA0 @ 0x180014CA0 (sub_180014CA0.c)
 *     sub_180018250 @ 0x180018250 (sub_180018250.c)
 *     sub_18003B9D0 @ 0x18003B9D0 (sub_18003B9D0.c)
 *     sub_18004051C @ 0x18004051C (sub_18004051C.c)
 *     sub_180066720 @ 0x180066720 (sub_180066720.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_1800402B0 @ 0x1800402B0 (sub_1800402B0.c)
 *     sub_180041190 @ 0x180041190 (sub_180041190.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800403BC(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // esi
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD v16[4]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v18; // [rsp+70h] [rbp-29h] BYREF
  __int64 v19; // [rsp+78h] [rbp-21h]
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v5 = a3;
  v16[3] = a4;
  if ( !a3 )
  {
    sub_180010DD0(&v18, (__int64)"Scene::AddNode() -- Unique ID zero is reserved for root-level layer nodes.");
    v8 = sub_180010DD0(
           v17,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v8, v9, (__int64)&v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( sub_180011DD0(a4) )
  {
    sub_180010DD0(&v18, (__int64)"Scene::AddNode() -- A non-null parent must be specified.");
    v10 = sub_180010DD0(
            v17,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v10, v11, (__int64)&v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v12 = sub_18001246C(v17, a4);
  sub_180041190(a1, &v18, v12);
  v13 = sub_18001246C(v16, &v18);
  sub_1800402B0(a1, a2, v5, *(_QWORD *)(*a4 + 368LL), v13);
  if ( v19 )
    sub_180010530(v19);
  v14 = a4[1];
  if ( v14 )
    sub_180010530(v14);
  return a2;
}
