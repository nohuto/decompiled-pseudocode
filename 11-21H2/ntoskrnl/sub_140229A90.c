/*
 * XREFs of sub_140229A90 @ 0x140229A90
 * Callers:
 *     sub_140229A50 @ 0x140229A50 (sub_140229A50.c)
 *     HalCalibratePerformanceCounter @ 0x14038B8D0 (HalCalibratePerformanceCounter.c)
 *     HalProcessorIdle @ 0x14041B080 (HalProcessorIdle.c)
 * Callees:
 *     <none>
 */

__int64 sub_140229A90()
{
  __int64 result; // rax
  __int16 v1; // [rsp+0h] [rbp-8h]

  _disable();
  result = v1 & 0x200;
  if ( qword_140C4C728 )
    *(_DWORD *)(32LL * HIDWORD(KeGetPcr()[1].LockArray) + qword_140C4C728 + 20) = 0;
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
