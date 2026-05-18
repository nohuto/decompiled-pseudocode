/*
 * XREFs of sub_1800824CC @ 0x1800824CC
 * Callers:
 *     sub_180045298 @ 0x180045298 (sub_180045298.c)
 *     sub_180045FF8 @ 0x180045FF8 (sub_180045FF8.c)
 *     sub_180046554 @ 0x180046554 (sub_180046554.c)
 *     sub_180046AE8 @ 0x180046AE8 (sub_180046AE8.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F820 @ 0x18007F820 (sub_18007F820.c)
 *     sub_18007FF54 @ 0x18007FF54 (sub_18007FF54.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800824CC(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  _QWORD v10[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-60h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_180010DD0(
      v11,
      (__int64)"ShaderPropertyLayout::AddProperties() -- properties can only be added during declaration phase before EndDeclaration()");
    v7 = sub_180010DD0(
           v10,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v7, v8, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a3 )
  {
    v9 = a3;
    do
    {
      sub_180082598(a1, a2, a4);
      a2 += 64LL;
      --v9;
    }
    while ( v9 );
  }
}
