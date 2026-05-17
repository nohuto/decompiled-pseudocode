/*
 * XREFs of RtlUTF8StringToUnicodeString @ 0x1800558B0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     RtlUTF8ToUnicodeN @ 0x180055990 (RtlUTF8ToUnicodeN.c)
 *     CountUTF8ToUnicode @ 0x180055D40 (CountUTF8ToUnicode.c)
 */

__int64 __fastcall RtlUTF8StringToUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  __int64 result; // rax
  unsigned int v7; // edi
  __int64 StringRoutine; // rax
  unsigned int v9; // ecx
  int v10; // edi
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  result = CountUTF8ToUnicode(*((_QWORD *)a2 + 1), *a2, &v13);
  if ( (int)result >= 0 )
  {
    v7 = v13 + 2;
    v13 = v7;
    if ( v7 > 0xFFFE )
      return 3221225712LL;
    if ( a3 )
    {
      StringRoutine = NtdllpAllocateStringRoutine(v7);
      *(_QWORD *)(a1 + 8) = StringRoutine;
      if ( !StringRoutine )
        return 3221225495LL;
      *(_WORD *)(a1 + 2) = v7;
      LOWORD(v9) = v7;
    }
    else
    {
      v9 = *(unsigned __int16 *)(a1 + 2);
      if ( v7 > v9 )
        return 2147483653LL;
    }
    v10 = RtlUTF8ToUnicodeN(*(_QWORD *)(a1 + 8), (unsigned __int16)v9, (unsigned int)&v13, *((_QWORD *)a2 + 1), *a2);
    if ( v10 < 0 )
    {
      if ( a3 )
      {
        NtdllpFreeStringRoutine(*(_QWORD *)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_WORD *)(a1 + 2) = 0;
      }
      return (unsigned int)v10;
    }
    v11 = v13;
    v12 = *(unsigned __int16 *)(a1 + 2);
    *(_WORD *)a1 = v13;
    if ( (unsigned int)v11 < v12 )
    {
      v10 = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * (v11 >> 1)) = 0;
      return (unsigned int)v10;
    }
    return 2147483653LL;
  }
  return result;
}
