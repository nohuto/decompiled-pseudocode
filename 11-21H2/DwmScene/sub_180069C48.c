/*
 * XREFs of sub_180069C48 @ 0x180069C48
 * Callers:
 *     sub_180069B6C @ 0x180069B6C (sub_180069B6C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180069CE8 @ 0x180069CE8 (sub_180069CE8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180069C48(__int64 a1, int a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD v5[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v6[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( a2 == -1 )
  {
    sub_1800113D0(v6, "ShaderFamily::SetOption() -- The invalid option cannot be set.");
    v3 = sub_1800113D0(
           v5,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v3, v4, (__int64)v6, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return sub_180069CE8(a1, 1LL << a2);
}
