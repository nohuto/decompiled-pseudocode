/*
 * XREFs of sub_140360A00 @ 0x140360A00
 * Callers:
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_1407DECE0 @ 0x1407DECE0 (sub_1407DECE0.c)
 *     sub_1408525D8 @ 0x1408525D8 (sub_1408525D8.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 *     sub_140982150 @ 0x140982150 (sub_140982150.c)
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_140360A00(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
}
