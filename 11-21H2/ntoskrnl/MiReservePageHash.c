/*
 * XREFs of MiReservePageHash @ 0x1403CF824
 * Callers:
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x14084B698 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_140C534C0,
             (((a1 * (unsigned __int64)(unsigned int)dword_140C531CC) & 0xFFF) != 0)
           + (unsigned int)((a1 * (unsigned __int64)(unsigned int)dword_140C531CC) >> 12));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
