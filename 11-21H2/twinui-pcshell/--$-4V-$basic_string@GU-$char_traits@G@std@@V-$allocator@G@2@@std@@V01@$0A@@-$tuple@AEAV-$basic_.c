/*
 * XREFs of ??$?4V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V01@$0A@@?$tuple@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV12@@std@@QEAAAEAV01@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@@Z @ 0x180566754
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180569010 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 *__fastcall std::tuple<std::wstring &,std::wstring &>::operator=<std::wstring,std::wstring,0>(
        __int64 *a1,
        __int64 a2)
{
  _OWORD *v2; // rsi
  _OWORD *v5; // rsi
  __int64 v6; // rbx

  v2 = (_OWORD *)a1[1];
  if ( v2 != (_OWORD *)a2 )
  {
    std::wstring::_Tidy_deallocate(a1[1]);
    *v2 = *(_OWORD *)a2;
    v2[1] = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 7LL;
    *(_WORD *)a2 = 0;
  }
  v5 = (_OWORD *)*a1;
  v6 = a2 + 32;
  if ( *a1 != v6 )
  {
    std::wstring::_Tidy_deallocate(*a1);
    *v5 = *(_OWORD *)v6;
    v5[1] = *(_OWORD *)(v6 + 16);
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = 7LL;
    *(_WORD *)v6 = 0;
  }
  return a1;
}
