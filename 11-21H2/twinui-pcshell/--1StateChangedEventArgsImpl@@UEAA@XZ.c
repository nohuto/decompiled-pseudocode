/*
 * XREFs of ??1StateChangedEventArgsImpl@@UEAA@XZ @ 0x18037152C
 * Callers:
 *     ??_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z @ 0x1803717A0 (--_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z.c)
 *     ??_GStateChangedEventArgsImpl@@UEAAPEAXI@Z @ 0x180562780 (--_GStateChangedEventArgsImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall StateChangedEventArgsImpl::~StateChangedEventArgsImpl(HSTRING *this)
{
  WindowsDeleteString(this[8]);
  this[8] = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,Microsoft::WRL::FtmBase>((__int64)this);
}
