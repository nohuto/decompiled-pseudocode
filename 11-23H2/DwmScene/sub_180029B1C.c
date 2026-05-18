/*
 * XREFs of sub_180029B1C @ 0x180029B1C
 * Callers:
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180029E3C @ 0x180029E3C (sub_180029E3C.c)
 *     sub_180029ECC @ 0x180029ECC (sub_180029ECC.c)
 *     sub_18002A1BC @ 0x18002A1BC (sub_18002A1BC.c)
 *     sub_18002A5B8 @ 0x18002A5B8 (sub_18002A5B8.c)
 *     sub_1800E0E04 @ 0x1800E0E04 (sub_1800E0E04.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029B1C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  char v6[8]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v7; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  v6[0] = 1;
  if ( (unsigned __int8)sub_18002A5B8() )
  {
    sub_180010DD0(
      v9,
      (__int64)"Mutex::doLock() -- detected recursive lock attempt on non-recursive mutex -- throwing exception to avoid deadlock");
    v2 = sub_180010DD0(
           v8,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\concurrency.cpp");
    sub_180029ECC(pExceptionObject, v2, v3, v9);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  sub_1800E0E04(a1);
  v4 = sub_18002A1BC();
  v7 = a1;
  return sub_180029E3C(v4, &v7, v6);
}
