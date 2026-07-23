/*
 * XREFs of sub_140767730 @ 0x140767730
 * Callers:
 *     sub_140766100 @ 0x140766100 (sub_140766100.c)
 *     sub_1407663DC @ 0x1407663DC (sub_1407663DC.c)
 *     sub_140766640 @ 0x140766640 (sub_140766640.c)
 *     sub_14076729C @ 0x14076729C (sub_14076729C.c)
 *     sub_140767538 @ 0x140767538 (sub_140767538.c)
 *     sub_140767594 @ 0x140767594 (sub_140767594.c)
 *     sub_1407676B0 @ 0x1407676B0 (sub_1407676B0.c)
 *     sub_140810CB4 @ 0x140810CB4 (sub_140810CB4.c)
 *     sub_14095E4BC @ 0x14095E4BC (sub_14095E4BC.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140767730(int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 i; // r8
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-18h] BYREF

  for ( i = a4; ; i = a4 )
  {
    result = ExAllocatePool2(a2, a3, i);
    if ( result || (a1 & 0xFFFFFFFB) == 0 )
      break;
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
