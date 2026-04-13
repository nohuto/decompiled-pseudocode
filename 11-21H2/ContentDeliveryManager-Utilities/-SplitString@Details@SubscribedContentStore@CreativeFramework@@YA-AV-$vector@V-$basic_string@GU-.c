/*
 * XREFs of ?SplitString@Details@SubscribedContentStore@CreativeFramework@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@5@PEBG@Z @ 0x180072814
 * Callers:
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG_N@Z @ 0x180070030 (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069E40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?find_first_not_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x18006B9B4 (-find_first_not_of@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     ?find_first_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x18006BA58 (-find_first_of@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18006BF18 (-push_back@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V.c)
 */

__int64 *__fastcall CreativeFramework::SubscribedContentStore::Details::SplitString(__int64 *a1, char *a2, _WORD *a3)
{
  int v6; // r15d
  unsigned __int64 first_not_of; // rsi
  __int64 first_of; // r14
  void *v10[3]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-18h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v6 = 1;
  if ( *((_QWORD *)a2 + 2) )
  {
    first_not_of = std::wstring::find_first_not_of(a2, a3);
    do
    {
      first_of = std::wstring::find_first_of(a2, a3, first_not_of);
      v11 = 7LL;
      v10[2] = 0LL;
      LOWORD(v10[0]) = 0;
      std::wstring::assign(v10, (void **)a2, first_not_of, first_of - first_not_of);
      v6 |= 2u;
      std::vector<std::wstring>::push_back(a1, v10);
      if ( v11 >= 8 )
        operator delete(v10[0]);
      first_not_of = first_of + 1;
    }
    while ( first_of != -1 );
  }
  return a1;
}
