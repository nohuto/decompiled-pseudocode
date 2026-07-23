/*
 * XREFs of sub_140416650 @ 0x140416650
 * Callers:
 *     sub_140410D50 @ 0x140410D50 (sub_140410D50.c)
 * Callees:
 *     sub_140416678 @ 0x140416678 (sub_140416678.c)
 *     sub_140416814 @ 0x140416814 (sub_140416814.c)
 */

__int64 __fastcall sub_140416650(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 12) == 128 )
    return sub_140416678();
  else
    return sub_140416814();
}
