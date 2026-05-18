/*
 * XREFs of sub_180082B30 @ 0x180082B30
 * Callers:
 *     sub_180045298 @ 0x180045298 (sub_180045298.c)
 *     sub_180045FF8 @ 0x180045FF8 (sub_180045FF8.c)
 *     sub_180046554 @ 0x180046554 (sub_180046554.c)
 *     sub_180046A58 @ 0x180046A58 (sub_180046A58.c)
 *     sub_180046AE8 @ 0x180046AE8 (sub_180046AE8.c)
 *     sub_180050A68 @ 0x180050A68 (sub_180050A68.c)
 *     sub_180060800 @ 0x180060800 (sub_180060800.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_18007F820 @ 0x18007F820 (sub_18007F820.c)
 *     sub_18007FF54 @ 0x18007FF54 (sub_18007FF54.c)
 *     sub_180084E14 @ 0x180084E14 (sub_180084E14.c)
 *     sub_1800EA48B @ 0x1800EA48B (sub_1800EA48B.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004FB08 @ 0x18004FB08 (sub_18004FB08.c)
 *     sub_1800829AC @ 0x1800829AC (sub_1800829AC.c)
 *     sub_18008319C @ 0x18008319C (sub_18008319C.c)
 *     sub_18008323C @ 0x18008323C (sub_18008323C.c)
 *     sub_180085130 @ 0x180085130 (sub_180085130.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180082B30(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax
  _BYTE v7[16]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v8; // [rsp+40h] [rbp-88h] BYREF
  __int64 v9; // [rsp+48h] [rbp-80h]
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_180010DD0(v10, (__int64)"ShaderPropertyLayout::EndDeclaration() -- this function must only be called once");
    v2 = sub_180010DD0(
           &v8,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v2, v3, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 1242) = *(_QWORD *)(a1 + 56) == *(_QWORD *)(a1 + 64);
  sub_18008319C(a1, 16LL);
  sub_1800829AC(a1);
  result = sub_18008319C(a1, 0LL);
  *(_DWORD *)(a1 + 1168) = 1;
  if ( *(_BYTE *)(a1 + 1241) )
  {
    v5 = (_QWORD *)sub_18004FB08(*(_QWORD *)(a1 + 1152), &v8);
    v6 = sub_180085130(*v5, v7);
    result = sub_18008323C(a1, v6);
    if ( v9 )
      return sub_180010530(v9);
  }
  return result;
}
