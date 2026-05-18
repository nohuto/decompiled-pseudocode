/*
 * XREFs of sub_18004F104 @ 0x18004F104
 * Callers:
 *     sub_18004ECF0 @ 0x18004ECF0 (sub_18004ECF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_18004DBD8 @ 0x18004DBD8 (sub_18004DBD8.c)
 *     sub_18004F42C @ 0x18004F42C (sub_18004F42C.c)
 *     sub_18004F65C @ 0x18004F65C (sub_18004F65C.c)
 *     sub_18004F6CC @ 0x18004F6CC (sub_18004F6CC.c)
 *     sub_18004F81C @ 0x18004F81C (sub_18004F81C.c)
 *     sub_18004F9A4 @ 0x18004F9A4 (sub_18004F9A4.c)
 *     sub_18004FAF0 @ 0x18004FAF0 (sub_18004FAF0.c)
 *     sub_18004FC34 @ 0x18004FC34 (sub_18004FC34.c)
 *     sub_18004FE0C @ 0x18004FE0C (sub_18004FE0C.c)
 *     sub_18004FF4C @ 0x18004FF4C (sub_18004FF4C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004F104(unsigned int *a1, int a2, int a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  unsigned int v7; // r10d
  int v8; // r9d
  __int64 result; // rax
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD v16[4]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp+7h] BYREF

  if ( !a3 || !a2 )
  {
    sub_1800113D0(v16, "Mesh::ReserveDynamic() -- vertex capacity and index capacity must not be zero");
    v12 = sub_1800113D0(
            v17,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_18004DBD8(pExceptionObject, (__int64)v12, v13, (__int64)v16);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( a1[76] == 2 )
  {
    sub_1800113D0(
      v17,
      "Mesh::ReserveDynamic() -- this mesh instance is already dynamic -- ReserveDynamic() must be called only once");
    v14 = sub_1800113D0(
            v16,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_18004DBD8(pExceptionObject, (__int64)v14, v15, (__int64)v17);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( (a5 & 0x100) == 0 )
  {
    sub_1800113D0(v16, "Mesh::ReserveDynamic() -- dynamic mesh vertex format must include position");
    v10 = sub_1800113D0(
            v17,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_18004DBD8(pExceptionObject, (__int64)v10, v11, (__int64)v16);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  a1[76] = 2;
  sub_18002BCC0((__int64)a1, 4, 1);
  *(_DWORD *)(v6 + 292) = a5;
  *(_DWORD *)(v6 + 296) = a5;
  *(_DWORD *)(v6 + 124) = v7;
  *(_DWORD *)(v6 + 120) = v7;
  *(_DWORD *)(v6 + 116) = v8;
  *(_DWORD *)(v6 + 112) = v8;
  *(_WORD *)(v6 + 308) = 0;
  result = sub_18004FAF0(v6, 0LL, v7);
  if ( (a5 & 0x80u) != 0 )
    result = sub_18004F42C(a1, 0LL, a1[31]);
  if ( (a5 & 1) != 0 )
    result = sub_18004FE0C(a1, 0LL, a1[31]);
  if ( (a5 & 2) != 0 )
    result = sub_18004FF4C(a1, 0LL, a1[31]);
  if ( (a5 & 0x10000000) != 0 )
  {
    a1[72] = 1;
    result = sub_18004F6CC(a1, 0LL, a1[29]);
  }
  else if ( (a5 & 0x40) != 0 )
  {
    a1[72] = 0;
    result = sub_18004F65C(a1, 0LL, a1[29]);
  }
  if ( (a5 & 0x10) != 0 )
    result = sub_18004F9A4(a1, 0LL, a1[31], 0LL);
  if ( (a5 & 0x20) != 0 )
    result = sub_18004FC34(a1, 0LL, a1[31], 0LL);
  if ( (a5 & 0x400) != 0 )
    return sub_18004F81C(a1, 0LL, 0LL, a1[31]);
  return result;
}
