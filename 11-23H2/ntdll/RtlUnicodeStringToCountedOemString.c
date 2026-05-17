/*
 * XREFs of RtlUnicodeStringToCountedOemString @ 0x1800F7190
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x180057B20 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeToOemN @ 0x180058F70 (RtlUnicodeToOemN.c)
 *     AllocateOrValidateCharStringBuffer @ 0x180059150 (AllocateOrValidateCharStringBuffer.c)
 *     RtlpDidUnicodeToOemWork @ 0x18008A640 (RtlpDidUnicodeToOemWork.c)
 */

__int64 __fastcall RtlUnicodeStringToCountedOemString(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned int v6; // eax
  __int64 result; // rax
  _WORD *v8; // r13
  __int64 *v9; // r14
  int v10; // esi
  unsigned int v11; // [rsp+98h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize((PWCH *)a2) - 1;
  v11 = v6;
  if ( v6 )
  {
    if ( v6 <= 0xFFFF )
    {
      v8 = (_WORD *)(a1 + 2);
      v9 = (__int64 *)(a1 + 8);
      result = AllocateOrValidateCharStringBuffer(a3, v6, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
      if ( (int)result >= 0 )
      {
        v10 = RtlUnicodeToOemN((_BYTE *)*v9, (unsigned __int16)*v8, (__int64)&v11, *((_QWORD *)a2 + 1), *a2);
        if ( v10 >= 0 )
        {
          *(_WORD *)a1 = v11;
          if ( !RtlpDidUnicodeToOemWork(a1, (__int64)a2) )
            v10 = -1073741470;
        }
        if ( v10 < 0 )
        {
          if ( a3 )
          {
            NtdllpFreeStringRoutine(*v9);
            *v9 = 0LL;
            *v8 = 0;
          }
        }
        return (unsigned int)v10;
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
