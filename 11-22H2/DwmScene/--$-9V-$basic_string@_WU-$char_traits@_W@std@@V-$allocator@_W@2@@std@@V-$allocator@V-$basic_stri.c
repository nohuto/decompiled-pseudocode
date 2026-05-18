/*
 * XREFs of ??$?9V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@std@@YA_NAEBV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@0@0@Z @ 0x1800586A4
 * Callers:
 *     ?CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x18005B360 (-CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 * Callees:
 *     ?compare@?$_WChar_traits@_W@std@@SAHQEB_W0_K@Z @ 0x18001F790 (-compare@-$_WChar_traits@_W@std@@SAHQEB_W0_K@Z.c)
 */

char __fastcall std::operator!=<std::wstring,std::allocator<std::wstring>>(__int64 **a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 *v3; // r10
  __int64 v4; // rbx
  char v5; // r11
  _WORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r10

  v2 = a1[1];
  v3 = *a1;
  if ( ((((char *)v2 - (char *)*a1) ^ (a2[1] - *a2)) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
    return 1;
  v4 = *a2 - (_QWORD)v3;
  v5 = 0;
  while ( v3 != v2 )
  {
    v6 = (_WORD *)((char *)v3 + v4);
    if ( *(unsigned __int64 *)((char *)v3 + v4 + 24) >= 8 )
      v6 = *(_WORD **)v6;
    v7 = (__int64)v3;
    v8 = v3[2];
    if ( (unsigned __int64)v3[3] >= 8 )
      v7 = *v3;
    if ( v8 != *(__int64 *)((char *)v3 + v4 + 16) || (unsigned int)std::_WChar_traits<wchar_t>::compare(v7, v6, v8) )
      return 1;
    v3 = (__int64 *)(v9 + 32);
  }
  return v5;
}
