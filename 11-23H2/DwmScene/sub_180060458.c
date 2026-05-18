/*
 * XREFs of sub_180060458 @ 0x180060458
 * Callers:
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18005F0EC @ 0x18005F0EC (sub_18005F0EC.c)
 *     sub_180060378 @ 0x180060378 (sub_180060378.c)
 *     sub_180061500 @ 0x180061500 (sub_180061500.c)
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180060458(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  _QWORD *v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h]
  _QWORD v25[5]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v26[4]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp-48h] BYREF

  v9 = a1;
  v20 = a1;
  v21 = a2;
  v25[4] = a3;
  if ( (a4 & a6) != 0 )
  {
    sub_180010DD0(
      v26,
      (__int64)"ShaderFamily::CreatePipelines() -- Combination basis options must not be part of required or excluded set");
    v17 = sub_180010DD0(
            v25,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderfamily.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v17, v18, (__int64)v26, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v10 = 0LL;
  v19 = 0LL;
  while ( 1 )
  {
    v11 = sub_180060378(v9, &v23, v10 | a4, a6 & ~v10, 0);
    v12 = *(_QWORD *)(a2 + 8);
    if ( v12 == *(_QWORD *)(a2 + 16) )
    {
      sub_18005F0EC((char **)a2, (char *)v12, v11);
    }
    else
    {
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)v12 = *v11;
      *(_QWORD *)(v12 + 8) = v11[1];
      *v11 = 0LL;
      v11[1] = 0LL;
      *(_QWORD *)(a2 + 8) += 16LL;
    }
    if ( v24 )
      sub_180010530(v24);
    v13 = *(_QWORD *)(*(_QWORD *)(a2 + 8) - 16LL);
    v22 = v26;
    v14 = sub_180010DD0(v26, (__int64)byte_180106082);
    v15 = sub_180017648(v25, a3);
    sub_1800878E8(v13, v15, v10, v14);
    if ( !(unsigned __int8)sub_180061500(&v19, a6) )
      break;
    v10 = v19;
    v9 = v20;
  }
  sub_180011B24(a3);
  return a2;
}
