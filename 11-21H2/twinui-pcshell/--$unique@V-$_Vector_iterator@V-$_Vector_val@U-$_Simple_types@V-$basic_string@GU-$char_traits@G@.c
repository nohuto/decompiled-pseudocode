/*
 * XREFs of ??$unique@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@U?$equal_to@X@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@0@V10@0U?$equal_to@X@0@@Z @ 0x18032A7C8
 * Callers:
 *     ?GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@3@@Z @ 0x180332108 (-GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV-$vector@U-$pair@KV-$basic_.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180126FC0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

char **__fastcall std::unique<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::wstring>>>,std::equal_to<void>>(
        char **a1,
        char *a2,
        char *a3)
{
  char *v4; // rsi
  char *v6; // rdi
  char *v7; // rdx
  char *v8; // rcx
  __int64 v9; // r8
  char *v11; // rdx
  char *v12; // rcx
  __int64 v13; // r8

  v4 = a2;
  if ( a2 == a3 || (v6 = a2 + 32, a2 + 32 == a3) )
  {
LABEL_10:
    *a1 = a3;
  }
  else
  {
    while ( 1 )
    {
      v7 = v6;
      if ( *((_QWORD *)v6 + 3) >= 8uLL )
        v7 = *(char **)v6;
      v8 = v4;
      v9 = *((_QWORD *)v4 + 2);
      if ( *((_QWORD *)v4 + 3) >= 8uLL )
        v8 = *(char **)v4;
      if ( v9 == *((_QWORD *)v6 + 2) && !(unsigned int)std::_WChar_traits<unsigned short>::compare(v8, v7, v9) )
        break;
      v4 = v6;
      v6 += 32;
      if ( v6 == a3 )
        goto LABEL_10;
    }
    while ( 1 )
    {
      v6 += 32;
      if ( v6 == a3 )
        break;
      v11 = v6;
      if ( *((_QWORD *)v6 + 3) >= 8uLL )
        v11 = *(char **)v6;
      v12 = v4;
      v13 = *((_QWORD *)v4 + 2);
      if ( *((_QWORD *)v4 + 3) >= 8uLL )
        v12 = *(char **)v4;
      if ( v13 != *((_QWORD *)v6 + 2) || (unsigned int)std::_WChar_traits<unsigned short>::compare(v12, v11, v13) )
      {
        v4 += 32;
        if ( v4 != v6 )
        {
          std::wstring::_Tidy_deallocate((__int64)v4);
          *(_OWORD *)v4 = *(_OWORD *)v6;
          *((_OWORD *)v4 + 1) = *((_OWORD *)v6 + 1);
          *((_QWORD *)v6 + 2) = 0LL;
          *((_QWORD *)v6 + 3) = 7LL;
          *(_WORD *)v6 = 0;
        }
      }
    }
    *a1 = v4 + 32;
  }
  return a1;
}
