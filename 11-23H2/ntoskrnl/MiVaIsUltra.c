/*
 * XREFs of MiVaIsUltra @ 0x1402EEB1C
 * Callers:
 *     MiTranslatePageForCopy @ 0x1402EE0D4 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE458 (MiPrefetchVirtualMemory.c)
 *     MiZeroPageWorkMapping @ 0x140368AE4 (MiZeroPageWorkMapping.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( qword_140C684F8 )
  {
    if ( a1 >= qword_140C684F8 )
      return a1 < qword_140C684F8 + (BitMapHeader.SizeOfBitMap << 30);
  }
  return result;
}
