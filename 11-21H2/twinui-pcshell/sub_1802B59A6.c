/*
 * XREFs of sub_1802B59A6 @ 0x1802B59A6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?UninitializeInternal@VirtualDesktopPerMonitorCollection@@AEAAXAEAVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18048F43C (-UninitializeInternal@VirtualDesktopPerMonitorCollection@@AEAAXAEAVSyncLockExclusive@Details@Wra.c)
 */

void sub_1802B59A6(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        RTL_SRWLOCK *a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        int a13,
        __int64 a14,
        int a15,
        VirtualDesktopPerMonitorCollection *a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        __int64 a30,
        ...)
{
  struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *v30; // rdx
  va_list va; // [rsp+1D0h] [rbp+F8h] BYREF

  va_start(va, a30);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&a30);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&a6);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&a14);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&a11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&a8);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)va);
  VirtualDesktopPerMonitorCollection::UninitializeInternal(a16, v30);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&a7);
  JUMPOUT(0x18010EAA0LL);
}
