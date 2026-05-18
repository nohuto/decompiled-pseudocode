/*
 * XREFs of sub_180069B6C @ 0x180069B6C
 * Callers:
 *     sub_1800710C0 @ 0x1800710C0 (sub_1800710C0.c)
 *     sub_1800727B4 @ 0x1800727B4 (sub_1800727B4.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD9C @ 0x18001DD9C (sub_18001DD9C.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180069018 @ 0x180069018 (sub_180069018.c)
 *     sub_180069C48 @ 0x180069C48 (sub_180069C48.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180069B6C(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v3; // di
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 *v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD v13[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-90h] BYREF
  __int64 v15[4]; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v16[32]; // [rsp+B0h] [rbp-38h] BYREF

  v3 = a3;
  v6 = sub_180069018(a1, (__int64)a2, a3);
  if ( v6 == -1 )
  {
    v9 = sub_18001DD9C(v15, "ShaderFamily::SetOption() -- The option '", a2);
    v10 = sub_18001DC84((__int64)v16, v9);
    v11 = sub_1800113D0(
            v13,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v11, v12, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOBYTE(v7) = v3;
  return sub_180069C48(a1, v6, v7);
}
