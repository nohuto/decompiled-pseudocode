/*
 * XREFs of sub_1800E1DE0 @ 0x1800E1DE0
 * Callers:
 *     sub_1800E0A7C @ 0x1800E0A7C (sub_1800E0A7C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18002ABBC @ 0x18002ABBC (sub_18002ABBC.c)
 *     sub_1800DE9B0 @ 0x1800DE9B0 (sub_1800DE9B0.c)
 */

_QWORD *__fastcall sub_1800E1DE0(__int64 ***a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  __int64 **v4; // rsi
  __int64 *j; // rbx
  char *v9; // rbx
  char *v10; // rcx
  _QWORD *result; // rax
  __int64 ***v12; // r8
  __int64 *v13; // rdx
  __int64 **v14; // rax
  __int64 *i; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rax
  __int64 k; // rcx
  __int64 *m; // rcx
  __int64 *v20; // rax

  v4 = *a1;
  j = a3;
  if ( a3 == **a1 && *(_BYTE *)(a4 + 25) )
  {
    v9 = (char *)v4[1];
    while ( !v9[25] )
    {
      sub_1800DE9B0((__int64)a1, (__int64)a1, *((char **)v9 + 2));
      v10 = v9;
      v9 = *(char **)v9;
      sub_180010884(v10, 0x48uLL);
    }
    v4[1] = (__int64 *)v4;
    *v4 = (__int64 *)v4;
    v4[2] = (__int64 *)v4;
    a1[1] = 0LL;
  }
  else
  {
    while ( j != (__int64 *)a4 )
    {
      v12 = (__int64 ***)(j + 2);
      v13 = j;
      v14 = (__int64 **)j[2];
      if ( *((_BYTE *)v14 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v16 = *v14;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v16 + 25); v16 = (__int64 *)*v16 )
          j = v16;
      }
      v17 = v13;
      if ( *((_BYTE *)*v12 + 25) )
      {
        for ( k = v13[1]; !*(_BYTE *)(k + 25) && v17 == *(__int64 **)(k + 16); k = *(_QWORD *)(k + 8) )
          v17 = (__int64 *)k;
      }
      else
      {
        for ( m = **v12; !*((_BYTE *)m + 25); m = (__int64 *)*m )
          ;
      }
      v20 = sub_18002ABBC(a1, v13);
      sub_180010884((char *)v20, 0x48uLL);
    }
  }
  result = a2;
  *a2 = a4;
  return result;
}
