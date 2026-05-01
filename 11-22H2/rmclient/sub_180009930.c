/*
 * XREFs of sub_180009930 @ 0x180009930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

signed int __fastcall sub_180009930(__int64 a1, _QWORD *a2)
{
  HANDLE CurrentProcess; // rax
  signed int result; // eax
  _BYTE v5[24]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]

  if ( !a2 )
    return -2147024809;
  *a2 = 0LL;
  CurrentProcess = GetCurrentProcess();
  if ( (unsigned int)GetProcessInformation(CurrentProcess, 2LL, v5) )
  {
    *a2 = v6;
    return 0;
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
