/*
 * XREFs of MiFlushAllPages @ 0x14063A15C
 * Callers:
 *     MmFlushAllPagesEx @ 0x14063C218 (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x140A884BC (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14061C5F4 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiFlushAllPagesWorker @ 0x14063A234 (MiFlushAllPagesWorker.c)
 */

__int64 __fastcall MiFlushAllPages(__int64 a1, char a2)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v5; // r11
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 result; // rax
  _KPROCESS *v9; // rbx
  $115DCDF994C6370D29323EAB0E0C9502 v10; // [rsp+20h] [rbp-48h] BYREF

  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v6 = 10000000 * v5;
  v7 = UnbiasedInterruptTime;
  result = MiFlushAllPagesWorker(a1, UnbiasedInterruptTime, 10000000 * v5, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1192) )
    {
      v9 = *(_KPROCESS **)(a1 + 1344);
      KiStackAttachProcess(v9, 0, (__int64)&v10);
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v9[1].ActiveProcessors.StaticBitmap[26], 0);
      KiUnstackDetachProcess(&v10);
      return MiFlushAllPagesWorker(
               a1,
               v7,
               v6,
               0LL,
               v10.SavedApcState.ApcListHead[0].Flink,
               v10.SavedApcState.ApcListHead[0].Blink,
               v10.SavedApcState.ApcListHead[1].Flink,
               v10.SavedApcState.ApcListHead[1].Blink,
               v10.SavedApcState.Process,
               *(_QWORD *)&v10.SavedApcStateFill[40]);
    }
  }
  return result;
}
