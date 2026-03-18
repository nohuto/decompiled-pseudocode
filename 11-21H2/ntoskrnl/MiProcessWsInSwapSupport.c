/*
 * XREFs of MiProcessWsInSwapSupport @ 0x14025EC08
 * Callers:
 *     MmInSwapWorkingSet @ 0x14025F4D4 (MmInSwapWorkingSet.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14097FF40 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x140980040 (MmInSwapVirtualAddresses.c)
 * Callees:
 *     MiProcessWsInSwapRanges @ 0x14025EA9C (MiProcessWsInSwapRanges.c)
 */

struct _KTHREAD *__fastcall MiProcessWsInSwapSupport(__int64 a1, char a2)
{
  _QWORD *v2; // rdi
  struct _KTHREAD *result; // rax
  _QWORD *v5; // r9
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx

  v2 = *(_QWORD **)a1;
  result = 0LL;
  v5 = *(_QWORD **)a1;
  v6 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 < v6 )
  {
    do
    {
      v7 = v2[1] >> 12;
      if ( (unsigned __int64)result + v7 >= 0x1000 )
      {
        v9 = 4096LL - (_QWORD)result;
        if ( (a2 & 4) != 0 )
        {
          v11 = *v2 + (v9 << 12);
          if ( ((*v2 ^ (v11 - 1)) & 0xFFFFFFFFFFE00000uLL) != 0 )
            v9 -= (v11 >> 12) & 0x1FF;
        }
        v10 = v7 - v9;
        v2[1] = v9 << 12;
        MiProcessWsInSwapRanges(v5, (__int64)v2, a2);
        if ( v10 )
        {
          v5 = v2;
          *v2 += v2[1];
          v2[1] = v10 << 12;
          v2 -= 2;
        }
        else
        {
          v5 = v2 + 2;
        }
        result = 0LL;
      }
      else
      {
        result = (struct _KTHREAD *)((char *)result + v7);
      }
      v8 = (__int64)v2;
      v2 += 2;
    }
    while ( (unsigned __int64)v2 < v6 );
    if ( result )
      return MiProcessWsInSwapRanges(v5, v8, a2);
  }
  return result;
}
