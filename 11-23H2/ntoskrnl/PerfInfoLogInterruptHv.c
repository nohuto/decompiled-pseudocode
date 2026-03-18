/*
 * XREFs of PerfInfoLogInterruptHv @ 0x140468340
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x140426860 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1404269C0 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x140338D50 (EtwTraceTimedEvent.c)
 */

void __fastcall PerfInfoLogInterruptHv(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+38h] [rbp-10h]
  int v5; // [rsp+3Ch] [rbp-Ch]

  v5 = 0;
  v3 = a1;
  v4 = a2;
  EtwTraceTimedEvent(0xF43u, 0x20004000u, (__int64)&v3, 12, 0x400A02u, a3);
}
