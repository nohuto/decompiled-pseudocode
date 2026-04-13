/*
 * XREFs of ??1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800DC740
 * Callers:
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800E2404 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::dtor$1 @ 0x1800F6CA1 (_CreativeFramework--TargetedContentLayoutHelpers--ResolveLayoutBindings_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800DC514 (--1-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@TargetedCon.c)
 *     ??1?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAA@XZ @ 0x1800DC5A8 (--1-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$allocat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::~LayoutResolver(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::~vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>((__int64 *)this + 8);
  std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>((char **)this + 5);
  std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>((char **)this + 2);
  WindowsDeleteString(*((HSTRING *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  WindowsDeleteString(*(HSTRING *)this);
  *(_QWORD *)this = 0LL;
}
