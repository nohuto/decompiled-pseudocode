/*
 * XREFs of MiVaIsUltra @ 0x1402EE88C
 * Callers:
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 *     MiZeroPageWorkMapping @ 0x140368944 (MiZeroPageWorkMapping.c)
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
      return a1 < qword_140C684F8 + (qword_140C68508 << 30);
  }
  return result;
}
