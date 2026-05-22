/*
 * XREFs of ?OnConnectedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ @ 0x180129620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoEdgyGestureRecognitionConfigurationProxyImpl@1@@Z @ 0x18011EEEC (--0-$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Micros.c)
 *     ??1?$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180120C58 (--1-$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Micros.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoEdgyGestureRecognitionConfigurationProxy::OnConnectedCallout(
        BamoEdgyGestureRecognitionConfigurationProxy *this)
{
  BamoEdgyGestureRecognitionConfigurationProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoEdgyGestureRecognitionConfigurationProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
