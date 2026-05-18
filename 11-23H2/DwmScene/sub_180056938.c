/*
 * XREFs of sub_180056938 @ 0x180056938
 * Callers:
 *     sub_180028AB4 @ 0x180028AB4 (sub_180028AB4.c)
 *     sub_1800569EC @ 0x1800569EC (sub_1800569EC.c)
 *     sub_1800CD1B0 @ 0x1800CD1B0 (sub_1800CD1B0.c)
 *     sub_1800CF2D0 @ 0x1800CF2D0 (sub_1800CF2D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180056938(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_180010DD0(v5, (__int64)"Attempted to set an active size with a negative component");
    v2 = (unsigned int)sub_180010DD0(
                         v4,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\texture.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v2, v3, (unsigned int)v5, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_QWORD *)(a1 + 152) = a2;
}
