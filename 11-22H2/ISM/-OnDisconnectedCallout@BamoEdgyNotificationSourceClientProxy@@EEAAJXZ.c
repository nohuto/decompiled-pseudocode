/*
 * XREFs of ?OnDisconnectedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ @ 0x180138800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoEdgyNotificationSourceClientProxyImpl@1@@Z @ 0x18012CFD8 (--0-$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ??1?$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012ECC4 (--1-$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 */

__int64 __fastcall BamoEdgyNotificationSourceClientProxy::OnDisconnectedCallout(
        BamoEdgyNotificationSourceClientProxy *this)
{
  BamoEdgyNotificationSourceClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoEdgyNotificationSourceClientProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
