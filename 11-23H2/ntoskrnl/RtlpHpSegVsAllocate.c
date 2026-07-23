/*
 * XREFs of RtlpHpSegVsAllocate @ 0x14034FD80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x14034FDAC (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegVsAllocate(int a1, int a2, char a3, int a4, __int64 a5)
{
  return RtlpHpSegSubAllocate(a1, a2, a3 & 1 | 0xC000000u, a4, a5);
}
