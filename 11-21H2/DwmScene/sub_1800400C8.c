/*
 * XREFs of sub_1800400C8 @ 0x1800400C8
 * Callers:
 *     sub_180013140 @ 0x180013140 (sub_180013140.c)
 *     sub_180015E00 @ 0x180015E00 (sub_180015E00.c)
 *     sub_1800400C8 @ 0x1800400C8 (sub_1800400C8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180013B30 @ 0x180013B30 (sub_180013B30.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_18001FEAC @ 0x18001FEAC (sub_18001FEAC.c)
 *     sub_180030CC8 @ 0x180030CC8 (sub_180030CC8.c)
 *     sub_18003725C @ 0x18003725C (sub_18003725C.c)
 *     sub_18003E5B0 @ 0x18003E5B0 (sub_18003E5B0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18003FE40 @ 0x18003FE40 (sub_18003FE40.c)
 *     sub_1800400C8 @ 0x1800400C8 (sub_1800400C8.c)
 *     sub_180042BA8 @ 0x180042BA8 (sub_180042BA8.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_180043EE4 @ 0x180043EE4 (sub_180043EE4.c)
 *     sub_180045178 @ 0x180045178 (sub_180045178.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 *__fastcall sub_1800400C8(__int64 a1, __int64 *a2, unsigned int a3, _QWORD *a4)
{
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int128 v11; // kr00_16
  __int64 v12; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 v15; // r8
  __int64 v16; // rdx
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int64 v19; // rdx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int128 v22; // kr10_16
  bool v23; // al
  int v24; // r8d
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // r14
  _QWORD *v28; // rbx
  _QWORD *v29; // r8
  __int64 **v30; // rdx
  __int64 *i; // rcx
  __int64 v32; // rax
  __int64 j; // rcx
  _QWORD *v34; // rdx
  __int64 *v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rcx
  void (__fastcall *v39)(__int64, __int64 **, unsigned int *, __int128 *); // r11
  __int64 v40; // rdx
  __int64 *v41; // rbx
  __int64 *v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rax
  _BYTE *v51; // rax
  _QWORD *v52; // rax
  void *v53; // rax
  __int64 v54; // rax
  void *v55; // rax
  __int64 v56; // rbx
  _QWORD *v57; // rax
  __int64 v58; // r8
  _QWORD *v59; // rax
  __int64 v60; // r8
  char v61; // [rsp+30h] [rbp-D0h]
  __int128 v62; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v63; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v64; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v65; // [rsp+70h] [rbp-90h] BYREF
  __int128 v66; // [rsp+78h] [rbp-88h] BYREF
  __int128 v67; // [rsp+88h] [rbp-78h] BYREF
  __int128 v68; // [rsp+98h] [rbp-68h] BYREF
  __int128 v69; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v70; // [rsp+C0h] [rbp-40h] BYREF
  int v71; // [rsp+C8h] [rbp-38h]
  __int64 v72; // [rsp+D0h] [rbp-30h] BYREF
  int v73; // [rsp+D8h] [rbp-28h]
  __int64 *v74[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v75[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v76; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v77; // [rsp+110h] [rbp+10h]
  _QWORD *v78; // [rsp+118h] [rbp+18h]
  __int128 v79; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v80[16]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v81[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v82[4]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v83[7]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v85[32]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v86[32]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v87[32]; // [rsp+230h] [rbp+130h] BYREF

  v77 = a2;
  v78 = a4;
  sub_180043668(a1);
  if ( sub_1800122B0(a4) )
  {
    sub_180043668(a1);
    v63 = 0LL;
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
          v11 = *(_OWORD *)(a1 + 56);
          goto LABEL_7;
        }
      }
    }
    v11 = v63;
LABEL_7:
    v63 = 0LL;
    v75[0] = *a4;
    *a4 = v11;
    v75[1] = a4[1];
    a4[1] = *((_QWORD *)&v11 + 1);
    sub_180010910((__int64)v75);
    sub_180010910((__int64)&v63);
  }
  v66 = 0LL;
  v12 = *(_QWORD *)(a1 + 80);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 8);
    while ( v13 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13);
      if ( v14 == v13 )
      {
        v66 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v15 = *a4;
  v62 = 0LL;
  v16 = *(_QWORD *)(v15 + 80);
  if ( v16 )
  {
    v17 = *(_DWORD *)(v16 + 8);
    while ( v17 )
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17);
      if ( v18 == v17 )
      {
        v62 = *(_OWORD *)(v15 + 72);
        break;
      }
    }
  }
  if ( sub_1800122B0(&v62) )
  {
    v64 = 0LL;
    v19 = *(_QWORD *)(a1 + 80);
    if ( v19 )
    {
      v20 = *(_DWORD *)(v19 + 8);
      while ( v20 )
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v20 + 1, v20);
        if ( v21 == v20 )
        {
          v64 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    v22 = v64;
    v64 = 0LL;
    v76 = v62;
    v62 = v22;
    sub_180010910((__int64)&v76);
    sub_180010910((__int64)&v64);
  }
  if ( *(_QWORD *)(v62 + 104) != *(_QWORD *)(v66 + 104) )
  {
    sub_1800113D0(v81, "SceneNode::Clone() -- source and target scenes must belong to the same engine");
    v59 = sub_1800113D0(
            v82,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scenenode.cpp");
    sub_18003F4DC(v83, (__int64)v59, v60, (__int64)v81, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v83;
  }
  v23 = sub_180016240(&v62, &v66);
  if ( (v24 & 0x20000) != 0 || v23 )
    v25 = -1LL;
  else
    v25 = *(_QWORD *)(a1 + 368);
  v67 = 0LL;
  v26 = a4[1];
  if ( v26 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
    v26 = a4[1];
  }
  *(_QWORD *)&v67 = *a4;
  *((_QWORD *)&v67 + 1) = v26;
  sub_180045178(v62, a2, v25, &v67);
  *(_QWORD *)(*a2 + 448) = *(_QWORD *)(a1 + 448);
  v27 = (__int64 *)(*a2 + 432);
  if ( v27 != (__int64 *)(a1 + 432) )
  {
    v28 = (_QWORD *)*v27;
    sub_180030CC8(*a2 + 432, *a2 + 432, *(char **)(*v27 + 8));
    v28[1] = v28;
    *v28 = v28;
    v28[2] = v28;
    v27[1] = 0LL;
    *(_QWORD *)(*v27 + 8) = sub_18003E5B0(v27, *(_QWORD *)(*(_QWORD *)(a1 + 432) + 8LL), *v27, v61);
    v27[1] = *(_QWORD *)(a1 + 440);
    v29 = (_QWORD *)*v27;
    v30 = *(__int64 ***)(*v27 + 8);
    if ( *((_BYTE *)v30 + 25) )
    {
      *v29 = v29;
      *(_QWORD *)(*v27 + 16) = *v27;
    }
    else
    {
      for ( i = *v30; !*((_BYTE *)i + 25); i = (__int64 *)*i )
        v30 = (__int64 **)i;
      *v29 = v30;
      v32 = *(_QWORD *)(*v27 + 8);
      for ( j = *(_QWORD *)(v32 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
        v32 = j;
      *(_QWORD *)(*v27 + 16) = v32;
    }
  }
  v34 = (_QWORD *)(a1 + 400);
  v35 = (__int64 *)(*a2 + 400);
  if ( v35 != (__int64 *)(a1 + 400) )
  {
    if ( *(_QWORD *)(a1 + 424) >= 0x10uLL )
      v34 = (_QWORD *)*v34;
    sub_180012190(v35, v34, *(_QWORD *)(a1 + 416));
  }
  v70 = *(_QWORD *)(a1 + 172);
  v71 = *(_DWORD *)(a1 + 180);
  v79 = *(_OWORD *)(a1 + 156);
  v72 = *(_QWORD *)(a1 + 144);
  v73 = *(_DWORD *)(a1 + 152);
  sub_180042BA8(*a2, &v72, &v79, &v70);
  if ( (a3 & 2) != 0 )
  {
    v65 = a3;
    sub_180043668(a1);
    v36 = *(_QWORD *)(a1 + 376);
    v37 = *(_QWORD *)(a1 + 384);
    while ( v36 != v37 )
    {
      v38 = *(_QWORD *)v36;
      v39 = *(void (__fastcall **)(__int64, __int64 **, unsigned int *, __int128 *))(**(_QWORD **)v36 + 80LL);
      v68 = 0LL;
      v40 = a2[1];
      if ( v40 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v40 + 8));
        v40 = a2[1];
      }
      *(_QWORD *)&v68 = *a2;
      *((_QWORD *)&v68 + 1) = v40;
      v39(v38, v74, &v65, &v68);
      if ( sub_1800122C0(v74) )
      {
        sub_18003FE40(*a2, v74);
      }
      else if ( (a3 & 0x10000) == 0 )
      {
        sub_180013B30(v36);
        v47 = sub_180013B30(v46);
        v48 = (_QWORD *)sub_18003725C(v47);
        v50 = _RTtypeid(v49);
        v51 = (_BYTE *)sub_180043EE4(v50);
        v52 = sub_1800113D0(v82, v51);
        v53 = (void *)sub_18001DD3C((__int64)v85, (__int64)"SceneNode::Clone() -- component type ", v52);
        v54 = sub_18001DC84((__int64)v86, v53);
        v55 = (void *)sub_18001FEAC((__int64)v87, v54, v48);
        v56 = sub_18001DC84((__int64)v83, v55);
        v57 = sub_1800113D0(
                v81,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scenenode.cpp");
        sub_18003F4DC(pExceptionObject, (__int64)v57, v58, v56, 1);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      sub_180010910((__int64)v74);
      v36 += 16LL;
    }
  }
  if ( (a3 & 1) != 0 )
  {
    sub_180043668(a1);
    v41 = *(__int64 **)(a1 + 32);
    v42 = *(__int64 **)(a1 + 40);
    while ( v41 != v42 )
    {
      v43 = *v41;
      v69 = 0LL;
      v44 = a2[1];
      if ( v44 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v44 + 8));
        v44 = a2[1];
      }
      *(_QWORD *)&v69 = *a2;
      *((_QWORD *)&v69 + 1) = v44;
      sub_1800400C8(v43, v80, a3, &v69);
      sub_180010910((__int64)v80);
      v41 += 2;
    }
  }
  sub_180010910((__int64)&v62);
  sub_180010910((__int64)&v66);
  sub_180010910((__int64)a4);
  return a2;
}
