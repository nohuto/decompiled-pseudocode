/*
 * XREFs of sub_1800424DC @ 0x1800424DC
 * Callers:
 *     sub_18003F8F4 @ 0x18003F8F4 (sub_18003F8F4.c)
 *     sub_1800453E0 @ 0x1800453E0 (sub_1800453E0.c)
 *     sub_180046704 @ 0x180046704 (sub_180046704.c)
 *     sub_180046DF4 @ 0x180046DF4 (sub_180046DF4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     sub_18001266C @ 0x18001266C (sub_18001266C.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18003FCC8 @ 0x18003FCC8 (sub_18003FCC8.c)
 *     sub_180040DA0 @ 0x180040DA0 (sub_180040DA0.c)
 *     sub_180041EF4 @ 0x180041EF4 (sub_180041EF4.c)
 *     sub_180043208 @ 0x180043208 (sub_180043208.c)
 *     sub_180043324 @ 0x180043324 (sub_180043324.c)
 *     sub_180043408 @ 0x180043408 (sub_180043408.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     sub_180045C24 @ 0x180045C24 (sub_180045C24.c)
 *     sub_180046C14 @ 0x180046C14 (sub_180046C14.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800424DC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rcx
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  bool v14; // r14
  bool v15; // r15
  char v16; // dl
  __int64 v17; // r8
  __int64 v18; // rdx
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  __int128 v21; // kr00_16
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  volatile signed __int32 *v25; // rcx
  __int64 v26; // rdx
  __int128 v27; // kr10_16
  volatile signed __int32 *v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  _QWORD *v38; // rax
  __int64 v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // r8
  __int128 v42; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v43[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+70h] [rbp-90h] BYREF
  __int128 v46; // [rsp+80h] [rbp-80h] BYREF
  __int128 v47; // [rsp+90h] [rbp-70h] BYREF
  __int128 v48; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v49; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v50; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v51; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v52[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v53; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v54[3]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v55[2]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v56[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v57[4]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v58[4]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+178h] [rbp+78h] BYREF

  v54[2] = a2;
  sub_1800436D4(a1);
  *(_OWORD *)v43 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
LABEL_73:
    sub_1800120F4();
  v5 = *(_DWORD *)(v4 + 8);
  do
  {
    if ( !v5 )
      goto LABEL_73;
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
  }
  while ( v6 != v5 );
  *(_OWORD *)v43 = *(_OWORD *)(a1 + 8);
  if ( !*(_QWORD *)(a1 + 368) )
  {
    sub_1800113D0(
      v58,
      "SceneNode::SetParent() -- Unique ID zero is reserved for root-level nodes -- this node must not be given a parent.");
    v40 = sub_1800113D0(
            v57,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scenenode.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v40, v41, (__int64)v58, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( sub_1800122C0(a2) )
  {
    v49 = 0LL;
    v7 = a2[1];
    if ( v7 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
      v7 = a2[1];
    }
    *(_QWORD *)&v49 = *a2;
    *((_QWORD *)&v49 + 1) = v7;
    if ( (unsigned __int8)sub_180043208(a1, &v49) )
    {
      sub_1800113D0(
        v57,
        "SceneNode::SetParent() -- A node's parent cannot be set to node that is within the node's own tree (cyclic graph prohibited).");
      v38 = sub_1800113D0(
              v58,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scenenode.cpp");
      sub_18003F4DC(pExceptionObject, (__int64)v38, v39, (__int64)v57, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  sub_180043668(a1);
  v48 = 0LL;
  v8 = *(_QWORD *)(a1 + 64);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    while ( v9 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9);
      if ( v10 == v9 )
      {
        v48 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v47 = 0LL;
  v11 = *(_QWORD *)(a1 + 80);
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 + 8);
    while ( v12 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12);
      if ( v13 == v12 )
      {
        v47 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v45 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( sub_1800122C0(&v48) )
    v14 = sub_1800122B0(a2);
  if ( sub_1800122B0(&v48) )
    v15 = sub_1800122C0(a2);
  if ( v16 )
    sub_180041EF4(v48, v43);
  if ( sub_1800122C0(a2) )
  {
    sub_18003FCC8((__int64 *)*a2, v43);
    v17 = *a2;
    v46 = 0LL;
    v18 = *(_QWORD *)(v17 + 80);
    if ( v18 )
    {
      v19 = *(_DWORD *)(v18 + 8);
      while ( v19 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 8), v19 + 1, v19);
        if ( v20 == v19 )
        {
          v46 = *(_OWORD *)(v17 + 72);
          break;
        }
      }
    }
    v21 = v46;
    v46 = 0LL;
    v52[0] = 0LL;
    v45 = v21;
    v52[1] = 0LL;
    sub_180010910((__int64)v52);
    sub_180010910((__int64)&v46);
  }
  v22 = a2[1];
  v23 = 0LL;
  v24 = 0LL;
  if ( v22 )
  {
    v23 = *a2;
    _InterlockedAdd((volatile signed __int32 *)(v22 + 12), 1u);
    v24 = v22;
  }
  *(_QWORD *)(a1 + 56) = v23;
  v25 = *(volatile signed __int32 **)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v24;
  if ( v25 && _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
  if ( sub_1800122D0(&v47, &v45) )
  {
    sub_180043408(a1);
    if ( v43[1] )
      _InterlockedAdd((volatile signed __int32 *)(v43[1] + 8), 1u);
    v44 = *(_OWORD *)v43;
    while ( sub_1800122C0(&v44) )
    {
      v26 = v44;
      v27 = 0uLL;
      if ( *((_QWORD *)&v45 + 1) )
      {
        v27 = v45;
        _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 12LL), 1u);
      }
      *(_QWORD *)(v26 + 72) = v27;
      v28 = *(volatile signed __int32 **)(v26 + 80);
      *(_QWORD *)(v26 + 80) = *((_QWORD *)&v27 + 1);
      if ( v28 && _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      v29 = sub_180040DA0(v43[0], v55, (__int64 *)&v44);
      v30 = *v29;
      v31 = v29[1];
      *v29 = 0LL;
      v29[1] = 0LL;
      v53 = v44;
      *(_QWORD *)&v44 = v30;
      *((_QWORD *)&v44 + 1) = v31;
      sub_180010910((__int64)&v53);
      sub_180010910((__int64)v55);
    }
    sub_180010910((__int64)&v44);
    sub_180043324(a1);
  }
  if ( v43[1] )
    _InterlockedAdd((volatile signed __int32 *)(v43[1] + 8), 1u);
  v42 = *(_OWORD *)v43;
  if ( sub_1800122C0(&v42) )
  {
    v32 = *((_QWORD *)&v42 + 1);
    do
    {
      if ( v15 && sub_1800122C0(&v45) )
      {
        v50 = 0LL;
        if ( v32 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v32 + 8), 1u);
          v32 = *((_QWORD *)&v42 + 1);
        }
        v50 = v42;
        sub_180046C14(v45, &v50);
      }
      if ( v14 && sub_1800122C0(&v47) )
      {
        v51 = 0LL;
        if ( v32 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v32 + 8), 1u);
          v32 = *((_QWORD *)&v42 + 1);
        }
        v51 = v42;
        sub_180045C24(v47, &v51);
      }
      v33 = sub_180040DA0(v43[0], v56, (__int64 *)&v42);
      v34 = *v33;
      v35 = v33[1];
      *v33 = 0LL;
      v33[1] = 0LL;
      v54[0] = v42;
      *(_QWORD *)&v42 = v34;
      v54[1] = v32;
      v32 = v35;
      *((_QWORD *)&v42 + 1) = v35;
      sub_180010910((__int64)v54);
      sub_180010910((__int64)v56);
    }
    while ( sub_1800122C0(&v42) );
  }
  sub_180010910((__int64)&v42);
  v36 = _InterlockedIncrement64((volatile signed __int64 *)sub_18001266C((__int64)&unk_1801F4B40));
  *(_QWORD *)(a1 + 208) = v36;
  if ( v36 < *(_QWORD *)(a1 + 216) )
    v36 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = v36;
  sub_180010910((__int64)&v45);
  sub_180010910((__int64)&v47);
  sub_180010910((__int64)&v48);
  sub_180010910((__int64)v43);
  return sub_180010910((__int64)a2);
}
