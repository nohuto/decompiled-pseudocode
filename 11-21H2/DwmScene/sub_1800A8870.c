/*
 * XREFs of sub_1800A8870 @ 0x1800A8870
 * Callers:
 *     sub_18007F898 @ 0x18007F898 (sub_18007F898.c)
 *     sub_1800A8870 @ 0x1800A8870 (sub_1800A8870.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800146D0 @ 0x1800146D0 (sub_1800146D0.c)
 *     sub_180053418 @ 0x180053418 (sub_180053418.c)
 *     sub_1800A8870 @ 0x1800A8870 (sub_1800A8870.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_1800A8870(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, __int64 a5, _QWORD *a6)
{
  __int64 *v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, _BYTE *); // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r13
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // xmm1_8
  __int64 v31; // rcx
  __int64 v32; // xmm1_8
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int128 v39; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v40; // [rsp+48h] [rbp-C0h]
  __int128 v41; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v42; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+78h] [rbp-90h] BYREF
  __int128 v44; // [rsp+88h] [rbp-80h] BYREF
  __int128 v45; // [rsp+98h] [rbp-70h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v47; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v48; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v50; // [rsp+E0h] [rbp-28h]
  __int64 v51; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v52; // [rsp+F0h] [rbp-18h]
  __int64 v53; // [rsp+F8h] [rbp-10h]
  _QWORD v54[3]; // [rsp+100h] [rbp-8h] BYREF
  __int128 v55; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v56[2]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v57[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v58[3]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v59[56]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v60; // [rsp+198h] [rbp+90h]

  v9 = (__int64 *)a1[19];
  v10 = (__int64 *)a1[20];
  while ( v9 != v10 )
  {
    v11 = *v9;
    v53 = *v9;
    v58[2] = &v44;
    v44 = 0LL;
    v12 = a6[1];
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v12 = a6[1];
    }
    *(_QWORD *)&v44 = *a6;
    *((_QWORD *)&v44 + 1) = v12;
    v40 = v59;
    v60 = 0LL;
    v13 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a5 + 56);
    if ( v13 )
    {
      v60 = (**v13)(v13, v59);
      LODWORD(v11) = v53;
    }
    v45 = 0LL;
    v14 = a4[1];
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      v14 = a4[1];
    }
    *(_QWORD *)&v45 = *a4;
    *((_QWORD *)&v45 + 1) = v14;
    v46 = 0LL;
    v15 = a3[1];
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v15 = a3[1];
    }
    *(_QWORD *)&v46 = *a3;
    *((_QWORD *)&v46 + 1) = v15;
    v47 = 0LL;
    v16 = a2[1];
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v16 = a2[1];
    }
    *(_QWORD *)&v47 = *a2;
    *((_QWORD *)&v47 + 1) = v16;
    sub_1800A8870(v11, (unsigned int)&v47, (unsigned int)&v46, (unsigned int)&v45, (__int64)v59, (__int64)&v44);
    v9 += 2;
  }
  v17 = *(_QWORD *)(a5 + 56);
  if ( !v17 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 16LL))(v17, &v49);
  v18 = v50;
  if ( v50 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v50 + 8));
    v18 = v50;
  }
  v19 = v49;
  *(_QWORD *)&v43 = v49;
  *((_QWORD *)&v43 + 1) = v18;
  v20 = v52;
  if ( v52 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v52 + 8));
    v20 = v52;
    v19 = v43;
  }
  *(_QWORD *)&v42 = v51;
  *((_QWORD *)&v42 + 1) = v20;
  sub_1800146D0(v19, &v41);
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v20 = *((_QWORD *)&v42 + 1);
  }
  v55 = v42;
  v21 = v41;
  v22 = (_QWORD *)(v41 + 88);
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v20 = *((_QWORD *)&v42 + 1);
    v21 = v41;
  }
  v54[0] = *v22;
  *v22 = v42;
  v54[1] = v22[1];
  v22[1] = v20;
  sub_180010910((__int64)v54);
  sub_180010910((__int64)&v55);
  v48 = 0LL;
  v23 = a6[1];
  if ( v23 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
    v23 = a6[1];
    v21 = v41;
  }
  *(_QWORD *)&v48 = *a6;
  *((_QWORD *)&v48 + 1) = v23;
  sub_180053418(v21, &v48);
  *(_BYTE *)(v21 + 72) = 0;
  v24 = *a2;
  v25 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)&v39 = a1[3];
  a1[3] = v24;
  *((_QWORD *)&v39 + 1) = a1[4];
  a1[4] = v25;
  sub_180010910((__int64)&v39);
  v26 = *a3;
  v27 = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v56[0] = a1[5];
  a1[5] = v26;
  v56[1] = a1[6];
  a1[6] = v27;
  sub_180010910((__int64)v56);
  v28 = *a4;
  v29 = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v57[0] = a1[1];
  a1[1] = v28;
  v57[1] = a1[2];
  a1[2] = v29;
  sub_180010910((__int64)v57);
  v30 = v43;
  v39 = v43;
  v43 = 0LL;
  *(_QWORD *)&v39 = a1[7];
  a1[7] = v30;
  v31 = *((_QWORD *)&v39 + 1);
  *((_QWORD *)&v39 + 1) = a1[8];
  a1[8] = v31;
  sub_180010910((__int64)&v39);
  v32 = v41;
  v39 = v41;
  v41 = 0LL;
  *(_QWORD *)&v39 = a1[9];
  a1[9] = v32;
  v33 = *((_QWORD *)&v39 + 1);
  *((_QWORD *)&v39 + 1) = a1[10];
  a1[10] = v33;
  sub_180010910((__int64)&v39);
  v34 = *a6;
  v35 = a6[1];
  *a6 = 0LL;
  a6[1] = 0LL;
  v58[0] = a1[11];
  a1[11] = v34;
  v58[1] = a1[12];
  a1[12] = v35;
  sub_180010910((__int64)v58);
  sub_180010910((__int64)&v41);
  sub_180010910((__int64)&v42);
  sub_180010910((__int64)&v43);
  sub_180010910((__int64)&v51);
  sub_180010910((__int64)&v49);
  sub_180010910((__int64)a2);
  sub_180010910((__int64)a3);
  sub_180010910((__int64)a4);
  v37 = *(_QWORD *)(a5 + 56);
  if ( v37 )
  {
    LOBYTE(v36) = v37 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 32LL))(v37, v36);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return sub_180010910((__int64)a6);
}
