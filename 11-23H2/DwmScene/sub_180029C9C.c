/*
 * XREFs of sub_180029C9C @ 0x180029C9C
 * Callers:
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180029ECC @ 0x180029ECC (sub_180029ECC.c)
 *     sub_18002A018 @ 0x18002A018 (sub_18002A018.c)
 *     sub_18002A1BC @ 0x18002A1BC (sub_18002A1BC.c)
 *     sub_18002A538 @ 0x18002A538 (sub_18002A538.c)
 *     sub_18002A5B8 @ 0x18002A5B8 (sub_18002A5B8.c)
 *     sub_1800E0EE8 @ 0x1800E0EE8 (sub_1800E0EE8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029C9C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // r8
  _QWORD *v6; // rax
  _BYTE v8[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v9[8]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  if ( !(unsigned __int8)sub_18002A5B8() )
  {
    sub_180010DD0(
      v11,
      (__int64)"Mutex::doUnlock() -- detected attempt to unlock a mutex that is not owned by this thread");
    v2 = sub_180010DD0(
           v10,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\concurrency.cpp");
    sub_180029ECC(pExceptionObject, v2, v3, v11);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  v4 = sub_18002A1BC();
  LOBYTE(v5) = 1;
  v6 = (_QWORD *)sub_18002A018(a1, v8, v5);
  sub_18002A538(v4, v9, *v6);
  return sub_1800E0EE8(a1);
}
