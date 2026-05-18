/*
 * XREFs of sub_18000FED0 @ 0x18000FED0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000D4AC @ 0x18000D4AC (sub_18000D4AC.c)
 */

void __noreturn sub_18000FED0()
{
  _QWORD pExceptionObject[27]; // [rsp+20h] [rbp-D8h] BYREF

  sub_18000D4AC(pExceptionObject);
  throw (wil::ResultException *)pExceptionObject;
}
