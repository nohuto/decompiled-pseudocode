/*
 * XREFs of sub_18004FB30 @ 0x18004FB30
 * Callers:
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_180099DE8 @ 0x180099DE8 (sub_180099DE8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004FB30(__int64 a1, _DWORD **a2)
{
  __int64 v2; // rcx
  _DWORD *i; // r8
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  v2 = 0LL;
  for ( i = *a2; i != a2[1]; ++i )
  {
    if ( *i == -1 )
    {
      sub_180010DD0(
        v8,
        (__int64)"ShaderManager::GetOptionGroup() -- option group contains a non-registered option name.");
      v4 = sub_180010DD0(
             v7,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engi"
                      "ne\\shadermanager.cpp");
      sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)v8, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v2 |= 1LL << *i;
  }
  return v2;
}
