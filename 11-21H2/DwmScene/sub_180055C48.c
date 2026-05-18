/*
 * XREFs of sub_180055C48 @ 0x180055C48
 * Callers:
 *     sub_1800375A0 @ 0x1800375A0 (sub_1800375A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD9C @ 0x18001DD9C (sub_18001DD9C.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002C3FC @ 0x18002C3FC (sub_18002C3FC.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18005561C @ 0x18005561C (sub_18005561C.c)
 *     sub_180057684 @ 0x180057684 (sub_180057684.c)
 *     sub_180057988 @ 0x180057988 (sub_180057988.c)
 *     sub_180068274 @ 0x180068274 (sub_180068274.c)
 *     sub_180069220 @ 0x180069220 (sub_180069220.c)
 *     sub_18006965C @ 0x18006965C (sub_18006965C.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180055C48(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rax
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 *v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int128 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h]
  _QWORD v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  char v29; // [rsp+70h] [rbp-90h]
  _QWORD *v30; // [rsp+78h] [rbp-88h]
  __int64 v31[4]; // [rsp+80h] [rbp-80h] BYREF
  char *v32[3]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v33; // [rsp+B8h] [rbp-48h]
  _QWORD v34[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v36[7]; // [rsp+118h] [rbp+18h] BYREF

  v30 = a2;
  if ( sub_1800122B0(a2) )
  {
    sub_1800113D0(pExceptionObject, "ShaderManager::AddExtension() -- Extension passed to function cannot be null");
    v22 = sub_1800113D0(
            v34,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003F4DC(v36, (__int64)v22, v23, (__int64)pExceptionObject, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v36;
  }
  sub_180069220(*v4, v32);
  v5 = sub_18001875C(v31, (__int64)v32);
  if ( (unsigned __int8)sub_180057988(a1, v5) )
  {
    v18 = sub_18001DD9C(v36, "ShaderManager::AddExtension() -- Extension with name '", v32);
    v19 = sub_18001DC84((__int64)v34, v18);
    v20 = sub_1800113D0(
            v31,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v20, v21, v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18006965C(*a2, *(_QWORD *)(a1 + 18688), a1, a1 + 18664);
  v6 = (_QWORD *)sub_18005561C((__int64 *)(a1 + 18592), v32);
  v7 = *a2;
  v8 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  pExceptionObject[0] = *v6;
  *v6 = v7;
  pExceptionObject[1] = v6[1];
  v6[1] = v8;
  sub_180010910((__int64)pExceptionObject);
  v9 = sub_18001875C(v36, (__int64)v32);
  sub_180057684(a1, v34, v9);
  sub_180039EBC(*(_QWORD *)(a1 + 18688), &v25);
  v10 = 0;
  v11 = *((_QWORD *)&v25 + 1);
  v12 = v25;
  if ( (__int64)(*((_QWORD *)&v25 + 1) - v25) >> 4 )
  {
    v13 = 0LL;
    do
    {
      v14 = 2 * v13;
      v15 = *(_QWORD *)(v12 + 8 * v14 + 8);
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        v15 = *(_QWORD *)(v12 + 8 * v14 + 8);
      }
      v16 = *(_QWORD *)(v12 + 8 * v14);
      v27[0] = v16;
      v27[1] = v15;
      if ( (unsigned int)sub_180028544(v16) )
      {
        sub_18002C3FC(v16 + 24, (__int64)&v28);
        v24 = 0LL;
        if ( v15 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
          v16 = v27[0];
        }
        *(_QWORD *)&v24 = v16;
        *((_QWORD *)&v24 + 1) = v15;
        sub_180068274(v34[0], &v24);
        if ( v29 )
          j_LanguageEnumProc(v28);
      }
      sub_180010910((__int64)v27);
      ++v10;
      v11 = *((_QWORD *)&v25 + 1);
      v12 = v25;
      v13 = v10;
    }
    while ( v10 < (unsigned __int64)((__int64)(*((_QWORD *)&v25 + 1) - v25) >> 4) );
  }
  if ( v12 )
  {
    sub_1800126E8(v12, v11);
    sub_180010884((char *)v25, (v26 - v25) & 0xFFFFFFFFFFFFFFF0uLL);
    v25 = 0LL;
    v26 = 0LL;
  }
  sub_180010910((__int64)v34);
  if ( v33 >= 0x10 )
    sub_180010884(v32[0], v33 + 1);
  v32[2] = 0LL;
  v33 = 15LL;
  LOBYTE(v32[0]) = 0;
  return sub_180010910((__int64)a2);
}
