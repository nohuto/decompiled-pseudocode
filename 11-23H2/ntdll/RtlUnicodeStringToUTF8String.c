/*
 * XREFs of RtlUnicodeStringToUTF8String @ 0x180110EB0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 *     RtlUnicodeToUTF8N @ 0x180059C10 (RtlUnicodeToUTF8N.c)
 *     CountUnicodeToUTF8 @ 0x180059EE8 (CountUnicodeToUTF8.c)
 */

__int64 __fastcall RtlUnicodeStringToUTF8String(__int64 a1, unsigned int **a2, char a3)
{
  char v6; // r14
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 StringRoutine; // rax
  _WORD *v10; // rsi
  unsigned int v11; // ecx
  int v12; // ebx
  __int16 v13; // r8
  unsigned int v14; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0;
  result = CountUnicodeToUTF8(a2[1], *(unsigned __int16 *)a2, &v14);
  if ( (int)result >= 0 )
  {
    v8 = v14 + 1;
    v14 = v8;
    if ( v8 > 0xFFFF )
      return 3221225712LL;
    if ( a3 )
    {
      StringRoutine = NtdllpAllocateStringRoutine(v8);
      *(_QWORD *)(a1 + 8) = StringRoutine;
      if ( !StringRoutine )
        return 3221225495LL;
      v10 = (_WORD *)(a1 + 2);
      LOWORD(v11) = v8;
      *(_WORD *)(a1 + 2) = v8;
    }
    else
    {
      v10 = (_WORD *)(a1 + 2);
      v11 = *(unsigned __int16 *)(a1 + 2);
      if ( v8 > v11 )
      {
        if ( !(_WORD)v11 )
          return 2147483653LL;
        v6 = 1;
      }
    }
    v12 = RtlUnicodeToUTF8N(
            *(_BYTE **)(a1 + 8),
            (unsigned int)(unsigned __int16)v11 - 1,
            &v14,
            a2[1],
            *(unsigned __int16 *)a2);
    if ( v12 < 0 )
    {
      if ( a3 )
      {
        NtdllpFreeStringRoutine(*(_QWORD *)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        *v10 = 0;
      }
    }
    else
    {
      v13 = v14;
      *(_BYTE *)(v14 + *(_QWORD *)(a1 + 8)) = 0;
      *(_WORD *)a1 = v13;
      if ( v6 )
        return (unsigned int)-2147483643;
    }
    return (unsigned int)v12;
  }
  return result;
}
