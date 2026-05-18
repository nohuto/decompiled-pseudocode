/*
 * XREFs of sub_180034118 @ 0x180034118
 * Callers:
 *     sub_180012AA0 @ 0x180012AA0 (sub_180012AA0.c)
 *     sub_180015190 @ 0x180015190 (sub_180015190.c)
 *     sub_180018250 @ 0x180018250 (sub_180018250.c)
 *     sub_180033EB4 @ 0x180033EB4 (sub_180033EB4.c)
 *     sub_180033F90 @ 0x180033F90 (sub_180033F90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180034118(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  __int64 v4; // r8
  unsigned int v6; // eax
  int v7; // r8d
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a1 + 704);
  if ( v3 == *(_QWORD **)(a1 + 712) )
  {
    sub_180010DD0(v9, (__int64)"Engine does not have default scene. Engine is probably not initialized.");
    v6 = (unsigned int)sub_180010DD0(
                         v8,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\engine.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v6, v7, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18001246C(a2, v3);
  return v4;
}
