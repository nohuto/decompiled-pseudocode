/*
 * XREFs of AllocateOrValidateUnicodeStringBuffer @ 0x18000F37C
 * Callers:
 *     RtlOemStringToUnicodeString @ 0x18000C250 (RtlOemStringToUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x18000E340 (RtlDowncaseUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x18000F280 (RtlUpcaseUnicodeString.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
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
    StringRoutine = NtdllpAllocateStringRoutine(a2);
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
