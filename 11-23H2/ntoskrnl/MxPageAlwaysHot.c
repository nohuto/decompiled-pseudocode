/*
 * XREFs of MxPageAlwaysHot @ 0x140B4365C
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x140B42B78 (MxInitializeFreeNodeDescriptors.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140645CA0 (MiSearchChannelTable.c)
 */

__int64 __fastcall MxPageAlwaysHot(ULONG_PTR a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !qword_140C65AD0 )
    return 0LL;
  LOBYTE(v1) = *((_BYTE *)MiSearchChannelTable(a1) + 14) == 0;
  return v1;
}
