/*
 * XREFs of MxPageAlwaysHot @ 0x140AF66BC
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x140AF5C0C (MxInitializeFreeNodeDescriptors.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1405A6950 (MiSearchChannelTable.c)
 */

_BOOL8 __fastcall MxPageAlwaysHot(ULONG_PTR a1)
{
  return qword_140C50710 && !*((_BYTE *)MiSearchChannelTable(a1) + 14);
}
