/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoDragProcessorManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x18013A850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDragProcessorManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDragProcessorManagerPrincipalImpl@1@@Z @ 0x18013A334 (--0-$CalloutWrapper@VBamoDragProcessorManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@P.c)
 *     ??1?$CalloutWrapper@VBamoDragProcessorManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18013A430 (--1-$CalloutWrapper@VBamoDragProcessorManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 */

__int64 __fastcall BamoImpl::BamoDragProcessorManagerStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoDragProcessorManagerStubImpl *this)
{
  BamoImpl::BamoDragProcessorManagerStubImpl *v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rdi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  v2 = *((_QWORD *)this + 3);
  v3 = v2 - 16;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragProcessorManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoDragProcessorManagerPrincipalImpl>(
    (__int64)v5,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL),
    v2);
  LODWORD(v1) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 88LL))(v3, (__int64)v1 - 16);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragProcessorManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoDragProcessorManagerPrincipalImpl>((__int64)v5);
  return (unsigned int)v1;
}
