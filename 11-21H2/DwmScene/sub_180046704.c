/*
 * XREFs of sub_180046704 @ 0x180046704
 * Callers:
 *     sub_18004725C @ 0x18004725C (sub_18004725C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_18003070C @ 0x18003070C (sub_18003070C.c)
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_1800462CC @ 0x1800462CC (sub_1800462CC.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180046704(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // r8
  __int64 *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  bool v12; // bl
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  volatile __int32 *v16; // rax
  __int32 v17; // r8d
  __int64 v18; // rbx
  __int64 v19; // rdx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  bool v22; // bl
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  _DWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *v30; // rax
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // r8
  __int64 v38; // [rsp+38h] [rbp-C8h]
  unsigned int v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v40; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v42; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+70h] [rbp-90h] BYREF
  __int128 v44; // [rsp+80h] [rbp-80h] BYREF
  __int128 v45; // [rsp+90h] [rbp-70h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v47[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v49[3]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v50[4]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v51[4]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+128h] [rbp+28h] BYREF

  v40 = a2;
  v49[2] = a3;
  if ( sub_1800122B0(a2) )
  {
    sub_1800113D0(v51, "Scene::InsertNode() - node must not be null");
    v32 = sub_1800113D0(
            v50,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v32, v33, (__int64)v51, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( sub_1800122B0(v6) )
  {
    sub_1800113D0(
      v50,
      "Scene::InsertNode() - new parent must not be null (to remove a node from the scene graph use RemoveNode() instead");
    v34 = sub_1800113D0(
            v51,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v34, v35, (__int64)v50, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = *v7;
  v41 = 0LL;
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
        v41 = *(_OWORD *)(v8 + 72);
        break;
      }
    }
  }
  v12 = sub_1800122C0(&v41);
  sub_180010910((__int64)&v41);
  if ( v12 )
  {
    sub_1800113D0(
      v50,
      "Scene::InsertNode() - node must not be already attached to a scene (to insert this node into the parents scene use"
      " RemoveNode() first");
    v36 = sub_1800113D0(
            v51,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v36, v37, (__int64)v50, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v42 = 0LL;
  v13 = a2[1];
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = a2[1];
  }
  *(_QWORD *)&v42 = *a2;
  *((_QWORD *)&v42 + 1) = v13;
  sub_1800462CC(a1, v49, (__int64 *)&v42);
  v43 = 0LL;
  v14 = a3[1];
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v14 = a3[1];
  }
  *(_QWORD *)&v43 = *a3;
  *((_QWORD *)&v43 + 1) = v14;
  sub_1800462CC(a1, v47, (__int64 *)&v43);
  if ( sub_1800122C0(v49) )
  {
    sub_1800113D0(v50, "Scene::InsertNode() - the node must not already be in a layer.");
    v30 = sub_1800113D0(
            v51,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v30, v31, (__int64)v50, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18002C7C4(a1 + 16);
  if ( sub_1800122C0(v47) )
  {
    v38 = v47[0] + 76LL;
    v39 = 1;
    sub_180030724(&v39);
    v16 = (volatile __int32 *)sub_18001DE70(v15);
    while ( _InterlockedExchange(v16, v17) )
      ;
    v18 = *a2;
    sub_180043668(*a2);
    v44 = 0LL;
    v19 = *(_QWORD *)(v18 + 64);
    if ( v19 )
    {
      v20 = *(_DWORD *)(v19 + 8);
      while ( v20 )
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v20 + 1, v20);
        if ( v21 == v20 )
        {
          v44 = *(_OWORD *)(v18 + 56);
          break;
        }
      }
    }
    v22 = sub_1800122C0(&v44);
    sub_180010910((__int64)&v44);
    if ( v22 )
    {
      v48 = 0LL;
      sub_1800424DC(*a2, &v48);
    }
    v23 = *a2;
    v45 = 0LL;
    v24 = a3[1];
    if ( v24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
      v24 = a3[1];
    }
    *(_QWORD *)&v45 = *a3;
    *((_QWORD *)&v45 + 1) = v24;
    sub_1800424DC(v23, &v45);
    LODWORD(v40) = 0;
    sub_18003070C(v38);
    v25 = sub_180030718((unsigned int *)&v40);
    *v26 = v25;
  }
  else
  {
    v27 = *a2;
    v46 = 0LL;
    v28 = a3[1];
    if ( v28 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
      v28 = a3[1];
    }
    *(_QWORD *)&v46 = *a3;
    *((_QWORD *)&v46 + 1) = v28;
    sub_1800424DC(v27, &v46);
  }
  sub_180010910((__int64)v47);
  sub_180010910((__int64)v49);
  sub_180010910((__int64)a2);
  return sub_180010910((__int64)a3);
}
