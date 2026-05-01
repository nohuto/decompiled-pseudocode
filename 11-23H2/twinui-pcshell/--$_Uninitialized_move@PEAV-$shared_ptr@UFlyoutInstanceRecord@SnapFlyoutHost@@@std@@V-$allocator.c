/*
 * XREFs of ??$_Uninitialized_move@PEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@YAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1803E23DC
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@AEBV21@@Z @ 0x1803E1D24 (--$_Emplace_reallocate@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeop.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x1804B18C4 (--$_Emplace_reallocate@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeopleP.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCAppThumbnailWindow@@@std@@@?$vector@V?$shared_ptr@VCAppThumbnailWindow@@@std@@V?$allocator@V?$shared_ptr@VCAppThumbnailWindow@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCAppThumbnailWindow@@@1@QEAV21@AEBV21@@Z @ 0x18054B8FC (--$_Emplace_reallocate@AEBV-$shared_ptr@VCAppThumbnailWindow@@@std@@@-$vector@V-$shared_ptr@VCAp.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@1@QEAV21@$$QEAV21@@Z @ 0x180678CE8 (--$_Emplace_reallocate@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@-$vector@V-$sh.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1802D7364 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
        char *a1,
        char *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rbx
  signed __int64 v4; // r8

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a1 - (char *)a3;
    do
    {
      *v3 = 0LL;
      v3[1] = 0LL;
      *v3 = *(_QWORD *)((char *)v3 + v4);
      v3[1] = *(_QWORD *)((char *)v3 + v4 + 8);
      *(_QWORD *)((char *)v3 + v4) = 0LL;
      *(_QWORD *)((char *)v3 + v4 + 8) = 0LL;
      v3 += 2;
    }
    while ( (char *)v3 + v4 != a2 );
  }
  std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>((__int64)v3, (__int64)v3);
  return v3;
}
