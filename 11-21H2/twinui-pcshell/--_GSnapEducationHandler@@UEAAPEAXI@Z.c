/*
 * XREFs of ??_GSnapEducationHandler@@UEAAPEAXI@Z @ 0x180592380
 * Callers:
 *     ??_ESnapEducationHandler@@W7EAAPEAXI@Z @ 0x18020EC90 (--_ESnapEducationHandler@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@MEAA@XZ @ 0x18001D7E4 (--1-$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA@XZ @ 0x180591910 (--1-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHistory@Sn.c)
 */

void **__fastcall SnapEducationHandler::`scalar deleting destructor'(void **this, char a2)
{
  std::deque<SnapEducationHandler::ApplicationViewHistory>::~deque<SnapEducationHandler::ApplicationViewHistory>(this + 4);
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)(this + 1));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
