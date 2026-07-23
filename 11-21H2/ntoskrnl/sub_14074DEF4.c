/*
 * XREFs of sub_14074DEF4 @ 0x14074DEF4
 * Callers:
 *     sub_14074DD38 @ 0x14074DD38 (sub_14074DD38.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 */

__int64 __fastcall sub_14074DEF4(__int64 a1, ULONG_PTR *a2, unsigned int a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // r14
  volatile signed __int64 *v8; // rdi
  volatile signed __int64 *v10; // rbp
  __int64 v11; // rax

  if ( a3 <= 2 )
  {
    v6 = 136LL;
  }
  else
  {
    v6 = 176LL;
    if ( a3 != 3 )
      v6 = 200LL;
  }
  ExAcquirePushLockExclusiveEx(v6 + a1, 0LL);
  while ( 1 )
  {
    v7 = *a2;
    if ( (ULONG_PTR *)*a2 == a2 )
      break;
    sub_1407A7F84(*a2);
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
        v10 = (volatile signed __int64 *)(a1 + 176);
      else
        v10 = (volatile signed __int64 *)(a1 + 200);
    }
    else
    {
      v10 = (volatile signed __int64 *)(a1 + 136);
    }
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    sub_1402AFC00((ULONG_PTR)v10);
    sub_1407A6A34(v7);
    --*(_WORD *)(v7 - 30);
    if ( *(_QWORD *)(v7 + 16) == a1 )
      sub_140662E08(a1, v7, 0x10000);
    else
      sub_1407A7628(v7);
    if ( a3 > 2 )
    {
      v11 = 176LL;
      if ( a3 != 3 )
        v11 = 200LL;
    }
    else
    {
      v11 = 136LL;
    }
    ExAcquirePushLockExclusiveEx(v11 + a1, 0LL);
  }
  if ( a3 > 2 )
  {
    if ( a3 == 3 )
      v8 = (volatile signed __int64 *)(a1 + 176);
    else
      v8 = (volatile signed __int64 *)(a1 + 200);
  }
  else
  {
    v8 = (volatile signed __int64 *)(a1 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  return sub_1402AFC00((ULONG_PTR)v8);
}
