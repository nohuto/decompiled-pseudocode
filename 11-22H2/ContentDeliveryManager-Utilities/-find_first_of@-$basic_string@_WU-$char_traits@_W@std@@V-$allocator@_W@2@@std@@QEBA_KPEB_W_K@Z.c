/*
 * XREFs of ?find_first_of@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K@Z @ 0x180064684
 * Callers:
 *     _anonymous_namespace_::SplitString @ 0x18005E4E4 (_anonymous_namespace_--SplitString.c)
 *     ?SplitString@Details@SubscribedContentStore@CreativeFramework@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@5@PEBG@Z @ 0x18006A77C (-SplitString@Details@SubscribedContentStore@CreativeFramework@@YA-AV-$vector@V-$basic_string@GU-.c)
 *     ?SplitString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@PEB_W@Z @ 0x1800D0694 (-SplitString@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$vector@V-$basic_string@_WU-$char.c)
 * Callees:
 *     ?find@?$char_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x1800645CC (-find@-$char_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18006497C (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 */

__int64 __fastcall std::wstring::find_first_of(_QWORD *a1, _WORD *a2, unsigned __int64 a3)
{
  __int64 v6; // r11
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r10
  _QWORD *v10; // rax
  _WORD *i; // r8
  __int64 v12; // r8

  v6 = std::char_traits<wchar_t>::length(a2);
  if ( v6 )
  {
    v7 = a1[2];
    if ( a3 < v7 )
    {
      if ( a1[3] < 8uLL )
        v8 = a1;
      else
        v8 = (_QWORD *)*a1;
      v9 = (unsigned __int64)v8 + 2 * v7;
      if ( a1[3] < 8uLL )
        v10 = a1;
      else
        v10 = (_QWORD *)*a1;
      for ( i = (_WORD *)v10 + a3; (unsigned __int64)i < v9; i = (_WORD *)(v12 + 2) )
      {
        if ( std::char_traits<unsigned short>::find(a2, v6, i) )
        {
          if ( a1[3] >= 8uLL )
            a1 = (_QWORD *)*a1;
          return (v12 - (__int64)a1) >> 1;
        }
      }
    }
  }
  return -1LL;
}
