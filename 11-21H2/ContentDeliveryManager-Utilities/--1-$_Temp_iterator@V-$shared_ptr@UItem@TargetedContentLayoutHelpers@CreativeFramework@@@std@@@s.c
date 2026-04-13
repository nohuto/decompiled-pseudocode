/*
 * XREFs of ??1?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800E70A4
 * Callers:
 *     _CreativeFramework::TargetedContentLayoutHelpers::SortAndValidateLists_::_1_::dtor$3 @ 0x1800F71E3 (_CreativeFramework--TargetedContentLayoutHelpers--SortAndValidateLists_--_1_--dtor$3.c)
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

void __fastcall std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
        char **a1)
{
  char *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 != a1[2] )
    {
      do
      {
        std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v1);
        v1 += 16;
      }
      while ( v1 != a1[2] );
      v1 = *a1;
    }
    operator delete(v1);
  }
}
