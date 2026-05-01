/*
 * XREFs of ??1SnapEducationHandler@@UEAA@XZ @ 0x18065F4B0
 * Callers:
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$32 @ 0x1802BD29E (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$32.c)
 * Callees:
 *     ??1?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA@XZ @ 0x18065EE08 (--1-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHistory@Sn.c)
 */

void __fastcall SnapEducationHandler::~SnapEducationHandler(void **this)
{
  std::deque<SnapEducationHandler::ApplicationViewHistory>::~deque<SnapEducationHandler::ApplicationViewHistory>(this + 4);
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)(this + 1));
}
