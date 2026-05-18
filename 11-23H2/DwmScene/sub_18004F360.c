/*
 * XREFs of sub_18004F360 @ 0x18004F360
 * Callers:
 *     sub_18008214C @ 0x18008214C (sub_18008214C.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004DE24 @ 0x18004DE24 (sub_18004DE24.c)
 *     sub_18004FA5C @ 0x18004FA5C (sub_18004FA5C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004F360(__int64 a1, void **a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _BYTE v10[16]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp+7h] BYREF

  if ( sub_18001F84C((__int64)a2) )
  {
    sub_180010DD0(v12, (__int64)"ShaderManager::RegisterShaderProperty() -- shader property name cannot be empty");
    v4 = sub_180010DD0(
           v11,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shadermanager.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOWORD(v6) = sub_18004FA5C(a1);
  if ( (_WORD)v6 == 511 )
  {
    v6 = *(int *)(a1 + 18488);
    if ( (int)v6 >= 512 )
    {
      sub_180010DD0(
        v11,
        (__int64)"ShaderManager::RegisterProperty() -- property could not be registered because the maximum number of pro"
                 "perties has been reached");
      v8 = sub_180010DD0(
             v12,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engi"
                      "ne\\shadermanager.cpp");
      sub_18003AF58(pExceptionObject, (__int64)v8, v9, (__int64)v11, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 18488) = v6 + 1;
    *(_WORD *)(*(_QWORD *)sub_18004DE24((__int64 *)(a1 + 2088), (__int64)v10, a2) + 64LL) = v6;
    sub_1800134DC((void **)(32 * v6 + a1 + 2104), a2);
  }
  return (unsigned __int16)v6;
}
