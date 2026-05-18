/*
 * XREFs of sub_180068348 @ 0x180068348
 * Callers:
 *     sub_180019590 @ 0x180019590 (sub_180019590.c)
 *     sub_18006FE60 @ 0x18006FE60 (sub_18006FE60.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 *     sub_1800A6640 @ 0x1800A6640 (sub_1800A6640.c)
 *     sub_1800ADC04 @ 0x1800ADC04 (sub_1800ADC04.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180049514 @ 0x180049514 (sub_180049514.c)
 *     sub_180056B84 @ 0x180056B84 (sub_180056B84.c)
 *     sub_180066DF0 @ 0x180066DF0 (sub_180066DF0.c)
 *     sub_180067260 @ 0x180067260 (sub_180067260.c)
 *     sub_1800694C0 @ 0x1800694C0 (sub_1800694C0.c)
 *     sub_180090914 @ 0x180090914 (sub_180090914.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_180068348(__int128 *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rax
  _QWORD *v8; // r8
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  volatile signed __int32 *v22; // rcx
  _QWORD *v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int128 v28; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v30; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v31[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  char v33; // [rsp+80h] [rbp-80h]
  __int64 *v34; // [rsp+88h] [rbp-78h]
  _BYTE v35[16]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v36[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v37[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+E0h] [rbp-20h] BYREF

  v34 = a2;
  if ( *((_DWORD *)a1 + 108) != 1 )
  {
    sub_1800113D0(
      v37,
      "ShaderFamily::CreateMaterial() -- materials cannot be created until shader family declaration is complete");
    v24 = sub_1800113D0(
            v36,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v24, v25, (__int64)v37, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = (_QWORD *)sub_1800694C0(a1, 2LL);
  v5 = v4[1];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = v4[1];
  }
  v31[0] = *v4;
  v31[1] = v5;
  if ( sub_1800122B0(v31) || !(unsigned __int8)sub_180090914(v6) )
  {
    sub_1800113D0(
      v36,
      "ShaderFamily::CreateMaterial() -- materials cannot be created until valid material layout is specified (non-null and complete)");
    v26 = sub_1800113D0(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v26, v27, (__int64)v36, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = (__int64 *)sub_180056B84(*((_QWORD *)a1 + 55));
  sub_180066DF0(v7, a2);
  if ( sub_1800122C0(a2) )
  {
    v8 = (_QWORD *)*a2;
    v28 = 0LL;
    v9 = *((_QWORD *)a1 + 1);
    if ( !v9 )
LABEL_30:
      sub_1800120F4();
    v10 = *(_DWORD *)(v9 + 8);
    do
    {
      if ( !v10 )
        goto LABEL_30;
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
    }
    while ( v11 != v10 );
    v28 = *a1;
    sub_180049514(v8, &v28);
    v32 = (__int64)a1 + 472;
    sub_18002C84C((__int64)a1 + 472);
    v33 = 1;
    v29 = 0LL;
    v12 = a2[1];
    if ( v12 )
    {
      *(_QWORD *)&v29 = *a2;
      *((_QWORD *)&v29 + 1) = v12;
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
    }
    sub_180067260((__int64 *)a1 + 60, (__int64)v35, (__int64 *)&v29);
    if ( *((_QWORD *)&v29 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 12LL), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v29 + 1) + 8LL))(*((_QWORD *)&v29 + 1));
    }
    j_LanguageEnumProc(v32);
  }
  v13 = *a2;
  v30 = 0LL;
  v14 = *(_QWORD *)(v13 + 104);
  if ( !v14 )
LABEL_31:
    sub_1800120F4();
  v15 = *(_DWORD *)(v14 + 8);
  do
  {
    if ( !v15 )
      goto LABEL_31;
    v16 = v15;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15);
  }
  while ( v16 != v15 );
  v17 = *(_QWORD *)(v13 + 96);
  *(_QWORD *)&v30 = v17;
  v18 = *(_QWORD *)(v13 + 104);
  *((_QWORD *)&v30 + 1) = v18;
  v19 = *a2;
  v20 = 0LL;
  v21 = 0LL;
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 12));
    v20 = v17;
    v21 = v18;
  }
  *(_QWORD *)(v19 + 216) = v20;
  v22 = *(volatile signed __int32 **)(v19 + 224);
  *(_QWORD *)(v19 + 224) = v21;
  if ( v22 && _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
  sub_180010910((__int64)&v30);
  sub_180010910((__int64)v31);
  return a2;
}
