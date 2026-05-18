/*
 * XREFs of sub_1800613A4 @ 0x1800613A4
 * Callers:
 *     sub_180045298 @ 0x180045298 (sub_180045298.c)
 *     sub_180045FF8 @ 0x180045FF8 (sub_180045FF8.c)
 *     sub_180046554 @ 0x180046554 (sub_180046554.c)
 *     sub_180046A58 @ 0x180046A58 (sub_180046A58.c)
 *     sub_180046AE8 @ 0x180046AE8 (sub_180046AE8.c)
 *     sub_180060800 @ 0x180060800 (sub_180060800.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_18007F820 @ 0x18007F820 (sub_18007F820.c)
 *     sub_18007FF54 @ 0x18007FF54 (sub_18007FF54.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001E8C0 @ 0x18001E8C0 (sub_18001E8C0.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_1800509B4 @ 0x1800509B4 (sub_1800509B4.c)
 *     sub_180082FBC @ 0x180082FBC (sub_180082FBC.c)
 *     sub_1800830D4 @ 0x1800830D4 (sub_1800830D4.c)
 *     sub_18008349C @ 0x18008349C (sub_18008349C.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_1800613A4(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  char result; // al
  _QWORD *v10; // rax
  void **v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD v14[4]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v15[4]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v17[4]; // [rsp+B8h] [rbp+1Fh] BYREF

  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_180010DD0(
      v15,
      (__int64)"ShaderFamily::SetPropertyLayout() -- Cannot set property layout after the shader family has ended declaration");
    v4 = sub_180010DD0(
           v14,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = (unsigned int)sub_1800830D4(*a2);
  sub_1800124F8((__int64 *)(a1 + 16 * v6 + 96), v7);
  v8 = sub_180082FBC(*a2);
  result = sub_18001F84C(v8);
  if ( result )
  {
    v10 = sub_1800509B4(pExceptionObject, v6);
    v11 = (void **)sub_18001C61C(v17, v10, (__int64)" (");
    v12 = sub_18001E8C0(v15, v11, (_QWORD *)(a1 + 16));
    sub_18001C61C(v14, v12, (__int64)")");
    sub_180011B24((__int64)v15);
    sub_180011B24((__int64)v17);
    sub_180011B24((__int64)pExceptionObject);
    sub_18008349C(*a2, v14);
    result = sub_180011B24((__int64)v14);
  }
  v13 = a2[1];
  if ( v13 )
    return sub_180010530(v13);
  return result;
}
