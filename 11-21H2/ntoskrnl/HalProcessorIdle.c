/*
 * XREFs of HalProcessorIdle @ 0x14041B080
 * Callers:
 *     sub_140305BD0 @ 0x140305BD0 (sub_140305BD0.c)
 *     sub_14039E0F0 @ 0x14039E0F0 (sub_14039E0F0.c)
 *     sub_1403CAB40 @ 0x1403CAB40 (sub_1403CAB40.c)
 * Callees:
 *     sub_140229A90 @ 0x140229A90 (sub_140229A90.c)
 */

void __noreturn HalProcessorIdle()
{
  sub_140229A90();
  _enable();
  __halt();
}
