/*
 * XREFs of sub_180041F30 @ 0x180041F30
 * Callers:
 *     sub_180012AA0 @ 0x180012AA0 (sub_180012AA0.c)
 *     sub_180015190 @ 0x180015190 (sub_180015190.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180041570 @ 0x180041570 (sub_180041570.c)
 *     sub_180041B20 @ 0x180041B20 (sub_180041B20.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180041F30(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 *v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  _QWORD *v12; // r11
  bool v13; // si
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 *v17; // rax
  _QWORD *v18; // r8
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-69h] BYREF
  __int64 v23; // [rsp+38h] [rbp-61h]
  _QWORD v24[6]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v25; // [rsp+70h] [rbp-29h] BYREF
  __int64 v26; // [rsp+78h] [rbp-21h]
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v24[4] = a2;
  v24[5] = a3;
  if ( sub_180011DD0(a2) )
  {
    sub_180010DD0(&v25, (__int64)"Scene::SetNodeParent() - node must not be null");
    v6 = sub_180010DD0(
           v24,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v6, v7, (__int64)&v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( sub_180011DD0(a3) )
  {
    sub_180010DD0(
      &v25,
      (__int64)"Scene::SetNodeParent() - new parent must not be null  (to remove a node from the scene graph use RemoveNode() instead");
    v9 = sub_180010DD0(
           v24,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v9, v10, (__int64)&v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18001265C(*v8, &v25);
  v11 = (_QWORD *)sub_18001265C(*a2, &v22);
  v13 = sub_180011DF0(v11, v12);
  if ( v23 )
    sub_180010530(v23);
  if ( v26 )
    sub_180010530(v26);
  if ( v13 )
  {
    sub_180010DD0(&v25, (__int64)"Scene::SetNodeParent() - both nodes must belong to the same scene");
    v14 = sub_180010DD0(
            v24,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v14, v15, (__int64)&v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v16 = sub_18001246C(&v25, a2);
  sub_180041B20(a1, v16);
  sub_18001246C(&v25, a3);
  v17 = sub_18001246C(v24, a2);
  result = sub_180041570(a1, v17, v18);
  v20 = a2[1];
  if ( v20 )
    result = sub_180010530(v20);
  v21 = a3[1];
  if ( v21 )
    return sub_180010530(v21);
  return result;
}
