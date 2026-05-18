/*
 * XREFs of sub_180082D18 @ 0x180082D18
 * Callers:
 *     sub_1800838B0 @ 0x1800838B0 (sub_1800838B0.c)
 *     sub_1800853E8 @ 0x1800853E8 (sub_1800853E8.c)
 *     sub_180085458 @ 0x180085458 (sub_180085458.c)
 *     sub_1800854F4 @ 0x1800854F4 (sub_1800854F4.c)
 *     sub_180085564 @ 0x180085564 (sub_180085564.c)
 *     sub_1800855A8 @ 0x1800855A8 (sub_1800855A8.c)
 *     sub_180085608 @ 0x180085608 (sub_180085608.c)
 *     sub_180085680 @ 0x180085680 (sub_180085680.c)
 *     sub_180085A64 @ 0x180085A64 (sub_180085A64.c)
 *     sub_180085AA8 @ 0x180085AA8 (sub_180085AA8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C74C @ 0x18001C74C (sub_18001C74C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180082CD8 @ 0x180082CD8 (sub_180082CD8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180082D18(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  char *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-90h] BYREF
  char v10[32]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v11[4]; // [rsp+B0h] [rbp-38h] BYREF

  result = sub_180082CD8(a1, a2);
  if ( (_WORD)result == 511 )
  {
    v4 = sub_18001C74C(
           v10,
           "ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the name \"",
           a2);
    v5 = sub_18001C61C(v11, v4, (__int64)"\"");
    v6 = sub_180010DD0(
           v8,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v6, v7, (__int64)v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return result;
}
