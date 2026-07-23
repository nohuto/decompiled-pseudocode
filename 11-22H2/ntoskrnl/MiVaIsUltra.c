/*
 * XREFs of MiVaIsUltra @ 0x1402EE88C
 * Callers:
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 *     MiZeroPageWorkMapping @ 0x1403682F4 (MiZeroPageWorkMapping.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( qword_140C685F8 )
  {
    if ( a1 >= qword_140C685F8 )
      return a1 < qword_140C685F8 + (BitMapHeader.SizeOfBitMap << 30);
  }
  return result;
}
