/*
 * XREFs of EtwpGuidEntryCompare @ 0x180083E60
 * Callers:
 *     EtwpInsertGuidEntry @ 0x180061E2C (EtwpInsertGuidEntry.c)
 * Callees:
 *     <none>
 */

int __fastcall EtwpGuidEntryCompare(const void *a1, __int64 a2)
{
  return memcmp(a1, (const void *)(a2 + 24), 0x10uLL);
}
