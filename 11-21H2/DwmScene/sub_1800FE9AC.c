/*
 * XREFs of sub_1800FE9AC @ 0x1800FE9AC
 * Callers:
 *     sub_1800FD588 @ 0x1800FD588 (sub_1800FD588.c)
 *     sub_1800FD950 @ 0x1800FD950 (sub_1800FD950.c)
 *     sub_1800FDE78 @ 0x1800FDE78 (sub_1800FDE78.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800FD04C @ 0x1800FD04C (sub_1800FD04C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800FE9AC(unsigned int a1, int a2)
{
  __int64 result; // rax
  _QWORD v3[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 )
  {
    if ( a2 == 1 && a1 < 3 )
    {
      sub_1800113D0(v3, "Number of indices is less than three");
      sub_1800FD04C(pExceptionObject, (const char *)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  else
  {
    result = 3 * (a1 / 3);
    if ( a1 != (_DWORD)result )
    {
      sub_1800113D0(v3, "Number of indices is not a multiple of three");
      sub_1800FD04C(pExceptionObject, (const char *)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  return result;
}
