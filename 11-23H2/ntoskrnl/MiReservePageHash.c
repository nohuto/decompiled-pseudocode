/*
 * XREFs of MiReservePageHash @ 0x140395EF8
 * Callers:
 *     MiCreatePagingFile @ 0x1408333DC (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x140833D94 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_140C69940,
             (unsigned int)((a1 * (unsigned __int64)(unsigned int)dword_140C6964C) >> 12)
           + (((a1 * (unsigned __int64)(unsigned int)dword_140C6964C) & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
