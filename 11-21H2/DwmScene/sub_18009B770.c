/*
 * XREFs of sub_18009B770 @ 0x18009B770
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

void __noreturn sub_18009B770()
{
  _QWORD *v0; // rax
  __int64 v1; // r8
  _QWORD v2[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v3[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  sub_1800113D0(v3, "Deprecated code path");
  v0 = sub_1800113D0(
         v2,
         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\indexbuffergeneric.cpp");
  sub_180079B60(pExceptionObject, (__int64)v0, v1, (const char *)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
