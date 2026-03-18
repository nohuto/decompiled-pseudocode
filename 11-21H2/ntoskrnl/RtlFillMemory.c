/*
 * XREFs of RtlFillMemory @ 0x1405EC300
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
