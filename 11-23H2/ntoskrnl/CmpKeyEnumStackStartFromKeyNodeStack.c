/*
 * XREFs of CmpKeyEnumStackStartFromKeyNodeStack @ 0x140A2439C
 * Callers:
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140A235B4 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140A242EC (CmpKeyEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140A238B4 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackStart @ 0x140A2423C (CmpKeyEnumStackStart.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKeyNodeStack(unsigned __int16 *a1, __int16 *a2)
{
  __int64 result; // rax

  result = CmpKeyEnumStackStart((__int64)a1, *a2);
  if ( (int)result >= 0 )
  {
    CmpKeyEnumStackBeginEnumerationForKeyNodeStack(a1, (__int64)a2);
    return 0LL;
  }
  return result;
}
