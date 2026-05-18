/*
 * XREFs of sub_180021210 @ 0x180021210
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 */

void __noreturn sub_180021210()
{
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  pExceptionObject[1] = "Not implemented yet";
  pExceptionObject[0] = &std::logic_error::`vftable';
  throw (std::logic_error *)pExceptionObject;
}
