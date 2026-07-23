/*
 * XREFs of EtwTraceMessage @ 0x180053590
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceMessageVa @ 0x1800535C0 (EtwTraceMessageVa.c)
 */

__int64 __fastcall EtwTraceMessage(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return EtwTraceMessageVa(a1, (__int64)&a5);
}
