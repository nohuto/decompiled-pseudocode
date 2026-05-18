/*
 * XREFs of sub_1800688C8 @ 0x1800688C8
 * Callers:
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180068694 @ 0x180068694 (sub_180068694.c)
 *     sub_180069EF0 @ 0x180069EF0 (sub_180069EF0.c)
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_1800688C8(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r15
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD *v20; // r14
  unsigned __int64 v21; // r15
  char *v22; // rdx
  _QWORD *v23; // r8
  char *v24; // rcx
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  _QWORD *v30; // rax
  __int64 v31; // r8
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 *v36; // [rsp+60h] [rbp-A0h]
  _QWORD v37[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38[5]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+C0h] [rbp-40h] BYREF

  v34 = a4;
  v8 = a1;
  v35 = a1;
  v36 = a2;
  v38[4] = a3;
  v9 = a6;
  if ( (a4 & a6) != 0 )
  {
    sub_1800113D0(
      v39,
      "ShaderFamily::CreatePipelines() -- Combination basis options must not be part of required or excluded set");
    v30 = sub_1800113D0(
            v38,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v30, v31, (__int64)v39, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v10 = 0LL;
  v32 = 0LL;
  while ( 1 )
  {
    v11 = sub_180068694(v8, v37, v10 | a4, v9 & ~v10, 0);
    v12 = v11;
    v13 = a2[1];
    v14 = a2[2];
    if ( v13 == v14 )
    {
      v15 = v13 - *a2;
      if ( v15 >> 4 == 0xFFFFFFFFFFFFFFFLL )
        sub_180012170();
      v16 = (v15 >> 4) + 1;
      v17 = (v14 - *a2) >> 4;
      if ( v17 <= 0xFFFFFFFFFFFFFFFLL - (v17 >> 1) )
      {
        v19 = (v17 >> 1) + v17;
        v18 = (v15 >> 4) + 1;
        if ( v19 >= v16 )
          v18 = v19;
        if ( v18 > 0xFFFFFFFFFFFFFFFLL )
          sub_1800120D4();
      }
      else
      {
        v18 = 0xFFFFFFFFFFFFFFFLL;
      }
      v33 = (__int64 *)(16 * v18);
      v20 = (_QWORD *)sub_180011088(16 * v18);
      v21 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
      *(_QWORD *)((char *)v20 + v21) = 0LL;
      *(_QWORD *)((char *)v20 + v21 + 8) = 0LL;
      *(_QWORD *)((char *)v20 + v21) = *v12;
      *(_QWORD *)((char *)v20 + v21 + 8) = v12[1];
      *v12 = 0LL;
      v12[1] = 0LL;
      v22 = (char *)a2[1];
      v23 = v20;
      v24 = (char *)*a2;
      if ( (char *)v13 != v22 )
      {
        sub_18001292C(v24, (char *)v13, v20);
        v23 = (_QWORD *)((char *)v20 + v21 + 16);
        v22 = (char *)a2[1];
        v24 = (char *)v13;
      }
      sub_18001292C(v24, v22, v23);
      if ( *a2 )
      {
        sub_1800126E8(*a2, a2[1]);
        sub_180010884((char *)*a2, (a2[2] - *a2) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      *a2 = (__int64)v20;
      a2[1] = (__int64)&v20[2 * v16];
      a2[2] = (__int64)v33 + (_QWORD)v20;
    }
    else
    {
      *(_QWORD *)v13 = 0LL;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)v13 = *v11;
      *(_QWORD *)(v13 + 8) = v11[1];
      *v11 = 0LL;
      v11[1] = 0LL;
      a2[1] += 16LL;
    }
    sub_180010910((__int64)v37);
    v25 = *(_QWORD *)(a2[1] - 16);
    v33 = v39;
    v39[2] = 0LL;
    v39[3] = 15LL;
    LOBYTE(v39[0]) = 0;
    sub_180012190(v39, byte_180128042, 0LL);
    v26 = sub_18001875C(v38, a3);
    sub_180095A64(v25, v26, v32, v39);
    if ( !(unsigned __int8)sub_180069EF0(&v32, a6) )
      break;
    v10 = v32;
    v9 = v27;
    a4 = v34;
    v8 = v35;
  }
  v28 = *(_QWORD *)(a3 + 24);
  if ( v28 >= 0x10 )
    sub_180010884(*(char **)a3, v28 + 1);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  return a2;
}
