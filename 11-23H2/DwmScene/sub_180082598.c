/*
 * XREFs of sub_180082598 @ 0x180082598
 * Callers:
 *     sub_180045298 @ 0x180045298 (sub_180045298.c)
 *     sub_180046AE8 @ 0x180046AE8 (sub_180046AE8.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_18007FF54 @ 0x18007FF54 (sub_18007FF54.c)
 *     sub_1800824CC @ 0x1800824CC (sub_1800824CC.c)
 *     sub_180084E14 @ 0x180084E14 (sub_180084E14.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C74C @ 0x18001C74C (sub_18001C74C.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004F214 @ 0x18004F214 (sub_18004F214.c)
 *     sub_18004F360 @ 0x18004F360 (sub_18004F360.c)
 *     sub_18004FB08 @ 0x18004FB08 (sub_18004FB08.c)
 *     sub_180071F84 @ 0x180071F84 (sub_180071F84.c)
 *     sub_180081688 @ 0x180081688 (sub_180081688.c)
 *     sub_1800817C4 @ 0x1800817C4 (sub_1800817C4.c)
 *     sub_180081A24 @ 0x180081A24 (sub_180081A24.c)
 *     sub_180081CE4 @ 0x180081CE4 (sub_180081CE4.c)
 *     sub_180081F38 @ 0x180081F38 (sub_180081F38.c)
 *     sub_1800829AC @ 0x1800829AC (sub_1800829AC.c)
 *     sub_1800830E0 @ 0x1800830E0 (sub_1800830E0.c)
 *     sub_180083148 @ 0x180083148 (sub_180083148.c)
 *     sub_18008316C @ 0x18008316C (sub_18008316C.c)
 *     sub_1800834AC @ 0x1800834AC (sub_1800834AC.c)
 *     sub_180085130 @ 0x180085130 (sub_180085130.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180082598(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  __int64 v8; // r8
  void **v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 v15; // r8
  char *v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // ebx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned int v30; // [rsp+30h] [rbp-D0h]
  _OWORD pExceptionObject[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+58h] [rbp-A8h]
  unsigned int v33; // [rsp+5Ch] [rbp-A4h]
  int v34; // [rsp+60h] [rbp-A0h]
  int v35; // [rsp+64h] [rbp-9Ch]
  int v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  __int16 v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+94h] [rbp-6Ch]
  int v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+9Ch] [rbp-64h]
  int v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-50h]
  _QWORD v46[7]; // [rsp+C8h] [rbp-38h] BYREF

  v6 = *(_DWORD *)(a2 + 32);
  v30 = v6;
  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_180010DD0(
      &v44,
      (__int64)"ShaderPropertyLayout::AddProperty() -- property can only be added while the layout is in declaration phase");
    v7 = sub_180010DD0(
           &v37,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v7, v8, (__int64)&v44, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( sub_18001F84C(a2) )
  {
    sub_180010DD0(&v44, (__int64)"ShaderPropertyLayout::AddProperty() -- property cannot have an empty name");
    v10 = sub_180010DD0(
            &v37,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v10, v11, (__int64)&v44, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56) == 28672LL )
  {
    sub_180010DD0(
      &v44,
      (__int64)"ShaderPropertyLayout::AddProperty() -- property block already has maximum number of properties");
    v12 = sub_180010DD0(
            &v37,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v12, v13, (__int64)&v44, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v14 = (unsigned __int16)sub_18004F360(*(_QWORD *)(a1 + 1152), v9);
  if ( (unsigned __int8)sub_18008316C(a1, v14, v15) )
  {
    v16 = sub_18001C74C((char *)&v44, "ShaderPropertyLayout::AddProperty() -- variable '", (_QWORD *)a2);
    v17 = sub_18001C61C(pExceptionObject, v16, (__int64)"' is already defined");
    v18 = sub_180010DD0(
            &v37,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertylayout.cpp");
    sub_18003AF58(v46, (__int64)v18, v19, (__int64)v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v46;
  }
  if ( a3 == 1 )
  {
    v20 = (_QWORD *)sub_18004FB08(*(_QWORD *)(a1 + 1152), &v37);
    sub_180085130(*v20, &v44);
    if ( v38 )
      sub_180010530(v38);
    if ( v44 != a1 )
    {
      if ( !(unsigned __int8)sub_180083148(v44, a2) )
        sub_18004F214(*(_QWORD *)(a1 + 1152));
      *(_BYTE *)(a1 + 1241) = 1;
      a3 = 2;
    }
    if ( v45 )
      sub_180010530(v45);
  }
  if ( v6 == 8 )
  {
    v21 = *(_QWORD **)(a1 + 112);
    v22 = 0xCCCCCCCCCCCCCCCDuLL * (((__int64)v21 - *(_QWORD *)(a1 + 104)) >> 3);
    memset(pExceptionObject, 0, sizeof(pExceptionObject));
    v32 = v22;
    if ( v21 == *(_QWORD **)(a1 + 120) )
    {
      sub_1800817C4((__int64 *)(a1 + 104), (__int64)v21, (__int64)pExceptionObject);
    }
    else
    {
      sub_180081F38(v21, pExceptionObject);
      *(_QWORD *)(a1 + 112) += 40LL;
    }
    *(_WORD *)(a1 + 2 * v14 + 128) = 28087 * ((__int64)(*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) >> 3);
    sub_180017648(&v37, a2);
    v39 = v14;
    v40 = 8;
    v41 = v22;
    v42 = 0;
    v43 = a3;
    v24 = *(_QWORD *)(a1 + 64);
    if ( v24 == *(_QWORD *)(a1 + 72) )
    {
      sub_180081688((__int64 *)(a1 + 56), v24, (__int64)&v37);
    }
    else
    {
      sub_180081CE4(v23, v24, (__int64)&v37);
      *(_QWORD *)(a1 + 64) += 56LL;
    }
    sub_180011B24((__int64)&v37);
    sub_180071F84((__int64)pExceptionObject);
  }
  else
  {
    v25 = sub_1800830E0(v6);
    sub_1800829AC(a1);
    v26 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
    sub_180081A24((__int64 *)(a1 + 80), (unsigned int)(v26 + v25));
    *(_WORD *)(a1 + 2 * v14 + 128) = 28087 * ((__int64)(*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) >> 3);
    sub_180017648(pExceptionObject, a2);
    LOWORD(v32) = v14;
    v33 = v30;
    v34 = v26;
    v35 = 1;
    v36 = a3;
    v28 = *(_QWORD *)(a1 + 64);
    if ( v28 == *(_QWORD *)(a1 + 72) )
    {
      sub_180081688((__int64 *)(a1 + 56), v28, (__int64)pExceptionObject);
    }
    else
    {
      sub_180081CE4(v27, v28, (__int64)pExceptionObject);
      *(_QWORD *)(a1 + 64) += 56LL;
    }
    sub_180011B24((__int64)pExceptionObject);
  }
  *(_BYTE *)(a1 + 1240) |= a3 == 2;
  sub_1800834AC(a1, (unsigned __int16)v14, a2);
  return (unsigned __int16)v14;
}
