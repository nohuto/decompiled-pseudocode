/*
 * XREFs of RtlNewInstanceSecurityObject @ 0x1800E2F40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A12D0 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlNewInstanceSecurityObject(
        char a1,
        char a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        __int64 *a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // rax
  __int64 v15; // [rsp+90h] [rbp-38h]

  result = NtQueryInformationToken();
  if ( (int)result >= 0 )
  {
    *(_QWORD *)a4 = v15;
    if ( *(_DWORD *)a4 != *a3 || *(_DWORD *)(a4 + 4) != a3[1] || a1 || a2 )
    {
      return RtlpNewSecurityObject(a5, a6, a7, 0LL, 0, a8, 0, a9, a10);
    }
    else
    {
      *a7 = 0LL;
      return 0LL;
    }
  }
  return result;
}
