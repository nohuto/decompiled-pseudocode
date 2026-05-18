/*
 * XREFs of sub_18008C7C0 @ 0x18008C7C0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

void __noreturn sub_18008C7C0()
{
  _QWORD *v0; // rax
  __int64 v1; // r8
  _QWORD v2[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v3[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  sub_180010DD0(v3, (__int64)"Deprecated code path");
  v0 = sub_180010DD0(
         v2,
         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\"
                  "texturegeneric.cpp");
  sub_18006ED7C(pExceptionObject, (__int64)v0, v1, (const char *)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
