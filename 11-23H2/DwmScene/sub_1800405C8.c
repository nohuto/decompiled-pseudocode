/*
 * XREFs of sub_1800405C8 @ 0x1800405C8
 * Callers:
 *     sub_1800402B0 @ 0x1800402B0 (sub_1800402B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_180021ECC @ 0x180021ECC (sub_180021ECC.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18002E108 @ 0x18002E108 (sub_18002E108.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18003B61C @ 0x18003B61C (sub_18003B61C.c)
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 *     sub_18003F970 @ 0x18003F970 (sub_18003F970.c)
 *     sub_1800401CC @ 0x1800401CC (sub_1800401CC.c)
 *     sub_1800401E8 @ 0x1800401E8 (sub_1800401E8.c)
 *     sub_180040BB8 @ 0x180040BB8 (sub_180040BB8.c)
 *     sub_180041410 @ 0x180041410 (sub_180041410.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800405C8(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned __int64 v6; // rbx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  volatile __int32 *v15; // rcx
  __int32 v16; // r8d
  __int64 *v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  _DWORD *v23; // rdx
  __int64 v24; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r8
  unsigned int v28; // [rsp+30h] [rbp-91h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-89h] BYREF
  __int64 v30; // [rsp+40h] [rbp-81h]
  __int64 v31; // [rsp+48h] [rbp-79h] BYREF
  _QWORD v32[5]; // [rsp+58h] [rbp-69h] BYREF
  __int64 v33[4]; // [rsp+80h] [rbp-41h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp-21h] BYREF

  v6 = a3;
  v30 = a2;
  v29 = a3;
  v32[4] = a4;
  sub_18002A404(a1 + 16);
  if ( sub_180011DD0(a4) )
  {
    v9 = (__int64 *)sub_180041410(*a5, v33);
    sub_180011020(a4, v9);
    if ( v33[1] )
      sub_180010530(v33[1]);
  }
  if ( v6 == -1LL )
  {
    v6 = sub_180021ECC(a1 + 72);
    v29 = v6;
  }
  else if ( v6 >= sub_18003B61C() )
  {
    sub_1800401CC(v10, v6 + 1, v11);
  }
  if ( v6 == -1LL )
  {
    sub_180010DD0(v33, (__int64)"Run out of available IDs");
    v12 = sub_180010DD0(
            v32,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v12, v13, (__int64)v33, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *sub_18003F970((_QWORD *)(a1 + 120), &v31, (__int64)&v29) != *(_QWORD *)(a1 + 128) )
  {
    sub_180010DD0(v33, (__int64)"Node id already exists");
    v26 = sub_180010DD0(
            v32,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v26, v27, (__int64)v33, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *a4 )
  {
    v30 = *a5 + 76LL;
    v28 = 1;
    sub_18002E120(&v28);
    v15 = (volatile __int32 *)sub_18001C7FC(v14);
    while ( _InterlockedExchange(v15, v16) )
      ;
    sub_180040BB8(a1, v33, &v29);
    v17 = sub_18001246C(v32, a4);
    v18 = v33[0];
    sub_18003D504(v33[0], v17);
    LOBYTE(v19) = 1;
    sub_1800401E8(*a5 + 72LL, v19, v20, v21);
    *(_OWORD *)a2 = __PAIR128__(v33[1], v18);
    *(_OWORD *)v33 = 0LL;
    v28 = 0;
    sub_18002E108(v30);
    v22 = sub_18002E114(&v28);
    *v23 = v22;
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  v24 = a4[1];
  if ( v24 )
    sub_180010530(v24);
  return a2;
}
