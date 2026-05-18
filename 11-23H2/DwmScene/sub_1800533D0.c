/*
 * XREFs of sub_1800533D0 @ 0x1800533D0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001C3BC @ 0x18001C3BC (sub_18001C3BC.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_1800533D0()
{
  _QWORD v0[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+40h] [rbp-48h] BYREF

  sub_180010DD0(v0, (__int64)"Not implemented");
  sub_18001C3BC((__int64)pExceptionObject, (const char *)v0, 0);
  throw (Spectre::Utils::SpectreException *)pExceptionObject;
}
