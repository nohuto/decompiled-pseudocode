/*
 * XREFs of sub_18005A640 @ 0x18005A640
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001D8E4 @ 0x18001D8E4 (sub_18001D8E4.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_18005A640()
{
  _QWORD v0[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+40h] [rbp-48h] BYREF

  sub_1800113D0(v0, "Not implemented");
  sub_18001D8E4((__int64)pExceptionObject, (const char *)v0, 0);
  throw (Spectre::Utils::SpectreException *)pExceptionObject;
}
