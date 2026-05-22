/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoAttachableInputObjectSampleProxy@@EEAAJXZ @ 0x18013AC70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoAttachableInputObjectSampleProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoAttachableInputObjectSampleProxyImpl@1@@Z @ 0x18012C120 (--0-$CalloutWrapper@VBamoAttachableInputObjectSampleProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 *     ??1?$CalloutWrapper@VBamoAttachableInputObjectSampleProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012E5FC (--1-$CalloutWrapper@VBamoAttachableInputObjectSampleProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 */

__int64 __fastcall BamoAttachableInputObjectSampleProxy::OnPropertiesRefreshedCallout(
        BamoAttachableInputObjectSampleProxy *this)
{
  BamoAttachableInputObjectSampleProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoAttachableInputObjectSampleProxyImpl>::CalloutWrapper<BamoImpl::BamoAttachableInputObjectSampleProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoAttachableInputObjectSampleProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoAttachableInputObjectSampleProxyImpl>::~CalloutWrapper<BamoImpl::BamoAttachableInputObjectSampleProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
