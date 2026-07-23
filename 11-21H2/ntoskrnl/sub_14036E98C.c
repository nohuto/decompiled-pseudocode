/*
 * XREFs of sub_14036E98C @ 0x14036E98C
 * Callers:
 *     sub_14034CEB0 @ 0x14034CEB0 (sub_14034CEB0.c)
 *     sub_14036E174 @ 0x14036E174 (sub_14036E174.c)
 *     sub_14036EBE8 @ 0x14036EBE8 (sub_14036EBE8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14036E98C(__int64 a1, __int64 a2)
{
  return sub_14042A5E0(a1 ^ *(_QWORD *)(a1 + 128), a2);
}
