/*
 * XREFs of RaidRecordPassthroughData @ 0x1C000F76C
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C00A1BB8 (RaidAdapterPassThrough.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidRecordPassthroughData(unsigned __int8 a1)
{
  g_RaidPassthroughCdbs[(unsigned __int64)a1 >> 5] |= 1 << (a1 & 0x1F);
}
