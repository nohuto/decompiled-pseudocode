/*
 * XREFs of sub_18005E488 @ 0x18005E488
 * Callers:
 *     sub_18002AA20 @ 0x18002AA20 (sub_18002AA20.c)
 *     sub_18005E53C @ 0x18005E53C (sub_18005E53C.c)
 *     sub_1800E3C50 @ 0x1800E3C50 (sub_1800E3C50.c)
 *     sub_1800E657C @ 0x1800E657C (sub_1800E657C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18005E488(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_1800113D0(v5, "Attempted to set an active size with a negative component");
    v2 = (unsigned int)sub_1800113D0(
                         v4,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\texture.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v2, v3, (unsigned int)v5, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_QWORD *)(a1 + 152) = a2;
}
