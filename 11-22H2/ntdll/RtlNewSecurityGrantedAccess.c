/*
 * XREFs of RtlNewSecurityGrantedAccess @ 0x1800E1D40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009F210 (NtQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x1800A15E0 (ZwPrivilegeCheck.c)
 */

__int64 __fastcall RtlNewSecurityGrantedAccess(int a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, int *a6)
{
  int v9; // ebx
  __int64 result; // rax

  NtQueryInformationToken();
  if ( a1 < 0 )
    a1 |= *a5;
  if ( (a1 & 0x40000000) != 0 )
    a1 |= a5[1];
  if ( (a1 & 0x20000000) != 0 )
    a1 |= a5[2];
  if ( (a1 & 0x10000000) != 0 )
    a1 |= a5[3];
  v9 = a1 & 0xFFFFFFF;
  *a6 = v9;
  if ( (v9 & 0x1000000) != 0 )
  {
    ZwPrivilegeCheck();
    return 3221225569LL;
  }
  else if ( *a3 >= 0x14u )
  {
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
    result = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
  }
  else
  {
    *a3 = 20;
    return 3221225507LL;
  }
  return result;
}
