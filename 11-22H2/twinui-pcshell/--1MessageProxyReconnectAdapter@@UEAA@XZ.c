/*
 * XREFs of ??1MessageProxyReconnectAdapter@@UEAA@XZ @ 0x180737808
 * Callers:
 *     ??_EMessageProxyReconnectAdapter@@UEAAPEAXI@Z @ 0x180737860 (--_EMessageProxyReconnectAdapter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall MessageProxyReconnectAdapter::~MessageProxyReconnectAdapter(MessageProxyReconnectAdapter *this)
{
  WindowsDeleteString(*((HSTRING *)this + 11));
  *((_QWORD *)this + 11) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 7);
  *((_DWORD *)this + 5) = -1073741823;
}
