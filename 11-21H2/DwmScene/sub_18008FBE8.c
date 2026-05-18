/*
 * XREFs of sub_18008FBE8 @ 0x18008FBE8
 * Callers:
 *     sub_18004A774 @ 0x18004A774 (sub_18004A774.c)
 *     sub_18004C658 @ 0x18004C658 (sub_18004C658.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008BE10 @ 0x18008BE10 (sub_18008BE10.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 *     sub_18008FB1C @ 0x18008FB1C (sub_18008FB1C.c)
 *     sub_180092984 @ 0x180092984 (sub_180092984.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD9C @ 0x18001DD9C (sub_18001DD9C.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180055F4C @ 0x180055F4C (sub_180055F4C.c)
 *     sub_1800560A0 @ 0x1800560A0 (sub_1800560A0.c)
 *     sub_180056B94 @ 0x180056B94 (sub_180056B94.c)
 *     sub_18008E9B8 @ 0x18008E9B8 (sub_18008E9B8.c)
 *     sub_18008EB54 @ 0x18008EB54 (sub_18008EB54.c)
 *     sub_18008EE60 @ 0x18008EE60 (sub_18008EE60.c)
 *     sub_18008F14C @ 0x18008F14C (sub_18008F14C.c)
 *     sub_18009010C @ 0x18009010C (sub_18009010C.c)
 *     sub_1800908D4 @ 0x1800908D4 (sub_1800908D4.c)
 *     sub_1800908F8 @ 0x1800908F8 (sub_1800908F8.c)
 *     sub_180090D2C @ 0x180090D2C (sub_180090D2C.c)
 *     sub_180092DD8 @ 0x180092DD8 (sub_180092DD8.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18008FBE8(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // r12d
  int v7; // edi
  __int64 *v8; // rsi
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rdx
  char *v17; // rax
  __int64 v18; // rdi
  __int64 *v20; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // r8
  unsigned __int16 v30; // [rsp+30h] [rbp-D0h]
  __int128 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+60h] [rbp-A0h]
  unsigned int v34; // [rsp+64h] [rbp-9Ch]
  int v35; // [rsp+68h] [rbp-98h]
  int v36; // [rsp+6Ch] [rbp-94h]
  int v37; // [rsp+70h] [rbp-90h]
  char *v38[3]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v39; // [rsp+90h] [rbp-70h]
  unsigned __int16 v40; // [rsp+98h] [rbp-68h]
  int v41; // [rsp+9Ch] [rbp-64h]
  int v42; // [rsp+A0h] [rbp-60h]
  int v43; // [rsp+A4h] [rbp-5Ch]
  int v44; // [rsp+A8h] [rbp-58h]
  __int64 v45[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = *(_DWORD *)(a2 + 32);
  v7 = 0;
  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_1800113D0(
      v45,
      "ShaderPropertyLayout::AddProperty() -- property can only be added while the layout is in declaration phase");
    v24 = sub_1800113D0(
            v38,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(&v31, (__int64)v24, v25, (__int64)v45, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)&v31;
  }
  if ( !*(_QWORD *)(a2 + 16) )
  {
    sub_1800113D0(v45, "ShaderPropertyLayout::AddProperty() -- property cannot have an empty name");
    v26 = sub_1800113D0(
            v38,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(&v31, (__int64)v26, v27, (__int64)v45, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)&v31;
  }
  v8 = (__int64 *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56) == 28672LL )
  {
    sub_1800113D0(v45, "ShaderPropertyLayout::AddProperty() -- property block already has maximum number of properties");
    v28 = sub_1800113D0(
            v38,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(&v31, (__int64)v28, v29, (__int64)v45, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)&v31;
  }
  v30 = sub_1800560A0(*(_QWORD *)(a1 + 1152), (__int64 *)a2);
  if ( (unsigned __int8)sub_1800908F8(a1, v30, v9) )
  {
    v20 = sub_18001DD9C(v45, "ShaderPropertyLayout::AddProperty() -- variable '", (_QWORD *)a2);
    v21 = sub_18001DC84((__int64)&v31, v20);
    v22 = sub_1800113D0(
            v38,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v22, v23, v21, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a3 == 1 )
  {
    v10 = sub_180056B94(*(_QWORD *)(a1 + 1152), v38);
    sub_180092DD8(*v10, v45);
    sub_180010910((__int64)v38);
    if ( v45[0] != a1 )
    {
      if ( !(unsigned __int8)sub_1800908D4(v45[0], a2) )
        sub_180055F4C(*(_QWORD *)(a1 + 1152));
      *(_BYTE *)(a1 + 1241) = 1;
      a3 = 2;
    }
    sub_180010910((__int64)v45);
  }
  if ( v6 == 8 )
  {
    v11 = *(_QWORD *)(a1 + 112);
    v12 = 0xCCCCCCCCCCCCCCCDuLL * ((v11 - *(_QWORD *)(a1 + 104)) >> 3);
    v31 = 0LL;
    v32 = 0LL;
    v33 = v12;
    if ( v11 == *(_QWORD *)(a1 + 120) )
    {
      sub_18008EB54((__int64 *)(a1 + 104), v11, (__int64)&v31);
    }
    else
    {
      *(_QWORD *)v11 = 0LL;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_DWORD *)(v11 + 32) = v12;
      *(_QWORD *)(a1 + 112) += 40LL;
    }
    *(_WORD *)(a1 + 2LL * v30 + 128) = 28087 * ((v8[1] - *v8) >> 3);
    sub_18001875C((__int64 *)v38, a2);
    v40 = v30;
    v41 = 8;
    v42 = v12;
    v43 = 0;
    v44 = a3;
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 == *(_QWORD *)(a1 + 72) )
    {
      sub_18008E9B8(v8, *(_QWORD *)(a1 + 64), (__int64)v38);
    }
    else
    {
      sub_18001875C(*(__int64 **)(a1 + 64), (__int64)v38);
      *(_WORD *)(v13 + 32) = v40;
      *(_DWORD *)(v13 + 36) = v41;
      *(_DWORD *)(v13 + 40) = v42;
      *(_DWORD *)(v13 + 44) = v43;
      *(_DWORD *)(v13 + 48) = v44;
      v8[1] += 56LL;
    }
    if ( v39 >= 0x10 )
      sub_180010884(v38[0], v39 + 1);
    sub_180010910((__int64)&v32);
    sub_180010910((__int64)&v31);
    goto LABEL_44;
  }
  if ( v6 <= 2 )
  {
    v7 = 1;
  }
  else
  {
    switch ( v6 )
    {
      case 3u:
        v7 = 2;
        break;
      case 4u:
        v7 = 3;
        break;
      case 5u:
      case 6u:
        v7 = 4;
        break;
      case 7u:
        v7 = 16;
        break;
    }
  }
  sub_18009010C(a1);
  v14 = *(_QWORD *)(a1 + 80);
  v15 = (*(_QWORD *)(a1 + 88) - v14) >> 2;
  v16 = (unsigned int)(v15 + v7);
  if ( v16 >= v15 )
  {
    if ( v16 <= v15 )
      goto LABEL_39;
    if ( v16 > (*(_QWORD *)(a1 + 96) - v14) >> 2 )
    {
      sub_18008EE60((__int64 *)(a1 + 80), v16);
      goto LABEL_39;
    }
    v17 = sub_18008F14C(*(char **)(a1 + 88), v16 - v15);
  }
  else
  {
    v17 = (char *)(v14 + 4LL * (unsigned int)(v15 + v7));
  }
  *(_QWORD *)(a1 + 88) = v17;
LABEL_39:
  *(_WORD *)(a1 + 2LL * v30 + 128) = 28087 * ((v8[1] - *v8) >> 3);
  sub_18001875C((__int64 *)&v31, a2);
  LOWORD(v33) = v30;
  v34 = v6;
  v35 = v15;
  v36 = 1;
  v37 = a3;
  v18 = *(_QWORD *)(a1 + 64);
  if ( v18 == *(_QWORD *)(a1 + 72) )
  {
    sub_18008E9B8(v8, *(_QWORD *)(a1 + 64), (__int64)&v31);
  }
  else
  {
    sub_18001875C(*(__int64 **)(a1 + 64), (__int64)&v31);
    *(_WORD *)(v18 + 32) = v33;
    *(_DWORD *)(v18 + 36) = v34;
    *(_DWORD *)(v18 + 40) = v35;
    *(_DWORD *)(v18 + 44) = v36;
    *(_DWORD *)(v18 + 48) = v37;
    v8[1] += 56LL;
  }
  if ( *((_QWORD *)&v32 + 1) >= 0x10uLL )
    sub_180010884((char *)v31, *((_QWORD *)&v32 + 1) + 1LL);
LABEL_44:
  *(_BYTE *)(a1 + 1240) |= a3 == 2;
  sub_180090D2C(a1, v30, a2);
  return v30;
}
