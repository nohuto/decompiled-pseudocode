/*
 * XREFs of sub_180037398 @ 0x180037398
 * Callers:
 *     sub_18002F3B0 @ 0x18002F3B0 (sub_18002F3B0.c)
 *     sub_180034AD8 @ 0x180034AD8 (sub_180034AD8.c)
 *     sub_180039E5C @ 0x180039E5C (sub_180039E5C.c)
 *     sub_18003AD18 @ 0x18003AD18 (sub_18003AD18.c)
 *     sub_1800423C8 @ 0x1800423C8 (sub_1800423C8.c)
 *     sub_1800487B0 @ 0x1800487B0 (sub_1800487B0.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_1800801B0 @ 0x1800801B0 (sub_1800801B0.c)
 *     sub_18008E828 @ 0x18008E828 (sub_18008E828.c)
 *     sub_1800A70B0 @ 0x1800A70B0 (sub_1800A70B0.c)
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_180037398()
{
  unsigned int v0; // eax
  int v1; // r8d
  _QWORD v2[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v3[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  sub_1800113D0(v3, "SymbolManager not supported.");
  v0 = (unsigned int)sub_1800113D0(
                       v2,
                       "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp");
  sub_180079B60((unsigned int)pExceptionObject, v0, v1, (unsigned int)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
