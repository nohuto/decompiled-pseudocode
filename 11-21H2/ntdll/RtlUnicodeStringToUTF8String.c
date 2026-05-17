/*
 * XREFs of RtlUnicodeStringToUTF8String @ 0x18010F860
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     RtlUnicodeToUTF8N @ 0x18005E6B0 (RtlUnicodeToUTF8N.c)
 *     CountUnicodeToUTF8 @ 0x18005E96C (CountUnicodeToUTF8.c)
 */

__int64 __fastcall RtlUnicodeStringToUTF8String(__int64 a1, unsigned int **a2, char a3)
{
  char v6; // bp
  __int64 result; // rax
  unsigned int v8; // edi
  __int64 StringRoutine; // rax
  unsigned int v10; // ecx
  int v11; // edi
  __int16 v12; // r8
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  result = CountUnicodeToUTF8(a2[1], *(unsigned __int16 *)a2, &v13);
  if ( (int)result >= 0 )
  {
    v8 = v13 + 1;
    v13 = v8;
    if ( v8 > 0xFFFF )
      return 3221225712LL;
    if ( a3 )
    {
      StringRoutine = NtdllpAllocateStringRoutine(v8);
      *(_QWORD *)(a1 + 8) = StringRoutine;
      if ( !StringRoutine )
        return 3221225495LL;
      *(_WORD *)(a1 + 2) = v8;
      LOWORD(v10) = v8;
    }
    else
    {
      v10 = *(unsigned __int16 *)(a1 + 2);
      if ( v8 > v10 )
      {
        if ( !(_WORD)v10 )
          return 2147483653LL;
        v6 = 1;
      }
    }
    v11 = RtlUnicodeToUTF8N(
            *(_BYTE **)(a1 + 8),
            (unsigned int)(unsigned __int16)v10 - 1,
            &v13,
            a2[1],
            *(unsigned __int16 *)a2);
    if ( v11 < 0 )
    {
      if ( a3 )
      {
        NtdllpFreeStringRoutine(*(_QWORD *)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_WORD *)(a1 + 2) = 0;
      }
    }
    else
    {
      v12 = v13;
      *(_BYTE *)(v13 + *(_QWORD *)(a1 + 8)) = 0;
      *(_WORD *)a1 = v12;
      if ( v6 )
        return (unsigned int)-2147483643;
    }
    return (unsigned int)v11;
  }
  return result;
}
