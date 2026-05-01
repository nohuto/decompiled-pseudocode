/*
 * XREFs of sub_1800034B0 @ 0x1800034B0
 * Callers:
 *     sub_180003338 @ 0x180003338 (sub_180003338.c)
 * Callees:
 *     sub_1800056F0 @ 0x1800056F0 (sub_1800056F0.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800034B0(__int64 a1, _QWORD *a2)
{
  signed int v4; // ebx
  NTSTATUS v5; // eax
  signed int v7; // eax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[4]; // [rsp+34h] [rbp-44h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h]

  RtlAcquireSRWLockExclusive(a1 + 96);
  *(_DWORD *)(a1 + 104) = GetCurrentThreadId();
  v4 = sub_1800056F0(a1);
  if ( v4 >= 0 )
  {
    v8 = 24;
    v5 = NtQueryWnfStateData(a1 + 48, 0LL, 0LL, v9, v10, &v8);
    if ( v5 < 0 )
    {
      v7 = RtlNtStatusToDosError(v5);
      v4 = v7;
      if ( v7 > 0 )
        v4 = (unsigned __int16)v7 | 0x80070000;
    }
    else
    {
      v4 = 0;
      *a2 = v11;
    }
  }
  *(_DWORD *)(a1 + 104) = 0;
  RtlReleaseSRWLockExclusive(a1 + 96);
  return (unsigned int)v4;
}
