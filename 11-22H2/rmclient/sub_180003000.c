/*
 * XREFs of sub_180003000 @ 0x180003000
 * Callers:
 *     sub_180002FB0 @ 0x180002FB0 (sub_180002FB0.c)
 * Callees:
 *     sub_1800030BC @ 0x1800030BC (sub_1800030BC.c)
 *     sub_1800056F0 @ 0x1800056F0 (sub_1800056F0.c)
 */

__int64 __fastcall sub_180003000(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // ebx
  int v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+60h] [rbp+18h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF
  unsigned int v11; // [rsp+6Ch] [rbp+24h]

  RtlAcquireSRWLockExclusive(a1 + 96);
  *(_DWORD *)(a1 + 104) = GetCurrentThreadId();
  v4 = sub_1800056F0(a1);
  if ( v4 >= 0 )
  {
    v8 = 8;
    v6 = NtQueryWnfStateData(a1 + 40, 0LL, 0LL, &v9, &v10, &v8);
    if ( v6 < 0 )
    {
      v4 = v6 | 0x10000000;
    }
    else
    {
      *a2 = sub_1800030BC(v5, v11);
      v4 = 0;
    }
  }
  *(_DWORD *)(a1 + 104) = 0;
  RtlReleaseSRWLockExclusive(a1 + 96);
  return (unsigned int)v4;
}
