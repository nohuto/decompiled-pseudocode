/*
 * XREFs of ?SetBootstrapProxyCallout@BamoConnection@MPCManagerBamo_AutoBamos@@EEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x1800C3DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000BAE0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000BCD0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerBamo_AutoBamos::BamoConnection::SetBootstrapProxyCallout(
        MPCManagerBamo_AutoBamos::BamoConnection *this,
        struct Microsoft::Bamo::BamoProxy *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v9,
    (__int64)this + 8,
    a3,
    0LL);
  LODWORD(a2) = (*(__int64 (__fastcall **)(MPCManagerBamo_AutoBamos::BamoConnection *, struct Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 8LL))(
                  this,
                  a2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v9,
    v5,
    v6,
    v7);
  return (unsigned int)a2;
}
