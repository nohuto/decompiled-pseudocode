/*
 * XREFs of ?SetBootstrapProxyCallout@BamoConnection@dcompwinrtnestedg_AutoBamos@@EEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18016E550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18016A2F4 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016A8D0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall dcompwinrtnestedg_AutoBamos::BamoConnection::SetBootstrapProxyCallout(
        dcompwinrtnestedg_AutoBamos::BamoConnection *this,
        struct Microsoft::Bamo::BamoProxy *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v10,
    (dcompwinrtnestedg_AutoBamos::BamoConnection *)((char *)this + 8),
    a3,
    a4);
  LODWORD(a2) = (*(__int64 (__fastcall **)(dcompwinrtnestedg_AutoBamos::BamoConnection *, struct Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 8LL))(
                  this,
                  a2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v10,
    v6,
    v7,
    v8);
  return (unsigned int)a2;
}
