/*
 * XREFs of ?ReplaceStringStartInPlace@@YAJPEAG_KPEBG1@Z @ 0x1807383C8
 * Callers:
 *     PiiFilterExecute @ 0x1807384B4 (PiiFilterExecute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReplaceStringStartInPlace(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        const unsigned __int16 *a3,
        int a4)
{
  __int64 v4; // r11
  unsigned __int64 v5; // rbx
  unsigned int v6; // r10d
  int v9; // r9d
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int16 *v12; // rcx
  unsigned __int16 v13; // ax
  unsigned __int64 v14; // r11
  unsigned __int16 *v15; // rcx
  __int64 v16; // r11
  unsigned int v17; // edx
  __int64 v18; // rax

  v4 = -1LL;
  v5 = -1LL;
  v6 = 0;
  do
    ++v5;
  while ( a3[v5] );
  v9 = a4 - v5;
  v10 = -1LL;
  do
    ++v10;
  while ( a1[v10] );
  if ( a2 >= v10 - v9 )
  {
    if ( v9 <= 0 )
    {
      if ( v9 < 0 )
      {
        do
          ++v4;
        while ( a1[v4] );
        v14 = v4 - v9;
        if ( v14 >= v5 )
        {
          v15 = &a1[v14];
          v16 = v14 - v5 + 1;
          do
          {
            *v15 = v15[v9];
            --v15;
            --v16;
          }
          while ( v16 );
        }
      }
    }
    else
    {
      v11 = v5;
      if ( v5 < a2 )
      {
        v12 = &a1[v5];
        do
        {
          v13 = v12[v9];
          *v12 = v13;
          if ( !v13 )
            break;
          ++v11;
          ++v12;
        }
        while ( v11 < a2 );
      }
    }
    v17 = 0;
    if ( v5 )
    {
      v18 = 0LL;
      do
      {
        ++v17;
        a1[v18] = a3[v18];
        v18 = v17;
      }
      while ( v17 < v5 );
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v6;
}
