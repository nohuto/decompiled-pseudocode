/*
 * XREFs of sub_140502F20 @ 0x140502F20
 * Callers:
 *     sub_1405030B0 @ 0x1405030B0 (sub_1405030B0.c)
 *     sub_1405031C0 @ 0x1405031C0 (sub_1405031C0.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

LARGE_INTEGER *__fastcall sub_140502F20(LARGE_INTEGER *a1, __int64 *a2, LARGE_INTEGER *a3)
{
  __int64 v3; // rdi
  LARGE_INTEGER v5; // rsi
  unsigned int v6; // ebp
  LARGE_INTEGER v7; // rbx
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  LONGLONG QuadPart; // rax
  LARGE_INTEGER *result; // rax

  v3 = 0LL;
  v5.QuadPart = 0LL;
  v6 = 0;
  v7.QuadPart = -1LL;
  while ( 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v10 = sub_140303720(qword_140C4E4F0);
    v12 = sub_14042A5E0(v10, v11);
    QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart;
    if ( QuadPart <= (unsigned __int64)qword_140C4E368 )
      break;
    if ( v7.QuadPart <= (unsigned __int64)QuadPart )
    {
      QuadPart = v7.QuadPart;
    }
    else
    {
      v3 = v12;
      v5 = PerformanceCounter;
    }
    ++v6;
    v7.QuadPart = QuadPart;
    if ( v6 >= 0xA )
      goto LABEL_9;
  }
  v7.QuadPart = QuadPart;
  v3 = v12;
  v5 = PerformanceCounter;
LABEL_9:
  result = a1;
  *a1 = v5;
  *a2 = v3;
  *a3 = v7;
  return result;
}
