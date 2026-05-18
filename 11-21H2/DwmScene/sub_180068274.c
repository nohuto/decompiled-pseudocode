/*
 * XREFs of sub_180068274 @ 0x180068274
 * Callers:
 *     sub_180055C48 @ 0x180055C48 (sub_180055C48.c)
 *     sub_18005645C @ 0x18005645C (sub_18005645C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180068274(__int64 a1, _QWORD *a2)
{
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD v7[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  sub_18002C7C4(*a2 + 24LL);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_1800113D0(
      v8,
      "ShaderFamily::AttachDevice() -- The family must have finished declaration before attaching a device");
    v5 = sub_1800113D0(
           v7,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v5, v6, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return sub_180010910((__int64)a2);
}
