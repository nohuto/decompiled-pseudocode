/*
 * XREFs of sub_14024F6E4 @ 0x14024F6E4
 * Callers:
 *     sub_14024F6A4 @ 0x14024F6A4 (sub_14024F6A4.c)
 *     CarCopyRuleViolationDetails @ 0x1406033F0 (CarCopyRuleViolationDetails.c)
 *     sub_1406310E4 @ 0x1406310E4 (sub_1406310E4.c)
 *     WheaHwErrorReportSetSectionNameDeviceDriver @ 0x140644360 (WheaHwErrorReportSetSectionNameDeviceDriver.c)
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x140644510 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x140644630 (WheaReportHwErrorDeviceDriverEx.c)
 *     sub_140644930 @ 0x140644930 (sub_140644930.c)
 *     sub_140645708 @ 0x140645708 (sub_140645708.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A08A50 (WheaRemoveErrorSourceDeviceDriver.c)
 *     sub_140A19B28 @ 0x140A19B28 (sub_140A19B28.c)
 *     sub_140A5AEB0 @ 0x140A5AEB0 (sub_140A5AEB0.c)
 *     sub_140A61D50 @ 0x140A61D50 (sub_140A61D50.c)
 *     sub_140B0CB80 @ 0x140B0CB80 (sub_140B0CB80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14024F6E4(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  char v5; // al
  _BYTE *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = a1[v4];
      if ( !v5 )
        break;
      *a1++ = v5;
      --a2;
    }
    while ( a2 );
    v6 = a1 - 1;
    if ( a2 )
      v6 = a1;
    *v6 = 0;
    return a2 == 0 ? 0x80000005 : 0;
  }
  return result;
}
