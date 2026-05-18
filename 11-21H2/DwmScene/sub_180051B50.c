/*
 * XREFs of sub_180051B50 @ 0x180051B50
 * Callers:
 *     sub_180051A40 @ 0x180051A40 (sub_180051A40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180014C08 @ 0x180014C08 (sub_180014C08.c)
 *     sub_1800510D0 @ 0x1800510D0 (sub_1800510D0.c)
 *     sub_180053850 @ 0x180053850 (sub_180053850.c)
 *     sub_18008E620 @ 0x18008E620 (sub_18008E620.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180051B50(__int64 a1, _QWORD *a2, int *a3)
{
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  volatile signed __int32 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  volatile signed __int32 *v20; // rcx
  _DWORD *v21; // rdx
  _QWORD *v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // r8
  __int128 v31; // [rsp+30h] [rbp-79h] BYREF
  __int64 v32[2]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v33[3]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v34[4]; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v35[4]; // [rsp+88h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-1h] BYREF

  v33[2] = a2;
  v31 = 0LL;
  v6 = a2[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = a2[1];
  }
  *(_QWORD *)&v31 = *a2;
  *((_QWORD *)&v31 + 1) = v6;
  sub_18008E620(a1, &v31);
  sub_180014C08(v32, a2);
  v7 = *a3;
  if ( (*a3 & 8) != 0 )
  {
    sub_1800113D0(v35, "MeshInstance::CloneInternal() -- material cloning not yet supported (reserved for future use)");
    v25 = sub_1800113D0(
            v34,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_1800510D0(pExceptionObject, (__int64)v25, v26, (__int64)v35);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  if ( v32[0] + 104 != a1 + 104 )
  {
    sub_180053850(v32[0] + 104);
    v7 = *a3;
  }
  if ( (v7 & 4) != 0 )
  {
    sub_1800113D0(v34, "MeshInstance::CloneInternal() -- mesh cloning not yet supported (reserved for future use)");
    v27 = sub_1800113D0(
            v35,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_1800510D0(pExceptionObject, (__int64)v27, v28, (__int64)v34);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  v8 = v32[0];
  v9 = *(_QWORD *)(a1 + 96);
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = *(_QWORD *)(a1 + 96);
  }
  v10 = *(_QWORD *)(a1 + 88);
  v33[0] = *(_QWORD *)(v8 + 88);
  *(_QWORD *)(v8 + 88) = v10;
  v33[1] = *(_QWORD *)(v8 + 96);
  *(_QWORD *)(v8 + 96) = v9;
  sub_180010910((__int64)v33);
  if ( (*(_BYTE *)a3 & 0x10) != 0 )
  {
    sub_1800113D0(
      v34,
      "MeshInstance::CloneInternal() -- skinning controller cloning not yet supported (reserved for future use)");
    v29 = sub_1800113D0(
            v35,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_1800510D0(pExceptionObject, (__int64)v29, v30, (__int64)v34);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  v11 = v32[0];
  v12 = *(_QWORD *)(a1 + 144);
  v13 = 0LL;
  v14 = 0LL;
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 136);
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
    v14 = v12;
  }
  *(_QWORD *)(v11 + 136) = v13;
  v15 = *(volatile signed __int32 **)(v11 + 144);
  *(_QWORD *)(v11 + 144) = v14;
  if ( v15 && _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
  if ( (*(_BYTE *)a3 & 0x20) != 0 )
  {
    sub_1800113D0(
      v34,
      "MeshInstance::CloneInternal() -- morph controller cloning not yet supported (reserved for future use)");
    v23 = sub_1800113D0(
            v35,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_1800510D0(pExceptionObject, (__int64)v23, v24, (__int64)v34);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  v16 = v32[0];
  v17 = *(_QWORD *)(a1 + 160);
  v18 = 0LL;
  v19 = 0LL;
  if ( v17 )
  {
    v18 = *(_QWORD *)(a1 + 152);
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 12));
    v19 = v17;
  }
  *(_QWORD *)(v16 + 152) = v18;
  v20 = *(volatile signed __int32 **)(v16 + 160);
  *(_QWORD *)(v16 + 160) = v19;
  if ( v20 && _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
  v21 = (_DWORD *)v32[0];
  *(_BYTE *)(v32[0] + 168) = *(_BYTE *)(a1 + 168);
  v21[43] = *(_DWORD *)(a1 + 172);
  v21[44] = *(_DWORD *)(a1 + 176);
  v21[45] = *(_DWORD *)(a1 + 180);
  v21[46] = *(_DWORD *)(a1 + 184);
  sub_180010910((__int64)v32);
  return sub_180010910((__int64)a2);
}
