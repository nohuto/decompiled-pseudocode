/*
 * XREFs of sub_180040C58 @ 0x180040C58
 * Callers:
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180042CBC @ 0x180042CBC (sub_180042CBC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180040C58(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD *v8; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  v8 = a2;
  if ( sub_180011DD0(a2) )
  {
    sub_180010DD0(v10, (__int64)"Scene::DeregisterNode() - node must not be null");
    v4 = sub_180010DD0(
           v9,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = *(_QWORD **)(*a2 + 368LL);
  result = sub_180042CBC(v3 + 120, &v8);
  v7 = a2[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
