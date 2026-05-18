/*
 * XREFs of sub_18008FB1C @ 0x18008FB1C
 * Callers:
 *     sub_18004A774 @ 0x18004A774 (sub_18004A774.c)
 *     sub_18004B9DC @ 0x18004B9DC (sub_18004B9DC.c)
 *     sub_18004C088 @ 0x18004C088 (sub_18004C088.c)
 *     sub_18004C658 @ 0x18004C658 (sub_18004C658.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008C410 @ 0x18008C410 (sub_18008C410.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18008FB1C(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD v10[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-60h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_1800113D0(
      v11,
      "ShaderPropertyLayout::AddProperties() -- properties can only be added during declaration phase before EndDeclaration()");
    v8 = sub_1800113D0(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v8, v9, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a3 )
  {
    v7 = a3;
    do
    {
      sub_18008FBE8(a1, a2, a4);
      a2 += 64LL;
      --v7;
    }
    while ( v7 );
  }
}
