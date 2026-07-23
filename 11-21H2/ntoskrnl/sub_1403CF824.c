/*
 * XREFs of sub_1403CF824 @ 0x1403CF824
 * Callers:
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     NaptrDnsRecordConvert_2 @ 0x14084B698 (NaptrDnsRecordConvert_2.c)
 * Callees:
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 */

ULONG_PTR __fastcall sub_1403CF824(unsigned int a1)
{
  ULONG_PTR result; // rax

  result = sub_1403095B0(
             (__int64)&qword_140C534C0,
             (((a1 * (unsigned __int64)(unsigned int)dword_140C531CC) & 0xFFF) != 0)
           + (unsigned int)((a1 * (unsigned __int64)(unsigned int)dword_140C531CC) >> 12));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
