/*
 * XREFs of MiReleasePageHash @ 0x1405BC988
 * Callers:
 *     MiDeletePagefile @ 0x14096F074 (MiDeletePagefile.c)
 * Callees:
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 */

char __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_140C534C0,
           (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           ((a2 * (unsigned __int64)(unsigned int)dword_140C531CC) >> 12)
         + (((a2 * (unsigned __int64)(unsigned int)dword_140C531CC) & 0xFFF) != 0));
}
