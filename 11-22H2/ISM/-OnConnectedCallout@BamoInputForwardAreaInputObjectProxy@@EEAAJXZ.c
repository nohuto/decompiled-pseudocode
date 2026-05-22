/*
 * XREFs of ?OnConnectedCallout@BamoInputForwardAreaInputObjectProxy@@EEAAJXZ @ 0x1801377D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputForwardAreaInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputForwardAreaInputObjectProxyImpl@1@@Z @ 0x18012D2CC (--0-$CalloutWrapper@VBamoInputForwardAreaInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 *     ??1?$CalloutWrapper@VBamoInputForwardAreaInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012EE38 (--1-$CalloutWrapper@VBamoInputForwardAreaInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoInputForwardAreaInputObjectProxy::OnConnectedCallout(BamoInputForwardAreaInputObjectProxy *this)
{
  BamoInputForwardAreaInputObjectProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputForwardAreaInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoInputForwardAreaInputObjectProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputForwardAreaInputObjectProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputForwardAreaInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputForwardAreaInputObjectProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
