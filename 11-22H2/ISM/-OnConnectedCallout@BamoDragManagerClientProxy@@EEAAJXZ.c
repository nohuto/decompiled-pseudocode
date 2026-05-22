/*
 * XREFs of ?OnConnectedCallout@BamoDragManagerClientProxy@@EEAAJXZ @ 0x18004DB80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VBamoDragManagerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDragManagerClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18004DBE8 (--0-$CalloutWrapper@VBamoDragManagerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VBamoDragManagerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18004DC94 (--1-$CalloutWrapper@VBamoDragManagerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDragManagerClientProxy::OnConnectedCallout(BamoDragManagerClientProxy *this)
{
  BamoDragManagerClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>::CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>(
    v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (char *)this + 16,
    (BamoDragManagerClientProxy *)((char *)this + 16) != 0LL ? 3 : 0);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoDragManagerClientProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>(v3);
  return (unsigned int)v1;
}
