/*
 * XREFs of sub_14023502C @ 0x14023502C
 * Callers:
 *     sub_1406FA730 @ 0x1406FA730 (sub_1406FA730.c)
 *     sub_140739F40 @ 0x140739F40 (sub_140739F40.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 *     sub_1408525D8 @ 0x1408525D8 (sub_1408525D8.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 *     sub_140969514 @ 0x140969514 (sub_140969514.c)
 *     sub_140978C9C @ 0x140978C9C (sub_140978C9C.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall sub_14023502C(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 192, 0LL);
}
