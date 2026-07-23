/*
 * XREFs of sub_14026C0E4 @ 0x14026C0E4
 * Callers:
 *     sub_14026C038 @ 0x14026C038 (sub_14026C038.c)
 *     sub_1405BAF60 @ 0x1405BAF60 (sub_1405BAF60.c)
 * Callees:
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 */

__int64 __fastcall sub_14026C0E4(unsigned __int64 a1)
{
  return sub_1402BB6D0(&qword_140C534C0, ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
}
