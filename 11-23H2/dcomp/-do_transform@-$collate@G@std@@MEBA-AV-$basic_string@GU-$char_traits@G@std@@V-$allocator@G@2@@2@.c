/*
 * XREFs of ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x180150920
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAG_K@Z @ 0x1800A3548 (--A-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAG_K@Z.c)
 *     ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x18014E970 (--$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@-$basic_string@GU-$char_t.c)
 */

char *__fastcall std::collate<unsigned short>::do_transform(
        const _Collvec *a1,
        char *a2,
        unsigned __int64 a3,
        const wchar_t *a4)
{
  const wchar_t *v6; // rbp
  size_t v7; // rdi
  unsigned __int64 v8; // rdx
  const _Collvec *v9; // r14
  __int64 *v10; // rax
  unsigned __int64 v11; // rcx
  bool v12; // cf
  __int64 *v13; // r9
  _WORD *v14; // rdi
  unsigned __int64 v15; // r9
  wchar_t *v16; // rax
  wchar_t *v17; // rdx
  size_t v18; // rax
  __int64 *v19; // rax
  unsigned __int64 v20; // rcx
  __int64 *v21; // r8
  _WORD *v22; // rdi

  *((_QWORD *)a2 + 3) = 7LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  v6 = (const wchar_t *)a3;
  v7 = 0LL;
  v8 = (__int64)((__int64)a4 - a3) >> 1;
  if ( v8 )
  {
    a3 = 0LL;
    v9 = a1 + 1;
    do
    {
      if ( v8 > a3 )
      {
        v11 = v8 - a3;
        if ( v8 - a3 > *((_QWORD *)a2 + 3) - a3 )
        {
          v15 = v8 - a3;
          LOBYTE(a3) = 0;
          std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
            a2,
            v15,
            a3,
            v15);
        }
        else
        {
          v12 = *((_QWORD *)a2 + 3) < 8uLL;
          v13 = (__int64 *)a2;
          *((_QWORD *)a2 + 2) = v8;
          if ( !v12 )
            v13 = *(__int64 **)a2;
          v14 = (_WORD *)v13 + a3;
          if ( v11 )
          {
            while ( v11 )
            {
              *v14++ = 0;
              --v11;
            }
          }
          *((_WORD *)v13 + v8) = 0;
        }
      }
      else
      {
        v10 = (__int64 *)a2;
        if ( *((_QWORD *)a2 + 3) >= 8uLL )
          v10 = *(__int64 **)a2;
        *((_QWORD *)a2 + 2) = v8;
        *((_WORD *)v10 + v8) = 0;
      }
      std::wstring::operator[](a2);
      v16 = (wchar_t *)std::wstring::operator[](a2);
      v18 = _Wcsxfrm(v16, v17, v6, a4, v9);
      v7 = *((_QWORD *)a2 + 2);
      v8 = v18;
      if ( v18 <= v7 )
        break;
      a3 = *((_QWORD *)a2 + 2);
    }
    while ( v18 );
  }
  if ( v8 > v7 )
  {
    v20 = v8 - v7;
    if ( v8 - v7 > *((_QWORD *)a2 + 3) - v7 )
    {
      LOBYTE(a3) = 0;
      std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
        a2,
        v8 - v7,
        a3,
        v8 - v7);
    }
    else
    {
      v12 = *((_QWORD *)a2 + 3) < 8uLL;
      v21 = (__int64 *)a2;
      *((_QWORD *)a2 + 2) = v8;
      if ( !v12 )
        v21 = *(__int64 **)a2;
      v22 = (_WORD *)v21 + v7;
      if ( v20 )
      {
        while ( v20 )
        {
          *v22++ = 0;
          --v20;
        }
      }
      *((_WORD *)v21 + v8) = 0;
    }
  }
  else
  {
    v19 = (__int64 *)a2;
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      v19 = *(__int64 **)a2;
    *((_QWORD *)a2 + 2) = v8;
    *((_WORD *)v19 + v8) = 0;
  }
  return a2;
}
