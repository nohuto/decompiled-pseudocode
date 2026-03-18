/*
 * XREFs of ?OnPeerConnectedThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z @ 0x1800D6340
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800D6A70 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800D6AB8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::OnPeerConnectedThunk(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *((_QWORD *)a2 + 2);
  v6 = *((_QWORD *)this + 2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v9,
    this);
  LODWORD(v4) = (*(__int64 (__fastcall **)(__int64, __int64, bool *, struct Microsoft::Bamo::BamoPrincipal **))(*(_QWORD *)v6 + 96LL))(
                  v6,
                  v4,
                  a3,
                  a4);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(v9);
  return (unsigned int)v4;
}
