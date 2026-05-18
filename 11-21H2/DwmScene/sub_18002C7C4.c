/*
 * XREFs of sub_18002C7C4 @ 0x18002C7C4
 * Callers:
 *     sub_180028460 @ 0x180028460 (sub_180028460.c)
 *     sub_180028B40 @ 0x180028B40 (sub_180028B40.c)
 *     sub_180028CE0 @ 0x180028CE0 (sub_180028CE0.c)
 *     sub_18002C730 @ 0x18002C730 (sub_18002C730.c)
 *     sub_180030598 @ 0x180030598 (sub_180030598.c)
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_180038370 @ 0x180038370 (sub_180038370.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     sub_1800453E0 @ 0x1800453E0 (sub_1800453E0.c)
 *     sub_1800457FC @ 0x1800457FC (sub_1800457FC.c)
 *     sub_180045AA4 @ 0x180045AA4 (sub_180045AA4.c)
 *     sub_180045FB4 @ 0x180045FB4 (sub_180045FB4.c)
 *     sub_180046704 @ 0x180046704 (sub_180046704.c)
 *     sub_180046DF4 @ 0x180046DF4 (sub_180046DF4.c)
 *     sub_1800476C0 @ 0x1800476C0 (sub_1800476C0.c)
 *     sub_180047C3C @ 0x180047C3C (sub_180047C3C.c)
 *     sub_180049490 @ 0x180049490 (sub_180049490.c)
 *     sub_1800515D0 @ 0x1800515D0 (sub_1800515D0.c)
 *     sub_180061C80 @ 0x180061C80 (sub_180061C80.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_180068274 @ 0x180068274 (sub_180068274.c)
 *     sub_180068BC0 @ 0x180068BC0 (sub_180068BC0.c)
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 *     sub_180092300 @ 0x180092300 (sub_180092300.c)
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 *     sub_1800DA9A8 @ 0x1800DA9A8 (sub_1800DA9A8.c)
 *     sub_1800DC1B0 @ 0x1800DC1B0 (sub_1800DC1B0.c)
 *     sub_1800E77D8 @ 0x1800E77D8 (sub_1800E77D8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18002C244 @ 0x18002C244 (sub_18002C244.c)
 *     sub_18002C704 @ 0x18002C704 (sub_18002C704.c)
 */

char __fastcall sub_18002C7C4(__int64 a1)
{
  char result; // al
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  result = sub_18002C704(a1);
  if ( !result )
  {
    sub_1800113D0(
      v5,
      "Lockable::VerifyWriteAccess() -- EXCLUSIVE LOCK REQUIRED\n"
      "The requested operation requires that the current thread holds this lockable object's mutex lock exclusive (read/w"
      "rite) access.\n"
      "To acquire exclusive lock from C++, call Lockable::GetExclusiveLock() and hold the lock via: auto lock(object->Get"
      "ExclusiveLock()) { ... }\n"
      "To acquire exclusive lock from C#, call Lockable.GetExclusiveLock() and hold the lock via: using (object.GetExclus"
      "iveLock()) { ... }\n");
    v2 = sub_1800113D0(
           v4,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_18002C244(pExceptionObject, (__int64)v2, v3, (__int64)v5);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  return result;
}
