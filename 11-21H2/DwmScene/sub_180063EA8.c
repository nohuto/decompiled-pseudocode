/*
 * XREFs of sub_180063EA8 @ 0x180063EA8
 * Callers:
 *     sub_180066028 @ 0x180066028 (sub_180066028.c)
 *     sub_180066258 @ 0x180066258 (sub_180066258.c)
 *     sub_1800664E8 @ 0x1800664E8 (sub_1800664E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001DE64 @ 0x18001DE64 (sub_18001DE64.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_180063EA8(__int64 a1, int a2)
{
  unsigned int v3; // ecx
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  v3 = 0;
  while ( 1 << v3 != a2 )
  {
    if ( ++v3 >= 3 )
    {
      sub_1800113D0(v8, "Invalid matrix stage");
      v5 = (unsigned int)sub_1800113D0(
                           v7,
                           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                           "engine\\camera.cpp");
      sub_180079B60((unsigned int)pExceptionObject, v5, v6, (unsigned int)v8, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  return *(_DWORD *)sub_18001DE64(a1 + 4 * (v3 + 70LL)) != 0;
}
