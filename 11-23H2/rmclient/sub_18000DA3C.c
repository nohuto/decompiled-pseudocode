/*
 * XREFs of sub_18000DA3C @ 0x18000DA3C
 * Callers:
 *     sub_18000DA14 @ 0x18000DA14 (sub_18000DA14.c)
 * Callees:
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_180011474 @ 0x180011474 (sub_180011474.c)
 */

__int64 __fastcall sub_18000DA3C(__int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  _QWORD *v3; // rbx
  unsigned int v4; // ebx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)a1 )
    return 0LL;
  v2 = (RTL_SRWLOCK *)(a1 + 8);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  v6 = v2;
  v3 = (_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 32) )
  {
    v4 = *(_DWORD *)(a1 + 28);
  }
  else
  {
    *v3 = 0LL;
    sub_180011474(a1 + 32, sub_18000BF70, a1);
    if ( *v3 )
    {
      v4 = 1;
      *(_DWORD *)(a1 + 28) = 1;
    }
    else
    {
      v4 = 0;
    }
  }
  sub_18000CE58(&v6);
  return v4;
}
