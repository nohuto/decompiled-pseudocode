/*
 * XREFs of ??1VirtualTouchpadControllerProxy@@UEAA@XZ @ 0x1801297C4
 * Callers:
 *     ??_EVirtualTouchpadControllerProxy@@UEAAPEAXI@Z @ 0x1801298F0 (--_EVirtualTouchpadControllerProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ServerDestroyed@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x18012B188 (-ServerDestroyed@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 */

void __fastcall VirtualTouchpadControllerProxy::~VirtualTouchpadControllerProxy(VirtualTouchpadControllerProxy *this)
{
  char *v2; // rsi
  __int64 v3; // rcx

  *(_QWORD *)this = &VirtualTouchpadControllerProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &VirtualTouchpadControllerProxy::`vftable'{for `IVirtualTouchpadControllerProxy'};
  *((_QWORD *)this + 16) = &VirtualTouchpadControllerProxy::`vftable'{for `IInputSiteTransformClientPrivate'};
  v2 = (char *)this + 136;
  *((_QWORD *)this + 17) = &VirtualTouchpadControllerProxy::`vftable'{for `ISystemContextObserver'};
  InputTraceLogging::VirtualTouchpad::ServerDestroyed(this);
  v3 = *((_QWORD *)this + 51);
  if ( v3 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 32LL))(v3, v2);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 51);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 4);
}
