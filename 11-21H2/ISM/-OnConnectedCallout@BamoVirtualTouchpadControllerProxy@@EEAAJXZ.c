/*
 * XREFs of ?OnConnectedCallout@BamoVirtualTouchpadControllerProxy@@EEAAJXZ @ 0x18012A250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoVirtualTouchpadControllerProxyImpl@1@@Z @ 0x180129588 (--0-$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@.c)
 *     ??1?$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180129748 (--1-$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoVirtualTouchpadControllerProxy::OnConnectedCallout(BamoVirtualTouchpadControllerProxy *this)
{
  BamoVirtualTouchpadControllerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoVirtualTouchpadControllerProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
