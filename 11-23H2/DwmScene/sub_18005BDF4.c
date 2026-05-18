/*
 * XREFs of sub_18005BDF4 @ 0x18005BDF4
 * Callers:
 *     sub_18005DCB8 @ 0x18005DCB8 (sub_18005DCB8.c)
 *     sub_18005DEF0 @ 0x18005DEF0 (sub_18005DEF0.c)
 *     sub_18005E124 @ 0x18005E124 (sub_18005E124.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180059D90 @ 0x180059D90 (sub_180059D90.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_18005BDF4(__int64 a1, int a2)
{
  unsigned int i; // ecx
  unsigned int v4; // eax
  int v5; // r8d
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( i >= 3 )
    {
      sub_180010DD0(v7, (__int64)"Invalid matrix stage");
      v4 = (unsigned int)sub_180010DD0(
                           v6,
                           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp"
                                    "\\source\\engine\\camera.cpp");
      sub_18006ED7C((unsigned int)pExceptionObject, v4, v5, (unsigned int)v7, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    if ( 1 << i == a2 )
      break;
  }
  return (unsigned int)sub_180059D90() != 0;
}
