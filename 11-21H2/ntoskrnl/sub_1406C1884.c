/*
 * XREFs of sub_1406C1884 @ 0x1406C1884
 * Callers:
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A1A928 @ 0x140A1A928 (sub_140A1A928.c)
 *     sub_140A1AC54 @ 0x140A1AC54 (sub_140A1AC54.c)
 */

__int64 __fastcall sub_1406C1884(_DWORD *a1, _OWORD *a2, unsigned int a3, _DWORD *a4)
{
  size_t v7; // rsi
  __int64 result; // rax
  int v9; // ebx
  size_t v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  *a4 = 0;
  v7 = a3;
  if ( *a1 )
  {
    result = sub_140A1AC54(a1, &v10);
    if ( (int)result >= 0 )
    {
      v9 = v10;
      if ( v10 )
      {
        if ( v7 >= v10 )
        {
          memset(a2, 0, v7);
          result = sub_140A1A928(a1, a2, v7);
        }
        else
        {
          result = 3221225507LL;
        }
        *a4 = v9;
      }
      else
      {
        return 3221225485LL;
      }
    }
  }
  else
  {
    if ( a3 < 0x10 )
    {
      result = 3221225507LL;
    }
    else
    {
      *a2 = 0LL;
      *(_WORD *)a2 = 1;
      result = 0LL;
    }
    *a4 = 16;
  }
  return result;
}
