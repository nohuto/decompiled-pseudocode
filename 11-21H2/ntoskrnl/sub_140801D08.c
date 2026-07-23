/*
 * XREFs of sub_140801D08 @ 0x140801D08
 * Callers:
 *     sub_140801D60 @ 0x140801D60 (sub_140801D60.c)
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 *     sub_14093C164 @ 0x14093C164 (sub_14093C164.c)
 * Callees:
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 */

ULONG_PTR __fastcall sub_140801D08(unsigned __int64 a1)
{
  ULONG_PTR result; // rax

  result = sub_1403095B0((__int64)&qword_140C534C0, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
