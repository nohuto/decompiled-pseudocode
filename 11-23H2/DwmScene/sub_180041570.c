/*
 * XREFs of sub_180041570 @ 0x180041570
 * Callers:
 *     sub_180041F30 @ 0x180041F30 (sub_180041F30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18002E108 @ 0x18002E108 (sub_18002E108.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 *     sub_180041190 @ 0x180041190 (sub_180041190.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180041570(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rax
  bool v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  volatile __int32 *v19; // rax
  __int32 v20; // r8d
  _QWORD *v21; // rax
  bool v22; // si
  __int64 *v23; // rax
  __int64 v24; // r8
  __int64 result; // rax
  _DWORD *v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h]
  __int128 v33; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v34[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int64 *v39; // [rsp+90h] [rbp-70h]
  _QWORD *v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-58h]
  _QWORD v43[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 pExceptionObject; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-28h]
  _QWORD v46[7]; // [rsp+108h] [rbp+8h] BYREF

  v39 = a2;
  v40 = a3;
  if ( sub_180011DD0(a2) )
  {
    sub_180010DD0(v43, (__int64)"Scene::InsertNode() - node must not be null");
    v6 = sub_180010DD0(
           v34,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(&pExceptionObject, (__int64)v6, v7, (__int64)v43, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)&pExceptionObject;
  }
  if ( sub_180011DD0(a3) )
  {
    sub_180010DD0(
      v43,
      (__int64)"Scene::InsertNode() - new parent must not be null (to remove a node from the scene graph use RemoveNode() instead");
    v8 = sub_180010DD0(
           v34,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(&pExceptionObject, (__int64)v8, v9, (__int64)v43, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)&pExceptionObject;
  }
  v10 = (_QWORD *)sub_18001265C(*a2, &pExceptionObject);
  v11 = sub_180011DE0(v10);
  if ( v45 )
    sub_180010530(v45);
  if ( v11 )
  {
    sub_180010DD0(
      v43,
      (__int64)"Scene::InsertNode() - node must not be already attached to a scene (to insert this node into the parents "
               "scene use RemoveNode() first");
    v12 = sub_180010DD0(
            v34,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(&pExceptionObject, (__int64)v12, v13, (__int64)v43, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)&pExceptionObject;
  }
  v14 = sub_18001246C(v43, a2);
  sub_180041190(a1, &v37, v14);
  v15 = sub_18001246C(v34, a3);
  sub_180041190(a1, &v35, v15);
  if ( sub_180011DE0(&v37) )
  {
    sub_180010DD0(&pExceptionObject, (__int64)"Scene::InsertNode() - the node must not already be in a layer.");
    v16 = sub_180010DD0(
            v43,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(v46, (__int64)v16, v17, (__int64)&pExceptionObject, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v46;
  }
  sub_18002A404(a1 + 16);
  if ( sub_180011DE0(&v35) )
  {
    v32 = v35 + 76;
    v31 = 1;
    sub_18002E120(&v31);
    v19 = (volatile __int32 *)sub_18001C7FC(v18);
    while ( _InterlockedExchange(v19, v20) )
      ;
    v21 = sub_180012624(*a2, &v41);
    v22 = sub_180011DE0(v21);
    if ( v42 )
      sub_180010530(v42);
    if ( v22 )
    {
      v33 = 0LL;
      sub_18003D504(*a2, (__int64 *)&v33);
    }
    v23 = sub_18001246C(v34, a3);
    sub_18003D504(v24, v23);
    v31 = 0;
    sub_18002E108(v32);
    result = sub_18002E114(&v31);
    *v26 = result;
  }
  else
  {
    v27 = sub_18001246C(v43, a3);
    result = sub_18003D504(v28, v27);
  }
  if ( v36 )
    result = sub_180010530(v36);
  if ( v38 )
    result = sub_180010530(v38);
  v29 = a2[1];
  if ( v29 )
    result = sub_180010530(v29);
  v30 = a3[1];
  if ( v30 )
    return sub_180010530(v30);
  return result;
}
