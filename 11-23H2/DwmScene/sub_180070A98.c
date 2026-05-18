/*
 * XREFs of sub_180070A98 @ 0x180070A98
 * Callers:
 *     sub_1800268F0 @ 0x1800268F0 (sub_1800268F0.c)
 *     sub_18002724C @ 0x18002724C (sub_18002724C.c)
 *     sub_180034F98 @ 0x180034F98 (sub_180034F98.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_180070A10 @ 0x180070A10 (sub_180070A10.c)
 *     sub_180070B54 @ 0x180070B54 (sub_180070B54.c)
 */

// Hidden C++ exception states: #wind=1
__int64 sub_180070A98()
{
  _QWORD *v0; // rax
  int v1; // r9d
  int v2; // r9d
  int v3; // r9d
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  v0 = (_QWORD *)sub_180070B54();
  if ( !v1 )
    return sub_180070A10();
  v2 = v1 - 1;
  if ( !v2 )
    return v0[1];
  v3 = v2 - 1;
  if ( !v3 )
    return v0[3];
  if ( v3 != 1 )
  {
    sub_180010DD0(v8, (__int64)"Unsupported value");
    v4 = sub_180010DD0(
           v7,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\performancemanager.cpp");
    sub_18006ED7C(pExceptionObject, (__int64)v4, v5, (const char *)v8, 1);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return v0[2];
}
