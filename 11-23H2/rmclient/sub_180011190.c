/*
 * XREFs of sub_180011190 @ 0x180011190
 * Callers:
 *     sub_180011224 @ 0x180011224 (sub_180011224.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 * Callees:
 *     sub_18000CE34 @ 0x18000CE34 (sub_18000CE34.c)
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 */

void __fastcall sub_180011190(__int64 a1, RTL_SRWLOCK *a2, __int64 a3)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)a1);
    v9 = (struct _RTL_CRITICAL_SECTION *)a1;
    AcquireSRWLockExclusive(a2);
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(_QWORD *)(a1 + 48) - v6;
    v8 = a2;
    if ( a3 - 1 < v7 >> 4 )
      *(_OWORD *)(v6 + 16 * (a3 - 1)) = 0LL;
    sub_18000CE58(&v8);
    sub_18000CE34(&v9);
  }
}
