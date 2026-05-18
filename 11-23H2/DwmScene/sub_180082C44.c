/*
 * XREFs of sub_180082C44 @ 0x180082C44
 * Callers:
 *     sub_180084E14 @ 0x180084E14 (sub_180084E14.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 */

void __fastcall sub_180082C44(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // r8
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_180010DD0(
      v4,
      (__int64)"ShaderPropertyLayout::ExtendDeclaration() -- this function must only be called when this layout is complete");
    v1 = sub_180010DD0(
           v3,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v1, v2, (__int64)v4, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 1168) = 0;
}
