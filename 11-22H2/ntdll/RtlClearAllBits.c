/*
 * XREFs of RtlClearAllBits @ 0x180079C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall RtlClearAllBits(__int64 a1)
{
  return memset_thunk_772440563353939046(
           *(void **)(a1 + 8),
           0,
           4 * ((*(_DWORD *)a1 >> 5) + (unsigned int)((*(_DWORD *)a1 & 0x1F) != 0)));
}
