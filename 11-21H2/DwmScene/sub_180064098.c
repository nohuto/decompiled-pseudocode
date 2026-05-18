/*
 * XREFs of sub_180064098 @ 0x180064098
 * Callers:
 *     sub_180063FE4 @ 0x180063FE4 (sub_180063FE4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001DCD4 @ 0x18001DCD4 (sub_18001DCD4.c)
 *     sub_180028460 @ 0x180028460 (sub_180028460.c)
 *     sub_180031DF4 @ 0x180031DF4 (sub_180031DF4.c)
 *     sub_180032F84 @ 0x180032F84 (sub_180032F84.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18007D3EC @ 0x18007D3EC (sub_18007D3EC.c)
 *     sub_18007EDCC @ 0x18007EDCC (sub_18007EDCC.c)
 *     sub_1800B4528 @ 0x1800B4528 (sub_1800B4528.c)
 *     sub_1800B4684 @ 0x1800B4684 (sub_1800B4684.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_180064098(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // r14
  __int64 result; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int128 *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int128 v15; // kr00_16
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int128 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int128 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v29[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v30[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[16]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v32[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v33[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-48h]
  _BYTE v35[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v36[3]; // [rsp+D0h] [rbp-30h] BYREF
  char *v37[3]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v38; // [rsp+100h] [rbp+0h]
  _QWORD v39[4]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v40[4]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+148h] [rbp+48h] BYREF

  v6 = a1 + 212;
  result = _std_type_info_compare(a1[212] + 8LL, &unk_1801EB6A8);
  if ( (_DWORD)result )
  {
    sub_18001DCD4((__int64 *)v37, a1 + 3, " effect");
    v8 = (_QWORD *)sub_180028460(*a2);
    v9 = v8[1];
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = v8[1];
    }
    v29[0] = *v8;
    v29[1] = v9;
    sub_1800B4528(v35, v29, v37);
    v10 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 200LL))(*a3, v33);
    sub_180031DF4(v36, v10, (__int64)v37);
    v11 = v34;
    if ( v34 && _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 152LL))(*a3);
    v13 = v12[1];
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v13 = v12[1];
    }
    v14 = *v12;
    v32[0] = v14;
    v32[1] = v13;
    sub_18007EDCC(v14, &v25, v6);
    v15 = v25;
    if ( (_QWORD)v25 != *((_QWORD *)&v25 + 1) )
    {
      if ( (unsigned __int64)((__int64)(*((_QWORD *)&v25 + 1) - v25) >> 4) > 1 )
      {
        sub_1800113D0(v40, "Camera::RenderEffects() -- only one effect per output is currently supported");
        v23 = sub_1800113D0(
                v39,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\camera.cpp");
        sub_18003F4DC(pExceptionObject, (__int64)v23, v24, (__int64)v40, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      if ( *(_DWORD *)(*(_QWORD *)v25 + 176LL) != 1 )
      {
        sub_1800113D0(v39, "Camera::RenderEffects() -- effect must have local scope to be rendered by a camera");
        v21 = sub_1800113D0(
                v40,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\camera.cpp");
        sub_18003F4DC(pExceptionObject, (__int64)v21, v22, (__int64)v39, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      if ( *(_BYTE *)(*(_QWORD *)v25 + 136LL) )
      {
        v16 = a1[18];
        if ( v16 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
          v16 = a1[18];
        }
        v17 = a1[17];
        v30[0] = v17;
        v30[1] = v16;
        v27 = 0LL;
        v18 = *(_QWORD *)(v17 + 144);
        if ( v18 )
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        v27 = *(_OWORD *)(v17 + 136);
        v28 = 0LL;
        v19 = *(_QWORD *)(v15 + 8);
        if ( v19 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
          v19 = *(_QWORD *)(v15 + 8);
        }
        *(_QWORD *)&v28 = *(_QWORD *)v15;
        *((_QWORD *)&v28 + 1) = v19;
        sub_18007D3EC(v14, (unsigned int)v31, (_DWORD)a3, (unsigned int)&v28, (__int64)&v27);
        sub_180010910((__int64)v30);
        v20 = a1[220];
        if ( v20 )
          (*(void (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v20 + 16LL))(v20, *(_QWORD *)v15, v31);
        sub_180010910((__int64)v31);
        v15 = v25;
      }
    }
    if ( (_QWORD)v15 )
    {
      sub_1800126E8(v15, *((__int64 *)&v15 + 1));
      sub_180010884((char *)v25, (v26 - v25) & 0xFFFFFFFFFFFFFFF0uLL);
      v25 = 0LL;
      v26 = 0LL;
    }
    sub_180010910((__int64)v32);
    sub_180032F84(v36);
    sub_1800B4684(v35);
    result = sub_180010910((__int64)v29);
    if ( v38 >= 0x10 )
      return sub_180010884(v37[0], v38 + 1);
  }
  return result;
}
