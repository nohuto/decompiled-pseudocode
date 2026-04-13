/*
 * XREFs of ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x18001BA60
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_s_0 @ 0x1800227A5 (memcpy_s_0.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180062A5C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::collate<unsigned short>::do_transform(__int64 a1, _QWORD *a2, const void *a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  void *v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax

  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  v6 = 0LL;
  v7 = (a4 - (__int64)a3) >> 1;
  if ( v7 )
  {
    do
    {
      std::wstring::append(a2, v7 - v6, 0LL);
      if ( a2[3] < 8uLL )
        v8 = a2;
      else
        v8 = (_QWORD *)*a2;
      v9 = (__int64)v8 + 2 * a2[2];
      if ( a2[3] < 8uLL )
        v10 = a2;
      else
        v10 = (void *)*a2;
      v11 = (v9 - (__int64)v10) >> 1;
      if ( v7 <= v11 )
        memcpy_s_0(v10, 2 * v11, a3, 2 * v7);
      v6 = a2[2];
    }
    while ( v7 > v6 );
  }
  if ( v7 > v6 )
  {
    std::wstring::append(a2, v7 - v6, 0LL);
  }
  else
  {
    if ( a2[3] < 8uLL )
      v12 = a2;
    else
      v12 = (_QWORD *)*a2;
    a2[2] = v7;
    *((_WORD *)v12 + v7) = 0;
  }
  return a2;
}
