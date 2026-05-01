/*
 * XREFs of sub_180003584 @ 0x180003584
 * Callers:
 *     sub_180003338 @ 0x180003338 (sub_180003338.c)
 * Callees:
 *     sub_1800056F0 @ 0x1800056F0 (sub_1800056F0.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180003584(__int64 a1, _QWORD *a2)
{
  signed int v4; // ebx
  NTSTATUS v5; // eax
  __int64 v6; // rax
  signed int v8; // eax
  int v9; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v10[4]; // [rsp+34h] [rbp-44h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h]

  RtlAcquireSRWLockExclusive(a1 + 96);
  *(_DWORD *)(a1 + 104) = GetCurrentThreadId();
  v4 = sub_1800056F0(a1);
  if ( v4 >= 0 )
  {
    v9 = 24;
    v5 = NtQueryWnfStateData(a1 + 48, 0LL, 0LL, v10, v11, &v9);
    if ( v5 < 0 )
    {
      v8 = RtlNtStatusToDosError(v5);
      v4 = v8;
      if ( v8 > 0 )
        v4 = (unsigned __int16)v8 | 0x80070000;
    }
    else
    {
      v6 = v13;
      if ( !v13 )
        v6 = v12;
      v4 = 0;
      *a2 = v6;
    }
  }
  *(_DWORD *)(a1 + 104) = 0;
  RtlReleaseSRWLockExclusive(a1 + 96);
  return (unsigned int)v4;
}
