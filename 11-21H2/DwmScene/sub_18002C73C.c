/*
 * XREFs of sub_18002C73C @ 0x18002C73C
 * Callers:
 *     sub_180030408 @ 0x180030408 (sub_180030408.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_180045E9C @ 0x180045E9C (sub_180045E9C.c)
 *     sub_180045F10 @ 0x180045F10 (sub_180045F10.c)
 *     sub_18004607C @ 0x18004607C (sub_18004607C.c)
 *     sub_18004614C @ 0x18004614C (sub_18004614C.c)
 *     sub_1800462CC @ 0x1800462CC (sub_1800462CC.c)
 *     sub_180046470 @ 0x180046470 (sub_180046470.c)
 *     sub_180047028 @ 0x180047028 (sub_180047028.c)
 *     sub_18006A5AC @ 0x18006A5AC (sub_18006A5AC.c)
 *     sub_18006A718 @ 0x18006A718 (sub_18006A718.c)
 *     sub_18006A884 @ 0x18006A884 (sub_18006A884.c)
 *     sub_18006A9F0 @ 0x18006A9F0 (sub_18006A9F0.c)
 *     sub_18006AB5C @ 0x18006AB5C (sub_18006AB5C.c)
 *     sub_18006ACC8 @ 0x18006ACC8 (sub_18006ACC8.c)
 *     sub_180070344 @ 0x180070344 (sub_180070344.c)
 *     sub_18007D3EC @ 0x18007D3EC (sub_18007D3EC.c)
 *     sub_18007F0F0 @ 0x18007F0F0 (sub_18007F0F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18002C244 @ 0x18002C244 (sub_18002C244.c)
 *     sub_18002C6B0 @ 0x18002C6B0 (sub_18002C6B0.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18002C73C(__int64 a1)
{
  char result; // al
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  result = sub_18002C6B0(a1);
  if ( !result )
  {
    sub_1800113D0(
      v5,
      "Lockable::VerifyReadAccess() -- SHARED OR EXCLUSIVE LOCK REQUIRED\n"
      "The requested operation requires that the current thread holds this lockable object's mutex lock for exclusive (re"
      "ad/write) or shared (read-only) access.\n");
    v2 = sub_1800113D0(
           v4,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_18002C244(pExceptionObject, (__int64)v2, v3, (__int64)v5);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  return result;
}
