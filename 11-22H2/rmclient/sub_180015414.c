/*
 * XREFs of sub_180015414 @ 0x180015414
 * Callers:
 *     sub_180015704 @ 0x180015704 (sub_180015704.c)
 * Callees:
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_180011474 @ 0x180011474 (sub_180011474.c)
 */

void __fastcall sub_180015414(__int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  _QWORD *v3; // rcx
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)a1 )
  {
    v2 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v3 = (_QWORD *)(a1 + 40);
    v4 = v2;
    if ( !*(_QWORD *)(a1 + 40) )
    {
      *v3 = 0LL;
      sub_180011474(v3);
    }
    sub_18000CE58(&v4);
  }
}
