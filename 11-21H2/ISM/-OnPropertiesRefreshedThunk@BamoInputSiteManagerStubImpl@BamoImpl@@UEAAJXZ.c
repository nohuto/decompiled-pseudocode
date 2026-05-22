/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x180124540
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18001FC6C (--1-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteManagerPrincipalImpl@1@@Z @ 0x180124368 (--0-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsof_ea_180124368.c)
 */

__int64 __fastcall BamoImpl::BamoInputSiteManagerStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoInputSiteManagerStubImpl *this)
{
  BamoImpl::BamoInputSiteManagerStubImpl *v1; // rbx
  void (__fastcall ***v2)(_QWORD); // r8
  void (__fastcall ***v3)(_QWORD); // rdi
  __int64 v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 3);
  v3 = v2 - 2;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(
    (__int64)v5,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL),
    v2);
  LODWORD(v1) = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), __int64))(*v3)[11])(v3, (__int64)v1 - 16);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(v5);
  return (unsigned int)v1;
}
