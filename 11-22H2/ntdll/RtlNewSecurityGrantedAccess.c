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
  unsigned int v6; // edi
  __int64 v10; // r12
  int v11; // ebx
  NTSTATUS v12; // eax
  BOOLEAN v13; // cl
  __int64 result; // rax
  BOOLEAN Result[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v16; // [rsp+38h] [rbp-51h]
  ULONG ReturnLength; // [rsp+40h] [rbp-49h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+48h] [rbp-41h] BYREF
  _BYTE TokenInformation[56]; // [rsp+60h] [rbp-29h] BYREF

  v6 = 0;
  Result[0] = 0;
  v10 = -5LL;
  if ( a4 )
    v10 = a4;
  NtQueryInformationToken((HANDLE)v10, 0xAu, TokenInformation, 0x38u, &ReturnLength);
  if ( a1 < 0 )
    a1 |= *a5;
  if ( (a1 & 0x40000000) != 0 )
    a1 |= a5[1];
  if ( (a1 & 0x20000000) != 0 )
    a1 |= a5[2];
  if ( (a1 & 0x10000000) != 0 )
    a1 |= a5[3];
  v11 = a1 & 0xFFFFFFF;
  *a6 = v11;
  if ( (v11 & 0x1000000) != 0 )
  {
    v16 = 8LL;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)8LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v12 = ZwPrivilegeCheck((HANDLE)v10, &RequiredPrivileges, Result);
    v13 = Result[0];
    if ( (v12 < 0 || !Result[0]) && !Result[0] )
      return 3221225569LL;
    *a6 &= ~0x1000000u;
  }
  else
  {
    v13 = Result[0];
  }
  if ( *a3 >= 0x14u )
  {
    *(_DWORD *)(a2 + 4) = 0;
    if ( v13 )
    {
      *(_DWORD *)a2 = 1;
      v6 = 0x80000000;
      v16 = 8LL;
    }
    else
    {
      *(_DWORD *)a2 = 0;
      v16 = 0LL;
    }
    *(_QWORD *)(a2 + 8) = v16;
    result = 0LL;
    *(_DWORD *)(a2 + 16) = v6;
  }
  else
  {
    *a3 = 20;
    return 3221225507LL;
  }
  return result;
}
