/*
 * XREFs of sub_1800612E0 @ 0x1800612E0
 * Callers:
 *     sub_180061204 @ 0x180061204 (sub_180061204.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180061380 @ 0x180061380 (sub_180061380.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800612E0(__int64 a1, int a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v6[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( a2 == -1 )
  {
    sub_180010DD0(v6, (__int64)"ShaderFamily::SetOption() -- The invalid option cannot be set.");
    v2 = sub_180010DD0(
           v5,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v2, v3, (__int64)v6, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return sub_180061380(a1, 1LL << a2);
}
