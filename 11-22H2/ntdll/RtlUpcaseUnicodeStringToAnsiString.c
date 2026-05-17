/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x1800F5EC0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x180057C80 (RtlxUnicodeStringToOemSize.c)
 *     AllocateOrValidateCharStringBuffer @ 0x180059270 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18007E600 (RtlUpcaseUnicodeToMultiByteN.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToAnsiString(__int64 a1, PWCH *a2, char a3)
{
  unsigned int v5; // eax
  __int64 result; // rax
  __int64 *v7; // rdi
  int v8; // ebx
  unsigned int v9; // [rsp+88h] [rbp+20h]

  v5 = RtlxUnicodeStringToOemSize(a2);
  v9 = v5;
  if ( v5 > 0xFFFF )
    return 3221225712LL;
  v7 = (__int64 *)(a1 + 8);
  result = AllocateOrValidateCharStringBuffer(a3, v5, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
  if ( (int)result >= 0 )
  {
    v8 = RtlUpcaseUnicodeToMultiByteN();
    if ( v8 >= 0 )
    {
      *(_BYTE *)(v9 + *v7) = 0;
      *(_WORD *)a1 = v9;
      v8 = 0;
    }
    if ( v8 < 0 )
    {
      if ( a3 )
      {
        NtdllpFreeStringRoutine(*v7);
        *v7 = 0LL;
        *(_WORD *)(a1 + 2) = 0;
      }
    }
    return (unsigned int)v8;
  }
  return result;
}
