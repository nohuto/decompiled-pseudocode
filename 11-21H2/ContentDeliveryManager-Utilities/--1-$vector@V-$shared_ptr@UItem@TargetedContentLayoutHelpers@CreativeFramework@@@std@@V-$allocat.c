/*
 * XREFs of ??1?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAA@XZ @ 0x1800DC5A8
 * Callers:
 *     ??1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800DC740 (--1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::dtor$10 @ 0x1800F6CC9 (_CreativeFramework--TargetedContentLayoutHelpers--ResolveLayoutBindings_--_1_--dtor$10.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::dtor$11 @ 0x1800F6CDF (_CreativeFramework--TargetedContentLayoutHelpers--ResolveLayoutBindings_--_1_--dtor$11.c)
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

void __fastcall std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
        char **a1)
{
  char *v1; // rbx
  char *v3; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v1);
        v1 += 16;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    operator delete(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
