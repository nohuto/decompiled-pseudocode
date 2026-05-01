/*
 * XREFs of ??$unique@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@U?$equal_to@X@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@0@V10@0U?$equal_to@X@0@@Z @ 0x1803F7ED0
 * Callers:
 *     ?GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@3@@Z @ 0x1803FF798 (-GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV-$vector@U-$pair@KV-$basic_.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 **__fastcall std::unique<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::wstring>>>,std::equal_to<void>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rdi
  __int64 *v6; // r14
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 *v9; // rsi
  __int64 v11; // r8
  __int64 v12; // rcx

  v4 = a2;
  if ( a2 == a3 || (v6 = a2 + 4, a2 + 4 == a3) )
  {
LABEL_9:
    *a1 = a3;
  }
  else
  {
    while ( 1 )
    {
      v7 = (__int64)v6;
      if ( (unsigned __int64)v6[3] >= 8 )
        v7 = *v6;
      v8 = (__int64)v4;
      if ( (unsigned __int64)v4[3] >= 8 )
        v8 = *v4;
      v9 = v6 + 4;
      if ( std::_Traits_equal<std::char_traits<unsigned short>>(v8, v4[2], v7, v6[2]) )
        break;
      v4 = v6;
      v6 += 4;
      if ( v9 == a3 )
        goto LABEL_9;
    }
    while ( v9 != a3 )
    {
      v11 = (__int64)v9;
      if ( (unsigned __int64)v9[3] >= 8 )
        v11 = *v9;
      v12 = (__int64)v4;
      if ( (unsigned __int64)v4[3] >= 8 )
        v12 = *v4;
      if ( !std::_Traits_equal<std::char_traits<unsigned short>>(v12, v4[2], v11, v9[2]) )
      {
        v4 += 4;
        if ( v4 != v9 )
        {
          std::wstring::_Tidy_deallocate((__int64)v4);
          *(_OWORD *)v4 = *(_OWORD *)v9;
          *((_OWORD *)v4 + 1) = *((_OWORD *)v9 + 1);
          v9[2] = 0LL;
          v9[3] = 7LL;
          *(_WORD *)v9 = 0;
        }
      }
      v9 += 4;
    }
    *a1 = v4 + 4;
  }
  return a1;
}
