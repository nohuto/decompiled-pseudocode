/*
 * XREFs of sub_180055F60 @ 0x180055F60
 * Callers:
 *     sub_1800680DC @ 0x1800680DC (sub_1800680DC.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180055760 @ 0x180055760 (sub_180055760.c)
 *     sub_1800569D0 @ 0x1800569D0 (sub_1800569D0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180055F60(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rdi
  __int64 *v5; // rcx
  size_t v6; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD v12[4]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v13[4]; // [rsp+58h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-1h] BYREF

  v2 = a2;
  if ( !a2[2] )
  {
    sub_1800113D0(v13, "ShaderManager::AddOption() -- shader option name cannot be empty");
    v8 = sub_1800113D0(
           v12,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v8, v9, (__int64)v13, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LODWORD(v4) = sub_1800569D0(a1, a2);
  if ( (_DWORD)v4 == -1 )
  {
    v4 = *(int *)(a1 + 2080);
    if ( (int)v4 >= 64 )
    {
      sub_1800113D0(
        v12,
        "ShaderManager::AddOption() -- option could not be added because the maximum number of options has been reached");
      v10 = sub_1800113D0(
              v13,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
      sub_18003F4DC(pExceptionObject, (__int64)v10, v11, (__int64)v12, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 2080) = v4 + 1;
    *(_DWORD *)sub_180055760((__int64 *)(a1 + 16), v2) = v4;
    v5 = (__int64 *)(a1 + 32 * (v4 + 1));
    if ( v5 != v2 )
    {
      v6 = v2[2];
      if ( (unsigned __int64)v2[3] >= 0x10 )
        v2 = (__int64 *)*v2;
      sub_180012190(v5, v2, v6);
    }
  }
  return (unsigned int)v4;
}
