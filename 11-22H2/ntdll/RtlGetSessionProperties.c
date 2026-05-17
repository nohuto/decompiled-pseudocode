/*
 * XREFs of RtlGetSessionProperties @ 0x1800F1060
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x1800A1860 (NtQueryInformationJobObject.c)
 */

__int64 __fastcall RtlGetSessionProperties(int a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  char *SharedData; // rcx
  char v7; // [rsp+30h] [rbp-288h] BYREF

  if ( a1 == -1 )
    return (unsigned int)-1073741811;
  v4 = 0;
  if ( !a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = 0;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      SharedData = (char *)NtCurrentPeb()->SharedData;
    }
    else
    {
      NtQueryInformationJobObject();
      SharedData = &v7;
    }
    *a2 = *((_DWORD *)SharedData + 6) == a1;
  }
  return v4;
}
