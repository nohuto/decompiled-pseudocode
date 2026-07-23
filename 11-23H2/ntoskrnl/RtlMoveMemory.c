/*
 * XREFs of RtlMoveMemory @ 0x140372040
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 */

void __stdcall RtlMoveMemory(void *a1, const void *Source, SIZE_T Length)
{
  memmove(a1, Source, Length);
}
