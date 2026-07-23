/*
 * XREFs of EtwpQueryPartitionRegistryInformationUm @ 0x180008FB4
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18000851C (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     EtwpGetRegDwordValue @ 0x180008E4C (EtwpGetRegDwordValue.c)
 *     StringToGuidNoBrackets @ 0x1800090FC (StringToGuidNoBrackets.c)
 *     EtwpQueryRegString @ 0x18000913C (EtwpQueryRegString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall EtwpQueryPartitionRegistryInformationUm(GUID *a1, _DWORD *a2, _QWORD *a3, GUID *a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v13[80]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v14[80]; // [rsp+98h] [rbp-70h] BYREF

  *a2 = 0;
  memset(v13, 0, 0x4CuLL);
  memset(v14, 0, 0x4CuLL);
  LODWORD(v11[0]) = 4980812;
  v11[1] = v13;
  result = EtwpQueryRegString(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control", L"ContainerId", v13);
  if ( !(_DWORD)result || (_DWORD)result == -1073741772 )
  {
    LODWORD(v12[0]) = 4980812;
    v12[1] = v14;
    result = EtwpQueryRegString(
               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control",
               L"ContainerCorrelationId",
               v14);
    if ( !(_DWORD)result || (_DWORD)result == -1073741772 )
    {
      result = EtwpGetRegDwordValue(v10, v9, a2);
      if ( !(_DWORD)result || (_DWORD)result == -1073741772 )
      {
        *a3 = 0LL;
        if ( (unsigned int)StringToGuidNoBrackets(v11, a1) )
          *a1 = NullGuid;
        result = StringToGuidNoBrackets(v12, a4);
        if ( (_DWORD)result )
        {
          *a4 = NullGuid;
          return 0LL;
        }
      }
    }
  }
  return result;
}
