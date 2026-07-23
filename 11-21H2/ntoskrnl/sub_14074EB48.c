/*
 * XREFs of sub_14074EB48 @ 0x14074EB48
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

__int64 __fastcall sub_14074EB48(__int64 a1, __int64 a2, ULONG_PTR *a3, unsigned int a4)
{
  __int64 v8; // rax
  ULONG_PTR i; // rdi
  volatile signed __int64 *v10; // rdi
  volatile signed __int64 *v12; // rbp
  __int64 v13; // rax

  if ( a4 <= 2 )
  {
    v8 = 136LL;
  }
  else
  {
    v8 = 176LL;
    if ( a4 != 3 )
      v8 = 200LL;
  }
  ExAcquirePushLockExclusiveEx(v8 + a2, 0LL);
LABEL_5:
  for ( i = *a3; (ULONG_PTR *)i != a3; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 || (*(_DWORD *)(i + 40) & 0x8000) != 0 )
    {
      sub_1407A7F84(i);
      if ( a4 > 2 )
      {
        if ( a4 == 3 )
          v12 = (volatile signed __int64 *)(a2 + 176);
        else
          v12 = (volatile signed __int64 *)(a2 + 200);
      }
      else
      {
        v12 = (volatile signed __int64 *)(a2 + 136);
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v12);
      sub_1402AFC00((ULONG_PTR)v12);
      sub_1407A6A34(i);
      --*(_WORD *)(i - 30);
      if ( *(_QWORD *)(i + 24) == a1 )
        sub_140662E08(a2, i, 0x10000);
      else
        sub_1407A7628(i);
      if ( a4 > 2 )
      {
        v13 = 176LL;
        if ( a4 != 3 )
          v13 = 200LL;
      }
      else
      {
        v13 = 136LL;
      }
      ExAcquirePushLockExclusiveEx(v13 + a2, 0LL);
      goto LABEL_5;
    }
  }
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
      v10 = (volatile signed __int64 *)(a2 + 176);
    else
      v10 = (volatile signed __int64 *)(a2 + 200);
  }
  else
  {
    v10 = (volatile signed __int64 *)(a2 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  return sub_1402AFC00((ULONG_PTR)v10);
}
