/*
 * XREFs of ??1VirtualDesktopDataSource@@UEAA@XZ @ 0x18053E744
 * Callers:
 *     ??_EVirtualDesktopDataSource@@UEAAPEAXI@Z @ 0x18053EAF0 (--_EVirtualDesktopDataSource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopDataSource::~VirtualDesktopDataSource(VirtualDesktopDataSource *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 33);
  SmartCookie::Unregister((VirtualDesktopDataSource *)((char *)this + 136));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((__int64)this + 136);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease((volatile signed __int32 **)this + 12);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource2,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource2,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>((__int64)this);
}
