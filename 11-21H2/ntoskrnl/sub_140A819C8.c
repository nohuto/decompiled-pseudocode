/*
 * XREFs of sub_140A819C8 @ 0x140A819C8
 * Callers:
 *     sub_140A910FC @ 0x140A910FC (sub_140A910FC.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 *     sub_140AA6E1C @ 0x140AA6E1C (sub_140AA6E1C.c)
 *     sub_140B27D40 @ 0x140B27D40 (sub_140B27D40.c)
 * Callees:
 *     RtlRandomEx @ 0x14036C940 (RtlRandomEx.c)
 */

ULONG __fastcall sub_140A819C8(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&dword_140D576B8);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
