/*
 * XREFs of sub_14099D934 @ 0x14099D934
 * Callers:
 *     sub_14099DB50 @ 0x14099DB50 (sub_14099DB50.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_1407FCE7C @ 0x1407FCE7C (sub_1407FCE7C.c)
 */

char __fastcall sub_14099D934(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  int **v4; // r14
  __int64 v5; // rbp
  char v6; // r12
  __int64 v7; // r13
  const wchar_t *v8; // r15
  wchar_t **v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v15; // [rsp+30h] [rbp-68h] BYREF
  int v16; // [rsp+34h] [rbp-64h]
  __int64 *v17; // [rsp+38h] [rbp-60h]
  __int128 v18; // [rsp+40h] [rbp-58h] BYREF

  v16 = a2;
  v18 = 0LL;
  v3 = 0LL;
  v4 = (int **)(a3 + 24);
  v5 = 0LL;
  v6 = 0;
  v17 = a1;
  v7 = 20LL;
  do
  {
    v8 = (const wchar_t *)*(v4 - 1);
    v9 = &off_140D05940;
    v10 = 0;
    while ( wcsicmp(v8, *v9) )
    {
      ++v10;
      v9 += 2;
      if ( v10 >= 0x14 )
        goto LABEL_7;
    }
    v18 = *(_OWORD *)v9[1];
    v3 = *((_QWORD *)&v18 + 1);
    v5 = v18;
LABEL_7:
    v15 = **v4;
    if ( v15 != -1 )
    {
      v11 = v5 - 0x46A1752F99B3EF01LL;
      if ( v5 == 0x46A1752F99B3EF01LL )
        v11 = v3 - 0x54231F013077FB80LL;
      if ( v11 )
      {
        v12 = v5 - 0x45A9ABD60300F6F8LL;
        if ( v5 == 0x45A9ABD60300F6F8LL )
          v12 = v3 + 0x4ABFE596F7B6B049LL;
        if ( v12 )
        {
          v13 = v5 - 0x42CD8F1A77D7F282LL;
          if ( v5 == 0x42CD8F1A77D7F282LL )
            v13 = v3 + 0x17647CF5BABAC87BLL;
          if ( v13 )
          {
            v6 = 1;
            sub_1407FCE7C(v17, &v18, v16, (__int64)&v15, 4);
            v3 = *((_QWORD *)&v18 + 1);
            v5 = v18;
          }
          else
          {
            dword_140C1D024 |= 0x10u;
          }
        }
        else
        {
          dword_140C1D024 |= 8u;
        }
      }
      else
      {
        dword_140C1D024 |= 4u;
      }
    }
    v4 += 7;
    --v7;
  }
  while ( v7 );
  return v6;
}
