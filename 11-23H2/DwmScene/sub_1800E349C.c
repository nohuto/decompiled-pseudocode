/*
 * XREFs of sub_1800E349C @ 0x1800E349C
 * Callers:
 *     sub_1800E20F0 @ 0x1800E20F0 (sub_1800E20F0.c)
 *     sub_1800E2460 @ 0x1800E2460 (sub_1800E2460.c)
 *     sub_1800E2990 @ 0x1800E2990 (sub_1800E2990.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_1800E1AFC @ 0x1800E1AFC (sub_1800E1AFC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E349C(unsigned int a1, int a2)
{
  __int64 result; // rax
  _QWORD v3[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 )
  {
    if ( a2 == 1 && a1 < 3 )
    {
      sub_180010DD0(v3, (__int64)"Number of indices is less than three");
      sub_1800E1AFC(pExceptionObject, (const char *)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  else
  {
    result = 3 * (a1 / 3);
    if ( a1 != (_DWORD)result )
    {
      sub_180010DD0(v3, (__int64)"Number of indices is not a multiple of three");
      sub_1800E1AFC(pExceptionObject, (const char *)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  return result;
}
