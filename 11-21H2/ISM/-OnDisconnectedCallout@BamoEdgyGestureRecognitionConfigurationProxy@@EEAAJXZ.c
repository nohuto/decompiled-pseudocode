/*
 * XREFs of ?OnDisconnectedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ @ 0x18010FCA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoEdgyGestureRecognitionConfigurationProxyImpl@1@@Z @ 0x180103444 (--0-$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Micros.c)
 *     ??1?$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105374 (--1-$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Micros.c)
 */

__int64 __fastcall BamoEdgyGestureRecognitionConfigurationProxy::OnDisconnectedCallout(
        BamoEdgyGestureRecognitionConfigurationProxy *this)
{
  BamoEdgyGestureRecognitionConfigurationProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoEdgyGestureRecognitionConfigurationProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
