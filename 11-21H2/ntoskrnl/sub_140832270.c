/*
 * XREFs of sub_140832270 @ 0x140832270
 * Callers:
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     PoRegisterCoalescingCallback @ 0x140832790 (PoRegisterCoalescingCallback.c)
 *     sub_1408334E4 @ 0x1408334E4 (sub_1408334E4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140832270(char a1)
{
  int v2; // eax
  PVOID PoolWithTag; // rax
  unsigned __int64 v4; // rsi
  void *v10; // r8
  __int64 v11; // rdx
  __int64 result; // rax

  sub_1408334E4();
  stru_140C48D40.Parameter = 0LL;
  stru_140C48D40.List.Flink = 0LL;
  stru_140C48D40.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14091D700;
  KeInitializeDpc(&stru_140C48D60, (PKDEFERRED_ROUTINE)sub_1403B6350, &dword_140C0B8C0);
  KeInitializeTimerEx(&stru_140C48DA0, NotificationTimer);
  v2 = dword_140C0C6B4;
  if ( dword_140C0C6B4 < 60 )
  {
    v2 = 60;
    dword_140C0C6B4 = 60;
  }
  if ( v2 > 600 )
  {
    v2 = 600;
    dword_140C0C6B4 = 600;
  }
  sub_1402E2D20((unsigned __int64)&stru_140C48DA0, -10000000LL * v2, 0, 0, (__int64)&stru_140C48D60);
  _mm_lfence();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x58637044u);
  v4 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    _RAX = 2147483656LL;
    __asm { cpuid }
    v10 = (void *)(v4 ^ ((unsigned __int64)(unsigned int)sub_140363220(0) << SBYTE1(_RAX)));
  }
  else
  {
    v10 = 0LL;
  }
  KeInitializeDpc(&stru_140C49260, (PKDEFERRED_ROUTINE)sub_14053F110, v10);
  KeInitializeTimerEx(&stru_140C492A0, NotificationTimer);
  stru_140C492E0.Parameter = 0LL;
  stru_140C492E0.List.Flink = 0LL;
  stru_140C492E0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140918FE0;
  LOBYTE(v11) = 1;
  BYTE1(NlsMbOemCodePageTag) = byte_140D3B01B;
  byte_140D00A10 = 1;
  byte_140C49868 = a1;
  dword_140C54CDC = 1;
  result = PoRegisterCoalescingCallback(sub_14053F590, v11, &qword_140C48DE8, 0LL);
  if ( (int)result >= 0 )
    byte_140C54CD8 = 1;
  return result;
}
