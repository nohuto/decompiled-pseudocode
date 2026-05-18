/*
 * XREFs of sub_18002A37C @ 0x18002A37C
 * Callers:
 *     sub_18002DE64 @ 0x18002DE64 (sub_18002DE64.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_180040E74 @ 0x180040E74 (sub_180040E74.c)
 *     sub_180040EEC @ 0x180040EEC (sub_180040EEC.c)
 *     sub_180041010 @ 0x180041010 (sub_180041010.c)
 *     sub_1800410C0 @ 0x1800410C0 (sub_1800410C0.c)
 *     sub_180041190 @ 0x180041190 (sub_180041190.c)
 *     sub_1800412EC @ 0x1800412EC (sub_1800412EC.c)
 *     sub_180041D50 @ 0x180041D50 (sub_180041D50.c)
 *     sub_180061EF0 @ 0x180061EF0 (sub_180061EF0.c)
 *     sub_180062028 @ 0x180062028 (sub_180062028.c)
 *     sub_180062160 @ 0x180062160 (sub_180062160.c)
 *     sub_180062298 @ 0x180062298 (sub_180062298.c)
 *     sub_1800623D0 @ 0x1800623D0 (sub_1800623D0.c)
 *     sub_180062508 @ 0x180062508 (sub_180062508.c)
 *     sub_180066A60 @ 0x180066A60 (sub_180066A60.c)
 *     sub_180072240 @ 0x180072240 (sub_180072240.c)
 *     sub_180073624 @ 0x180073624 (sub_180073624.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180029ECC @ 0x180029ECC (sub_180029ECC.c)
 *     sub_18002A2F0 @ 0x18002A2F0 (sub_18002A2F0.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18002A37C(__int64 a1)
{
  char result; // al
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  result = sub_18002A2F0(a1);
  if ( !result )
  {
    sub_180010DD0(
      v5,
      (__int64)"Lockable::VerifyReadAccess() -- SHARED OR EXCLUSIVE LOCK REQUIRED\n"
               "The requested operation requires that the current thread holds this lockable object's mutex lock for excl"
               "usive (read/write) or shared (read-only) access.\n");
    v2 = sub_180010DD0(
           v4,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\concurrency.cpp");
    sub_180029ECC(pExceptionObject, (__int64)v2, v3, (__int64)v5);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  return result;
}
