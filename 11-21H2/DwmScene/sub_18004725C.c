/*
 * XREFs of sub_18004725C @ 0x18004725C
 * Callers:
 *     sub_180013140 @ 0x180013140 (sub_180013140.c)
 *     sub_180015E00 @ 0x180015E00 (sub_180015E00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180046704 @ 0x180046704 (sub_180046704.c)
 *     sub_180046DF4 @ 0x180046DF4 (sub_180046DF4.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18004725C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // r8
  __int64 *v7; // r8
  __int64 v8; // r8
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // r8
  __int64 v13; // rdx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  bool v16; // bl
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int128 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+68h] [rbp-98h] BYREF
  __int128 v31; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v32; // [rsp+88h] [rbp-78h]
  _QWORD *v33; // [rsp+90h] [rbp-70h]
  _QWORD v34[4]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v35[4]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+D8h] [rbp-28h] BYREF

  v32 = a2;
  v33 = a3;
  if ( sub_1800122B0(a2) )
  {
    sub_1800113D0(v35, "Scene::SetNodeParent() - node must not be null");
    v23 = sub_1800113D0(
            v34,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v23, v24, (__int64)v35, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( sub_1800122B0(v6) )
  {
    sub_1800113D0(
      v34,
      "Scene::SetNodeParent() - new parent must not be null  (to remove a node from the scene graph use RemoveNode() instead");
    v25 = sub_1800113D0(
            v35,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v25, v26, (__int64)v34, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = *v7;
  v28 = 0LL;
  v9 = *(_QWORD *)(v8 + 80);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 8);
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
      if ( v11 == v10 )
      {
        v28 = *(_OWORD *)(v8 + 72);
        break;
      }
    }
  }
  v12 = *a2;
  v27 = 0LL;
  v13 = *(_QWORD *)(v12 + 80);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 8);
    while ( v14 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14);
      if ( v15 == v14 )
      {
        v27 = *(_OWORD *)(v12 + 72);
        break;
      }
    }
  }
  v16 = sub_1800122D0(&v27, &v28);
  sub_180010910((__int64)&v27);
  sub_180010910((__int64)&v28);
  if ( v16 )
  {
    sub_1800113D0(v34, "Scene::SetNodeParent() - both nodes must belong to the same scene");
    v21 = sub_1800113D0(
            v35,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v21, v22, (__int64)v34, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v29 = 0LL;
  v17 = a2[1];
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v17 = a2[1];
  }
  *(_QWORD *)&v29 = *a2;
  *((_QWORD *)&v29 + 1) = v17;
  sub_180046DF4(a1, (__int64 *)&v29);
  v30 = 0LL;
  v18 = a3[1];
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = a3[1];
  }
  *(_QWORD *)&v30 = *a3;
  *((_QWORD *)&v30 + 1) = v18;
  v31 = 0LL;
  v19 = a2[1];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v19 = a2[1];
  }
  *(_QWORD *)&v31 = *a2;
  *((_QWORD *)&v31 + 1) = v19;
  sub_180046704(a1, (__int64 *)&v31, &v30);
  sub_180010910((__int64)a2);
  return sub_180010910((__int64)a3);
}
