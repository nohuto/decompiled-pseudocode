/*
 * XREFs of PoUserShutdownInitiated @ 0x1407EC000
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     sub_1403690D0 @ 0x1403690D0 (sub_1403690D0.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407EBF04 @ 0x1407EBF04 (sub_1407EBF04.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

char PoUserShutdownInitiated()
{
  char result; // al
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // bl

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
  {
    sub_1407EBF04(7, 0);
    result = sub_14036AAC4((__int64)&unk_140C24660, DelayedWorkQueue);
    if ( qword_140C5AD48 )
    {
      sub_140A48330(v1);
      if ( byte_140C235C8 )
      {
        return sub_140A47CF8(v3, v2);
      }
      else
      {
        byte_140C235C8 = 1;
        if ( !byte_140C235C4 )
        {
          stru_140C235A0.Parameter = 0LL;
          stru_140C235A0.List.Flink = 0LL;
          stru_140C235A0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140990340;
          KeInitializeTimerEx(&stru_140C23520, NotificationTimer);
          KeInitializeDpc(&stru_140C23560, (PKDEFERRED_ROUTINE)sub_1405D02A0, 0LL);
          byte_140C235C4 = 1;
        }
        dword_140C4EEF8 = 1;
        sub_140A47CF8(v3, v2);
        v6 = sub_14042A5E0(v5, v4);
        result = sub_1402E2D20((unsigned __int64)&stru_140C23520, -900000000LL, 0, 0, (__int64)&stru_140C23560);
        if ( v6 )
          return sub_1403690D0();
      }
    }
  }
  return result;
}
