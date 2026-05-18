/*
 * XREFs of sub_1800EEF60 @ 0x1800EEF60
 * Callers:
 *     sub_1800EDBD0 @ 0x1800EDBD0 (sub_1800EDBD0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180017558 @ 0x180017558 (sub_180017558.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800EEF60(__int64 a1, int *a2)
{
  __int64 *v4; // r15
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int *v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // r8
  int v37; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+68h] [rbp-98h] BYREF
  __int128 v44; // [rsp+78h] [rbp-88h] BYREF
  __int128 v45; // [rsp+88h] [rbp-78h] BYREF
  __int128 v46; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v47[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v48[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v49[2]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v50[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v51[4]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v52[2]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v53[2]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v54[3]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v55[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+160h] [rbp+60h] BYREF

  v54[2] = a2;
  v4 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v5 = sub_180017558(v4, v51);
  v6 = *v5;
  v7 = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  v55[0] = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v6;
  v55[1] = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 136) = v7;
  sub_180010910((__int64)v55);
  sub_180010910((__int64)v51);
  v8 = 69;
  if ( *((_BYTE *)a2 + 6) )
  {
    v8 = 325;
    v9 = *(_QWORD *)(a1 + 136);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = *(_QWORD *)(a1 + 136);
    }
    v10 = *(_QWORD *)(a1 + 128);
    v47[0] = *(_QWORD *)(a1 + 176);
    *(_QWORD *)(a1 + 176) = v10;
    v47[1] = *(_QWORD *)(a1 + 184);
    *(_QWORD *)(a1 + 184) = v9;
    sub_180010910((__int64)v47);
  }
  v11 = *a2;
  v43 = 0LL;
  v12 = *(_QWORD *)(a1 + 136);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *(_QWORD *)(a1 + 136);
  }
  *(_QWORD *)&v43 = *(_QWORD *)(a1 + 128);
  *((_QWORD *)&v43 + 1) = v12;
  v37 = v8;
  v38 = v11;
  v13 = *((_QWORD *)a2 + 8);
  if ( !v13 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int128 *, int *, int *))(*(_QWORD *)v13 + 16LL))(v13, &v43, &v38, &v37);
  sub_180010910((__int64)&v43);
  v14 = sub_18005E29C(*(_QWORD *)(a1 + 128), v52, *(_DWORD *)(a1 + 88));
  v15 = *v14;
  v16 = v14[1];
  *v14 = 0LL;
  v14[1] = 0LL;
  v48[0] = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v15;
  v48[1] = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v16;
  sub_180010910((__int64)v48);
  result = sub_180010910((__int64)v52);
  if ( *((_BYTE *)a2 + 5) )
  {
    sub_1800113D0(v55, "Single sampled stencil reads are not supported");
    v35 = sub_1800113D0(
            v51,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v35, v36, (__int64)v55, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *((_BYTE *)a2 + 4) )
  {
    if ( *a2 != 2 )
    {
      sub_1800113D0(v55, "Single sampled readable depth is only supported for Depth32 format");
      v33 = sub_1800113D0(
              v51,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
      sub_18003F4DC(pExceptionObject, (__int64)v33, v34, (__int64)v55, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v46 = 0LL;
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
          v46 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    v22 = sub_180017558(v4, v53);
    v23 = *v22;
    v24 = v22[1];
    *v22 = 0LL;
    v22[1] = 0LL;
    v49[0] = *(_QWORD *)(a1 + 160);
    *(_QWORD *)(a1 + 160) = v23;
    v49[1] = *(_QWORD *)(a1 + 168);
    *(_QWORD *)(a1 + 168) = v24;
    sub_180010910((__int64)v49);
    sub_180010910((__int64)v53);
    v44 = 0LL;
    v25 = *(_QWORD *)(a1 + 168);
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
      v25 = *(_QWORD *)(a1 + 168);
    }
    *(_QWORD *)&v44 = *(_QWORD *)(a1 + 160);
    *((_QWORD *)&v44 + 1) = v25;
    v39 = 64;
    v40 = 3;
    v26 = *((_QWORD *)a2 + 8);
    if ( !v26 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, int *, int *))(*(_QWORD *)v26 + 16LL))(v26, &v44, &v40, &v39);
    sub_180010910((__int64)&v44);
    v27 = sub_180017558(v4, v54);
    v28 = *v27;
    v29 = v27[1];
    *v27 = 0LL;
    v27[1] = 0LL;
    v50[0] = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = v28;
    v50[1] = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 152) = v29;
    sub_180010910((__int64)v50);
    sub_180010910((__int64)v54);
    v45 = 0LL;
    v30 = *(_QWORD *)(a1 + 152);
    if ( v30 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
      v30 = *(_QWORD *)(a1 + 152);
    }
    *(_QWORD *)&v45 = *(_QWORD *)(a1 + 144);
    *((_QWORD *)&v45 + 1) = v30;
    v41 = 1;
    v42 = 3;
    v31 = *((_QWORD *)a2 + 8);
    if ( !v31 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, int *, int *))(*(_QWORD *)v31 + 16LL))(v31, &v45, &v42, &v41);
    sub_180010910((__int64)&v45);
    result = sub_180010910((__int64)&v46);
  }
  v32 = (int *)*((_QWORD *)a2 + 8);
  if ( v32 )
  {
    LOBYTE(v18) = v32 != a2 + 2;
    result = (*(__int64 (__fastcall **)(int *, __int64))(*(_QWORD *)v32 + 32LL))(v32, v18);
    *((_QWORD *)a2 + 8) = 0LL;
  }
  return result;
}
