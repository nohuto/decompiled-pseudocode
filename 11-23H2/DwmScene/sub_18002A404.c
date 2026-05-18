/*
 * XREFs of sub_18002A404 @ 0x18002A404
 * Callers:
 *     sub_180026580 @ 0x180026580 (sub_180026580.c)
 *     sub_180026B40 @ 0x180026B40 (sub_180026B40.c)
 *     sub_180026CF0 @ 0x180026CF0 (sub_180026CF0.c)
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 *     sub_18002DFDC @ 0x18002DFDC (sub_18002DFDC.c)
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 *     sub_180035390 @ 0x180035390 (sub_180035390.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 *     sub_1800405C8 @ 0x1800405C8 (sub_1800405C8.c)
 *     sub_18004093C @ 0x18004093C (sub_18004093C.c)
 *     sub_180040BB8 @ 0x180040BB8 (sub_180040BB8.c)
 *     sub_180040F64 @ 0x180040F64 (sub_180040F64.c)
 *     sub_180041570 @ 0x180041570 (sub_180041570.c)
 *     sub_180041B20 @ 0x180041B20 (sub_180041B20.c)
 *     sub_1800422EC @ 0x1800422EC (sub_1800422EC.c)
 *     sub_1800426D4 @ 0x1800426D4 (sub_1800426D4.c)
 *     sub_1800441A0 @ 0x1800441A0 (sub_1800441A0.c)
 *     sub_18004B180 @ 0x18004B180 (sub_18004B180.c)
 *     sub_18005A1F0 @ 0x18005A1F0 (sub_18005A1F0.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_180060070 @ 0x180060070 (sub_180060070.c)
 *     sub_180060610 @ 0x180060610 (sub_180060610.c)
 *     sub_1800628C8 @ 0x1800628C8 (sub_1800628C8.c)
 *     sub_180084A30 @ 0x180084A30 (sub_180084A30.c)
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 *     sub_1800C58DC @ 0x1800C58DC (sub_1800C58DC.c)
 *     sub_1800C6AD0 @ 0x1800C6AD0 (sub_1800C6AD0.c)
 *     sub_1800D048C @ 0x1800D048C (sub_1800D048C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180029ECC @ 0x180029ECC (sub_180029ECC.c)
 *     sub_18002A344 @ 0x18002A344 (sub_18002A344.c)
 */

char __fastcall sub_18002A404(__int64 a1)
{
  char result; // al
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  result = sub_18002A344(a1);
  if ( !result )
  {
    sub_180010DD0(
      v5,
      (__int64)"Lockable::VerifyWriteAccess() -- EXCLUSIVE LOCK REQUIRED\n"
               "The requested operation requires that the current thread holds this lockable object's mutex lock exclusiv"
               "e (read/write) access.\n"
               "To acquire exclusive lock from C++, call Lockable::GetExclusiveLock() and hold the lock via: auto lock(ob"
               "ject->GetExclusiveLock()) { ... }\n"
               "To acquire exclusive lock from C#, call Lockable.GetExclusiveLock() and hold the lock via: using (object."
               "GetExclusiveLock()) { ... }\n");
    v2 = sub_180010DD0(
           v4,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\concurrency.cpp");
    sub_180029ECC(pExceptionObject, (__int64)v2, v3, (__int64)v5);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  return result;
}
