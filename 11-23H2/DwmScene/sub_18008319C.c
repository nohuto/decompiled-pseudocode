/*
 * XREFs of sub_18008319C @ 0x18008319C
 * Callers:
 *     sub_180045298 @ 0x180045298 (sub_180045298.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18008319C(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( (a2 & 0xFFFFFFEF) != 0 && *(_DWORD *)(a1 + 1168) )
  {
    sub_180010DD0(v5, (__int64)"ShaderPropertyLayout::SetAlignment() -- alignment in bytes must be 0, 4, 8 or 16.");
    v2 = sub_180010DD0(
           v4,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v2, v3, (__int64)v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 1172) = a2 >> 2;
}
