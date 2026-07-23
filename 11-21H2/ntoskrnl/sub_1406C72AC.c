/*
 * XREFs of sub_1406C72AC @ 0x1406C72AC
 * Callers:
 *     sub_1407855F0 @ 0x1407855F0 (sub_1407855F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406C72AC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5, int a6, _DWORD *a7)
{
  __int64 (**v7)[3]; // r8
  unsigned int v8; // r11d
  unsigned int v9; // r10d
  __int64 *v10; // rdx
  unsigned int v11; // r10d
  __int64 **v12; // r8
  __int64 *v13; // rdx
  __int64 **v14; // rdx
  unsigned int v15; // r8d
  __int64 *v16; // r10
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx

  v7 = &off_140A3AC00;
  v8 = -1073741802;
  v9 = 0;
  *a7 = 0;
  while ( 1 )
  {
    v10 = (__int64 *)*v7;
    if ( *v7 && *(_DWORD *)(a4 + 16) == *((_DWORD *)v10 + 4) )
    {
      v19 = *(_QWORD *)a4 - *v10;
      if ( *(_QWORD *)a4 == *v10 )
        v19 = *(_QWORD *)(a4 + 8) - v10[1];
      if ( !v19 )
        break;
    }
    ++v9;
    v7 += 3;
    if ( v9 >= 0x21 )
    {
      v11 = 0;
      v12 = &off_140A38610;
      while ( 1 )
      {
        v13 = *v12;
        if ( *v12 && *(_DWORD *)(a4 + 16) == *((_DWORD *)v13 + 4) )
        {
          v20 = *(_QWORD *)a4 - *v13;
          if ( *(_QWORD *)a4 == *v13 )
            v20 = *(_QWORD *)(a4 + 8) - v13[1];
          if ( !v20 )
            goto LABEL_20;
        }
        ++v11;
        v12 += 4;
        if ( v11 >= 2 )
        {
          v14 = &off_140A3A8C0;
          v15 = 0;
          while ( 1 )
          {
            v16 = *v14;
            if ( *(_DWORD *)(a4 + 16) == *((_DWORD *)*v14 + 4) )
            {
              v18 = *(_QWORD *)a4 - *v16;
              if ( *(_QWORD *)a4 == *v16 )
                v18 = *(_QWORD *)(a4 + 8) - v16[1];
              if ( !v18 )
                break;
            }
            ++v15;
            v14 += 2;
            if ( v15 >= 0x1C )
              return v8;
          }
          goto LABEL_20;
        }
      }
    }
  }
LABEL_20:
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
