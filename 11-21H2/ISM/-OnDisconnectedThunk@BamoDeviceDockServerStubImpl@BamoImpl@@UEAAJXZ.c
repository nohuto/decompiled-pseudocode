/*
 * XREFs of ?OnDisconnectedThunk@BamoDeviceDockServerStubImpl@BamoImpl@@UEAAJXZ @ 0x18017D550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDeviceDockServerPrincipalImpl@1@@Z @ 0x18017C57C (--0-$CalloutWrapper@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ??1?$CalloutWrapper@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18017C94C (--1-$CalloutWrapper@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDeviceDockServerStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoDeviceDockServerStubImpl *this)
{
  BamoImpl::BamoDeviceDockServerStubImpl *v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rdi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  v2 = *((_QWORD *)this + 3);
  v3 = v2 - 16;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>(
    (__int64)v5,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL),
    v2);
  LODWORD(v1) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 80LL))(v3, (__int64)v1 - 16);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>((__int64)v5);
  return (unsigned int)v1;
}
