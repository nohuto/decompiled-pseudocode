/*
 * XREFs of sub_1405BC988 @ 0x1405BC988
 * Callers:
 *     sub_14096F074 @ 0x14096F074 (sub_14096F074.c)
 * Callees:
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 */

char __fastcall sub_1405BC988(unsigned __int64 a1, unsigned int a2)
{
  return sub_1402BB6D0(
           (__int64)&qword_140C534C0,
           (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           ((a2 * (unsigned __int64)(unsigned int)dword_140C531CC) >> 12)
         + (((a2 * (unsigned __int64)(unsigned int)dword_140C531CC) & 0xFFF) != 0));
}
