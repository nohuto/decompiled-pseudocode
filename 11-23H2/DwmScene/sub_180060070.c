/*
 * XREFs of sub_180060070 @ 0x180060070
 * Callers:
 *     sub_18004EF88 @ 0x18004EF88 (sub_18004EF88.c)
 *     sub_18004F698 @ 0x18004F698 (sub_18004F698.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180060070(__int64 a1, _QWORD *a2)
{
  char result; // al
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  result = sub_18002A404(*a2 + 24LL);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_180010DD0(
      v9,
      (__int64)"ShaderFamily::AttachDevice() -- The family must have finished declaration before attaching a device");
    v5 = sub_180010DD0(
           v8,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v5, v6, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = a2[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
