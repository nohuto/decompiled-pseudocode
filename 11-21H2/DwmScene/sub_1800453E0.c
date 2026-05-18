/*
 * XREFs of sub_1800453E0 @ 0x1800453E0
 * Callers:
 *     sub_180045044 @ 0x180045044 (sub_180045044.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18001266C @ 0x18001266C (sub_18001266C.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_18003070C @ 0x18003070C (sub_18003070C.c)
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 *     sub_18003DDEC @ 0x18003DDEC (sub_18003DDEC.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 *     sub_1800441F0 @ 0x1800441F0 (sub_1800441F0.c)
 *     sub_180044338 @ 0x180044338 (sub_180044338.c)
 *     sub_180045AA4 @ 0x180045AA4 (sub_180045AA4.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800453E0(_QWORD *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  signed __int64 v13; // r10
  unsigned __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  volatile __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  volatile __int32 *v25; // rax
  __int32 v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rcx
  char v29; // al
  char *v30; // rdx
  int v31; // eax
  _DWORD *v32; // rdx
  _QWORD *v34; // rax
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // r8
  char v38[8]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C0h]
  unsigned int v41; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v42; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v44; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v46[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v47[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+C0h] [rbp-40h] BYREF

  v40 = a2;
  v39 = a3;
  v42 = a4;
  sub_18002C7C4((__int64)(a1 + 2));
  if ( sub_1800122B0(a4) )
  {
    v9 = (__int64 *)sub_1800465B0(*a5, v46);
    v10 = *v9;
    v11 = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    v47[0] = *a4;
    *a4 = v10;
    v47[1] = a4[1];
    a4[1] = v11;
    sub_180010910((__int64)v47);
    sub_180010910((__int64)v46);
  }
  v12 = (__int64)(a1 + 9);
  if ( a3 == -1LL )
  {
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)sub_18001266C(v12), 1uLL);
    v39 = v13;
  }
  else
  {
    v14 = (unsigned __int64 *)sub_18003DDEC(v12);
    v13 = v39;
    if ( v39 >= *v14 )
    {
      v45 = v39 + 1;
      sub_18001266C(v15);
      v16 = sub_1800441F0((__int64)&v45);
      _InterlockedExchange64(v17, v16);
      v13 = v39;
    }
  }
  if ( v13 == -1 )
  {
    sub_1800113D0(v47, "Run out of available IDs");
    v36 = sub_1800113D0(
            v46,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v36, v37, (__int64)v47, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v18 = sub_180044338((__int64)&v39);
  v20 = 2 * (v18 & a1[21]);
  v21 = a1[18];
  v22 = *(_QWORD *)(v21 + 16 * (v18 & a1[21]) + 8);
  v23 = a1[16];
  if ( v22 != v23 )
  {
    while ( v19 != *(_QWORD *)(v22 + 16) )
    {
      if ( v22 == *(_QWORD *)(v21 + 8 * v20) )
        goto LABEL_14;
      v22 = *(_QWORD *)(v22 + 8);
    }
    if ( v22 && v22 != v23 )
    {
      sub_1800113D0(v47, "Node id already exists");
      v34 = sub_1800113D0(
              v46,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
      sub_18003F4DC(pExceptionObject, (__int64)v34, v35, (__int64)v47, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
LABEL_14:
  if ( *a4 )
  {
    v40 = *a5 + 76LL;
    v41 = 1;
    sub_180030724(&v41);
    v25 = (volatile __int32 *)sub_18001DE70(v24);
    while ( _InterlockedExchange(v25, v26) )
      ;
    sub_180045AA4(a1, &v44, &v39);
    v43 = 0LL;
    v27 = a4[1];
    if ( v27 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
      v27 = a4[1];
    }
    *(_QWORD *)&v43 = *a4;
    *((_QWORD *)&v43 + 1) = v27;
    sub_1800424DC(v44, &v43);
    v28 = *a5 + 72LL;
    v38[0] = 1;
    sub_1800441CC(v28);
    v29 = sub_1800441E4((__int64)v38);
    *v30 = v29;
    *(_OWORD *)a2 = v44;
    v44 = 0LL;
    sub_180010910((__int64)&v44);
    LODWORD(v42) = 0;
    sub_18003070C(v40);
    v31 = sub_180030718((unsigned int *)&v42);
    *v32 = v31;
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  sub_180010910((__int64)a4);
  return a2;
}
