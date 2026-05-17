/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x1800F61D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlxUnicodeStringToOemSize @ 0x18000C590 (RtlxUnicodeStringToOemSize.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18000DBB0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18000E2C0 (AllocateOrValidateCharStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToAnsiString(__int64 a1, PWCH *a2, char a3)
{
  unsigned int v5; // eax
  __int64 result; // rax
  _WORD *v7; // r15
  __int64 *v8; // rdi
  int v9; // ebx
  __int16 v10; // dx
  unsigned int v11; // [rsp+88h] [rbp+20h] BYREF

  v5 = RtlxUnicodeStringToOemSize(a2);
  v11 = v5;
  if ( v5 > 0xFFFF )
    return 3221225712LL;
  v7 = (_WORD *)(a1 + 2);
  v8 = (__int64 *)(a1 + 8);
  result = AllocateOrValidateCharStringBuffer(a3, v5, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
  if ( (int)result >= 0 )
  {
    v9 = RtlUpcaseUnicodeToMultiByteN(*v8, (unsigned __int16)*v7, (__int64)&v11);
    if ( v9 >= 0 )
    {
      v10 = v11;
      *(_BYTE *)(v11 + *v8) = 0;
      *(_WORD *)a1 = v10;
      v9 = 0;
    }
    if ( v9 < 0 )
    {
      if ( a3 )
      {
        NtdllpFreeStringRoutine(*v8);
        *v8 = 0LL;
        *v7 = 0;
      }
    }
    return (unsigned int)v9;
  }
  return result;
}
