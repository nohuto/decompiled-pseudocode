/*
 * XREFs of sub_1403FDD40 @ 0x1403FDD40
 * Callers:
 *     sub_1403FB1CC @ 0x1403FB1CC (sub_1403FB1CC.c)
 * Callees:
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 */

__int64 __fastcall sub_1403FDD40(int a1)
{
  char *i; // rax
  __int64 result; // rax

  if ( a1 != 6553616 )
    sub_14056AF38(1634955892LL);
  _InterlockedOr(&dword_140C0DD04, 1u);
  for ( i = off_140C002C8; *i; ++i )
    ;
  result = (unsigned int)~dword_140C094E0;
  dword_140C0DD00 = ~dword_140C094E0;
  return result;
}
