/*
 * XREFs of sub_180053570 @ 0x180053570
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

void __noreturn sub_180053570()
{
  unsigned int v0; // eax
  int v1; // r8d
  _QWORD v2[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v3[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  sub_180010DD0(v3, (__int64)"Not implemented");
  v0 = (unsigned int)sub_180010DD0(
                       v2,
                       (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\so"
                                "urce\\engine\\renderdevicegeneric.cpp");
  sub_18006ED7C((unsigned int)pExceptionObject, v0, v1, (unsigned int)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
