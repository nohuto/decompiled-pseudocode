/*
 * XREFs of ?Uninitialize@CApplicationFrameService@@UEAAJXZ @ 0x180300EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x1800C66BC (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameService::Uninitialize(CApplicationFrameService *this)
{
  CCrashDetector::StopMonitoring((CApplicationFrameService *)((char *)this + 160));
  if ( *((_DWORD *)this + 38) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 56LL))(*((_QWORD *)this + 17));
    *((_DWORD *)this + 38) = 0;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  return 0LL;
}
