/*
 * XREFs of sub_180028AB4 @ 0x180028AB4
 * Callers:
 *     sub_1800CB76C @ 0x1800CB76C (sub_1800CB76C.c)
 *     sub_1800CB9B0 @ 0x1800CB9B0 (sub_1800CB9B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180056938 @ 0x180056938 (sub_180056938.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180028AB4(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  char result; // al
  _QWORD *v6; // rcx
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v9[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-60h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_180010DD0(v10, (__int64)"Attempted to set an active size with a negative component");
    v7 = (unsigned int)sub_180010DD0(
                         v9,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\rendertarget.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v7, v8, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( sub_180011DE0((_QWORD *)(a1 + 96)) )
    sub_180056938(*v4, a2);
  result = sub_180011DE0((_QWORD *)(a1 + 112));
  if ( result )
    return sub_180056938(*v6, a2);
  return result;
}
