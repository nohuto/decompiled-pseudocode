/*
 * XREFs of sub_1405F1F7C @ 0x1405F1F7C
 * Callers:
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F1AA4 @ 0x1405F1AA4 (sub_1405F1AA4.c)
 *     sub_1405F1F34 @ 0x1405F1F34 (sub_1405F1F34.c)
 *     sub_1405F200C @ 0x1405F200C (sub_1405F200C.c)
 */

void __fastcall __noreturn sub_1405F1F7C(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    sub_1405F200C(a2, a3);
  sub_1405F1F34();
}
