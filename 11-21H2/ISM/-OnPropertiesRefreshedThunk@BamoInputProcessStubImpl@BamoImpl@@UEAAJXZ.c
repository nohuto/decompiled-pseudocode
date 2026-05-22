/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800B1DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputProcessPrincipalImpl@1@@Z @ 0x1800B13F4 (--0-$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800B17B4 (--1-$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoImpl::BamoInputProcessStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoInputProcessStubImpl *this)
{
  BamoImpl::BamoInputProcessStubImpl *v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rdi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  v2 = *((_QWORD *)this + 3);
  v3 = v2 - 16;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>(
    (__int64)v5,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL),
    v2);
  LODWORD(v1) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v3 + 56) + 32LL))(
                  *(_QWORD *)(v3 + 56),
                  v3,
                  (__int64)v1 - 16);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>((__int64)v5);
  return (unsigned int)v1;
}
