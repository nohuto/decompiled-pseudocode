/*
 * XREFs of ApiSetpFindHashInsertionPoint_V7 @ 0x140419700
 * Callers:
 *     ApiSetpInsertHashEntry_V7 @ 0x1404197FC (ApiSetpInsertHashEntry_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpFindHashInsertionPoint_V7(__int64 a1, __int64 a2, unsigned int a3, int *a4)
{
  int v5; // ecx
  int v9; // r8d
  unsigned int *v10; // rax
  __int64 v11; // r9
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // ebx

  *a4 = 0;
  v5 = *(_DWORD *)(a2 + 4);
  if ( !v5 )
    return 0LL;
  v9 = 0;
  v10 = 0LL;
  v11 = *(_DWORD *)a2 + v5 * (unsigned int)*(unsigned __int8 *)(a2 + 10);
  v12 = 0;
  v13 = v5 - 1;
  if ( v13 < 0 )
  {
LABEL_11:
    if ( v10 )
    {
      if ( v12 <= v9 )
      {
        if ( v13 >= v9 )
        {
          if ( v12 == v13 )
          {
            if ( a3 >= *v10 )
              ++v9;
            goto LABEL_22;
          }
        }
        else if ( a3 < *v10 )
        {
          goto LABEL_22;
        }
      }
      else if ( a3 < *(_DWORD *)(v11 + a1 + 8LL * v9 + 8 - *(unsigned __int16 *)(a1 + 6)) )
      {
        ++v9;
LABEL_22:
        *a4 = v9;
        return 0LL;
      }
    }
    return 3221225701LL;
  }
  while ( 1 )
  {
    v9 = (v12 + v13) >> 1;
    v10 = (unsigned int *)(a1 + (unsigned int)v11 + 8LL * v9 - *(unsigned __int16 *)(a1 + 6));
    v14 = *v10;
    if ( a3 == *v10 )
      return 0x40000000LL;
    if ( v12 != v13 )
    {
      if ( a3 >= v14 )
      {
        if ( a3 > v14 )
          v12 = v9 + 1;
      }
      else
      {
        v13 = v9 - 1;
      }
      if ( v12 <= v13 )
        continue;
    }
    goto LABEL_11;
  }
}
