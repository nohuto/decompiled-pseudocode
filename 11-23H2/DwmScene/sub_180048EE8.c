/*
 * XREFs of sub_180048EE8 @ 0x180048EE8
 * Callers:
 *     sub_180048B00 @ 0x180048B00 (sub_180048B00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_180047B54 @ 0x180047B54 (sub_180047B54.c)
 *     sub_180049208 @ 0x180049208 (sub_180049208.c)
 *     sub_180049438 @ 0x180049438 (sub_180049438.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 *     sub_1800495FC @ 0x1800495FC (sub_1800495FC.c)
 *     sub_180049784 @ 0x180049784 (sub_180049784.c)
 *     sub_1800498D0 @ 0x1800498D0 (sub_1800498D0.c)
 *     sub_180049A14 @ 0x180049A14 (sub_180049A14.c)
 *     sub_180049BEC @ 0x180049BEC (sub_180049BEC.c)
 *     sub_180049D2C @ 0x180049D2C (sub_180049D2C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180048EE8(unsigned int *a1, int a2, int a3, __int64 a4, int a5)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // r10d
  int v12; // r9d
  __int64 result; // rax
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD v16[4]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp+7h] BYREF

  if ( !a3 || !a2 )
  {
    sub_180010DD0(v16, (__int64)"Mesh::ReserveDynamic() -- vertex capacity and index capacity must not be zero");
    v14 = sub_180010DD0(
            v17,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180047B54(pExceptionObject, (__int64)v14, v15, (__int64)v16);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( a1[76] == 2 )
  {
    sub_180010DD0(
      v17,
      (__int64)"Mesh::ReserveDynamic() -- this mesh instance is already dynamic -- ReserveDynamic() must be called only once");
    v6 = sub_180010DD0(
           v16,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180047B54(pExceptionObject, (__int64)v6, v7, (__int64)v17);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( (a5 & 0x100) == 0 )
  {
    sub_180010DD0(v16, (__int64)"Mesh::ReserveDynamic() -- dynamic mesh vertex format must include position");
    v8 = sub_180010DD0(
           v17,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180047B54(pExceptionObject, (__int64)v8, v9, (__int64)v16);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  a1[76] = 2;
  sub_180029870((__int64)a1, 4, 1);
  *(_DWORD *)(v10 + 292) = a5;
  *(_DWORD *)(v10 + 296) = a5;
  *(_DWORD *)(v10 + 124) = v11;
  *(_DWORD *)(v10 + 120) = v11;
  *(_DWORD *)(v10 + 116) = v12;
  *(_DWORD *)(v10 + 112) = v12;
  *(_WORD *)(v10 + 308) = 0;
  result = sub_1800498D0(v10, 0LL, v11);
  if ( (a5 & 0x80u) != 0 )
    result = sub_180049208(a1, 0LL, a1[31]);
  if ( (a5 & 1) != 0 )
    result = sub_180049BEC(a1, 0LL, a1[31]);
  if ( (a5 & 2) != 0 )
    result = sub_180049D2C(a1, 0LL, a1[31]);
  if ( (a5 & 0x10000000) != 0 )
  {
    a1[72] = 1;
    result = sub_1800494AC(a1, 0LL, a1[29]);
  }
  else if ( (a5 & 0x40) != 0 )
  {
    a1[72] = 0;
    result = sub_180049438(a1, 0LL, a1[29]);
  }
  if ( (a5 & 0x10) != 0 )
    result = sub_180049784(a1, 0LL, a1[31], 0LL);
  if ( (a5 & 0x20) != 0 )
    result = sub_180049A14(a1, 0LL, a1[31], 0LL);
  if ( (a5 & 0x400) != 0 )
    return sub_1800495FC(a1, 0LL, 0LL, a1[31]);
  return result;
}
