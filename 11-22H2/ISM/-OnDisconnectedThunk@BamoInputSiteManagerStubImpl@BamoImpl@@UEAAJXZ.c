/*
 * XREFs of ?OnDisconnectedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x180028370
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteManagerPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800253FC (--0-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800259E0 (--1-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSiteManagerStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoInputSiteManagerStubImpl *this)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( *(int *)(v3 + 8) > 0 )
  {
    v4 = v3 - 16;
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(
      (__int64)v6,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))v3,
      v3 != 0 ? 3 : 0);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 80LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(v6);
  }
  return v2;
}
