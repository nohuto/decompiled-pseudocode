/*
 * XREFs of ??1CDCompAnimationsOffBehaviorModifier@DCompThumbnailHelpers@@QEAA@XZ @ 0x180518510
 * Callers:
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x18051C78C (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$7 @ 0x18051CB0C (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$7.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DCompThumbnailHelpers::CDCompAnimationsOffBehaviorModifier::~CDCompAnimationsOffBehaviorModifier(
        DCompThumbnailHelpers::CDCompAnimationsOffBehaviorModifier *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 160LL))(v2, 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this);
}
