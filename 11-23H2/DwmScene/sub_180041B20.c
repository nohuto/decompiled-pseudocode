/*
 * XREFs of sub_180041B20 @ 0x180041B20
 * Callers:
 *     sub_180012AA0 @ 0x180012AA0 (sub_180012AA0.c)
 *     sub_180014FF0 @ 0x180014FF0 (sub_180014FF0.c)
 *     sub_180015190 @ 0x180015190 (sub_180015190.c)
 *     sub_180041F30 @ 0x180041F30 (sub_180041F30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18002E108 @ 0x18002E108 (sub_18002E108.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 *     sub_180041190 @ 0x180041190 (sub_180041190.c)
 *     sub_180041410 @ 0x180041410 (sub_180041410.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180041B20(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r14
  _QWORD *v11; // rax
  bool v12; // di
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  volatile __int32 *v16; // rax
  __int32 v17; // r8d
  __int64 result; // rax
  _DWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 *v25; // [rsp+68h] [rbp-98h]
  __int64 pExceptionObject[7]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v27[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v28[7]; // [rsp+C8h] [rbp-38h] BYREF

  v25 = a2;
  if ( sub_180011DD0(a2) )
  {
    sub_180010DD0(v27, (__int64)"Scene::RemoveNode() - node must not be null");
    v5 = sub_180010DD0(
           &v23,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v5, v6, (__int64)v27, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = sub_18001246C(v27, v4);
  sub_180041190(a1, &v21, v7);
  if ( sub_180011DD0(&v21) )
  {
    sub_180010DD0(pExceptionObject, (__int64)"Scene::RemoveNode() - node is not in any layer");
    v8 = sub_180010DD0(
           &v23,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(v28, (__int64)v8, v9, (__int64)pExceptionObject, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v28;
  }
  v10 = v21;
  v11 = (_QWORD *)sub_180041410(v21, &v23);
  v12 = sub_180015678(a2, v11);
  if ( v24 )
    sub_180010530(v24);
  if ( v12 )
  {
    sub_180010DD0(
      pExceptionObject,
      (__int64)"Scene::RemoveNode() - the root node of a layer is for internal use by the system and must not be removed");
    v13 = sub_180010DD0(
            &v23,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(v28, (__int64)v13, v14, (__int64)pExceptionObject, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v28;
  }
  sub_18002A404(a1 + 16);
  LODWORD(pExceptionObject[0]) = 1;
  sub_18002E120((unsigned int *)pExceptionObject);
  v16 = (volatile __int32 *)sub_18001C7FC(v15);
  while ( _InterlockedExchange(v16, v17) )
    ;
  *(_OWORD *)pExceptionObject = 0LL;
  sub_18003D504(*a2, pExceptionObject);
  LODWORD(pExceptionObject[0]) = 0;
  sub_18002E108(v10 + 76);
  result = sub_18002E114((unsigned int *)pExceptionObject);
  *v19 = result;
  if ( v22 )
    result = sub_180010530(v22);
  v20 = a2[1];
  if ( v20 )
    return sub_180010530(v20);
  return result;
}
