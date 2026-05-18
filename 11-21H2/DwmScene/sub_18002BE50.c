/*
 * XREFs of sub_18002BE50 @ 0x18002BE50
 * Callers:
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18002BCE8 @ 0x18002BCE8 (sub_18002BCE8.c)
 *     sub_18002C244 @ 0x18002C244 (sub_18002C244.c)
 *     sub_18002C574 @ 0x18002C574 (sub_18002C574.c)
 *     sub_18002C864 @ 0x18002C864 (sub_18002C864.c)
 *     sub_1800FC2AC @ 0x1800FC2AC (sub_1800FC2AC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002BE50(__int64 a1)
{
  __int64 *result; // rax
  char *v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // r8
  char v6[8]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v7; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  v6[0] = 1;
  if ( (unsigned __int8)sub_18002C864() )
  {
    sub_1800113D0(
      v9,
      "Mutex::doLock() -- detected recursive lock attempt on non-recursive mutex -- throwing exception to avoid deadlock");
    v4 = sub_1800113D0(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_18002C244(pExceptionObject, v4, v5, v9);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  sub_1800FC2AC(a1);
  result = (__int64 *)sub_18002C574();
  v7 = a1;
  v3 = (char *)result[1];
  if ( v3 == (char *)result[2] )
    return (__int64 *)sub_18002BCE8(result, v3, &v7, v6);
  *(_QWORD *)v3 = a1;
  v3[8] = 1;
  result[1] += 16LL;
  return result;
}
