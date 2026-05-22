/*
 * XREFs of ?OnConnectedCallout@BamoMPCConstantManagerClientProxy@@EEAAJXZ @ 0x18015B380
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x1800059D0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005A70 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoMPCConstantManagerClientProxy::OnConnectedCallout(
        BamoMPCConstantManagerClientProxy *this,
        __int64 a2,
        __int64 a3)
{
  BamoMPCConstantManagerClientProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = this;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v8,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    a3,
    0);
  LODWORD(v3) = (*(__int64 (__fastcall **)(BamoMPCConstantManagerClientProxy *))(*(_QWORD *)v3 + 32LL))(v3);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v8,
    v4,
    v5,
    v6);
  return (unsigned int)v3;
}
