/*
 * XREFs of ?find_first_not_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x1800645FC
 * Callers:
 *     _anonymous_namespace_::SplitString @ 0x18005E4E4 (_anonymous_namespace_--SplitString.c)
 *     ?SplitString@Details@SubscribedContentStore@CreativeFramework@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@5@PEBG@Z @ 0x18006A77C (-SplitString@Details@SubscribedContentStore@CreativeFramework@@YA-AV-$vector@V-$basic_string@GU-.c)
 * Callees:
 *     ?find@?$char_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x1800645CC (-find@-$char_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18006497C (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 */

__int64 __fastcall std::wstring::find_first_not_of(_QWORD *a1, _WORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r11
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r10
  _WORD *v9; // r8
  __int64 v10; // r8

  v4 = std::char_traits<wchar_t>::length(a2);
  v5 = a1[2];
  v6 = v4;
  if ( v5 )
  {
    if ( a1[3] < 8uLL )
      v7 = a1;
    else
      v7 = (_QWORD *)*a1;
    v8 = (unsigned __int64)v7 + 2 * v5;
    if ( a1[3] < 8uLL )
      v9 = a1;
    else
      v9 = (_WORD *)*a1;
    while ( (unsigned __int64)v9 < v8 )
    {
      if ( !std::char_traits<unsigned short>::find(a2, v6, v9) )
      {
        if ( a1[3] >= 8uLL )
          a1 = (_QWORD *)*a1;
        return (v10 - (__int64)a1) >> 1;
      }
      v9 = (_WORD *)(v10 + 2);
    }
  }
  return -1LL;
}
