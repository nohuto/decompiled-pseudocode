/*
 * XREFs of AllocateOrValidateUnicodeStringBuffer @ 0x140316F8C
 * Callers:
 *     RtlUpcaseUnicodeString @ 0x140773CE0 (RtlUpcaseUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773DF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x1407BE510 (RtlDowncaseUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1407DAF30 (RtlOemStringToCountedUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x14086B8D0 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     ExpAllocateStringRoutine @ 0x1407C7260 (ExpAllocateStringRoutine.c)
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
