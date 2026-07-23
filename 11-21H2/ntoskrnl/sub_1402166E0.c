/*
 * XREFs of sub_1402166E0 @ 0x1402166E0
 * Callers:
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     MmGetCacheAttributeEx @ 0x140585C20 (MmGetCacheAttributeEx.c)
 *     sub_1405879D8 @ 0x1405879D8 (sub_1405879D8.c)
 *     sub_1405882D0 @ 0x1405882D0 (sub_1405882D0.c)
 *     sub_14058EB84 @ 0x14058EB84 (sub_14058EB84.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1402166E0(unsigned __int64 a1)
{
  return stru_140C52958.Buffer && _bittest64((const signed __int64 *)stru_140C52958.Buffer, (a1 >> 18) & 0x3FFFFF);
}
