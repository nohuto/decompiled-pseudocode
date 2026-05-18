/*
 * XREFs of sub_18007BC8C @ 0x18007BC8C
 * Callers:
 *     sub_180028910 @ 0x180028910 (sub_180028910.c)
 *     sub_1800293EC @ 0x1800293EC (sub_1800293EC.c)
 *     sub_180037F5C @ 0x180037F5C (sub_180037F5C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18003DDEC @ 0x18003DDEC (sub_18003DDEC.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_18007BD4C @ 0x18007BD4C (sub_18007BD4C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 sub_18007BC8C()
{
  _QWORD *v0; // rax
  int v1; // r9d
  int v2; // r9d
  int v3; // r9d
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  v0 = (_QWORD *)sub_18007BD4C();
  if ( !v1 )
    return *(_QWORD *)sub_18003DDEC((__int64)v0);
  v2 = v1 - 1;
  if ( !v2 )
    return v0[1];
  v3 = v2 - 1;
  if ( !v3 )
    return v0[3];
  if ( v3 != 1 )
  {
    sub_1800113D0(v8, "Unsupported value");
    v5 = sub_1800113D0(
           v7,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\performancemanager.cpp");
    sub_180079B60(pExceptionObject, (__int64)v5, v6, (const char *)v8, 1);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return v0[2];
}
