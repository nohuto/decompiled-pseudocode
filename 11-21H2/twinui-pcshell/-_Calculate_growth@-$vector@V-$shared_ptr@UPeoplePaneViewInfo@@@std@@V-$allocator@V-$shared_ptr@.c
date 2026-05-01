/*
 * XREFs of ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1803A048C
 * Callers:
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1801A4F00 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAPEAU.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@AEBV21@@Z @ 0x1803D48D8 (--$_Emplace_reallocate@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeop.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x1803D4B5C (--$_Emplace_reallocate@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeopleP.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UKBViewInfo@@@1@QEAV21@AEAV21@@Z @ 0x180459DB8 (--$_Emplace_reallocate@AEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18046A3B8 (-_Clear_and_reserve_geometric@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@W.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAX_K@Z @ 0x18046A424 (-_Clear_and_reserve_geometric@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_p.c)
 *     ??$_Emplace_reallocate@URect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAPEAURect@Foundation@Windows@@QEAU234@$$QEAU234@@Z @ 0x18046DDE8 (--$_Emplace_reallocate@URect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocato.c)
 *     ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1804FE0C8 (--$_Emplace_reallocate@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 *     ??$_Emplace_reallocate@AEBUCRect@Geometry@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAPEAUCRect@Geometry@@QEAU23@AEBU23@@Z @ 0x1805A107C (--$_Emplace_reallocate@AEBUCRect@Geometry@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geomet.c)
 *     ??$_Emplace_reallocate@UCRect@Geometry@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAPEAUCRect@Geometry@@QEAU23@$$QEAU23@@Z @ 0x1805A1178 (--$_Emplace_reallocate@UCRect@Geometry@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@.c)
 *     ??$_Emplace_reallocate@AEBURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAPEAURect@Foundation@Windows@@QEAU234@AEBU234@@Z @ 0x1805B2CC8 (--$_Emplace_reallocate@AEBURect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$alloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0xFFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 4;
  v4 = v3 >> 1;
  if ( v3 <= 0xFFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
