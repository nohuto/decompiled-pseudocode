/*
 * XREFs of ?GetIsActive@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x180129FD0
 * Callers:
 *     ?OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A1B0 (-OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A2C0 (-OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A4A0 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A6C0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@PEAUVPTP_ID@@@Z @ 0x18019A240 (-CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV-$vector@V-$ComPtr@VInputSit.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

bool __fastcall BamoVirtualTouchpadControllerProxy::GetIsActive(BamoVirtualTouchpadControllerProxy *this)
{
  BamoVirtualTouchpadControllerProxy *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LOBYTE(v1) = *((_BYTE *)v1 + 40);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v5, v2, v3);
  return (char)v1;
}
