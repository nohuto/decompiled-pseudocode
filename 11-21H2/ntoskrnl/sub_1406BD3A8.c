/*
 * XREFs of sub_1406BD3A8 @ 0x1406BD3A8
 * Callers:
 *     sub_1406BD260 @ 0x1406BD260 (sub_1406BD260.c)
 * Callees:
 *     sub_1406BD5D8 @ 0x1406BD5D8 (sub_1406BD5D8.c)
 *     sub_1406BD994 @ 0x1406BD994 (sub_1406BD994.c)
 *     sub_1406BDEE4 @ 0x1406BDEE4 (sub_1406BDEE4.c)
 *     sub_1406BE094 @ 0x1406BE094 (sub_1406BE094.c)
 */

__int64 __fastcall sub_1406BD3A8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  unsigned int v12; // r10d
  __int64 **v13; // r8
  __int64 *v14; // rdx
  __int64 (**v15)[6]; // r8
  unsigned int v16; // r9d
  __int64 *v17; // rdx
  __int64 **v18; // r8
  unsigned int v19; // r9d
  __int64 *v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax

  v12 = -1073741802;
  *a9 = 0;
  if ( !a4 )
  {
    v13 = &off_140A39560;
    while ( 1 )
    {
      v14 = *v13;
      if ( *v13 && *(_DWORD *)(a5 + 16) == *((_DWORD *)v14 + 4) )
      {
        v24 = *(_QWORD *)a5 - *v14;
        if ( *(_QWORD *)a5 == *v14 )
          v24 = *(_QWORD *)(a5 + 8) - v14[1];
        if ( !v24 )
          break;
      }
      LODWORD(a4) = a4 + 1;
      v13 += 3;
      if ( (unsigned int)a4 >= 9 )
        goto LABEL_6;
    }
    v12 = sub_1406BD994(a1, a2, a3, a5, a6, a7, a8, (__int64)a9);
    if ( v12 != -1073741802 )
      return v12;
LABEL_6:
    v15 = &off_140A39F60;
    v16 = 0;
    while ( 1 )
    {
      v17 = (__int64 *)*v15;
      if ( *(_DWORD *)(a5 + 16) == LODWORD((**v15)[2]) )
      {
        v23 = *(_QWORD *)a5 - *v17;
        if ( *(_QWORD *)a5 == *v17 )
          v23 = *(_QWORD *)(a5 + 8) - v17[1];
        if ( !v23 )
          break;
      }
      ++v16;
      v15 += 4;
      if ( v16 >= 0xD )
        goto LABEL_9;
    }
    v12 = sub_1406BDEE4(a1, a2, a3, a5, a6, a7, a8, a9);
    if ( v12 != -1073741802 )
      return v12;
LABEL_9:
    if ( *(_DWORD *)(a5 + 16) != 2 )
      goto LABEL_10;
    v25 = *(_QWORD *)a5 - 0x49F5A2E2713D1703LL;
    if ( *(_QWORD *)a5 == 0x49F5A2E2713D1703LL )
      v25 = *(_QWORD *)(a5 + 8) - 0x5CDAF32E47561492LL;
    if ( v25 || (v12 = sub_1406BE094(a1, a2, v15, a6, a7, a8, a9), v12 == -1073741802) )
    {
LABEL_10:
      v18 = &off_140A38810;
      v19 = 0;
      while ( 1 )
      {
        v20 = *v18;
        if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)*v18 + 4) )
        {
          v21 = *(_QWORD *)a5 - *v20;
          if ( *(_QWORD *)a5 == *v20 )
            v21 = *(_QWORD *)(a5 + 8) - v20[1];
          if ( !v21 )
            break;
        }
        ++v19;
        v18 += 2;
        if ( v19 >= 4 )
          return v12;
      }
      return (unsigned int)sub_1406BD5D8(a1, a2, a3, a5, a6, a7, a8, (__int64)a9);
    }
  }
  return v12;
}
