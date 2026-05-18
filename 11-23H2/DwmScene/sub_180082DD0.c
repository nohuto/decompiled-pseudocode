/*
 * XREFs of sub_180082DD0 @ 0x180082DD0
 * Callers:
 *     sub_1800834AC @ 0x1800834AC (sub_1800834AC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180044DCC @ 0x180044DCC (sub_180044DCC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180082DD0(__int64 *a1, int a2, __int64 a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int128 *v13; // rdx
  char *v14; // rax
  _QWORD v16[6]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v17; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v19[4]; // [rsp+B0h] [rbp+27h] BYREF

  *(_QWORD *)&v17 = a1;
  if ( !a2 || (v4 = a2 - 1) == 0 || (v5 = v4 - 1) == 0 )
  {
    LODWORD(v17) = 0;
    v16[0] = &v17;
    v14 = (char *)&v17 + 4;
    goto LABEL_17;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_QWORD *)&v17 = 0LL;
    v16[0] = &v17;
    v14 = (char *)&v17 + 8;
    goto LABEL_17;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *(_QWORD *)&v17 = 0LL;
    DWORD2(v17) = 0;
    v16[0] = &v17;
    v14 = (char *)&v17 + 12;
    goto LABEL_17;
  }
  v8 = v7 - 1;
  if ( !v8 || (v9 = v8 - 1) == 0 )
  {
    v17 = 0LL;
    v16[0] = &v17;
    v14 = (char *)pExceptionObject;
LABEL_17:
    v13 = (__int128 *)v16;
    v16[1] = v14;
    goto LABEL_18;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    pExceptionObject[0] = 1065353216LL;
    pExceptionObject[1] = 0LL;
    pExceptionObject[2] = 0x3F80000000000000LL;
    pExceptionObject[3] = 0LL;
    pExceptionObject[4] = 0LL;
    pExceptionObject[5] = 1065353216LL;
    pExceptionObject[6] = 0LL;
    pExceptionObject[7] = 0x3F80000000000000LL;
    *(_QWORD *)&v17 = pExceptionObject;
    *((_QWORD *)&v17 + 1) = v19;
    v13 = &v17;
LABEL_18:
    sub_180044DCC(a1, (__int64)v13, a3);
    return a1;
  }
  if ( v10 != 1 )
  {
    sub_180010DD0(v19, (__int64)"ShaderPropertyDefinition::ShaderPropertyDefinition() -- unsupported property type");
    v11 = sub_180010DD0(
            v16,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v11, v12, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return a1;
}
