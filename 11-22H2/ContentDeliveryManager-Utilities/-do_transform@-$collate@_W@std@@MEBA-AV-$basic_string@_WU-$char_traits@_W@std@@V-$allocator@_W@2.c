/*
 * XREFs of ?do_transform@?$collate@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PEB_W0@Z @ 0x18001BB80
 * Callers:
 *     <none>
 * Callees:
 *     _Wcsxfrm @ 0x180021D08 (_Wcsxfrm.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x1800B8C70 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::collate<wchar_t>::do_transform(
        const _Collvec *a1,
        __int64 *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  size_t v8; // rax
  size_t v9; // rcx
  const _Collvec *v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  wchar_t *v14; // rdx
  wchar_t *v15; // rcx
  __int64 *v16; // rcx

  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  v8 = a4 - a3;
  v9 = 0LL;
  if ( v8 )
  {
    v10 = a1 + 1;
    v11 = 0LL;
    while ( 1 )
    {
      if ( v8 > v11 )
      {
        std::wstring::append(a2, v8 - v11, 0LL);
      }
      else
      {
        v12 = (unsigned __int64)a2[3] < 8 ? (__int64)a2 : *a2;
        a2[2] = v8;
        *(_WORD *)(v12 + 2 * v8) = 0;
      }
      v13 = (unsigned __int64)a2[3] < 8 ? (__int64)a2 : *a2;
      v14 = (wchar_t *)(v13 + 2 * a2[2]);
      v15 = (unsigned __int64)a2[3] < 8 ? (wchar_t *)a2 : (wchar_t *)*a2;
      v8 = Wcsxfrm(v15, v14, a3, a4, v10);
      v9 = a2[2];
      if ( v8 <= v9 )
        break;
      v11 = a2[2];
      if ( !v8 )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    if ( v8 > v9 )
    {
      std::wstring::append(a2, v8 - v9, 0LL);
      return a2;
    }
  }
  if ( (unsigned __int64)a2[3] < 8 )
    v16 = a2;
  else
    v16 = (__int64 *)*a2;
  a2[2] = v8;
  *((_WORD *)v16 + v8) = 0;
  return a2;
}
