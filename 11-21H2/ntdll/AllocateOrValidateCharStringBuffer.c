/*
 * XREFs of AllocateOrValidateCharStringBuffer @ 0x18000E2C0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x18000BFF0 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18000C380 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800F6090 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800F61D0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800F62F0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall AllocateOrValidateCharStringBuffer(char a1, unsigned int a2, __int64 *a3, _WORD *a4)
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
