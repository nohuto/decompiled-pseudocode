/*
 * XREFs of ??_G?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@QEAAPEAXI@Z @ 0x180466C3C
 * Callers:
 *     ?Release@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ @ 0x180469FAC (-Release@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ??1?$shared_data@$0A@$0A@$00@details@tip2@@QEAA@XZ @ 0x180084FE4 (--1-$shared_data@$0A@$0A@$00@details@tip2@@QEAA@XZ.c)
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ @ 0x1801F0FBC (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

_QWORD *__fastcall tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::`scalar deleting destructor'(
        _QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx

  *a1 = &tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::`vftable';
  tip2::details::shared_data<0,0,0>::on_destroy((__int64)(a1 + 1));
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(a1 + 48, v2);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(a1 + 44, v3);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(a1 + 39, v4);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(a1 + 34, v5);
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
  return a1;
}
