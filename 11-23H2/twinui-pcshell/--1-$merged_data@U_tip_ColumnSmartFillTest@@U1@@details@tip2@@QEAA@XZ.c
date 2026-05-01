/*
 * XREFs of ??1?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@QEAA@XZ @ 0x180224D04
 * Callers:
 *     ?Release@?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@AEAAKXZ @ 0x180224EC4 (-Release@-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ @ 0x1801F0FBC (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>::~merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>(
        _QWORD *a1)
{
  __int64 v1; // rbx

  v1 = (__int64)(a1 + 1);
  *a1 = &tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>::`vftable';
  tip2::details::shared_data<0,0,0>::on_destroy((__int64)(a1 + 1));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(v1);
}
