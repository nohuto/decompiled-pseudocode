/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoContainerInfoInputObjectProxy@@EEAAJXZ @ 0x180112080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoContainerInfoInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoContainerInfoInputObjectProxyImpl@1@@Z @ 0x180102778 (--0-$CalloutWrapper@VBamoContainerInfoInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@P.c)
 *     ??1?$CalloutWrapper@VBamoContainerInfoInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180104D28 (--1-$CalloutWrapper@VBamoContainerInfoInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 */

__int64 __fastcall BamoContainerInfoInputObjectProxy::OnPropertiesRefreshedCallout(
        BamoContainerInfoInputObjectProxy *this)
{
  BamoContainerInfoInputObjectProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoContainerInfoInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoContainerInfoInputObjectProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoContainerInfoInputObjectProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoContainerInfoInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoContainerInfoInputObjectProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
