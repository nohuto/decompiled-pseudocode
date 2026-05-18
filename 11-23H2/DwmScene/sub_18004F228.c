/*
 * XREFs of sub_18004F228 @ 0x18004F228
 * Callers:
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004DD30 @ 0x18004DD30 (sub_18004DD30.c)
 *     sub_18004FA08 @ 0x18004FA08 (sub_18004FA08.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004F228(__int64 a1, void **a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  _BYTE v11[16]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v12[4]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp+7h] BYREF

  if ( sub_18001F84C((__int64)a2) )
  {
    sub_180010DD0(v13, (__int64)"ShaderManager::AddOption() -- shader option name cannot be empty");
    v5 = sub_180010DD0(
           v12,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shadermanager.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v5, v6, (__int64)v13, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LODWORD(v7) = sub_18004FA08(a1, v4);
  if ( (_DWORD)v7 == -1 )
  {
    v7 = *(int *)(a1 + 2080);
    if ( (int)v7 >= 64 )
    {
      sub_180010DD0(
        v12,
        (__int64)"ShaderManager::AddOption() -- option could not be added because the maximum number of options has been reached");
      v9 = sub_180010DD0(
             v13,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engi"
                      "ne\\shadermanager.cpp");
      sub_18003AF58(pExceptionObject, (__int64)v9, v10, (__int64)v12, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 2080) = v7 + 1;
    *(_DWORD *)(*(_QWORD *)sub_18004DD30((__int64 *)(a1 + 16), (__int64)v11, a2) + 64LL) = v7;
    sub_1800134DC((void **)(a1 + 32 * (v7 + 1)), a2);
  }
  return (unsigned int)v7;
}
