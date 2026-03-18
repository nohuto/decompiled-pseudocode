/*
 * XREFs of IvtGetContextEntryType @ 0x14052E994
 * Callers:
 *     IvtInitializeIommu @ 0x140A63CE0 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetContextEntryType(__int64 a1, __int64 a2, char a3)
{
  return a3 == 0 ? 2 : 0;
}
