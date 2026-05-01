/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18046A3B8
 * Callers:
 *     ??4ViewOptions@@QEAAAEAU0@AEBU0@@Z @ 0x18045B6D4 (--4ViewOptions@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@AEBV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1804716CC (-GetViewOptions@@YA-AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1803A048C (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 */

char *__fastcall std::vector<Windows::Foundation::Rect>::_Clear_and_reserve_geometric(void **a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::vector<Geometry::CRect>::_Xlength();
  v3 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, a2);
  if ( *a1 )
  {
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Buy_raw(a1, v3);
}
