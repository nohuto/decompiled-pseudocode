/*
 * XREFs of ??1CDCompAnimationsOffBehaviorModifier@DCompThumbnailHelpers@@QEAA@XZ @ 0x1805D0BC4
 * Callers:
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x1805D4E14 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$7 @ 0x1805D5194 (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$7.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
