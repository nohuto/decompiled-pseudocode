/*
 * XREFs of sub_18002AB08 @ 0x18002AB08
 * Callers:
 *     sub_18002A240 @ 0x18002A240 (sub_18002A240.c)
 *     sub_18002F6EC @ 0x18002F6EC (sub_18002F6EC.c)
 *     sub_1800DD040 @ 0x1800DD040 (sub_1800DD040.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18005E53C @ 0x18005E53C (sub_18005E53C.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18002AB08(__int64 a1, __int64 a2)
{
  char result; // al
  _QWORD *v3; // rcx
  unsigned int v4; // eax
  int v5; // r8d
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_1800113D0(v7, "Attempted to set an active size with a negative component");
    v4 = (unsigned int)sub_1800113D0(
                         v6,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\rendertarget.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v4, v5, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = sub_1800122C0((_QWORD *)(a1 + 136));
  if ( result )
    return sub_18005E53C(*v3);
  return result;
}
