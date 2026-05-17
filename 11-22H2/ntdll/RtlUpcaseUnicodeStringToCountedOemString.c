/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x1800F5FE0
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x180109310 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x180057C80 (RtlxUnicodeStringToOemSize.c)
 *     AllocateOrValidateCharStringBuffer @ 0x180059270 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUpcaseUnicodeToOemN @ 0x180089DE0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x180089E40 (RtlpDidUnicodeToOemWork.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToCountedOemString(__int64 a1, PWCH *a2, char a3)
{
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 *v8; // r14
  int v9; // esi
  __int16 v10; // [rsp+98h] [rbp+20h]

  v6 = RtlxUnicodeStringToOemSize(a2) - 1;
  v10 = v6;
  if ( v6 )
  {
    if ( v6 <= 0xFFFF )
    {
      v8 = (__int64 *)(a1 + 8);
      result = AllocateOrValidateCharStringBuffer(a3, v6, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
      if ( (int)result >= 0 )
      {
        v9 = RtlUpcaseUnicodeToOemN();
        if ( v9 >= 0 )
        {
          *(_WORD *)a1 = v10;
          if ( !RtlpDidUnicodeToOemWork(a1, (__int64)a2) )
            v9 = -1073741470;
        }
        if ( v9 < 0 )
        {
          if ( a3 )
          {
            NtdllpFreeStringRoutine(*v8);
            *v8 = 0LL;
            *(_WORD *)(a1 + 2) = 0;
          }
        }
        return (unsigned int)v9;
      }
    }
    else
    {
      return 3221225712LL;
    }
  }
  else
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
    return 0LL;
  }
  return result;
}
