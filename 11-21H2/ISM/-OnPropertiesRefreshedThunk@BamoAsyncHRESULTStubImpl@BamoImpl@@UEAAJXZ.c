/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoAsyncHRESULTStubImpl@BamoImpl@@UEAAJXZ @ 0x18016FD90
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x1800059D0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005A70 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncHRESULTStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoAsyncHRESULTStubImpl *this,
        __int64 a2,
        __int64 a3)
{
  BamoImpl::BamoAsyncHRESULTStubImpl *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = this;
  v4 = *((_QWORD *)this + 3);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v9,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL),
    a3,
    0);
  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v4 - 16) + 72LL))(v4 - 16, (__int64)v3 - 16);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v9,
    v5,
    v6,
    v7);
  return (unsigned int)v3;
}
