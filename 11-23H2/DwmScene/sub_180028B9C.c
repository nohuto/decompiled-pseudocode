/*
 * XREFs of sub_180028B9C @ 0x180028B9C
 * Callers:
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_18002D088 @ 0x18002D088 (sub_18002D088.c)
 *     sub_1800C72E0 @ 0x1800C72E0 (sub_1800C72E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_1800569EC @ 0x1800569EC (sub_1800569EC.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180028B9C(__int64 a1, __int64 a2)
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
    sub_180010DD0(v7, (__int64)"Attempted to set an active size with a negative component");
    v4 = (unsigned int)sub_180010DD0(
                         v6,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\rendertarget.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v4, v5, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = sub_180011DE0((_QWORD *)(a1 + 136));
  if ( result )
    return sub_1800569EC(*v3);
  return result;
}
