/*
 * XREFs of sub_140AF2E9C @ 0x140AF2E9C
 * Callers:
 *     sub_140AFC9DC @ 0x140AFC9DC (sub_140AFC9DC.c)
 * Callees:
 *     KeInitializeTimer @ 0x14024C980 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140416F1C @ 0x140416F1C (sub_140416F1C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140811AB4 @ 0x140811AB4 (sub_140811AB4.c)
 *     sub_140908C90 @ 0x140908C90 (sub_140908C90.c)
 */

void __fastcall sub_140AF2E9C(int a1)
{
  if ( (unsigned int)sub_140416F1C() )
  {
    if ( a1 == 1 )
    {
      memset(&byte_140C49880, 0, 0x200uLL);
      KeQueryPerformanceCounter(&stru_140C49888);
      qword_140C49898 = MEMORY[0xFFFFF78000000014];
      qword_140C49890 = MEMORY[0xFFFFF78000000014];
      qword_140C498B0 = 864000000000LL;
      *(__m128i *)&stru_140C498A0.LowPart = _mm_load_si128((const __m128i *)&xmmword_14001C740);
      if ( (unsigned int)dword_140C0C610 <= 1 )
        byte_140C498C1 = dword_140C0C610 != 0;
      stru_140C49A60.List.Flink = 0LL;
      stru_140C49A60.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1406DBDA0;
      stru_140C49A60.Parameter = &stru_140C49A60;
      KeInitializeTimer(&stru_140C49A20);
      KeInitializeDpc(&stru_140C499E0, (PKDEFERRED_ROUTINE)sub_14025B900, 0LL);
      return;
    }
    sub_140908C90((char *)&dword_140C02EE8);
    byte_140C49880 = 1;
  }
  else
  {
    memset(&byte_140C49880, 0, 0x200uLL);
    KeQueryPerformanceCounter(&stru_140C49888);
    stru_140C49A60.List.Flink = 0LL;
    qword_140C49898 = MEMORY[0xFFFFF78000000014];
    qword_140C49890 = MEMORY[0xFFFFF78000000014];
    qword_140C498B0 = 864000000000LL;
    stru_140C49A60.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1406DBDA0;
    stru_140C49A60.Parameter = &stru_140C49A60;
    byte_140C49880 = 1;
    *(__m128i *)&stru_140C498A0.LowPart = _mm_load_si128((const __m128i *)&xmmword_14001C740);
    KeInitializeTimer(&stru_140C49A20);
    KeInitializeDpc(&stru_140C499E0, (PKDEFERRED_ROUTINE)sub_14025B900, 0LL);
  }
  if ( !byte_140C498C1 )
    sub_140811AB4((LARGE_INTEGER)-9000000000LL);
}
