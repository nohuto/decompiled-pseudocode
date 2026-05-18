/*
 * XREFs of sub_18004FDD4 @ 0x18004FDD4
 * Callers:
 *     sub_180085154 @ 0x180085154 (sub_180085154.c)
 *     sub_180085280 @ 0x180085280 (sub_180085280.c)
 *     sub_1800856EC @ 0x1800856EC (sub_1800856EC.c)
 *     sub_1800858DC @ 0x1800858DC (sub_1800858DC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_180027C80 @ 0x180027C80 (sub_180027C80.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18004FDD4(__int64 a1, _QWORD *a2, unsigned __int16 a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD v9[4]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v10[32]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v12[4]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v13[4]; // [rsp+D8h] [rbp-30h] BYREF

  if ( a3 == 511 || a3 >= *(int *)(a1 + 18488) )
  {
    sub_180027C80((__int64)v10, a3);
    v5 = sub_18001C6E8(v12, (__int64)"ShaderManager::GetPropertyName() -- property id ", v10);
    v6 = sub_18001C61C(v13, v5, (__int64)" is not registered");
    v7 = sub_180010DD0(
           v9,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shadermanager.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v7, v8, (__int64)v6, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180017648(a2, 32LL * a3 + a1 + 2104);
  return a2;
}
