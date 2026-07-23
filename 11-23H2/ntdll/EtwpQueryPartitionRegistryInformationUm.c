/*
 * XREFs of EtwpQueryPartitionRegistryInformationUm @ 0x18005D8AC
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18005D0A4 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     EtwpGetRegDwordValue @ 0x18005D744 (EtwpGetRegDwordValue.c)
 *     StringToGuidNoBrackets @ 0x18005D9F4 (StringToGuidNoBrackets.c)
 *     EtwpQueryRegString @ 0x18005DA34 (EtwpQueryRegString.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
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
  memset_thunk_772440563353939046(v13, 0, 0x4CuLL);
  memset_thunk_772440563353939046(v14, 0, 0x4CuLL);
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
