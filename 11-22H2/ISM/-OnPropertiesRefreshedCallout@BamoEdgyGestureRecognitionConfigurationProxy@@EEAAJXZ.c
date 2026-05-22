/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ @ 0x18013B290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoEdgyGestureRecognitionConfigurationProxyImpl@1@@Z @ 0x18012CEDC (--0-$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Micros.c)
 *     ??1?$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012EC48 (--1-$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Micros.c)
 */

__int64 __fastcall BamoEdgyGestureRecognitionConfigurationProxy::OnPropertiesRefreshedCallout(
        BamoEdgyGestureRecognitionConfigurationProxy *this)
{
  BamoEdgyGestureRecognitionConfigurationProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoEdgyGestureRecognitionConfigurationProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
