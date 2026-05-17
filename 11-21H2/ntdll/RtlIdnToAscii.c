/*
 * XREFs of RtlIdnToAscii @ 0x180030DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x180031BB0 (RtlpNameprepAsciiWorker.c)
 */

__int64 __fastcall RtlIdnToAscii(int a1, int a2, int a3, int a4, __int64 a5)
{
  return RtlpNameprepAsciiWorker(a1, a2, a3, a4, a5, 1);
}
