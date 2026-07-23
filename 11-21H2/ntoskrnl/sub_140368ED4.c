/*
 * XREFs of sub_140368ED4 @ 0x140368ED4
 * Callers:
 *     sub_140368E90 @ 0x140368E90 (sub_140368E90.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140368F70 @ 0x140368F70 (sub_140368F70.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall sub_140368ED4(int a1)
{
  void *v1; // rsi
  __int32 v2; // edi

  v1 = (void *)a1;
  if ( (dword_140C22278 & 0x40000) != 0 )
    DbgkWerCaptureLiveKernelDump(
      (unsigned int)L"UserPresenceSet",
      160,
      273,
      dword_140C23640,
      dword_140C231B0,
      0LL,
      0LL,
      0LL,
      0);
  if ( byte_140C227C1 == 3 )
  {
    _InterlockedOr(&dword_140C223B4, 1u);
    _InterlockedExchange(&dword_140C223B0, (__int32)v1);
  }
  else
  {
    v2 = _InterlockedExchange(&dword_140C23640, 1);
    if ( _InterlockedCompareExchange(&dword_140C232D4, 0, 0) )
    {
      if ( !v2 )
      {
        _InterlockedExchange(&dword_140C23640, 0);
        KeSetEvent(&stru_140C23660, 0, 0);
      }
    }
    else
    {
      sub_140368F70(2LL);
      if ( !v2 )
      {
        stru_140C223C0.Parameter = v1;
        stru_140C223C0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1407F32E0;
        stru_140C223C0.List.Flink = 0LL;
        ExQueueWorkItem(&stru_140C223C0, DelayedWorkQueue);
      }
    }
  }
}
