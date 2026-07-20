/*
 * XREFs of FindLFNorSFN_U @ 0x140013AB4
 * Callers:
 *     GetLongPathNameW @ 0x140013BCC (GetLongPathNameW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindLFNorSFN_U(__int16 *a1, __int16 **a2, __int16 **a3)
{
  __int64 result; // rax
  __int16 v7; // cx
  __int16 v8; // r8
  __int16 *i; // rcx
  __int16 v10; // ax
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // r10d

  result = 0LL;
  while ( *a1 )
  {
    v7 = *a1;
    do
    {
      if ( v7 != 92 )
      {
        v8 = v7;
        if ( v7 != 47 )
          break;
      }
      v8 = *++a1;
      v7 = *a1;
    }
    while ( *a1 );
    if ( !v8 )
      break;
    for ( i = a1 + 1; ; ++i )
    {
      v10 = *i;
      if ( !*i || v10 == 92 || v10 == 47 )
        break;
    }
    v11 = i - a1;
    if ( (_DWORD)v11 && (int)v11 <= 12 && v8 != 46 )
    {
      v12 = 0;
      v13 = 0LL;
      if ( (int)v11 > 0 )
      {
        v14 = v11 - 1;
        do
        {
          if ( a1[v13] == 46 )
          {
            if ( v12 || v14 > 3 )
              goto LABEL_29;
            v12 = 1;
          }
          if ( v13 >= 8 && !v12 )
            goto LABEL_29;
          --v14;
          ++v13;
        }
        while ( v13 < (int)v11 );
      }
      result = 1LL;
      if ( a2 )
      {
        if ( a3 )
        {
          *a2 = a1;
          *a3 = i;
        }
      }
      return result;
    }
LABEL_29:
    result = 0LL;
    if ( !*i )
      return result;
    a1 = i + 1;
  }
  return result;
}
