/*
 * XREFs of RtlFillMemory @ 0x1405AF7C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
