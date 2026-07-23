/*
 * XREFs of sub_140785A3C @ 0x140785A3C
 * Callers:
 *     sub_140785470 @ 0x140785470 (sub_140785470.c)
 * Callees:
 *     sub_1406CC2C8 @ 0x1406CC2C8 (sub_1406CC2C8.c)
 *     sub_1407872FC @ 0x1407872FC (sub_1407872FC.c)
 */

__int64 __fastcall sub_140785A3C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  unsigned int v12; // r10d
  __int64 **v13; // r8
  __int64 *v14; // rdx
  __int64 **v15; // r8
  unsigned int v16; // r9d
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rcx

  v12 = -1073741802;
  *a9 = 0;
  if ( !a4 )
  {
    v13 = &off_140A380C0;
    while ( 1 )
    {
      v14 = *v13;
      if ( *v13 && *(_DWORD *)(a5 + 16) == *((_DWORD *)v14 + 4) )
      {
        v20 = *(_QWORD *)a5 - *v14;
        if ( *(_QWORD *)a5 == *v14 )
          v20 = *(_QWORD *)(a5 + 8) - v14[1];
        if ( !v20 )
          break;
      }
      LODWORD(a4) = a4 + 1;
      v13 += 2;
      if ( (unsigned int)a4 >= 3 )
        goto LABEL_6;
    }
    v12 = sub_1406CC2C8(a1, a2, a3, a5, a6, a7, a8, a9);
    if ( v12 != -1073741802 )
      return v12;
LABEL_6:
    v15 = &off_140A38850;
    v16 = 0;
    while ( 1 )
    {
      v17 = *v15;
      if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)*v15 + 4) )
      {
        v18 = *(_QWORD *)a5 - *v17;
        if ( *(_QWORD *)a5 == *v17 )
          v18 = *(_QWORD *)(a5 + 8) - v17[1];
        if ( !v18 )
          break;
      }
      ++v16;
      v15 += 2;
      if ( v16 >= 4 )
        return v12;
    }
    return (unsigned int)sub_1407872FC(a1, a2, a3, a5, (__int64)a6, a7, a8, (__int64)a9);
  }
  return v12;
}
