/*
 * XREFs of sub_1800222C0 @ 0x1800222C0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180022298 @ 0x180022298 (sub_180022298.c)
 */

void __noreturn sub_1800222C0()
{
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_180022298(pExceptionObject);
  throw (std::logic_error *)pExceptionObject;
}
