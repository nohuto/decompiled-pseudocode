/*
 * XREFs of sub_180061204 @ 0x180061204
 * Callers:
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 *     sub_180068C20 @ 0x180068C20 (sub_180068C20.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C74C @ 0x18001C74C (sub_18001C74C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180060990 @ 0x180060990 (sub_180060990.c)
 *     sub_1800612E0 @ 0x1800612E0 (sub_1800612E0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180061204(__int64 a1, _QWORD *a2, char a3)
{
  unsigned int v6; // eax
  __int64 v7; // r8
  char *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD v13[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-90h] BYREF
  char v15[32]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v16[4]; // [rsp+B0h] [rbp-38h] BYREF

  v6 = sub_180060990(a1);
  if ( v6 == -1 )
  {
    v8 = sub_18001C74C(v15, "ShaderFamily::SetOption() -- The option '", a2);
    v9 = sub_18001C61C(v16, v8, (__int64)"' cannot be set.");
    v10 = sub_180010DD0(
            v13,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderfamily.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v10, v11, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOBYTE(v7) = a3;
  return sub_1800612E0(a1, v6, v7);
}
