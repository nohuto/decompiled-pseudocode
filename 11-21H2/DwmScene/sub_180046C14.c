/*
 * XREFs of sub_180046C14 @ 0x180046C14
 * Callers:
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 *     sub_1800457FC @ 0x1800457FC (sub_1800457FC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180044338 @ 0x180044338 (sub_180044338.c)
 *     sub_1800444BC @ 0x1800444BC (sub_1800444BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180046C14(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rdx
  _QWORD *v4; // r11
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rax
  __int64 v14; // rcx
  volatile signed __int32 *v15; // r8
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // [rsp+30h] [rbp-79h] BYREF
  __int64 v22[2]; // [rsp+38h] [rbp-71h] BYREF
  volatile signed __int32 *v23; // [rsp+48h] [rbp-61h]
  _QWORD *v24; // [rsp+50h] [rbp-59h]
  __int128 v25; // [rsp+58h] [rbp-51h]
  char v26[16]; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v27[4]; // [rsp+78h] [rbp-31h] BYREF
  _QWORD v28[4]; // [rsp+98h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp+Fh] BYREF

  v24 = a2;
  if ( sub_1800122B0(a2) )
  {
    sub_1800113D0(v28, "Scene::RegisterNode() - node must not be null");
    v19 = sub_1800113D0(
            v27,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v19, v20, (__int64)v28, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v5 = *v3;
  if ( *(_QWORD *)(*v3 + 368) )
  {
    v21 = *(_QWORD *)(*v3 + 368);
    v6 = sub_180044338((__int64)&v21);
    v8 = 2 * (v6 & v4[21]);
    v9 = v4[18];
    v10 = *(_QWORD *)(v9 + 16 * (v6 & v4[21]) + 8);
    v11 = v4[16];
    if ( v10 == v11 )
      goto LABEL_9;
    v12 = *(_QWORD *)(v9 + 8 * v8);
    while ( v7 != *(_QWORD *)(v10 + 16) )
    {
      if ( v10 == v12 )
        goto LABEL_9;
      v10 = *(_QWORD *)(v10 + 8);
    }
    if ( !v10 )
LABEL_9:
      v10 = v4[16];
    if ( v10 != v11 )
    {
      sub_1800113D0(v27, "Scene::RegisterNode() - node id already exists");
      v17 = sub_1800113D0(
              v28,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
      sub_18003F4DC(pExceptionObject, (__int64)v17, v18, (__int64)v27, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  v13 = (volatile signed __int32 *)a2[1];
  v14 = 0LL;
  v15 = 0LL;
  if ( v13 )
  {
    _InterlockedIncrement(v13 + 3);
    v14 = v5;
    v15 = v13;
  }
  v22[0] = *(_QWORD *)(*a2 + 368LL);
  v22[1] = v14;
  v23 = v15;
  v25 = 0LL;
  sub_1800444BC((__int64)(v4 + 15), (__int64)v26, v22);
  if ( v23 && _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
  return sub_180010910((__int64)a2);
}
