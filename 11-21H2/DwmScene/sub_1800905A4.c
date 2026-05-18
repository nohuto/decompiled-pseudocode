/*
 * XREFs of sub_1800905A4 @ 0x1800905A4
 * Callers:
 *     sub_180090D2C @ 0x180090D2C (sub_180090D2C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18004A2A8 @ 0x18004A2A8 (sub_18004A2A8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800905A4(__int64 a1, int a2)
{
  __int128 *v3; // rdx
  char *v4; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+30h] [rbp-49h] BYREF
  __int128 v9; // [rsp+50h] [rbp-29h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v11[4]; // [rsp+A0h] [rbp+27h] BYREF

  *(_QWORD *)&v9 = a1;
  if ( a2 < 0 )
  {
LABEL_17:
    sub_1800113D0(v11, "ShaderPropertyDefinition::ShaderPropertyDefinition() -- unsupported property type");
    v6 = sub_1800113D0(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v6, v7, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a2 <= 2 )
  {
    LODWORD(v9) = 0;
    v8[0] = &v9;
    v4 = (char *)&v9 + 4;
    goto LABEL_14;
  }
  if ( a2 == 3 )
  {
    *(_QWORD *)&v9 = 0LL;
    v8[0] = &v9;
    v4 = (char *)&v9 + 8;
    goto LABEL_14;
  }
  if ( a2 == 4 )
  {
    *(_QWORD *)&v9 = 0LL;
    DWORD2(v9) = 0;
    v8[0] = &v9;
    v4 = (char *)&v9 + 12;
    goto LABEL_14;
  }
  if ( a2 <= 6 )
  {
    v9 = 0LL;
    v8[0] = &v9;
    v4 = (char *)pExceptionObject;
LABEL_14:
    v8[1] = v4;
    v3 = (__int128 *)v8;
    goto LABEL_15;
  }
  if ( a2 == 7 )
  {
    pExceptionObject[0] = 1065353216LL;
    pExceptionObject[1] = 0LL;
    pExceptionObject[2] = 0x3F80000000000000LL;
    pExceptionObject[3] = 0LL;
    pExceptionObject[4] = 0LL;
    pExceptionObject[5] = 1065353216LL;
    pExceptionObject[6] = 0LL;
    pExceptionObject[7] = 0x3F80000000000000LL;
    *(_QWORD *)&v9 = pExceptionObject;
    *((_QWORD *)&v9 + 1) = v11;
    v3 = &v9;
LABEL_15:
    sub_18004A2A8((char **)a1, (__int64)v3);
    return a1;
  }
  if ( a2 != 8 )
    goto LABEL_17;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return a1;
}
