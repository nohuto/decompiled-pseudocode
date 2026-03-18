/*
 * XREFs of AllocateOrValidateUnicodeStringBuffer @ 0x140316CFC
 * Callers:
 *     RtlUpcaseUnicodeString @ 0x140773AF0 (RtlUpcaseUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773C00 (RtlAnsiStringToUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x1407BE240 (RtlDowncaseUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1407DAC60 (RtlOemStringToCountedUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x14086B690 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     ExpAllocateStringRoutine @ 0x1407C6F90 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall AllocateOrValidateUnicodeStringBuffer(char a1, unsigned int a2, __int64 *a3, _WORD *a4)
{
  unsigned int v4; // ebx
  __int16 v5; // si
  __int64 StringRoutine; // rax

  v4 = 0;
  v5 = a2;
  if ( a1 )
  {
    StringRoutine = ExpAllocateStringRoutine(a2);
    *a3 = StringRoutine;
    if ( StringRoutine )
    {
      *a4 = v5;
      return 0LL;
    }
    else
    {
      *a4 = 0;
      return 3221225495LL;
    }
  }
  else
  {
    if ( a2 > (unsigned __int16)*a4 || !*a3 )
      return (unsigned int)-2147483643;
    return v4;
  }
}
