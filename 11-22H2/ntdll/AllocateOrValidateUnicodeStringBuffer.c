/*
 * XREFs of AllocateOrValidateUnicodeStringBuffer @ 0x180010258
 * Callers:
 *     RtlUpcaseUnicodeString @ 0x180010160 (RtlUpcaseUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x180058FD0 (RtlOemStringToUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x180073CD0 (RtlDowncaseUnicodeString.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall AllocateOrValidateUnicodeStringBuffer(char a1, __int64 a2, __int64 *a3, _WORD *a4)
{
  unsigned int v4; // ebx
  __int16 v5; // si
  __int64 StringRoutine; // rax

  v4 = 0;
  v5 = a2;
  if ( a1 )
  {
    StringRoutine = NtdllpAllocateStringRoutine((unsigned int)a2, a2);
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
    if ( (unsigned int)a2 > (unsigned __int16)*a4 || !*a3 )
      return (unsigned int)-2147483643;
    return v4;
  }
}
