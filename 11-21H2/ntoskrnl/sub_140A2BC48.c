/*
 * XREFs of sub_140A2BC48 @ 0x140A2BC48
 * Callers:
 *     sub_1406BD260 @ 0x1406BD260 (sub_1406BD260.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A2BC48(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5, int a6, _DWORD *a7)
{
  __int64 **v7; // r8
  unsigned int v8; // ebx
  unsigned int v9; // r10d
  __int64 *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r10d
  __int64 (**v13)[6]; // r8
  __int64 *v14; // rdx
  __int64 v15; // rcx
  int v16; // r11d
  __int64 **v17; // rdx
  unsigned int v18; // r8d
  __int64 *v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rax

  v7 = &off_140A39560;
  v8 = -1073741802;
  v9 = 0;
  *a7 = 0;
  while ( 1 )
  {
    v10 = *v7;
    if ( *v7 && *(_DWORD *)(a4 + 16) == *((_DWORD *)v10 + 4) )
    {
      v11 = *(_QWORD *)a4 - *v10;
      if ( *(_QWORD *)a4 == *v10 )
        v11 = *(_QWORD *)(a4 + 8) - v10[1];
      if ( !v11 )
        break;
    }
    ++v9;
    v7 += 3;
    if ( v9 >= 9 )
    {
      v12 = 0;
      v13 = &off_140A39F60;
      while ( 1 )
      {
        v14 = (__int64 *)*v13;
        if ( *v13 && *(_DWORD *)(a4 + 16) == *((_DWORD *)v14 + 4) )
        {
          v15 = *(_QWORD *)a4 - *v14;
          if ( *(_QWORD *)a4 == *v14 )
            v15 = *(_QWORD *)(a4 + 8) - v14[1];
          if ( !v15 )
            goto LABEL_25;
        }
        ++v12;
        v13 += 4;
        if ( v12 >= 0xD )
        {
          v16 = *(_DWORD *)(a4 + 16);
          v17 = &off_140A38810;
          v18 = 0;
          while ( 1 )
          {
            v19 = *v17;
            if ( v16 == *((_DWORD *)*v17 + 4) )
            {
              v20 = *(_QWORD *)a4 - *v19;
              if ( *(_QWORD *)a4 == *v19 )
                v20 = *(_QWORD *)(a4 + 8) - v19[1];
              if ( !v20 )
                goto LABEL_25;
            }
            ++v18;
            v17 += 2;
            if ( v18 >= 4 )
            {
              if ( v16 != 2 )
                return v8;
              v21 = *(_QWORD *)a4 - 0x49F5A2E2713D1703LL;
              if ( *(_QWORD *)a4 == 0x49F5A2E2713D1703LL )
                v21 = *(_QWORD *)(a4 + 8) - 0x5CDAF32E47561492LL;
              if ( v21 )
                return v8;
              goto LABEL_25;
            }
          }
        }
      }
    }
  }
LABEL_25:
  *a7 = 1;
  if ( a6 )
  {
    v8 = 0;
    *a5 = 0;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v8;
}
