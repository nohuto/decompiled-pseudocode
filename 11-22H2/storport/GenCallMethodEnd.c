/*
 * XREFs of GenCallMethodEnd @ 0x1C008060C
 * Callers:
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 * Callees:
 *     GenTinyInteger @ 0x1C0080D78 (GenTinyInteger.c)
 */

__int64 __fastcall GenCallMethodEnd(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)(v2 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v2 + *(_QWORD *)a1) = -15;
  v3 = (unsigned int)++*(_DWORD *)(a1 + 12);
  if ( (unsigned int)(v3 + 1) <= *(_DWORD *)(a1 + 8) )
  {
    *(_BYTE *)(v3 + *(_QWORD *)a1) = -7;
    v3 = (unsigned int)++*(_DWORD *)(a1 + 12);
    result = 0LL;
  }
  else
  {
    result = 3221225507LL;
  }
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)(v3 + 1) > *(_DWORD *)(a1 + 8) )
      return 3221225507LL;
    *(_BYTE *)(v3 + *(_QWORD *)a1) = -16;
    ++*(_DWORD *)(a1 + 12);
    result = GenTinyInteger(a1);
    if ( (int)result >= 0 )
    {
      result = GenTinyInteger(a1);
      if ( (int)result >= 0 )
      {
        result = GenTinyInteger(a1);
        if ( (int)result >= 0 )
        {
          v5 = *(unsigned int *)(a1 + 12);
          if ( (unsigned int)(v5 + 1) > *(_DWORD *)(a1 + 8) )
            return 3221225507LL;
          *(_BYTE *)(v5 + *(_QWORD *)a1) = -15;
          ++*(_DWORD *)(a1 + 12);
          return 0LL;
        }
      }
    }
  }
  return result;
}
