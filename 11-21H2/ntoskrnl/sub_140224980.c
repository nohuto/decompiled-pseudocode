/*
 * XREFs of sub_140224980 @ 0x140224980
 * Callers:
 *     <none>
 * Callees:
 *     sub_140224A24 @ 0x140224A24 (sub_140224A24.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140389CEC @ 0x140389CEC (sub_140389CEC.c)
 */

void __fastcall sub_140224980(__int64 a1, __int64 a2, void *a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&word_140C22FE8, Executive, 0, 0, &Timeout) )
  {
    sub_140389CEC(qword_140C204C8);
    _m_prefetchw(&byte_140C203E8);
    if ( !_InterlockedOr8(&byte_140C203E8, 1u) )
    {
      stru_140C203C0.List.Flink = 0LL;
      stru_140C203C0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140389D50;
      stru_140C203C0.Parameter = a3;
      ExQueueWorkItem(&stru_140C203C0, CriticalWorkQueue);
    }
  }
  else
  {
    dword_140C20488 = (int)a3;
    sub_140224A24(0LL);
  }
}
