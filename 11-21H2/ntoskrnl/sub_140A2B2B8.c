/*
 * XREFs of sub_140A2B2B8 @ 0x140A2B2B8
 * Callers:
 *     sub_140785470 @ 0x140785470 (sub_140785470.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A2B2B8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5, int a6, _DWORD *a7)
{
  __int64 **v7; // r10
  unsigned int v8; // edx
  unsigned int v9; // r11d
  __int64 *v10; // r8
  __int64 v11; // rcx
  __int64 **v12; // r8
  unsigned int v13; // r10d
  __int64 *v14; // r11
  __int64 v15; // rcx

  v7 = &off_140A380C0;
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
    v7 += 2;
    if ( v9 >= 3 )
    {
      v12 = &off_140A38850;
      v13 = 0;
      while ( 1 )
      {
        v14 = *v12;
        if ( *(_DWORD *)(a4 + 16) == *((_DWORD *)*v12 + 4) )
        {
          v15 = *(_QWORD *)a4 - *v14;
          if ( *(_QWORD *)a4 == *v14 )
            v15 = *(_QWORD *)(a4 + 8) - v14[1];
          if ( !v15 )
            break;
        }
        ++v13;
        v12 += 2;
        if ( v13 >= 4 )
          return v8;
      }
      break;
    }
  }
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
