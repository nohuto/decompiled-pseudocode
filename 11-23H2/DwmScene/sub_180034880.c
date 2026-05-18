/*
 * XREFs of sub_180034880 @ 0x180034880
 * Callers:
 *     sub_18002CE40 @ 0x18002CE40 (sub_18002CE40.c)
 *     sub_180032A34 @ 0x180032A34 (sub_180032A34.c)
 *     sub_1800364F8 @ 0x1800364F8 (sub_1800364F8.c)
 *     sub_180037050 @ 0x180037050 (sub_180037050.c)
 *     sub_18003D390 @ 0x18003D390 (sub_18003D390.c)
 *     sub_180043380 @ 0x180043380 (sub_180043380.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_1800742F0 @ 0x1800742F0 (sub_1800742F0.c)
 *     sub_180081538 @ 0x180081538 (sub_180081538.c)
 *     sub_180096A40 @ 0x180096A40 (sub_180096A40.c)
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_180034880()
{
  unsigned int v0; // eax
  int v1; // r8d
  _QWORD v2[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v3[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  sub_180010DD0(v3, (__int64)"SymbolManager not supported.");
  v0 = (unsigned int)sub_180010DD0(
                       v2,
                       (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\so"
                                "urce\\engine\\engine.cpp");
  sub_18006ED7C((unsigned int)pExceptionObject, v0, v1, (unsigned int)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
